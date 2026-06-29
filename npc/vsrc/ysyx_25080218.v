module ysyx_25080218(
    input           clock,
    input           reset,
    input           io_interrupt,

    input		    io_master_awready,
    output		    io_master_awvalid,
    output [31 : 0]	io_master_awaddr,
    output [ 3 : 0]	io_master_awid,
    output [ 7 : 0]	io_master_awlen,
    output [ 2 : 0]	io_master_awsize,
    output [ 1 : 0]	io_master_awburst,
    input		    io_master_wready,
    output		    io_master_wvalid,
    output [31 : 0]	io_master_wdata,
    output [ 3 : 0]	io_master_wstrb,
    output		    io_master_wlast,
    output		    io_master_bready,
    input		    io_master_bvalid,
    input  [ 1 : 0]	io_master_bresp,
    input  [ 3 : 0]	io_master_bid,
    input		    io_master_arready,
    output	     	io_master_arvalid,
    output [31 : 0]	io_master_araddr,
    output [ 3 : 0]	io_master_arid,
    output [ 7 : 0]	io_master_arlen,
    output [ 2 : 0]	io_master_arsize,
    output [ 1 : 0]	io_master_arburst,
    output		    io_master_rready,
    input		    io_master_rvalid,
    input  [ 1 : 0]	io_master_rresp,
    input  [31 : 0]	io_master_rdata,
    input		    io_master_rlast,
    input  [ 3 : 0]	io_master_rid,

    output		    io_slave_awready,
    input		    io_slave_awvalid,
    input  [31 : 0]	io_slave_awaddr,
    input  [ 3 : 0]	io_slave_awid,
    input  [ 7 : 0]	io_slave_awlen,
    input  [ 2 : 0]	io_slave_awsize,
    input  [ 1 : 0]	io_slave_awburst,
    output		    io_slave_wready,
    input		    io_slave_wvalid,
    input  [31 : 0]	io_slave_wdata,
    input  [ 3 : 0]	io_slave_wstrb,
    input		    io_slave_wlast,
    input		    io_slave_bready,
    output		    io_slave_bvalid,
    output [ 1 : 0]	io_slave_bresp,
    output [ 3 : 0]	io_slave_bid,
    output		    io_slave_arready,
    input		    io_slave_arvalid,
    input  [31 : 0]	io_slave_araddr,
    input  [ 3 : 0]	io_slave_arid,
    input  [ 7 : 0]	io_slave_arlen,
    input  [ 2 : 0]	io_slave_arsize,
    input  [ 1 : 0]	io_slave_arburst,
    input		    io_slave_rready,
    output		    io_slave_rvalid,
    output [ 1 : 0]	io_slave_rresp,
    output [31 : 0]	io_slave_rdata,
    output		    io_slave_rlast,
    output [ 3 : 0]	io_slave_rid

    // output [31 : 0] pc,    //是否要删除
    // output [31 : 0] dnpc,  //是否要删除
    // output          commit //是否要删除
);

assign	io_master_awid    = 4'd0;
assign  io_master_awlen   = 8'd0;
assign  io_master_awsize  = 3'd0;
assign  io_master_awburst = 2'd0;
assign  io_master_wlast   = 1'd0;
assign  io_master_arid    = 4'd0;
assign  io_master_arlen   = 8'd0;
assign  io_master_arsize  = 3'b000;
assign  io_master_arburst = 2'b00;

assign  io_slave_awready  = 1'd0;
assign  io_slave_wready   = 1'd0;
assign  io_slave_bvalid   = 1'd0;
assign  io_slave_bresp    = 2'd0;
assign  io_slave_bid      = 4'd0;
assign  io_slave_arready  = 1'd0;
assign  io_slave_rvalid   = 1'd0;
assign  io_slave_rresp    = 2'd0;
assign  io_slave_rdata    = 32'd0;
assign  io_slave_rlast    = 1'd0;
assign  io_slave_rid      = 4'd0;

