import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(
  input int waddr, input int wdata, input byte wmask);

module ysyx_25080218_MAU(
    input  clk,
    input  rst,
    input  [31:0] data,
    input  [31:0] addr,
    input         wen ,
    input         valid_from_exu,
    output        ready_to_exu,
    output        valid_to_wbu,
    input         ready_from_wbu,
    
    input  [ 4: 0] load_ctrl,
    input  [ 2: 0] store_ctrl,
    output  [31:0] rdata
    //output reg     lsu_reqValid
    // input  wire    lsu_respValid
);
reg  lsu_reqValid;
wire is_mem_op;
wire load_valid;
wire store_valid;
assign load_valid = valid_from_exu && (|load_ctrl);
assign store_valid = valid_from_exu && (|store_ctrl);
assign ready_to_exu = ready_from_wbu && (!is_mem_op || lsu_respValid_r);
assign valid_to_wbu = valid_from_exu && (!is_mem_op || lsu_respValid_r);
assign is_mem_op = store_valid || load_valid;

wire [7:0] wmask;
assign wmask = store_ctrl[0]&&(addr[1:0] == 2'b00) ? 8'd1 :
               store_ctrl[0]&&(addr[1:0] == 2'b01) ? 8'd2 :
               store_ctrl[0]&&(addr[1:0] == 2'b10) ? 8'd4 :
               store_ctrl[0]&&(addr[1:0] == 2'b11) ? 8'd8 :
               store_ctrl[1]&&(addr[1:0] == 2'b00) ? 8'd3 :
               store_ctrl[1]&&(addr[1:0] == 2'b10) ? 8'd12 :
               store_ctrl[2] ? 8'd15 :
               8'd0;
//load_ctrl= {is_lhu,is_lbu,is_lw,is_lh,is_lb}
reg [31:0] rdata_r;

parameter idle = 0;
parameter busy = 1;
reg mem_state;
always @(posedge clk)begin
  if(rst)begin
    mem_state <= idle;
    lsu_reqValid <= 1'b0;
  end else begin
    case(mem_state)
      idle: begin
        if(is_mem_op)begin
          mem_state <= busy;
          lsu_reqValid <= 1'b1;
        end
      end
      busy: begin
        if(lsu_respValid_r)begin
          mem_state <= idle;
          lsu_reqValid <= 1'b0;
        end
      end
    endcase
  end
end


assign rdata = load_ctrl[0] ? {{24{rdata_r[7]}},rdata_r[7:0]} :
               load_ctrl[1] ? {{16{rdata_r[15]}},rdata_r[15:0]} :
               load_ctrl[2] ? rdata_r:
               load_ctrl[3] ? {24'b0,rdata_r[7:0]} :
               load_ctrl[4] ? {16'b0,rdata_r[15:0]} : 32'b0;

always @(posedge clk)begin
  if(lsu_reqValid)begin
      if(lsu_respValid && load_valid)
        rdata_r <= pmem_read(addr);
  end
  else begin
    rdata_r <= 32'b0;
  end

  if (wen && lsu_reqValid && lsu_respValid) begin
      pmem_write(addr, data, wmask);
  end
end

reg lsu_respValid;
reg lsu_respValid_r;
reg req_d;
reg req_dd;
reg [7:0] resp_cnt;
parameter MEM_DELAY = 5;
always @(posedge clk)begin
  if(rst) begin
    lsu_respValid <= 1'b0;
    lsu_respValid_r <= 1'b0;
  end else begin
      lsu_respValid <= 1'b0;
      if (lsu_reqValid) begin
      if (resp_cnt == MEM_DELAY - 1) begin
        lsu_respValid <= 1'b1;   // 仅1拍
        resp_cnt <= 8'd0;
      end else begin
        resp_cnt <= resp_cnt + 8'd1;
      end
    end else begin
      resp_cnt <= 8'd0;
    end

    lsu_respValid_r <= lsu_respValid;
  end
end
endmodule
