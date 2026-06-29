module ps2_top_apb(
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

  input         ps2_clk,
  input         ps2_data
);

assign in_pready = in_paddr == 32'h10011000 && in_penable && in_psel;
assign in_prdata = in_paddr == 32'h10011000 && in_penable && in_psel ? {{24{1'b0}},fifo[r_ptr]} : 32'd0;

reg [2:0] ps2_sync;
always @(clock)begin
  ps2_sync <= {ps2_sync[1:0],ps2_clk};
end

wire ps2_clk_sync = ps2_sync[2] & !ps2_sync[1];

reg [7:0] fifo [0:7];
reg [9:0] buffer;
reg [3:0] ptr=0;
reg [2:0] w_ptr=0;
reg [2:0] r_ptr=0;

always @(posedge clock) begin
  if(ps2_clk_sync)begin
    if(ptr <= 9)begin
     buffer[ptr] <= ps2_data;
     ptr <= ptr + 1;
    end
    else begin
      //if(buffer[0] == 0 && buffer[9]== |buffer[8:1] && ps2_data==1)begin
      if(buffer[0] == 0 && ps2_data==1)begin
        ptr <= 0;
        w_ptr <= w_ptr + 1;
        fifo[w_ptr] <= buffer[8:1];
      end
    end
  end
end

always @(posedge clock) begin
  if(in_penable && in_psel)begin
    // if(w_ptr == r_ptr + 1)
    //   r_ptr <= r_ptr;
    // else 
      r_ptr <= r_ptr + 1;
      fifo[r_ptr] <= 0;
  end
end

endmodule
