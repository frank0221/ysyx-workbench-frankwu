import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(
  input int waddr, input int wdata, input byte wmask);

module ysyx_25080218_MAU(
    input  clk,
    input  rst,
    input  [31:0] data,
    input  [31:0] addr,
    input         wen ,
    input         valid_from_exu,
    output        ready_to_exu,
    output        valid_to_wbu,
    input         ready_from_wbu,
    
    input  [ 4: 0] load_ctrl,
    input  [ 2: 0] store_ctrl,
    output reg [31:0] rdata
);

wire valid;
assign valid = (|load_ctrl) || (|store_ctrl);
assign ready_to_exu = ready_from_wbu;
assign valid_to_wbu = valid_from_exu;

wire [7:0] wmask;
assign wmask = store_ctrl[0]&&(addr[1:0] == 2'b00) ? 8'd1 :
               store_ctrl[0]&&(addr[1:0] == 2'b01) ? 8'd2 :
               store_ctrl[0]&&(addr[1:0] == 2'b10) ? 8'd4 :
               store_ctrl[0]&&(addr[1:0] == 2'b11) ? 8'd8 :
               store_ctrl[1]&&(addr[1:0] == 2'b00) ? 8'd3 :
               store_ctrl[1]&&(addr[1:0] == 2'b10) ? 8'd12 :
               store_ctrl[2] ? 8'd15 :
               8'd0;
//load_ctrl= {is_lhu,is_lbu,is_lw,is_lh,is_lb}
reg [31:0] rdata_r;

always @(*) begin
  if (valid) begin // 有读写请求时
    rdata_r = pmem_read(addr);
  end else begin
    rdata_r = 0;
  end
end

assign rdata = load_ctrl[0] ? {{24{rdata_r[7]}},rdata_r[7:0]} :
               load_ctrl[1] ? {{16{rdata_r[15]}},rdata_r[15:0]} :
               load_ctrl[2] ? rdata_r:
               load_ctrl[3] ? {24'b0,rdata_r[7:0]} :
               load_ctrl[4] ? {16'b0,rdata_r[15:0]} : 32'b0;

always @(posedge clk)begin
  if (wen && valid_from_exu) begin // 有写请求且有效时
      pmem_write(addr, data, wmask);
  end
end

endmodule