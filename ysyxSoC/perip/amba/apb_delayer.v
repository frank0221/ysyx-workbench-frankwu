module apb_delayer(
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,
  input  [3:0]  in_pstrb,
  output        in_pready,
  output [31:0] in_prdata,
  output        in_pslverr,

  output [31:0] out_paddr,
  output        out_psel,
  output        out_penable,
  output [2:0]  out_pprot,
  output        out_pwrite,
  output [31:0] out_pwdata,
  output [3:0]  out_pstrb,
  input         out_pready,
  input  [31:0] out_prdata,
  input         out_pslverr
);

  assign out_paddr   = addr;
  assign out_psel    = sel;
  assign out_penable = enable;
  assign out_pprot   = in_pprot;
  assign out_pwrite  = in_pwrite;
  assign out_pwdata  = in_pwdata;
  assign out_pstrb   = in_pstrb;

  assign in_pready   = ready;
  assign in_prdata   = data;
  assign in_pslverr  = slverr;

  reg [10:0] counter;
  reg        start;
  reg [31:0] data;
  reg        ready;
  reg        slverr;
  reg        sel;
  reg        enable;
  reg [31:0] addr;
  reg [2:0]  state;
  parameter idle = 0;
  parameter setup = 1;
  parameter access = 2;
  parameter wait1 = 3;
  parameter wait2 = 4;
  always @(posedge clock) begin
    if(reset)begin
      counter <= 0;
      start <= 0;
      data <= 0;
      ready <= 0;
      slverr <= 0;
      sel <= 0;
      enable <= 0;
      state <= idle;
    end
    else begin
      case(state)
        idle:begin
          ready <= 0;
          if(in_psel && !in_penable)begin
             state <= access;
             sel <= in_psel;
             enable <= in_penable;
             addr <= in_paddr;
          end
        end

        access:begin
          if(in_psel && in_penable)begin
             state <= setup;
             sel <= in_psel;
             enable <= in_penable;
          end
        end

        setup:begin
          counter <= counter + 55;
          if(out_pready)begin
            start <= 1;
            data <= out_prdata;
            slverr <= out_pslverr;
            sel <= 0;
            enable <= 0;
            state <= wait1;
            //addr <= 0;
          end
        end

        wait1:begin
          if(counter>60)begin
            counter <= counter - 10;
          end
          else begin
            ready <= 1;
            start <= 0;
            counter <= 0;
            state <= idle;
          end
        end
      endcase
    end
  end

endmodule
