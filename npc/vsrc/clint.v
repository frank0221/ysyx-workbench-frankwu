module clint(
    input             clk,
    input             rst,
    input      [31:0] s_awaddr,
    input             s_awvalid,
    output reg        s_awready,
    
    //写数据
    input      [31:0] s_wdata,
    input      [ 3:0] s_wstrb,
    input             s_wvalid,
    output reg        s_wready,
    
    // 写响道
    output reg [ 1:0] s_bresp,
    output reg        s_bvalid,
    input             s_bready,

    input      [31:0] s_araddr,
    input             s_arvalid,
    output reg        s_arready,

    output reg  [31:0] s_rdata,
    output reg  [ 1:0] s_rresp,
    output reg         s_rvalid,
    input              s_rready
);
reg s_busy;
reg [31:0] s_araddr_r;
//assign s_arready = !s_busy;
//assign s_rvalid  = !s_busy;
//assign s_bvalid  = !s_busy;
always @(*) begin
    s_awready = 1'b0 ;
    s_wready  = 1'b0 ;
    s_bresp   = 2'b00;
    s_bvalid  = 1'b0 ;
    //s_araddr  = 32'b0;
    //s_arvalid = 1'b0 ;
    //s_rdata   = 32'b0; 
    //s_rresp   = 2'b00;
    //s_rvalid  = 1'b0 ;
    //s_arready = !s_busy;
end

always @(posedge clk)begin
    if(rst)begin
        s_busy   <= 1'b0;
        s_rvalid <= 1'b0;
        s_rresp  <= 2'b00;
        s_rdata  <= 32'd0;
        s_arready<= 1'b0;
    end
    else begin
        s_arready <= !s_busy;
        if(!s_busy)begin
            if(s_arvalid && s_arready)begin
                s_rvalid   <= 1'b1;
                s_rresp    <= 2'b00;
                s_busy     <= 1'b1;
                case(s_araddr)
                    32'h02000000: s_rdata <= mtime[31: 0];
                    32'h02000004: s_rdata <= mtime[63:32];
                    default:      s_rdata <= 32'd0;
                endcase
            end
        end
        if(s_rvalid && s_rready)begin
            s_rvalid <= 1'b0;
            s_busy   <= 1'b0;
        end
    end
end

reg [63:0] mtime;

always @(posedge clk) begin
    if(rst)begin
        mtime <= 64'd0;
    end
    else begin
        mtime <= mtime + 64'd1;
        // if(mtime == 64'd18446744073709551615)begin
        //     mtime <= 64'd0;
        // end
    end
end




endmodule
