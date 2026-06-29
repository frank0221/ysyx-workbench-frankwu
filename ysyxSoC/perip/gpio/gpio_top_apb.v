module gpio_top_apb(
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

  output [15:0] gpio_out,
  input  [15:0] gpio_in,
  output [7:0]  gpio_seg_0,
  output [7:0]  gpio_seg_1,
  output [7:0]  gpio_seg_2,
  output [7:0]  gpio_seg_3,
  output [7:0]  gpio_seg_4,
  output [7:0]  gpio_seg_5,
  output [7:0]  gpio_seg_6,
  output [7:0]  gpio_seg_7
);

reg [15:0] led_reg;
reg [15:0] switch_reg;
reg [31:0] seg_reg;

reg [1:0] state;
parameter idle = 0;
parameter setup = 1;
parameter access = 2;

always @(*) begin
  if(reset)
    state = idle;
  else if(in_psel && !in_penable)begin
    state = setup;
  end
  else if(in_penable)begin
    state = access;
  end
  else 
    state = idle;
end

integer i;
reg [63:0] seg;
always @(*) begin
  for ( i=0; i<8; i++ ) begin
      case (seg_reg[4*i +: 4])
        4'h0: seg[8*i +: 8] = 8'b00000011;
        4'h1: seg[8*i +: 8] = 8'b10011111;
        4'h2: seg[8*i +: 8] = 8'b00100101;
        4'h3: seg[8*i +: 8] = 8'b00001101;
        4'h4: seg[8*i +: 8] = 8'b10011001;
        4'h5: seg[8*i +: 8] = 8'b01001001;
        4'h6: seg[8*i +: 8] = 8'b01000001;
        4'h7: seg[8*i +: 8] = 8'b00011111;
        4'h8: seg[8*i +: 8] = 8'b00000001;
        4'h9: seg[8*i +: 8] = 8'b00001001;
        default: seg[8*i +: 8] = 8'b11111111;
      endcase
    end
end

assign gpio_seg_0 = seg[7:0];
assign gpio_seg_1 = seg[15:8];
assign gpio_seg_2 = seg[23:16];
assign gpio_seg_3 = seg[31:24];
assign gpio_seg_4 = seg[39:32];
assign gpio_seg_5 = seg[47:40];
assign gpio_seg_6 = seg[55:48];
assign gpio_seg_7 = seg[63:56];

assign gpio_out = led_reg;
assign in_pready = in_penable && in_psel;
assign in_prdata = (in_penable && addr[1:0] == 2'h4) ? {16'd0,gpio_in} : 32'd0;

reg [31:0] addr;
reg [31:0] wdata;
reg [31:0] rdata;
always @(posedge clock) begin
  if(reset)begin
    led_reg <= 0;
    switch_reg <= 0;
    seg_reg <= 32'haaaaaaaa;
  end
  
  case (state)
    setup: begin
      addr <= in_paddr;
      if(in_pwrite)begin
        wdata <= in_pwdata;
      end
    end
    access:begin
      if(in_pwrite)begin
        case (addr[3:0])
          4'h0:  led_reg <= wdata[15:0];
          4'h8:  seg_reg <= wdata;
          default: begin
             led_reg <= led_reg;
             seg_reg <= seg_reg;
          end
        endcase
      end
    end
  endcase
end
endmodule
