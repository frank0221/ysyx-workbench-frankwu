import "DPI-C" function void halt();
import "DPI-C" function void B_inst_analysis();
import "DPI-C" function void I_inst_analysis();
import "DPI-C" function void J_inst_analysis();
import "DPI-C" function void R_inst_analysis();
import "DPI-C" function void S_inst_analysis();
import "DPI-C" function void U_inst_analysis();
module ysyx_25080218_IDU(
    input  clk,
    input  rst,
    input  [31 : 0] pc,
    input  [31 : 0] inst,
    input  [31 : 0] gpr_wdata,
    input  [ 4 : 0] gpr_waddr,
    input           gpr_we,
    input wire      valid_from_ifu,
    input wire      ready_from_exu,
    output [11 : 0] imm,
    output [31 : 0] alu_src1,
    output [31 : 0] alu_src2,
    output [11 : 0] alu_op,
    output          rd_we,
    output [ 4 : 0] rd,
    output          is_jump,
    output [31 : 0] next_pc_jump,
    output [ 4 : 0] load_ctrl,
    output [ 2 : 0] store_ctrl,
    output wire [ 5 : 0] branch_ctrl,
    output wire [31 : 0] rs1,
    output wire [31 : 0] rs2,
    output          is_ecall_mret,
    output [31 : 0] next_pc_csr,
    output wire     ready_to_ifu,
    output wire     valid_to_exu
);
assign ready_to_ifu = ready_from_exu;
assign valid_to_exu = valid_from_ifu;
wire [ 6 : 0] opcode;
wire [ 4 : 0] src1;
wire [ 4 : 0] src2;
//wire [31 : 0] rs1;
//wire [31 : 0] rs2;
//wire [ 4 : 0] rd;
wire [ 2 : 0] fun3;
wire [ 6 : 0] fun7;

assign opcode = inst[ 6 :  0];
assign src1   = inst[19 : 15];
assign src2   = inst[24 : 20];
assign rd     = inst[11 :  7];
assign fun3   = inst[14 : 12];
assign fun7   = inst[31 : 25];

wire [4:0] shamt = inst[24:20];

wire [31 : 0] imm_J;
wire [31 : 0] imm_I;
wire [31 : 0] imm_U;
wire [31 : 0] imm_S;
wire [31 : 0] imm_B;