wire [31 : 0] pc/*verilator public*/;
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
wire [31 : 0] dnpc/*verilator public*/;
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
    .clk          (clock),
    .rst          (reset),
    .pc           (pc),
    .inst         (valid_to_exu ? inst : 32'd0),
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
wire [31:0] m0_awaddr;
wire        m0_awvalid;
wire        m0_awready;
wire [31:0] m0_wdata;
wire [ 3:0] m0_wstrb;
wire        m0_wvalid;
wire        m0_wready;
wire [ 1:0] m0_bresp;
wire        m0_bvalid;
wire        m0_bready;
wire [31:0] m0_araddr;
wire        m0_arvalid;
wire        m0_arready;
wire [31:0] m0_rdata;
wire [ 1:0] m0_rresp;
wire        m0_rvalid;
wire        m0_rready;

assign m0_awaddr  = 32'b0;
assign m0_awvalid = 1'b0;
assign m0_wdata   = 32'b0;
assign m0_wstrb   = 4'b0;
assign m0_wvalid  = 1'b0;
assign m0_bready  = 1'b0;
ysyx_25080218_IFU IFU_init(
    .clk        (clock),
    .rst        (reset),
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
    .ARADDR     (m0_araddr),
    .ARVALID    (m0_arvalid),
    .ARREADY    (m0_arready),
    .RDATA      (m0_rdata),
    .RRESP      (m0_rresp),
    .RVALID     (m0_rvalid),
    .RREADY     (m0_rready)
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
wire commit /*verilator public*/;
assign commit = valid_to_wbu;

wire [31:0] m1_awaddr;
wire        m1_awvalid;
wire        m1_awready;
wire [31:0] m1_wdata;
wire [ 3:0] m1_wstrb;
wire        m1_wvalid;
wire        m1_wready;
wire [ 1:0] m1_bresp;
wire        m1_bvalid;
wire        m1_bready;
wire [31:0] m1_araddr;
wire        m1_arvalid;
wire        m1_arready;
wire [31:0] m1_rdata;
wire [ 1:0] m1_rresp;
wire        m1_rvalid;
wire        m1_rready;
ysyx_25080218_MAU MAU_init(
    .clk(clock),
    .rst(reset),
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

    .AWADDR     (m1_awaddr),
    .AWVALID    (m1_awvalid),
    .AWREADY    (m1_awready),
    .WDATA      (m1_wdata),
    .WSTRB      (m1_wstrb),
    .WVALID     (m1_wvalid),
    .WREADY     (m1_wready),
    .BRESP      (m1_bresp),
    .BVALID     (m1_bvalid),
    .BREADY     (m1_bready),
    .ARADDR     (m1_araddr),
    .ARVALID    (m1_arvalid),
    .ARREADY    (m1_arready),
    .RDATA      (m1_rdata),
    .RRESP      (m1_rresp),
    .RVALID     (m1_rvalid),
    .RREADY     (m1_rready)
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

wire [31:0] s0_awaddr  ;
wire        s0_awvalid ;
wire        s0_awready ;
wire [31:0] s0_wdata   ;
wire [ 3:0] s0_wstrb   ;
wire        s0_wvalid  ;
wire        s0_wready  ;
wire [ 1:0] s0_bresp   ;
wire        s0_bvalid  ;
wire        s0_bready  ;
wire [31:0] s0_araddr  ;
wire        s0_arvalid ;
wire        s0_arready ;
wire [31:0] s0_rdata   ;
wire [ 1:0] s0_rresp   ;
wire        s0_rvalid  ;
wire        s0_rready  ;

wire [31:0] s1_awaddr  ;
wire        s1_awvalid ;
wire        s1_awready ;
wire [31:0] s1_wdata   ; 
wire [ 3:0] s1_wstrb   ;
wire        s1_wvalid  ;
wire        s1_wready  ;
wire [ 1:0] s1_bresp   ;
wire        s1_bvalid  ;
wire        s1_bready  ;
wire [31:0] s1_araddr  ;
wire        s1_arvalid ;
wire        s1_arready ;
wire [31:0] s1_rdata   ;
wire [1:0]  s1_rresp   ; 
wire        s1_rvalid  ;
wire        s1_rready  ;

assign s0_awready = 1'b1;
assign s0_wready  = 1'b1;
assign s0_bresp   = 2'b00;
assign s0_bvalid  = 1'b1;

// assign s0_arready = 1'b1;
//assign s0_rdata   = 32'b0;
// assign s0_rresp   = 2'b00;
// assign s0_rvalid  = 1'b1;

XBAR xbar_init(
    .clk        (clock),
    .rst        (reset),

    .m1_awaddr  (m1_awaddr),
    .m1_awvalid (m1_awvalid),
    .m1_awready (m1_awready),
    .m1_wdata   (m1_wdata),
    .m1_wstrb   (m1_wstrb),
    .m1_wvalid  (m1_wvalid),
    .m1_wready  (m1_wready),
    .m1_bresp   (m1_bresp),
    .m1_bvalid  (m1_bvalid),
    .m1_bready  (m1_bready),
    .m1_araddr  (m1_araddr),
    .m1_arvalid (m1_arvalid),
    .m1_arready (m1_arready),
    .m1_rdata   (m1_rdata),
    .m1_rresp   (m1_rresp),
    .m1_rvalid  (m1_rvalid),
    .m1_rready  (m1_rready),

    .m0_awaddr  (m0_awaddr),
    .m0_awvalid (m0_awvalid),
    .m0_awready (m0_awready),
    .m0_wdata   (m0_wdata),
    .m0_wstrb   (m0_wstrb),
    .m0_wvalid  (m0_wvalid),
    .m0_wready  (m0_wready),
    .m0_bresp   (m0_bresp),
    .m0_bvalid  (m0_bvalid),
    .m0_bready  (m0_bready),
    .m0_araddr  (m0_araddr),
    .m0_arvalid (m0_arvalid),
    .m0_arready (m0_arready),
    .m0_rdata   (m0_rdata),
    .m0_rresp   (m0_rresp),
    .m0_rvalid  (m0_rvalid),
    .m0_rready  (m0_rready),

    .s0_awaddr  (io_master_awaddr),
    .s0_awvalid (io_master_awvalid),
    .s0_awready (io_master_awready),
    .s0_wdata   (io_master_wdata),
    .s0_wstrb   (io_master_wstrb),
    .s0_wvalid  (io_master_wvalid),
    .s0_wready  (io_master_wready),
    .s0_bresp   (io_master_bresp),
    .s0_bvalid  (io_master_bvalid),
    .s0_bready  (io_master_bready),
    .s0_araddr  (io_master_araddr),
    .s0_arvalid (io_master_arvalid),
    .s0_arready (io_master_arready),
    .s0_rdata   (io_master_rdata),
    .s0_rresp   (io_master_rresp),
    .s0_rvalid  (io_master_rvalid),
    .s0_rready  (io_master_rready),

    .s1_awaddr  ( s1_awaddr ),
    .s1_awvalid ( s1_awvalid),
    .s1_awready ( s1_awready),

    .s1_wdata   ( s1_wdata  ),
    .s1_wstrb   ( s1_wstrb  ),
    .s1_wvalid  ( s1_wvalid ),
    .s1_wready  ( s1_wready ),

    .s1_bresp   ( s1_bresp  ),
    .s1_bvalid  ( s1_bvalid ),
    .s1_bready  ( s1_bready ),

    .s1_araddr  ( s1_araddr ),
    .s1_arvalid ( s1_arvalid),
    .s1_arready ( s1_arready),

    .s1_rdata   ( s1_rdata  ),
    .s1_rresp   ( s1_rresp  ),
    .s1_rvalid  ( s1_rvalid ),
    .s1_rready  ( s1_rready )

    // .s2_awaddr  ( s2_awaddr ),
    // .s2_awvalid ( s2_awvalid),
    // .s2_awready ( s2_awready),

    // .s2_wdata   ( s2_wdata  ),
    // .s2_wstrb   ( s2_wstrb  ),
    // .s2_wvalid  ( s2_wvalid ),
    // .s2_wready  ( s2_wready ),

    // .s2_bresp   ( s2_bresp  ),
    // .s2_bvalid  ( s2_bvalid ),
    // .s2_bready  ( s2_bready ),

    // .s2_araddr  ( s2_araddr ),
    // .s2_arvalid ( s2_arvalid),
    // .s2_arready ( s2_arready),

    // .s2_rdata   ( s2_rdata  ),
    // .s2_rresp   ( s2_rresp  ),
    // .s2_rvalid  ( s2_rvalid ),
    // .s2_rready  ( s2_rready )
);

// uart uart_init(
//     .clk       (clock),
//     .rst       (reset),
//     .s_awaddr  (s1_awaddr),
//     .s_awvalid (s1_awvalid),
//     .s_awready (s1_awready),
    

//     .s_wdata   (s1_wdata),
//     .s_wstrb   (s1_wstrb),
//     .s_wvalid  (s1_wvalid),
//     .s_wready  (s1_wready),
    
    
//     .s_bresp   (s1_bresp),
//     .s_bvalid  (s1_bvalid),
//     .s_bready  (s1_bready),

//     .s_araddr  (s1_araddr),
//     .s_arvalid (s1_arvalid),
//     .s_arready (s1_arready),

//     .s_rdata   (s1_rdata),
//     .s_rresp   (s1_rresp),
//     .s_rvalid  (s1_rvalid),
//     .s_rready  (s1_rready)
// );

wire [31:0] s2_awaddr  ;
wire        s2_awvalid ;
wire        s2_awready ;
wire [31:0] s2_wdata   ; 
wire [ 3:0] s2_wstrb   ;
wire        s2_wvalid  ;
wire        s2_wready  ;
wire [ 1:0] s2_bresp   ;
wire        s2_bvalid  ;
wire        s2_bready  ;
wire [31:0] s2_araddr  ;
wire        s2_arvalid ;
wire        s2_arready ;
wire [31:0] s2_rdata   ;
wire [1:0]  s2_rresp   ; 
wire        s2_rvalid  ;
wire        s2_rready  ;

clint clint_init(
    .clk       (clock),
    .rst       (reset),
    .s_awaddr  (s1_awaddr),
    .s_awvalid (s1_awvalid),
    .s_awready (s1_awready),
    

    .s_wdata   (s1_wdata),
    .s_wstrb   (s1_wstrb),
    .s_wvalid  (s1_wvalid),
    .s_wready  (s1_wready),
    
    
    .s_bresp   (s1_bresp),
    .s_bvalid  (s1_bvalid),
    .s_bready  (s1_bready),

    .s_araddr  (s1_araddr),
    .s_arvalid (s1_arvalid),
    .s_arready (s1_arready),

    .s_rdata   (s1_rdata),
    .s_rresp   (s1_rresp),
    .s_rvalid  (s1_rvalid),
    .s_rready  (s1_rready)
);

endmodule
