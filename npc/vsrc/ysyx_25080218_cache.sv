import "DPI-C" function void cache_total();
module Cache (
    input         clock,
    input         reset,
    output reg       out_arvalid,
    input  reg       out_arready,
    output reg [31:0] out_araddr,

    input  reg       in_arvalid,
    output reg       in_arready,
    input  reg [31:0] in_araddr,

    input  reg       in_rready,
    output reg       in_rvalid,
    output reg [31:0] in_rdata,
    output reg [ 1:0] in_rresp,
    
    output reg       out_rready,
    input  reg       out_rvalid,
    input  reg [31:0] out_rdata,
    input  reg [ 1:0] out_rresp
);
parameter DAT_LEN = 2**BLOCK_SIZE *8;
parameter TAG_LEN = 31-(BLOCK_SIZE+CACHE_SIZE)+1;
parameter CACHE_SIZE = 4;
parameter BLOCK_SIZE = 2;
reg [DAT_LEN:0] cache_data [0:15];
reg [TAG_LEN-1:0] cache_tag [0:15];

reg [DAT_LEN-1:0] data;

wire [CACHE_SIZE-1:0] index = addr[BLOCK_SIZE+CACHE_SIZE-1:BLOCK_SIZE];
wire [32-BLOCK_SIZE-CACHE_SIZE-1:0] tag =addr[32-1:BLOCK_SIZE+CACHE_SIZE];

//wire hit = cache_tag[index] == tag && cache_data[DAT_LEN]==1 ? 1 : 0;
reg [10:0] cache_hit;
//assign in_rdata = hit ? data: out_rdata;

reg [3:0] state;
parameter idle = 0;
parameter AR = 1;
parameter R = 2;

final begin
    $display("========== CACHE STAT ==========");
    $fflush();
    $display("Cache hit = %0d", cache_hit);
    $fflush();
    $display("================================");
    $fflush();
end

reg [DAT_LEN-1:0] addr;
integer  i;
always @(posedge clock) begin
    if(reset)begin
        state <= idle;
        for(i=0; i < 16; i=i+1)begin
            cache_data[i] <= 0;
            cache_tag[i] <= 0;
        end

    end
    else begin
        case(state)
            idle:begin
                in_rdata <= 0;
                in_rvalid <= 0;
                out_rready <= 0;
                if(in_arvalid)begin
                    state <= AR;
                    addr <= in_araddr;
                    //out_arvalid <= 1;
                end
            end
            AR:begin
                //in_arready <= 0;
                if(cache_tag[index] != tag | cache_data[index][DAT_LEN]!=1)begin
                    out_arvalid <= 1;
                    out_araddr <= addr;
                    if(out_arvalid && out_arready)begin
                        state <= R;
                        out_arvalid <= 0;
                        in_arready <= 1;
                        out_rready <= 1;
                    end
                end
                else begin
                    state <= R;
                    in_arready <= 1;
                end
            end

            R:begin
                in_arready <= 0;
                if(in_rready)begin
                    if(cache_tag[index] == tag && cache_data[index][DAT_LEN]==1)begin
                        in_rdata <= cache_data[index][DAT_LEN-1:0];
                        in_rvalid <= 1;
                        in_rresp <= 0;
                        state <= idle;
                        cache_total();
                        cache_hit <= cache_hit+1;
                        //$display("cache hit: %d",cache_hit);
                    end
                    else begin
                        out_araddr <= 0;
                        if(out_rready && out_rvalid)begin
                            in_rdata <= out_rdata;
                            in_rvalid <= 1;
                            in_rresp <= 0;
                            cache_data[index][DAT_LEN-1:0] <= out_rdata;
                            cache_data[index][DAT_LEN] <= 1;
                            cache_tag[index] <= tag;
                            state <= idle;
                            out_rready <= 0;
                        end

                    end
                    
                end
            end
        endcase
    end
end
    
endmodule