assign imm_J  = {{12{inst[31]}},inst[19 : 12],inst[20],inst[30 : 21],1'b0};
assign imm_I  = {{20{inst[31]}},inst[31 : 20]};
assign imm_U  = inst[31 : 12] << 12;
assign imm_S  = {{20{inst[31]}},inst[31:25],inst[11:7]};
assign imm_B  = {{20{inst[31]}},inst[7],inst[30:25],inst[11:8],1'b0};
wire          imm_is_I;
wire          imm_is_J;
wire          imm_is_B;
wire          imm_is_S;
wire          imm_is_U;
wire          imm_is_R;

assign imm_is_I = (opcode == 7'b0000011 || opcode == 7'b0010011 ||
                   opcode == 7'b1100111) ? 1'b1 : 1'b0;
assign imm_is_J = (opcode == 7'b1101111) ? 1'b1 : 1'b0;
assign imm_is_B = (opcode == 7'b1100011) ? 1'b1 : 1'b0;
assign imm_is_S = (opcode == 7'b0100011) ? 1'b1 : 1'b0;
assign imm_is_U = (opcode == 7'b0110111 || opcode == 7'b0010111) ? 1'b1 : 1'b0;
assign imm_is_R = (opcode == 7'b0110011) ? 1'b1 : 1'b0;

wire          is_break;

wire          is_auipc;
wire          is_lui;
wire          is_jal;
wire          is_jalr;

wire          is_and;
wire          is_or;
wire          is_xor;

wire          is_sub;

wire          is_sll;
wire          is_srl;
wire          is_sra;
wire          is_slt;
wire          is_sltu;

wire          is_lb;
wire          is_lh;
wire          is_lw;
wire          is_lhu;
wire          is_lbu;

wire          is_sw;
wire          is_sh;
wire          is_sb;

wire          is_bne;
wire          is_beq;
wire          is_blt;
wire          is_bge;
wire          is_bltu;
wire          is_bgeu;
      
assign is_auipc = (opcode == 7'b0010111) ? 1'b1 : 1'b0;
assign is_lui   = (opcode == 7'b0110111) ? 1'b1 : 1'b0;
assign is_jalr  = (opcode == 7'b1100111 && fun3 == 3'h00) ? 1'b1 : 1'b0;
assign is_jal   = (opcode == 7'b1101111) ? 1'b1 : 1'b0;
assign is_jump  = is_jal || is_jalr;
assign next_pc_jump = is_jal ? pc  + imm_J :
                      is_jalr? rs1 + imm_I :32'b0;
//R类型 I类型都包括
assign is_and   = (imm_is_R && (fun3 == 3'h7) && fun7 ==7'b0) || (opcode == 7'b0010011 && (fun3 == 3'h7)) ? 1'b1 : 1'b0;
assign is_or    = (imm_is_R && (fun3 == 3'h6) && fun7 ==7'b0) || (opcode == 7'b0010011 && (fun3 == 3'h6)) ? 1'b1 : 1'b0;
assign is_xor   = (imm_is_R && (fun3 == 3'h4) && fun7 ==7'b0) || (opcode == 7'b0010011 && (fun3 == 3'h4)) ? 1'b1 : 1'b0;

assign is_sub   = (imm_is_R && (fun3 == 3'h0) && (fun7 == 7'h20)) ? 1'b1 : 1'b0;

assign is_sll   = (imm_is_R && (fun3 == 3'h1) && (fun7 == 7'h00)) || (opcode == 7'b0010011 && (fun3 == 3'h1) && (fun7 == 7'h00)) ? 1'b1 : 1'b0;
assign is_srl   = (imm_is_R && (fun3 == 3'h5) && (fun7 == 7'h00)) || (opcode == 7'b0010011 && (fun3 == 3'h5) && (fun7 == 7'h00)) ? 1'b1 : 1'b0;
assign is_sra   = (imm_is_R && (fun3 == 3'h5) && (fun7 == 7'h20)) || (opcode == 7'b0010011 && (fun3 == 3'h5) && (fun7 == 7'h20)) ? 1'b1 : 1'b0;

assign is_slt   = (imm_is_R && (fun3 == 3'h2) && (fun7 == 7'h00)) || (opcode == 7'b0010011 && (fun3 == 3'h2) && (fun7 == 7'h00)) ? 1'b1 : 1'b0;
assign is_sltu  = (imm_is_R && (fun3 == 3'h3) && (fun7 == 7'h00)) || (opcode == 7'b0010011 && (fun3 == 3'h3) && (fun7 == 7'h00)) ? 1'b1 : 1'b0;

assign is_lb    = (opcode == 7'b0000011 && fun3 == 3'h00);
assign is_lh    = (opcode == 7'b0000011 && fun3 == 3'h01);
assign is_lw    = (opcode == 7'b0000011 && fun3 == 3'h02);
assign is_lbu   = (opcode == 7'b0000011 && fun3 == 3'h04);
assign is_lhu   = (opcode == 7'b0000011 && fun3 == 3'h05);
assign load_ctrl= {is_lhu,is_lbu,is_lw,is_lh,is_lb};

assign is_sb    = (imm_is_S && fun3 == 3'h00) ? 1'b1 : 1'b0;
assign is_sh    = (imm_is_S && fun3 == 3'h01) ? 1'b1 : 1'b0;
assign is_sw    = (imm_is_S && fun3 == 3'h02) ? 1'b1 : 1'b0;
assign store_ctrl ={is_sw,is_sh,is_sb};

assign is_beq   = (imm_is_B && fun3 == 3'h00) ? 1'b1 : 1'b0;
assign is_bne   = (imm_is_B && fun3 == 3'h01) ? 1'b1 : 1'b0;
assign is_blt   = (imm_is_B && fun3 == 3'h04) ? 1'b1 : 1'b0;
assign is_bge   = (imm_is_B && fun3 == 3'h05) ? 1'b1 : 1'b0;
assign is_bltu  = (imm_is_B && fun3 == 3'h06) ? 1'b1 : 1'b0;
assign is_bgeu  = (imm_is_B && fun3 == 3'h07) ? 1'b1 : 1'b0;
assign branch_ctrl = {is_bgeu,is_bltu,is_bge,is_blt,is_bne,is_beq};

wire [11 : 0] csr_addr;
wire is_mstatus;
wire is_mtvec;
wire is_mepc;
wire is_mcause;
wire is_mvendorid;
wire is_marchid;

assign csr_addr = inst[31 : 20];
assign is_mstatus  = (csr_addr == 12'h300) ? 1'b1 : 1'b0;
assign is_mtvec    = (csr_addr == 12'h305) ? 1'b1 : 1'b0;
assign is_mepc     = (csr_addr == 12'h341) ? 1'b1 : 1'b0;
assign is_mcause   = (csr_addr == 12'h342) ? 1'b1 : 1'b0;
assign is_mvendorid= (csr_addr == 12'hf11) ? 1'b1 : 1'b0;
assign is_marchid  = (csr_addr == 12'hf12) ? 1'b1 : 1'b0;

wire is_csrrw;
wire is_csrrs;
wire is_csr;
assign is_csrrw = (fun3 == 3'b001 && opcode == 7'b1110011) ? 1'b1 : 1'b0;
assign is_csrrs = (fun3 == 3'b010 && opcode == 7'b1110011) ? 1'b1 : 1'b0;
assign is_csr   = (is_csrrs || is_csrrw) ? 1'b1 : 1'b0;

wire is_ecall;
wire is_mret;
assign is_ecall_mret = is_ecall || is_mret;
assign is_ecall = (inst == 32'b00000000000000000000000001110011) ? 1'b1 : 1'b0;
assign is_mret  = (inst == 32'b00110000001000000000000001110011) ? 1'b1 : 1'b0;

reg  [31:0] mstatus = 32'h1800;
reg  [31:0] mtvec   ;
reg  [31:0] mepc    ;
reg  [31:0] mcause  ;
wire [31:0] csr_temp;
wire [31:0] csr2reg ;

assign next_pc_csr = is_ecall ? mtvec :
                     is_mret  ? mepc  :
                     32'b0;
always @(posedge clk or posedge rst)begin
    if(rst)begin
        mstatus <= 32'h1800;
        mtvec   <= 32'd0;
        mepc    <= 32'b0;
        mcause  <= 32'b0;
    end
    else if(is_ecall)begin
        $display("ECALL at PC=%x", pc);
        mcause <= 32'd11;
        mepc   <= pc;
    end
    else if(is_csrrs)begin
        //$display("CSRRS at PC=%x Addr=%x mstatus=%x", pc, csr_addr, mstatus);
        if(is_mstatus)begin
            mstatus  <= mstatus | rs1;
        end
        else if(is_mtvec)begin
            mtvec    <= mtvec | rs1;
        end
        else if(is_mepc)begin
            mepc     <= mepc | rs1;
        end
        else if(is_mcause)begin
            mcause   <= mcause | rs1;
        end
        else if(is_mvendorid)begin
            mvendorid <= mvendorid | rs1;
        end
        else if(is_marchid)begin
            marchid <= marchid | rs1;
        end
    end
    else if(is_csrrw)begin
        if(is_mstatus)begin
            mstatus  <= rs1;
        end
        else if(is_mtvec)begin
            mtvec    <= rs1;
        end
        else if(is_mepc)begin
            mepc     <= rs1;
        end
        else if(is_mcause)begin
            mcause   <= rs1;
        end
    end
end

reg [31:0] mvendorid = 32'h17EB19A;
reg [31:0] marchid   = 32'h25080218;
assign csr_temp = is_mcause ? mcause : 
                  is_mepc   ? mepc   :
                  is_mtvec  ? mtvec  :
                  is_mstatus? mstatus:
                  is_mvendorid? mvendorid:
                  is_marchid ? marchid:
                  32'b0;
assign csr2reg  = csr_temp;

assign alu_src1 = is_jump  ? pc    :
                  imm_is_I ? rs1   :
                  imm_is_R ? rs1   :
                  imm_is_S ? rs1   :
                  is_auipc ? pc    : 
                  imm_is_B ? pc    :
                  is_lui   ? 32'b0 :
                  32'b0;


assign alu_src2 = is_jump  ? 32'd4 :
                  (imm_is_I && (is_sll || is_srl || is_sra)) ? {27'b0, shamt} :
                  imm_is_I ? imm_I :
                  imm_is_R ? rs2   :
                  imm_is_S ? imm_S   :
                  imm_is_B ? imm_B  :
                  imm_is_U ? imm_U :
                   32'b0;

assign alu_op[0]= ((imm_is_R && fun3 == 3'b0 && fun7 ==7'b0) || (opcode == 7'b0010111) || ((opcode == 7'b0010011) && fun3 ==3'b0 ) || (is_jump) || (|load_ctrl) || (|store_ctrl) || (|branch_ctrl)) ? 1'b1 : 1'b0; //加法
assign alu_op[1] = (opcode == 7'b0110111) ? 1'b1 : 1'b0;
assign alu_op[2] = is_and ? 1'b1 : 1'b0;
assign alu_op[3] = is_or  ? 1'b1 : 1'b0;
assign alu_op[4] = is_xor ? 1'b1 : 1'b0;
assign alu_op[5] = is_sub ? 1'b1 : 1'b0;
assign alu_op[6] = is_sll ? 1'b1 : 1'b0; 
assign alu_op[7] = is_srl ? 1'b1 : 1'b0; 
assign alu_op[8] = is_sra ? 1'b1 : 1'b0; 
assign alu_op[9] = is_slt ? 1'b1 : 1'b0;
assign alu_op[10]= is_sltu ? 1'b1 :1'b0;
                  
assign rd_we    = (imm_is_R || imm_is_U || 
                   imm_is_I || is_jump ||is_csr) ? 1'b1 : 1'b0;

assign is_break = (inst == 32'b00000000000100000000000001110011) ? 1'b1 : 1'b0;

always @(*)begin
    if(is_break)
        halt();
end

wire [31 : 0] gpr_wdata_total;
assign gpr_wdata_total = is_csr ? csr2reg : gpr_wdata;

ysyx_25080218_GPR ysyx_25080218_GPR_init(
    .clk         (clk),
    .rst         (rst),
    .gpr_waddr   (gpr_waddr),
    .gpr_wdata   (gpr_wdata_total),
    .gpr_we      (gpr_we),
    .gpr_raddr1  (src1),
    .gpr_raddr2  (src2),
    .gpr_rdata1  (rs1),
    .gpr_rdata2  (rs2)
);

always @(posedge imm_is_B) begin
    B_inst_analysis();
end

always @(posedge imm_is_I) begin
    I_inst_analysis();
end

always @(posedge imm_is_J) begin
    J_inst_analysis();
end

always @(posedge imm_is_R) begin
    R_inst_analysis();
end

always @(posedge imm_is_S) begin
    S_inst_analysis();
end

always @(posedge imm_is_U) begin
    U_inst_analysis();
end

endmodule

module ysyx_25080218_GPR(
    input           clk,
    input           rst,
    input  [ 4 : 0] gpr_waddr,
    input  [31 : 0] gpr_wdata,
    input           gpr_we,
    input  [ 4 : 0] gpr_raddr1,
    input  [ 4 : 0] gpr_raddr2,
    output [31 : 0] gpr_rdata1,
    output [31 : 0] gpr_rdata2
);
reg [31 : 0] GPR [31 : 0];
reg [31 : 0] GPR_diff [31 : 0];
 
integer j;
always @(*)begin
    if(rst)begin
        for (j = 0; j < 32; j = j + 1)   
            GPR_diff[j] = 32'b0;             
    end
    else if(gpr_we && gpr_waddr != 5'd0)
        GPR_diff[gpr_waddr] = gpr_wdata;
    else begin
        for (j = 0; j < 32; j = j + 1)   
            GPR_diff[j] = GPR_diff[j];  
    end
end

function automatic int get_gpr(input int idx);
    return GPR_diff[idx];
endfunction

export "DPI-C" function get_gpr;
integer i;
always @(posedge clk)begin
    if(rst)begin
        for (i = 0; i < 32; i = i + 1)   
            GPR[i] <= 32'b0;             
    end
    else if(gpr_we && gpr_waddr != 5'd0)
        GPR[gpr_waddr] <= gpr_wdata;
end

assign gpr_rdata1 = GPR[gpr_raddr1];
assign gpr_rdata2 = GPR[gpr_raddr2];
// wire [1183 : 0]lut; 
// assign lut = {
//     5'd0 , GPR[0],
//     5'd1 , GPR[1],
//     5'd2 , GPR[2],
//     5'd3 , GPR[3],
//     5'd4 , GPR[4],
//     5'd5 , GPR[5],
//     5'd6 , GPR[6],
//     5'd7 , GPR[7],
//     5'd8 , GPR[8],
//     5'd9 , GPR[9],
//     5'd10, GPR[10],
//     5'd11, GPR[11],
//     5'd12, GPR[12],
//     5'd13, GPR[13],
//     5'd14, GPR[14],
//     5'd15, GPR[15],
//     5'd16, GPR[16],
//     5'd17, GPR[17],
//     5'd18, GPR[18],
//     5'd19, GPR[19],
//     5'd20, GPR[20],
//     5'd21, GPR[21],
//     5'd22, GPR[22],
//     5'd23, GPR[23],
//     5'd24, GPR[24],
//     5'd25, GPR[25],
//     5'd26, GPR[26],
//     5'd27, GPR[27],
//     5'd28, GPR[28],
//     5'd29, GPR[29],
//     5'd30, GPR[30],
//     5'd31, GPR[31]
// };

// MuxKeyInternal gpr_mux1 #(NR_KEY, KEY_LEN, DATA_LEN, 1)  (
//     .out(gpr_rdata1), 
//     .key(gpr_raddr1), 
//     .default_out({DATA_LEN{1'b0}}), 
//     .lut(lut)
// );

// MuxKeyInternal gpr_mux2 #(NR_KEY, KEY_LEN, DATA_LEN, 1)  (
//     .out(gpr_rdata2), 
//     .key(gpr_raddr2), 
//     .default_out({DATA_LEN{1'b0}}), 
//     .lut(lut)
// );

endmodule


// 选择器模板内部实现
// module MuxKeyInternal #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1, HAS_DEFAULT = 0) (
//   output reg [DATA_LEN-1:0] out,
//   input [KEY_LEN-1:0] key,
//   input [DATA_LEN-1:0] default_out,
//   input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
// );

//   localparam PAIR_LEN = KEY_LEN + DATA_LEN;
//   wire [PAIR_LEN-1:0] pair_list [NR_KEY-1:0];
//   wire [KEY_LEN-1:0] key_list [NR_KEY-1:0];
//   wire [DATA_LEN-1:0] data_list [NR_KEY-1:0];

//   genvar n;
//   generate
//     for (n = 0; n < NR_KEY; n = n + 1) begin
//       assign pair_list[n] = lut[PAIR_LEN*(n+1)-1 : PAIR_LEN*n];
//       assign data_list[n] = pair_list[n][DATA_LEN-1:0];
//       assign key_list[n]  = pair_list[n][PAIR_LEN-1:DATA_LEN];
//     end
//   endgenerate

//   reg [DATA_LEN-1 : 0] lut_out;
//   reg hit;
//   integer i;
//   always @(*) begin
//     lut_out = 0;
//     hit = 0;
//     for (i = 0; i < NR_KEY; i = i + 1) begin
//       lut_out = lut_out | ({DATA_LEN{key == key_list[i]}} & data_list[i]);
//       hit = hit | (key == key_list[i]);
//     end
//     if (!HAS_DEFAULT) out = lut_out;
//     else out = (hit ? lut_out : default_out);
//   end
// endmodule
