import "DPI-C" function void EXU_stastic();

module ysyx_25080218_EXU(
    input  [31 : 0] alu_src1,
    input  [31 : 0] alu_src2,
    input  [11 : 0] alu_op,
    input  [31 : 0] rs1,
    input  [31 : 0] rs2,
    input  [ 5 : 0] branch_ctrl,
    input  wire     valid_from_idu,
    input  wire     read_from_lsu,
    output [31 : 0] alu_result,
    output [31 : 0] branch_pc,
    output          branch_taken,
    output wire     ready_to_idu,
    output wire     valid_to_lsu
);

assign ready_to_idu = read_from_lsu;
assign valid_to_lsu = valid_from_idu;
wire op_add;
wire op_sub; 
wire op_and;
wire op_or ;
wire op_xor;
wire op_sll;
wire op_srl;
wire op_sra;
wire op_lui;//不操作
wire op_slt;
wire op_sltu;
assign op_add = alu_op[0];
assign op_lui = alu_op[1];
assign op_and = alu_op[2];
assign op_or  = alu_op[3];
assign op_xor = alu_op[4];
assign op_sub = alu_op[5];
assign op_sll = alu_op[6];
assign op_srl = alu_op[7];
assign op_sra = alu_op[8];
assign op_slt = alu_op[9];
assign op_sltu= alu_op[10];

wire [31:0] alu_a;
wire [31:0] alu_b;
wire        carry_in;
assign alu_a    = alu_src1;
assign alu_b    = op_sub ? ~alu_src2 : alu_src2;
assign carry_in = op_sub ? 1'b1 : 1'b0;

assign alu_result = op_add || op_sub ? alu_a + alu_b + {31'b0,carry_in} :
                    op_lui           ? alu_src2            :
                    op_and           ? alu_src1 & alu_src2 : 
                    op_or            ? alu_src1 | alu_src2 :
                    op_xor           ? alu_src1 ^ alu_src2 : 
                    op_sll           ? alu_src1 << alu_src2[4:0] :
                    op_srl           ? alu_src1 >> alu_src2[4:0] :
                    op_sra           ? (alu_src1[31] ? ~((~alu_src1) >> alu_src2[4:0]) : alu_src1 >> alu_src2[4:0]) :
                    op_slt           ? ($signed(alu_src1)<$signed(alu_src2)) ? {31'b0,1'b1} : 32'b0 :
                    op_sltu          ? (alu_src1 < alu_src2) ? {31'b0,1'b1} : 32'b0 :
                    32'b0;

wire is_beq  = branch_ctrl[0];
wire is_bne  = branch_ctrl[1];
wire is_blt  = branch_ctrl[2];
wire is_bge  = branch_ctrl[3];
wire is_bltu = branch_ctrl[4];
wire is_bgeu = branch_ctrl[5];

wire equal = (rs1 == rs2);
wire less_than_signed = ($signed(rs1) < $signed(rs2));
wire less_than_unsigned = (rs1 < rs2);

// 根据指令类型和比较结果，决定 branch_taken 信号
assign branch_taken = 
    (is_beq  && equal) ||
    (is_bne  && !equal) ||
    (is_blt  && less_than_signed) ||
    (is_bge  && !less_than_signed) ||
    (is_bltu && less_than_unsigned) ||
    (is_bgeu && !less_than_unsigned);

assign branch_pc = alu_result;

always @(posedge valid_to_lsu) begin
    EXU_stastic();
end

endmodule
