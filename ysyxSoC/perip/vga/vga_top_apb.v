module vga_top_apb(
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

  output [7:0]  vga_r,
  output [7:0]  vga_g,
  output [7:0]  vga_b,
  output        vga_hsync,
  output        vga_vsync,
  output        vga_valid
);

assign in_pready = in_penable && in_psel;

always @(posedge clock) begin
  if(in_penable && in_psel && in_pwrite)begin
    mem[in_paddr[20:2]] <= in_pwdata[23:0];
  end
end

reg [23:0] mem [0:307200-1];

parameter VS_COUNT = 2;
parameter V_ACTIVE = 480;
parameter V_Backporch = 33;
parameter V_Frontporch = 10;
parameter V_total = 525;

parameter HS_COUNT = 96;
parameter H_ACTIVE = 640;
parameter H_Backporch = 48;
parameter H_Frontporch = 16;
parameter H_total = 800;

reg [9:0] vcount;
reg [9:0] hcount;
   
always @(posedge clock) begin
  if(reset)begin
    vcount <= 0;
    hcount <= 0;
  end
  else begin
    
    if(vcount == V_total-1 && hcount == H_total-1)begin
      vcount <= 0;
    end
    else if(hcount == H_total-1)begin
      vcount <= vcount + 1;
    end

    hcount <= hcount + 1;
    if(hcount == H_total-1)begin
      hcount <= 0;
    end
  end
  
end


assign vga_vsync = (vcount <= VS_COUNT-1) ? 1'b0 : 1'b1;
assign vga_hsync = (hcount <= HS_COUNT-1) ? 1'b0 : 1'b1;
assign vga_valid = ((hcount >= HS_COUNT+H_Backporch)&&(hcount <= HS_COUNT+H_Backporch+H_ACTIVE-1) && (vcount>=(VS_COUNT+V_Backporch))
                   &&(vcount<=(VS_COUNT+V_Backporch+V_ACTIVE-1))) ? 1'b1 : 1'b0;

wire [9:0] x_addr;
wire [9:0] y_addr;
assign x_addr = vga_valid ? (hcount - 10'd144) : {10{1'b0}};
assign y_addr = vga_valid ? (vcount - 10'd35) : {10{1'b0}};

assign vga_r = vga_valid ? mem[y_addr*640+x_addr][23:16] : 0;
assign vga_g = vga_valid ? mem[y_addr*640+x_addr][15:8] : 0;
assign vga_b = vga_valid ? mem[y_addr*640+x_addr][7:0] : 0;
endmodule
