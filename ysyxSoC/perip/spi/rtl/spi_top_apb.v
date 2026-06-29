// define this macro to enable fast behavior simulation
// for flash by skipping SPI transfers
//`define FAST_FLASH

module spi_top_apb #(
  parameter flash_addr_start = 32'h30000000,
  parameter flash_addr_end   = 32'h3fffffff,
  parameter spi_ss_num       = 8
) (
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,
  input  [3:0]  in_pstrb,
  output        in_pready,
  output [31:0] in_prdata,
  output        in_pslverr,

  output                  spi_sck,
  output [spi_ss_num-1:0] spi_ss,
  output                  spi_mosi,
  input                   spi_miso,
  output                  spi_irq_out
);

`ifdef FAST_FLASH

wire [31:0] data;
parameter invalid_cmd = 8'h0;
flash_cmd flash_cmd_i(
  .clock(clock),
  .valid(in_psel && !in_penable),
  .cmd(in_pwrite ? invalid_cmd : 8'h03),
  .addr({8'b0, in_paddr[23:2], 2'b0}),
  .data(data)
);
assign spi_sck    = 1'b0;
assign spi_ss     = 8'b0;
assign spi_mosi   = 1'b1;
assign spi_irq_out= 1'b0;
assign in_pslverr = 1'b0;
assign in_pready  = in_penable && in_psel && !in_pwrite;
assign in_prdata  = data[31:0];

`else

