module ysyx_25080218_IFU(
    input               clk,
    input               rst,
    input               is_jump,
    input [31 : 0]      next_pc_jump,
    input [31 : 0]      branch_pc,
    input               branch_taken,
    input [31 : 0]      next_pc_csr,
    input               is_ecall_mret,
    output     [31 : 0] npc,
    output reg [31 : 0] pc,
    //output     [31 : 0] next_pc,
    output     [31 : 0] inst           
);
import "DPI-C" function int pmem_read(input int raddr);
wire   [31 : 0]next_pc;
assign next_pc = pc + 32'h4;
reg valid;
always @(posedge clk) begin
    if(rst)begin
        pc <= 32'h80000000;
        valid <= 1'b0;
    end
    else if(valid == 1'b0)begin
        pc <= 32'h80000000;
        valid <= 1'b1;
    end
    else 
        pc <= is_jump ? next_pc_jump : 
              branch_taken ? branch_pc :
              is_ecall_mret ? next_pc_csr:
              next_pc;
    
end
assign npc = is_jump ? next_pc_jump : 
              branch_taken ? branch_pc :
              is_ecall_mret ? next_pc_csr:
              next_pc;
assign  inst = pmem_read(pc);
endmodule
