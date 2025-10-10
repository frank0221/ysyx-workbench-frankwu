import "DPI-C" function void halt();

module ysyx_25080218_IDU(
    input  clk,
    input  rst,
    input  [31 : 0] pc,
    input  [31 : 0] inst,
    input  [31 : 0] gpr_wdata,
    input  [ 4 : 0] gpr_waddr,
    input           gpr_we,
    output [11 : 0] imm,
    output [31 : 0] alu_src1,
    output [31 : 0] alu_src2,
    output [11 : 0] alu_op,
    output          rd_we,
    output [ 4 : 0] rd,
    output          is_jump,
    output [31 : 0] next_pc_jump
);

wire [ 6 : 0] opcode;
wire [ 4 : 0] src1;
wire [ 4 : 0] src2;
wire [31 : 0] rs1;
wire [31 : 0] rs2;
//wire [ 4 : 0] rd;
wire [ 2 : 0] fun3;
wire [ 6 : 0] fun7;

assign opcode = inst[ 6 :  0];
assign src1   = inst[19 : 15];
//assign src2   = inst[24 : 20];
assign rd     = inst[11 :  7];
assign fun3   = inst[14 : 12];
assign fun7   = inst[31 : 25];

wire [31 : 0] imm_J;
wire [31 : 0] imm_I;
wire [31 : 0] imm_U;

assign imm_J  = {{12{inst[31]}},inst[19 : 12],inst[20],inst[30 : 21],1'b0};
assign imm_I    = {{20{inst[31]}},inst[31 : 20]};
assign imm_U    = inst[31 : 12] << 12;

wire          imm_is_I;
wire          imm_is_J;
// wire          imm_is_B;
// wire          imm_is_S;
wire          imm_is_U;
wire          imm_is_R;

assign imm_is_I = (opcode == 7'b0000011 || opcode == 7'b0010011 ||
                   opcode == 7'b1100111) ? 1'b1 : 1'b0;
assign imm_is_J = (opcode == 7'b1101111) ? 1'b1 : 1'b0;
// assign imm_is_B = (opcode == 7'b1100011) ? 1'b1 : 1'b0;
// assign imm_is_S = (opcode == 7'b0100011) ? 1'b1 : 1'b0;
assign imm_is_U = (opcode == 7'b0110111 || opcode == 7'b0010111) ? 1'b1 : 1'b0;
assign imm_is_R = (opcode == 7'b0110011) ? 1'b1 : 1'b0;

wire          is_break;

wire          is_auipc;
wire          is_lui;
wire          is_jal;
wire          is_jalr;
      
assign is_auipc = (opcode == 7'b0010111) ? 1'b1 : 1'b0;
assign is_lui   = (opcode == 7'b0110111) ? 1'b1 : 1'b0;
assign is_jalr  = (opcode == 7'b1100111) ? 1'b1 : 1'b0;
assign is_jal   = (opcode == 7'b1101111) ? 1'b1 : 1'b0;
assign is_jump  = is_jal || is_jalr;
assign next_pc_jump = is_jal ? pc  + imm_J :
                      is_jalr? rs1 + imm_I :32'b0;


assign alu_src1 = imm_is_I ? rs1   :
                  is_auipc ? pc    : 
                  is_lui   ? 32'b0 :
                  is_jump  ? pc    :32'b0;


assign alu_src2 = imm_is_I ? imm_I :
                  imm_is_U ? imm_U :
                  is_jump  ? 32'd4 : 32'b0;

assign alu_op[0]= ((opcode == 7'b0110011 && fun3 == 3'b0 && fun7 ==7'b0) || (opcode == 7'b0010111) || ((opcode == 7'b0010011) && fun3 ==3'b0 ) || (is_jump)) ? 1'b1 : 1'b0; //加法
assign alu_op[1]= (opcode == 7'b0110111) ? 1'b1 : 1'b0;
                  
assign rd_we    = (imm_is_R || imm_is_U || 
                   imm_is_I || is_jump) ? 1'b1 : 1'b0;

assign is_break = (inst == 32'b00000000000100000000000001110011) ? 1'b1 : 1'b0;

always @(*)begin
    if(is_break)
        halt();
end

ysyx_25080218_GPR ysyx_25080218_GPR_init(
    .clk         (clk),
    .rst         (rst),
    .gpr_waddr   (gpr_waddr),
    .gpr_wdata   (gpr_wdata),
    .gpr_we      (gpr_we),
    .gpr_raddr1  (src1),
    .gpr_raddr2  (src2),
    .gpr_rdata1  (rs1),
    .gpr_rdata2  (rs2)
);

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
// GPR[0] = 0; 

function automatic int get_gpr(input int idx);
    return GPR[idx];
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