wire is_flash =(in_paddr >= 32'h30000000 && in_paddr <= 32'h3fffffff) ? 1'b1 : 1'b0;
//wire is_flash_r = is_flash && !XIP_exit;
reg [2:0] state;
//parameter [2:0]idle    = 3'b0;
parameter [2:0]divider = 3'd0;
parameter [2:0]ss      = 3'd1;
parameter [2:0]tx      = 3'd2;
parameter [2:0]ctrl    = 3'd3;
parameter [2:0]finish  = 3'd4;
parameter [2:0]clean   = 3'd5;
parameter [2:0]read    = 3'd6;
parameter [2:0]done    = 3'd7;
reg XIP_ex;
always @(posedge clock) begin
  if(reset) state <= divider;
  else begin
    if(is_flash && xip)begin
      case(state)
        //idle   : state <= divider;
        divider: state <= flash_pready ? ss : state;
        ss     : state <= flash_pready ? tx : state;
        tx     : state <= flash_pready ? ctrl : state;
        ctrl   : state <= flash_pready ? finish : state;
        finish : state <= ((flash_prdata | ~32'h0100)==~32'h0100 && flash_pready) ? clean : state;
        clean  : state <= flash_pready ? read : state;
        read   : state <= flash_pready ? done :state;
        done   : state <= divider;
        default: state <= divider;
      endcase
    end
  end
end

reg is_flash_r;
always @(posedge clock) begin
  is_flash_r <= is_flash;
  if(is_flash_r != is_flash)begin
    XIP_ex <= 0;
  end
end

reg  [4:0]  flash_paddr;
reg         flash_psel;
reg         flash_penable;
reg  [2:0]  flash_pprot;
reg         flash_pwrite;
reg  [31:0] flash_pwdata;
reg  [3:0]  flash_pstrb;
reg         flash_pready;
reg  [31:0] flash_prdata;
reg         flash_pslverr;

always @(posedge clock) begin
  flash_psel <= flash_penable && !flash_pready;
  if(reset)begin
    flash_paddr  <= 5'b00000;
    flash_pwdata <= 32'h0000;
    flash_pwrite <= 1'b0;
    flash_pstrb  <= 4'b0000;
    flash_penable<= 1'b0;
  end
  else begin
    if(is_flash && xip)begin
      case(state)
        divider:begin
          flash_penable<= 1'b1;
          flash_paddr  <= 5'b10100;
          //flash_pwdata <= 32'h07D0;
          flash_pwdata <= 32'h0000;
          flash_pwrite <= 1'b1;
          flash_pstrb  <= 4'b1111;
          //XIP_exit     <= 1'b1;
        end
        ss     :begin
          flash_paddr <= 5'b11000;
          flash_pwdata <= 32'h0001;
          flash_pwrite <= 1'b1;
          flash_pstrb  <= 4'b1111;
        end
        tx     :begin 
          flash_paddr <= 5'b00100;
          flash_pwdata <= {8'h03,in_paddr[23:0]};
          flash_pwrite <= 1'b1;
          flash_pstrb  <= 4'b1111;
        end
        ctrl   :begin 
          flash_paddr <= 5'b10000;
          flash_pwdata <= 32'h0140;
          flash_pwrite <= 1'b1;
          flash_pstrb  <= 4'b1111;
        end
        finish :begin 
          flash_paddr <= 5'b10000;
          //flash_pwdata <= 32'h0140;
          flash_pwrite <= 1'b0;
          flash_pstrb  <= 4'b1111;
        end
        read    :begin
          flash_paddr  <= 5'b00000;
          flash_pwdata <= 32'h0000;
          flash_pwrite <= 1'b0;
          flash_pstrb  <= 4'b1111;
          //XIP_ex       <= 1'b1;
        end
        clean  :begin 
          flash_paddr  <= 5'b11000;
          flash_pwdata <= 32'h0000;
          flash_pwrite <= 1'b1;
          flash_pstrb  <= 4'b1111;
        end
        done   :begin
          flash_penable<= 1'b0;
          XIP_ex       <= 1'b1;
        end
        default:begin
          flash_paddr  <= 5'b00000;
          flash_pwdata <= 32'h0000;
          flash_pwrite <= 1'b0;
          flash_pstrb  <= 4'b0000;
        end
      endcase
    end
  end
end

reg xip_done;
reg [31:0] flash_prdata_r;
always @(posedge clock) begin
  if(state == read && flash_pready)begin
    flash_prdata_r <= flash_prdata;
    xip_done <= 1'b1;
  end
  else
    xip_done <= 1'b0;
end

assign in_prdata = xip_done ? {flash_prdata_r[7:0],flash_prdata_r[15:8],flash_prdata_r[23:16],flash_prdata_r[31:24]} : prdata;
assign in_pready = xip_done ? 1'b1 : pready;

reg [31:0] in_paddr_r;
reg xip;
always @(posedge clock) begin
  in_paddr_r <= in_paddr;
  if((in_paddr_r == in_paddr) && xip_done)begin
    xip <= 1'b0;
  end
  else if(in_paddr_r != in_paddr)
    xip <= 1'b1;
end

wire [31:0] prdata;
wire [31:0] pwdata;
wire [ 4:0] paddr;
wire [ 3:0] pstrb;
wire        pwrite;
wire        psel;
wire        penable;
wire        pready;


spi_top u0_spi_top (
  .wb_clk_i(clock),
  .wb_rst_i(reset),
  .wb_adr_i(is_flash ? flash_paddr  : in_paddr[4:0]),
  .wb_dat_i(is_flash ? flash_pwdata : in_pwdata),
  .wb_dat_o(is_flash ? flash_prdata : prdata),
  .wb_sel_i(is_flash ? flash_pstrb  : in_pstrb),
  .wb_we_i (is_flash ? flash_pwrite : in_pwrite),
  .wb_stb_i(is_flash ? flash_psel   : in_psel),
  .wb_cyc_i(is_flash ? flash_penable : in_penable),
  .wb_ack_o(is_flash ? flash_pready : pready),
  .wb_err_o(in_pslverr),
  .wb_int_o(spi_irq_out),
  .ss_pad_o(spi_ss),
  .sclk_pad_o(spi_sck),
  .mosi_pad_o(spi_mosi),
  .miso_pad_i(spi_miso)
);

`endif // FAST_FLASH

endmodule
