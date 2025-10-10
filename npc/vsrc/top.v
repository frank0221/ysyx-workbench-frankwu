module top(
    input           clk,
    input           rst,
    input  [31 : 0] inst,
    output [31 : 0] pc
);

wire [31 : 0] gpr_wdata;
wire [ 4 : 0] gpr_waddr;
wire          gpr_we;
wire [11 : 0] imm;
wire [31 : 0] alu_src1;
wire [31 : 0] alu_src2;
wire [11 : 0] alu_op; //借鉴cpu设计实战设计
wire          rd_we;
wire [ 4 : 0] rd;

wire [31 : 0] next_pc_jump;
wire          is_jump;
wire [31 : 0] pc_wire;

ysyx_25080218_IDU IDU_init(
    .clk          (clk),
    .rst          (rst),
    .pc           (pc),
    .inst         (inst),
    .gpr_waddr    (gpr_waddr),
    .gpr_wdata    (gpr_wdata),
    .gpr_we       (gpr_we),
    .imm          (imm),
    .alu_src1     (alu_src1),
    .alu_src2     (alu_src2),
    .alu_op       (alu_op),
    .rd_we        (rd_we),
    .rd           (rd),
    .is_jump      (is_jump),
    .next_pc_jump (next_pc_jump)
);

ysyx_25080218_IFU IFU_init(
    .clk        (clk),
    .rst        (rst),
    .pc         (pc),
    .is_jump    (is_jump),
    .next_pc_jump(next_pc_jump)
);
// assign pc = pc_wire;

wire [31 : 0] alu_result;
ysyx_25080218_EXU EXU_init(
    .alu_src1   (alu_src1),
    .alu_src2   (alu_src2),
    .alu_result (alu_result),
    .alu_op     (alu_op)
);

ysyx_25080218_WBU WBU_init(
    .rd_we      (rd_we),
    .alu_result (alu_result),
    .rd         (rd),
    .gpr_we     (gpr_we),
    .gpr_wdata  (gpr_wdata),
    .gpr_waddr  (gpr_waddr)
);

endmodule
