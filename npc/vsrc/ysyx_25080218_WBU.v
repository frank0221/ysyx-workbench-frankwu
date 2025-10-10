module ysyx_25080218_WBU(
    input           rd_we,
    input  [ 4 : 0] rd,
    output          gpr_we,
    input  [31 : 0] alu_result,
    output [31 : 0] gpr_wdata,
    output [ 4 : 0] gpr_waddr
);
assign gpr_we    = rd_we;
assign gpr_waddr = rd;
assign gpr_wdata = alu_result;


endmodule
