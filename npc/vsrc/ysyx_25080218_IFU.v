module ysyx_25080218_IFU(
    input               clk,
    input               rst,
    input               is_jump,
    input [31 : 0]      next_pc_jump,
    input [31 : 0]      branch_pc,
    input               branch_taken,
    input [31 : 0]      next_pc_csr,
    input               is_ecall_mret,
//    input               ready,
    output     [31 : 0] npc,
    output reg [31 : 0] pc,
    //output     [31 : 0] next_pc,
    output     [31 : 0] inst
//    output              valid           
);
import "DPI-C" function int pmem_read(input int raddr);
wire   [31 : 0]next_pc;
assign next_pc = pc + 32'h4;
reg valid_rst;
always @(posedge clk) begin
    if(rst)begin
        pc <= 32'h80000000;
        valid_rst <= 1'b0;
    end
    else if(valid_rst == 1'b0)begin
        pc <= 32'h80000000;
        valid_rst <= 1'b1;
    end
    else begin
//        if(valid && ready)
            pc <= is_jump ? next_pc_jump : 
                branch_taken ? branch_pc :
                is_ecall_mret ? next_pc_csr:
                next_pc;
        // else
        //     pc <= pc;
    end
end
assign npc = is_jump ? next_pc_jump : 
              branch_taken ? branch_pc :
              is_ecall_mret ? next_pc_csr:
              next_pc;

parameter idle       = 0;
parameter wait_ready = 1;

reg [31 : 0]inst_r;
always @(posedge clk)begin
    inst_r <= inst;
end

wire ready;
wire valid;
assign valid = (inst_r != inst) ? 1'b1 : 1'b0;

reg bus_state;
always @(posedge clk)begin
    if(rst)begin
        bus_state <= 1'b0;
    end else if(bus_state == idle)begin
        if(valid)
            bus_state <= wait_ready;
        else
            bus_state <= idle;
    end else begin
        if(ready)
            bus_state <= idle;
        else
            bus_state <= wait_ready;
    end
end

assign  inst = pmem_read(pc);
endmodule
