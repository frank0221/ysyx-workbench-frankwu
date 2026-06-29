`timescale 1ns / 1ps
module bitrev (
  input  sck,
  input  ss,
  input  mosi,
  output miso
);

assign miso = ss ? 1'b1 : out;
// 空闲时拉高miso未完成
wire [7:0] data_i;
wire [7:0] data_o;
wire out;
serial2pare serial2pare_init(
  .clk(sck),
  .ss(ss),
  .in_s(mosi),
  .out_p(data_i),
  .in_p(data_o),
  .out_s(out)
);


wire       data_i_7;
wire       data_i_6;
wire       data_i_5;
wire       data_i_4;
wire       data_i_3;
wire       data_i_2;
wire       data_i_1;
wire       data_i_0;


wire       data_o_7;
wire       data_o_6;
wire       data_o_5;
wire       data_o_4;
wire       data_o_3;
wire       data_o_2;
wire       data_o_1;
wire       data_o_0;

assign  data_i_7 = ((data_i & 8'h80) == 8'h80);
assign  data_i_6 = ((data_i & 8'h40) == 8'h40);
assign  data_i_5 = ((data_i & 8'h20) == 8'h20);
assign  data_i_4 = ((data_i & 8'h10) == 8'h10);
assign  data_i_3 = ((data_i & 8'h08) == 8'h08);
assign  data_i_2 = ((data_i & 8'h04) == 8'h04);
assign  data_i_1 = ((data_i & 8'h02) == 8'h02);
assign  data_i_0 = ((data_i & 8'h01) == 8'h01);

assign  data_o_7 = data_i_0;
assign  data_o_6 = data_i_1;
assign  data_o_5 = data_i_2;
assign  data_o_4 = data_i_3;
assign  data_o_3 = data_i_4;
assign  data_o_2 = data_i_5;
assign  data_o_1 = data_i_6;
assign  data_o_0 = data_i_7;

assign data_o = {data_o_7,data_o_6,data_o_5,data_o_4,data_o_3,data_o_2,data_o_1,data_o_0};

endmodule

module D_trig(
  input  wire clk,
  input  wire ss,
  input  wire in,
  output reg out
);

always @(posedge clk) begin
  if(!ss)begin
    out <= in;
  end
  else
    out <= 1'b0;
end

endmodule

module serial2pare(
 input wire        clk,
 input wire        ss,
 input wire        in_s,
 input wire [7:0]  in_p,
 output wire        out_s,
 output wire [7:0]  out_p
);

wire d0,d1,d2,d3,d4,d5,d6,d7;
D_trig D0(.clk(clk),.ss(ss),.in(in_s),.out(d0));
D_trig D1(.clk(clk),.ss(ss),.in(d0),.out(d1));
D_trig D2(.clk(clk),.ss(ss),.in(d1),.out(d2));
D_trig D3(.clk(clk),.ss(ss),.in(d2),.out(d3));
D_trig D4(.clk(clk),.ss(ss),.in(d3),.out(d4));
D_trig D5(.clk(clk),.ss(ss),.in(d4),.out(d5));
D_trig D6(.clk(clk),.ss(ss),.in(d5),.out(d6));
D_trig D7(.clk(clk),.ss(ss),.in(d6),.out(d7));

assign out_p = {d7,d6,d5,d4,d3,d2,d1,d0};


reg [4:0] i;
reg [7:0] out_r;
wire [3:0] sel;
assign sel = i[3:0] - 4'd9;
assign out_s = (i < 5'd17) ? out_r[3'd7-sel[2:0]] : 1'b1;;
always @(posedge clk) begin 
  if(!ss)begin 
    i <= i + 1'b1;
    if(i == 5'd8)
      out_r <= in_p;
    // else if(i < 5'd17)
    //   out_s <= out_r[3'd7-sel[2:0]];
    // else if(i >= 5'd10 && i <= 5'h12)
    //   out_s <= out_r[3'd7-sel[2:0]];
    // else 
    //   out_s <= 1'b1;
  end
end


endmodule