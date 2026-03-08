module ysyx_25080218_IFU(
    input               clk,
    input               rst,
    input               is_jump,
    input [31 : 0]      next_pc_jump,
    input [31 : 0]      branch_pc,
    input               branch_taken,
    input [31 : 0]      next_pc_csr,
    input               is_ecall_mret,
    input               ready,
    output     [31 : 0] npc,
    output reg [31 : 0] pc,
    output reg [31 : 0] inst,
    output reg          valid           
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
        //valid <= 1'b1;
        state <= idle;
    end
    else begin
        if(valid && ready)
            pc <= is_jump ? next_pc_jump : 
                branch_taken ? branch_pc :
                is_ecall_mret ? next_pc_csr:
                next_pc;
        else
            pc <= pc;
    end
end
assign npc = is_jump ? next_pc_jump : 
              branch_taken ? branch_pc :
              is_ecall_mret ? next_pc_csr:
              next_pc;

//assign valid = 1'b1;

always @(posedge clk)begin
    if(ifu_reqValid && ifu_respValid)
        inst <= pmem_read(pc);
    else if(valid)
        inst <= inst;
    else
        inst <= 32'b0;
end

reg state;
reg ifu_reqValid;
reg ifu_respValid;
reg ifu_resqValid_r;
reg ifu_reqReady;
reg ifu_respReady;
reg [7:0] resp_cnt;
parameter MEM_DELAY = 5;
parameter idle = 0;
parameter wait_ready =1;
always @(posedge clk)begin
    case(state)
        idle:begin
            valid <= 1'b0;
            //inst <= pmem_read(pc);
            ifu_reqValid <= 1'b1;
            state <= wait_ready;
        end
        wait_ready:begin
            if(ifu_respValid)begin
                valid <= 1'b1;
                ifu_reqValid <= 1'b0;
            end
            if(valid && ready)begin
                valid <= 1'b0;
                state <= idle;
            end 
        end
    endcase
    ifu_respValid <= 1'b0;
      if (ifu_reqValid) begin
      if (resp_cnt == MEM_DELAY - 1) begin
        ifu_respValid <= 1'b1;   // 仅1拍
        resp_cnt <= 8'd0;
      end else begin
        resp_cnt <= resp_cnt + 8'd1;
      end
    end else begin
      resp_cnt <= 8'd0;
    end
end

endmodule