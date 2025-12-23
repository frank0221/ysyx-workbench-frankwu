import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(
  input int waddr, input int wdata, input byte wmask);

module ysyx_25080218_MAU(
    input  [31:0] data,
    input  [31:0] addr,
    input         wen ,
    
    input  [ 4: 0] load_ctrl,
    input  [ 2: 0] store_ctrl,
    output reg [31:0] rdata
);

wire valid;
assign valid = (|load_ctrl) || (|store_ctrl);

wire [7:0] wmask;
assign wmask = store_ctrl[0]&&(addr[1:0] == 2'b00) ? 8'd1 :
               store_ctrl[0]&&(addr[1:0] == 2'b01) ? 8'd2 :
               store_ctrl[0]&&(addr[1:0] == 2'b10) ? 8'd4 :
               store_ctrl[0]&&(addr[1:0] == 2'b11) ? 8'd8 :
               store_ctrl[1]&&(addr[1:0] == 2'b00) ? 8'd3 :
               store_ctrl[1]&&(addr[1:0] == 2'b10) ? 8'd12 :
               store_ctrl[2] ? 8'd15 :
               8'd0;
always @(*) begin
  if (valid) begin // 有读写请求时
    rdata = pmem_read(addr);
  end else begin
    rdata = 0;
  end
end

always @(*)begin
  if (wen) begin // 有写请求时
      pmem_write(addr, data, wmask);
  end
end

endmodule