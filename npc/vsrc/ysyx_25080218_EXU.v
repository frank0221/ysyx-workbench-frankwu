module ysyx_25080218_EXU(
    input  [31 : 0] alu_src1,
    input  [31 : 0] alu_src2,
    input  [11 : 0] alu_op,
    output [31 : 0] alu_result
);
wire op_add;
wire op_sub;
wire op_and;
wire op_or ;
wire op_xor;
wire op_sll;
wire op_srl;
wire op_sra;
wire op_lui;//不操作
assign op_add = alu_op[0];
assign op_lui = alu_op[1];


assign alu_result = op_add ? alu_src1 + alu_src2 :
                    op_lui ? alu_src2            :32'b0;

endmodule
