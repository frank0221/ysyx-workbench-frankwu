module top(
    input           clk,
    input           rst,
    //input  [31 : 0] inst,
    output [31 : 0] pc,
    output [31 : 0] dnpc,
    output          commit
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
wire          Ifu2Idu_valid;
wire          Idu2Ifu_ready;

wire          valid_to_exu;
wire          ready_from_exu;
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
    .next_pc_csr  (next_pc_csr),
    .valid_from_ifu   (Ifu2Idu_valid),
    .ready_to_ifu     (Idu2Ifu_ready),
    .valid_to_exu     (valid_to_exu),
    .ready_from_exu   (ready_from_exu)
);
wire branch_taken;
wire [31:0] ARADDR;
wire ARVALID;
wire ARREAD;
wire [31:0] RDATA;
wire [ 1:0] RRESP;
wire RVALID;
wire RREADY;
assign ARREAD = 1'b1;
assign RVALID = 1'b1;
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
    .next_pc_csr  (next_pc_csr),
    .valid        (Ifu2Idu_valid),
    .ready        (Idu2Ifu_ready),
    .ARADDR(ARADDR),
    .ARVALID(ARVALID),
    .ARREADY(ARREAD),

    .RDATA(RDATA),
    .RRESP(RRESP),
    .RVALID(RVALID),
    .RREADY(RREADY)    
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
    .branch_taken(branch_taken),
    .read_from_lsu(ready_from_lsu),
    .ready_to_idu (ready_from_exu),
    .valid_to_lsu (valid_to_lsu),
    .valid_from_idu (valid_to_exu)
);
wire ready_from_lsu;
wire valid_to_lsu;
wire valid_to_wbu;
wire ready_from_wbu;
wire [31:0] rdata;
assign commit = valid_to_wbu;

wire [31:0] LSU_ARADDR;
wire LSU_ARVALID;
wire LSU_ARREADY;
wire [31:0] LSU_RDATA;
wire [ 1:0] LSU_RRESP;
wire LSU_RVALID;
wire LSU_RREADY;

wire [31:0] LSU_AWADDR;
wire LSU_AWVALID;
wire LSU_AWREADY;
wire [31:0] LSU_WDATA;
wire [ 3:0] LSU_WSTRB;
wire LSU_WVALID;
wire LSU_WREADY;
wire [ 1:0] LSU_BRESP;
wire LSU_BVALID;
wire LSU_BREADY;
assign LSU_ARREADY= 1'b1;
assign LSU_BVALID = 1'b1;
assign LSU_RVALID = 1'b1;
assign LSU_WREADY = 1'b1;
assign LSU_AWREADY= 1'b1;
ysyx_25080218_MAU MAU_init(
    .clk(clk),
    .rst(rst),
    .data(rs2),
    .addr(alu_result),
    .wen(|store_ctrl) ,
    .valid_from_exu(valid_to_lsu),
    .ready_to_exu(ready_from_lsu),
    .valid_to_wbu(valid_to_wbu),
    .ready_from_wbu(ready_from_wbu),
    
    .store_ctrl(store_ctrl),
    .load_ctrl(load_ctrl),
    .rdata(rdata),

    .AWADDR(LSU_AWADDR),
    .AWVALID(LSU_AWVALID),
    .AWREADY(LSU_AWREADY),

    .WDATA(LSU_WDATA),
    .WSTRB(LSU_WSTRB),
    .WVALID(LSU_WVALID),
    .WREADY(LSU_WREADY),

    .BRESP(LSU_BRESP),
    .BVALID(LSU_BVALID),
    .BREADY(LSU_BREADY),

    .ARADDR(LSU_ARADDR),
    .ARVALID(LSU_ARVALID),
    .ARREADY(LSU_ARREADY),

    .RDATA(LSU_RDATA),
    .RRESP(LSU_RRESP),
    .RVALID(LSU_RVALID),
    .RREADY(LSU_RREADY)
);

ysyx_25080218_WBU WBU_init(
    .rd_we      (rd_we),
    .alu_result (alu_result),
    .rdata      (rdata),
    .load_ctrl  (load_ctrl),
    .rd         (rd),
    .gpr_we     (gpr_we),
    .gpr_wdata  (gpr_wdata),
    .gpr_waddr  (gpr_waddr),
    .ready_from_wbu(ready_from_wbu),
    .valid_from_lsu(valid_to_wbu)
);

xbar xbar_init(
    .clk        (clk),
    .rst        (rst),

    .m1_awaddr  (),
    .m1_awvalid (),
    .m1_awready (),
.
    //写数据通道
    .m1_wdata   (),
    .m1_wstrb   (),
    .m1_wvalid  (),
    .m1_wready  (),
.
    .
    .m1_bresp   (),
    .m1_bvalid  (),
    .m1_bready  (),

    .m1_araddr  (),
    .m1_arvalid (),
    .m1_arready (),

    .m1_rdata   (),
    .m1_rresp   (),
    .m1_rvalid  (),
    .m1_rready  (),

    .m0_awaddr  (),
    .m0_awvalid (),
    .m0_awready (),

    .m0_wdata   (),
    .m0_wstrb   (),
    .m0_wvalid  (),
    .m0_wready  (),

    .m0_bresp   (),
    .m0_bvalid  (),
    .m0_bready  (),

    .m0_araddr  (),
    .m0_arvalid (),
    .m0_arready (),

    .m0_rdata   (),
    .m0_rresp   (),
    .m0_rvalid  (),
    .m0_rready  (),

    .s0_awaddr  (),
    .s0_awvalid (),
    .s0_awready (),

    .s0_wdata   (),
    .s0_wstrb   (),
    .s0_wvalid  (),
    .s0_wready  (),

    .s0_bresp   (),
    .s0_bvalid  (),
    .s0_bready  (),

    .s0_araddr  (),
    .s0_arvalid (),
    .s0_arready (),

    .s0_rdata   (),
    .s0_rresp   (),
    .s0_rvalid  (),
    .s0_rready  (),

    .s1_awaddr  (),
    .s1_awvalid (),
    .s1_awready (),

    .s1_wdata   (),
    .s1_wstrb   (),
    .s1_wvalid  (),
    .s1_wready  (),

    .s1_bresp   (),
    .s1_bvalid  (),
    .s1_bready  (),

    .s1_araddr  (),
    .s1_arvalid (),
    .s1_arready (),

    .s1_rdata   (),
    .s1_rresp   (),
    .s1_rvalid  (),
    .s1_rready  ()
);

uart uart_init(
    .clk       (clk),
    .rst       (rst),
    .s_awaddr  (),
    .s_awvalid (),
    .s_awready (),
    

    .s_wdata   (),
    .s_wstrb   (),
    .s_wvalid  (),
    .s_wready  (),
    
    
    .s_bresp   (),
    .s_bvalid  (),
    .s_bready  (),

    .s_araddr  (),
    .s_arvalid (),
    .s_arready (),

    .s_rdata   (),
    .s_rresp   (),
    .s_rvalid  (),
    .s_rready  ()
);

endmodule
