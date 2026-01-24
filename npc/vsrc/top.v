module top(
    input           clk,
    input           rst,
    //input  [31 : 0] inst,
    output [31 : 0] pc,
    output [31 : 0] dnpc
);
wire [31 : 0] inst;
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
wire [31 : 0] npc;
assign dnpc = npc;
wire [4:0] load_ctrl;
wire [2:0] store_ctrl;
wire [31 : 0] rs2;
wire [31 : 0] rs1;
wire [5:0]    branch_ctrl;
wire [31:0]   branch_pc;
wire [31:0]   next_pc_csr;
wire          is_ecall_mret;
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
    .next_pc_jump (next_pc_jump),
    .load_ctrl    (load_ctrl),
    .store_ctrl   (store_ctrl),
    .rs2          (rs2),
    .rs1          (rs1),
    .branch_ctrl  (branch_ctrl),
    .is_ecall_mret(is_ecall_mret),
    .next_pc_csr  (next_pc_csr)
);
wire branch_taken;
ysyx_25080218_IFU IFU_init(
    .clk        (clk),
    .rst        (rst),
    .pc         (pc),
    .is_jump    (is_jump),
    .next_pc_jump(next_pc_jump),
    .branch_pc  (branch_pc),
    .branch_taken(branch_taken),
    //.next_pc    (dnpc),
    .npc        (npc),
    .inst       (inst),
    .is_ecall_mret(is_ecall_mret),
    .next_pc_csr  (next_pc_csr)
);
// assign pc = pc_wire;

wire [31 : 0] alu_result;
ysyx_25080218_EXU EXU_init(
    .alu_src1   (alu_src1),
    .alu_src2   (alu_src2),
    .alu_result (alu_result),
    .alu_op     (alu_op),
    .rs1        (rs1),
    .rs2        (rs2),
    .branch_ctrl(branch_ctrl),
    .branch_pc  (branch_pc),
    .branch_taken(branch_taken)
);

wire [31:0] rdata;
ysyx_25080218_MAU MAU_init(
    .data(rs2),
    .addr(alu_result),
    .wen(|store_ctrl) ,
    
    .store_ctrl(store_ctrl),
    .load_ctrl(load_ctrl),
    .rdata(rdata)
);

ysyx_25080218_WBU WBU_init(
    .rd_we      (rd_we),
    .alu_result (alu_result),
    .rdata      (rdata),
    .load_ctrl  (load_ctrl),
    .rd         (rd),
    .gpr_we     (gpr_we),
    .gpr_wdata  (gpr_wdata),
    .gpr_waddr  (gpr_waddr)
);

endmodule
