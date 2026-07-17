module sdram(
  input        clk,
  input        cke,
  input        cs,
  input        ras,
  input        cas,
  input        we,
  input [12:0] a,
  input [ 1:0] ba,
  input [ 1:0] dqm,
  inout [15:0] dq
);

  assign dq = (read_valid) ? 
            { dqm[1] ? 8'hzz : out[15:8],
              dqm[0] ? 8'hzz : out[7:0]  }
            : 16'hz;
  reg [15:0] bank0 [4194304-1:0];
  reg [15:0] bank1 [4194304-1:0];
  reg [15:0] bank2 [4194304-1:0];
  reg [15:0] bank3 [4194304-1:0];

  wire COMMAND_INHIBIT    = cs;
  wire NO_OPERATION       = !cs & ras & cas & we;
  wire ACTIVE             = !cs & !ras & cas & we;
  wire READ               = !cs & ras & !cas & we;
  wire WRITE              = !cs & ras & !cas & !we;
  wire BURST_TERMINATE    = !cs & ras & cas & !we;
  wire LOAD_MODE_REGISTER = !cs & !ras & !cas & !we;
  wire PRECHARGE          = !cs & !ras &  cas & !we;
  wire AUTO_REFRESH       = !cs & !ras & !cas &  we;

  reg [12:0] mode_reg;

  reg [3:0] rst_count;

  always @(posedge clk) begin
    if(cke)begin
      if(LOAD_MODE_REGISTER)
        mode_reg <= a;
    end
  end

  wire [12:0] cas_latency= (mode_reg[6:4] == 3'b001) ? 1 :
                   (mode_reg[6:4] == 3'b010) ? 2 :
                   (mode_reg[6:4] == 3'b011) ? 3 : 0;

  wire [12:0] burst_length = (mode_reg[2:0] == 3'b000) ? 1 :
                            (mode_reg[2:0] == 3'b001) ? 2 :
                            (mode_reg[2:0] == 3'b010) ? 4 :
                            (mode_reg[2:0] == 3'b011) ? 8 : 0;

  reg [3:0] count;
  reg [3:0] state;
  parameter idle = 0;
  parameter active = 1;
  parameter read = 2;
  parameter write = 3;
  parameter read_latency = 4;
  parameter read_latency_1=5;

  reg [1:0] bank_num;
  reg [12:0] row_num [0:3];
  reg [12:0] col_num;
  reg [12:0] burst_count;
  reg [12:0] latency_count;
  reg [15:0] out;
  reg [12:0] write_count;
  reg        read_valid;
  wire [1:0] write_bank = WRITE ? ba : bank_num;

  wire [12:0] write_col =WRITE ? {4'd0, a[8:0]} : col_num;
  initial begin
  mode_reg   = 13'b0;
  state      = idle;
  bank_num   = 2'b0;
  row_num[0] = 13'b0;
  row_num[1] = 13'b0;
  row_num[2] = 13'b0;
  row_num[3] = 13'b0;
  col_num    = 13'b0;
  burst_count  = 13'b0;
  write_count = 13'b0;
  read_valid = 1'b0;
  out        = 16'b0;
  latency_count=13'b0;
end
  always @(posedge clk) begin
    if(cke)begin
      if(ACTIVE)begin
        state <= active;
        bank_num <= ba;
        row_num[ba] <= a;
      end
      if(READ)begin
        state <= read_latency;
        bank_num <= ba;
        col_num <= {4'd0,a[8:0]};
        burst_count <= 0;
        read_valid <= 0;
      end
      else if(WRITE)begin
        state <= write;
        bank_num <= ba;
        col_num <= {4'd0,a[8:0]};
        write_count <= 1;
      end
      else begin
        case (state)
          read_latency:begin
            // state <= read;
            // read_valid <=1;
            if(latency_count+2<cas_latency)begin
              latency_count <= latency_count+1;
            end
            else begin
              state <= read;
              read_valid <=1;
            end
          end
          //read_latency_1: state <= read;
          read : begin
            burst_count <= burst_count + 1;
            latency_count<=0;
            if(burst_count == burst_length-1)begin
              state <= idle;
              burst_count <= 0;
              read_valid <=0;
            end
          end

          write:begin
            if(write_count < burst_length-1)
              write_count <= write_count + 1;
            else begin
              write_count <= 0;
              state <= idle;
            end
          end
        endcase
      end

      

      if(state == write || WRITE)begin
        case (write_bank)
          0: begin 
            if(!dqm[1])begin
              bank0[512*row_num[write_bank]+ write_col+write_count][15:8] <= dq[15:8];
              //$display("addr:%x data:%d",512*row_num+ {4'd0,a[8:0]}+write_count,bank0[512*row_num+ {4'd0,a[8:0]}+write_count][15:8]);
            end
            if(!dqm[0])begin
              bank0[512*row_num[write_bank]+ write_col+write_count][7:0] <= dq[7:0];
              //$display("addr:%x data:%d",512*row_num+ {4'd0,a[8:0]}+write_count,bank0[512*row_num+ {4'd0,a[8:0]}+write_count][7:0]);
            end
            //$display("write addr:%x data:%x",512*row_num+ {4'd0,a[8:0]}+write_count,dq);
          end
          1: begin 
            if(!dqm[1])begin
              bank1[512*row_num[write_bank]+ write_col+write_count][15:8] <= dq[15:8];
              //$display("addr:%d data:%d",write_count,dq[15:8]);
            end
            if(!dqm[0])begin
              bank1[512*row_num[write_bank]+ write_col+write_count][7:0] <= dq[7:0];
              //$display("addr:%d data:%d",write_count,dq[7:0]);
            end
          end
          2: begin 
            if(!dqm[1])begin
              bank2[512*row_num[write_bank]+ write_col+write_count][15:8] <= dq[15:8];
              //$display("addr:%d data:%d",write_count,dq[15:8]);
            end
            if(!dqm[0])begin
              bank2[512*row_num[write_bank]+ write_col+write_count][7:0] <= dq[7:0];
              //$display("addr:%d data:%d",write_count,dq[7:0]);
            end
          end
          3: begin
            if(!dqm[1])begin
              bank3[512*row_num[write_bank]+ write_col+write_count][15:8] <= dq[15:8];
              //$display("addr:%d data:%d",write_count,dq[15:8]);
            end
            if(!dqm[0])begin
              bank3[512*row_num[write_bank]+ write_col+write_count][7:0] <= dq[7:0];
              //$display("addr:%d data:%d",write_count,dq[7:0]);
            end
          end
        endcase
      end

      
    end
  end

  always @(*) begin
    out = 16'b0;
    if(read_valid) begin
      case(bank_num)
        0: begin 
          out = bank0[512*row_num[bank_num]+col_num+burst_count];//latency不对
          //$display("read addr:%x data:%x",512*row_num+col_num+burst_count,bank0[512*row_num+col_num+burst_count]);
        end
        1: out = bank1[512*row_num[bank_num]+col_num+burst_count];
        2: out = bank2[512*row_num[bank_num]+col_num+burst_count];
        3: out = bank3[512*row_num[bank_num]+col_num+burst_count];//页面读取回环未完成；连续read burst截断未处理
      endcase
    end
  end

endmodule
