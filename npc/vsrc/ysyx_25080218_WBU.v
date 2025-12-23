module ysyx_25080218_WBU(
    input           rd_we,
    input  [ 4 : 0] rd,
    input  [ 4 : 0] load_ctrl,
    input  [31 : 0] rdata,
    output          gpr_we,
    input  [31 : 0] alu_result,
    output [31 : 0] gpr_wdata,
    output [ 4 : 0] gpr_waddr
);
assign gpr_we    = rd_we;
assign gpr_waddr = rd;
assign gpr_wdata = load_ctrl[0] ? {{24{rdata[7]}},rdata[7:0]} :
                   load_ctrl[1] ? {{16{rdata[15]}},rdata[15:0]}:
                   load_ctrl[2] ? rdata              : 
                   load_ctrl[3] ? {{24{1'b0}},rdata[7:0]} :
                   load_ctrl[4] ? {{16{1'b0}},rdata[15:0]}:
                   alu_result;


endmodule
