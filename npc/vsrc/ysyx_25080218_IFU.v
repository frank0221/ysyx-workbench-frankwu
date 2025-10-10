module ysyx_25080218_IFU(
    input               clk,
    input               rst,
    input               is_jump,
    input [31 : 0]      next_pc_jump,
    output reg [31 : 0] pc
);

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
              next_pc;
    
end


endmodule
