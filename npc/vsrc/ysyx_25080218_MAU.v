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
    output  [31:0] rdata,
    // output reg     lsu_reqValid
    // input  wire    lsu_respValid
    output reg  [31:0] AWADDR,
    output reg         AWVALID,
    input  wire        AWREADY,
    
    //写数据通道
    output reg  [31:0] WDATA,
    output reg  [3:0]  WSTRB,
    output reg         WVALID,
    input  wire        WREADY,
    
    // 写响应通道
    input  wire [1:0]  BRESP,
    input  wire        BVALID,
    output reg         BREADY,

    output reg [31:0] ARADDR,
    output reg        ARVALID,
    input wire        ARREADY,

    input wire [31:0] RDATA,
    input wire [ 1:0] RRESP,
    input wire        RVALID,
    output reg        RREADY
);
reg  lsu_reqValid;
wire is_mem_op;
wire load_valid;
wire store_valid;
assign load_valid = valid_from_exu && (|load_ctrl);
assign store_valid = valid_from_exu && (|store_ctrl);
assign ready_to_exu = ready_from_wbu && (!is_mem_op || done);
assign valid_to_wbu = valid_from_exu && (!is_mem_op || done);
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

reg [31:0] rdata_r;

// parameter idle = 0;
// parameter busy = 1;
// reg mem_state;
// always @(posedge clk)begin
//   if(rst)begin
//     mem_state <= idle;
//     lsu_reqValid <= 1'b0;
//   end else begin
//     case(mem_state)
//       idle: begin
//         if(is_mem_op)begin
//           mem_state <= busy;
//           lsu_reqValid <= 1'b1;
//         end
//       end
//       busy: begin
//         if(lsu_respValid_r)begin
//           mem_state <= idle;
//           lsu_reqValid <= 1'b0;
//         end
//       end
//     endcase
//   end
// end


assign rdata = load_ctrl[0] ? {{24{rdata_r[7]}},rdata_r[7:0]} :
               load_ctrl[1] ? {{16{rdata_r[15]}},rdata_r[15:0]} :
               load_ctrl[2] ? rdata_r:
               load_ctrl[3] ? {24'b0,rdata_r[7:0]} :
               load_ctrl[4] ? {16'b0,rdata_r[15:0]} : 32'b0;

// always @(posedge clk)begin
//   if(lsu_reqValid)begin
//       if(lsu_respValid && load_valid)
//         rdata_r <= pmem_read(addr);
//   end
//   else begin
//     rdata_r <= 32'b0;
//   end

//   if (wen && lsu_reqValid && lsu_respValid) begin
//       pmem_write(addr, data, wmask);
//   end
// end

// reg lsu_respValid;
// reg lsu_respValid_r;
// reg req_d;
// reg req_dd;
// reg [7:0] resp_cnt;
// parameter MEM_DELAY = 5;
// always @(posedge clk)begin
//   if(rst) begin
//     lsu_respValid <= 1'b0;
//     lsu_respValid_r <= 1'b0;
//   end else begin
//       lsu_respValid <= 1'b0;
//       if (lsu_reqValid) begin
//       if (resp_cnt == MEM_DELAY - 1) begin
//         lsu_respValid <= 1'b1;   // 仅1拍
//         resp_cnt <= 8'd0;
//       end else begin
//         resp_cnt <= resp_cnt + 8'd1;
//       end
//     end else begin
//       resp_cnt <= 8'd0;
//     end

//     lsu_respValid_r <= lsu_respValid;
//   end
// end

parameter S_IDLE = 0;
parameter S_AR   = 1;
parameter S_R    = 2;
parameter S_AW_W = 3;
parameter S_B    = 4;

reg [ 2:0] state;
reg [31:0] araddr_latched;
reg        done;
reg        aw_done;
reg        w_done;
always @(posedge clk) begin
  if(rst)begin
    state <= S_IDLE;
    done <= 1'b0;
    ARVALID <= 1'b0;
    AWVALID  <= 1'b0;
    WVALID  <= 1'b0;
    RREADY  <= 1'b0;
    BREADY  <= 1'b0;
    aw_done<=0; 
    w_done<=0;
  end
  else begin
    case(state)
      S_IDLE:begin
        // 只有当流水线明确往下传递了（前后级成功握手）才把 done 清空
        //if(valid_to_wbu && ready_from_wbu) begin
          done <= 1'b0;
        //end
        // 发起请求的条件：是访存操作，且当前这笔访存还没完成 (!done)
        if(is_mem_op && !done)begin
          if(load_valid)
            state <= S_AR;
          if(store_valid)
            state <= S_AW_W;
        end
      end

      S_AR:begin
        ARVALID <= 1'b1;
        ARADDR <= addr;
        if(ARVALID && ARREADY)begin
          state <= S_R;
          ARVALID <= 1'b0;
          RREADY <= 1'b1;
          araddr_latched <= ARADDR;
        end
      end

      S_R:begin
        if(RREADY && RVALID)begin
          state <= S_IDLE;
          RREADY <= 1'b0;
          rdata_r <= pmem_read(araddr_latched);
          done <= 1'b1;
        end
      end

      S_AW_W:begin
        if(!aw_done)begin
          AWVALID <= 1'b1;
          AWADDR <= addr;
        end
        if(!w_done)begin
          WVALID  <= 1'b1;
          //WSTRB   <= 
          WDATA   <= data;
        end
        if(AWVALID && AWREADY)begin
          aw_done <= 1'b1;
          AWVALID <= 1'b0;
        end
        if(WVALID && WREADY)begin
          w_done <= 1'b1;
          WVALID <= 1'b0;
        end
        if(aw_done && w_done)begin
          aw_done <= 1'b0;
          w_done <= 1'b0;
          state <= S_B;
          // AWVALID <= 1'b0;
          // WVALID  <= 1'b0;
          pmem_write(addr,data,wmask);
        end
      end

      S_B:begin
        BREADY <= 1'b1;
        if(BREADY && BVALID)begin
          BREADY <= 1'b0;
          state <= S_IDLE;
          done <= 1'b1;
        end

      end
    endcase
  end
end

endmodule
