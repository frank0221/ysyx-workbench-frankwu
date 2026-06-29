module psram(
  input sck,
  input ce_n,
  inout [3:0] dio
);

wire [3:0] din;
wire [3:0] dout;
wire       douten;

assign dio = douten ? dout : 4'bz;
assign din = dio;

wire [7:0] QPI_COUNT  = 7;
wire [7:0] CMD_COUNT  = 1;
wire [7:0] ADDR_COUNT = 6;
wire [7:0] WAIT_COUNT = 6;
wire [7:0] DATA_COUNT = 8;
reg [7:0] count;
reg [7:0] cmd;
reg [7:0] qpi_cmd;
reg       qpi_en;

reg [23:0] addr;
reg        addr_done;
reg        cmd_done;

reg [7:0] data;

assign douten = (cmd == 8'heb && (count > (CMD_COUNT + ADDR_COUNT))) ? 1'b1 : 1'b0;

reg state;
localparam WORK = 1'b1;
localparam IDLE = 1'b0;

always @(posedge sck or posedge ce_n) begin
  if(!ce_n)begin
    // if(sck) state <= WORK;
    // if(state == WORK)
    count <= count + 1;

    if(!qpi_en) begin
      if(count <= QPI_COUNT)
        qpi_cmd <= {qpi_cmd[6:0],din[0]};

      if(count == QPI_COUNT)
        qpi_en <= 1;
    end
    else if(qpi_cmd == 8'h35 && qpi_en)begin
      if(count <= CMD_COUNT)
        cmd <= {cmd[3:0],din};

      if(count == CMD_COUNT)
        cmd_done <= 1;

      if(cmd == 8'heb && cmd_done)begin
        //cmd_done <= 0;
        //douten <= 1'b0;

        if(count > CMD_COUNT && count <= (CMD_COUNT + ADDR_COUNT))begin
          addr <= {addr[19:0],din[3:0]};
          //$write("read addr: %h\n",addr);
        end

        if(count > (CMD_COUNT+1) && count <= (CMD_COUNT + ADDR_COUNT+1))begin
          //$write("read addr: %h\n",addr);
        end

        if((count > (CMD_COUNT + ADDR_COUNT)))begin
          //$write("read data: %h douten: %d\n",dout,douten);
        end

      end

      if(cmd == 8'h38 && cmd_done)begin
        
        if(count > (CMD_COUNT) && count <= (CMD_COUNT + ADDR_COUNT))begin
          addr <= {addr[19:0],din[3:0]};
          //$write("write addr: %h\n",addr);
        end

        if(count > (CMD_COUNT+1) && count <= (CMD_COUNT + ADDR_COUNT+1))begin
          //$write("write addr: %h\n",addr);
        end

        if((count > (CMD_COUNT + ADDR_COUNT)))begin
          data <= {data[3:0],din};
          if(count == 9)begin 
            mem[addr] <= {data[3:0], din}; 
            //$write("write data: %h\n",{data[3:0], din});
          end else if(count == 11)begin 
            mem[addr+1] <= {data[3:0], din}; 
            //$write("write data: %h\n",{data[3:0], din});
          end else if(count == 13)begin 
            mem[addr+2] <= {data[3:0], din}; 
            //$write("write data: %h\n",{data[3:0], din});
          end else if(count == 15)begin 
              mem[addr+3] <= {data[3:0], din}; 
              //$write("write data: %h\n",{data[3:0], din});
          end
        end
      end
    end
  end
  else begin
    state <= IDLE;
    cmd_done <= 0;
    count <= 8'd0;
    cmd <= 8'd0;
    addr <= 24'd0;
    data <= 8'd0;
  end
end

assign dout = (count == 21-6) ? mem[addr][7:4] :
              (count == 22-6) ? mem[addr][3:0] :
              (count == 23-6) ? mem[addr+1][7:4] :
              (count == 24-6) ? mem[addr+1][3:0] :
              (count == 25-6) ? mem[addr+2][7:4] :
              (count == 26-6) ? mem[addr+2][3:0] :
              (count == 27-6) ? mem[addr+3][7:4] :
              (count == 28-6) ? mem[addr+3][3:0] : 4'd0;

reg [7:0] mem [2**24-1:0];

endmodule
