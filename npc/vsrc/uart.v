module uart(
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

reg aw_holding;
reg w_holding;
reg [31:0] awaddr_hold;
reg [31:0] wdata_hold;
reg [ 3:0] wstrb_hold;

always @(*)begin
    s_awready = !aw_holding && !s_bvalid;
    s_wready  = !w_holding  && !s_bvalid;
    s_arready = !s_rvalid;
end

always @(posedge clk)begin
    if(rst)begin
        aw_holding  <= 1'b0;
        w_holding   <= 1'b0;
        awaddr_hold <= 32'd0;
        wdata_hold  <= 32'd0;
        wstrb_hold  <= 4'd0;
        s_bvalid    <= 1'b0;
        s_bresp     <= 2'b00;

        s_rvalid <= 1'b0;
        s_rresp  <= 2'b00;
        s_rdata  <= 32'd0;
    end
    else begin

        if(s_awready && s_awvalid)begin
            awaddr_hold <= s_awaddr;
            aw_holding   <= 1'b1;
        end

        if(s_wready && s_wvalid)begin
            wdata_hold <= s_wdata;
            wstrb_hold <= s_wstrb;
            w_holding   <= 1'b1;
        end

        if(!s_bvalid && aw_holding && w_holding)begin
            if(awaddr_hold == 32'ha00003F8)
                $write("%c",wdata_hold[7:0]);
            aw_holding <= 1'b0;
            w_holding  <= 1'b0;

            s_bvalid <= 1'b1;
            s_bresp  <= 2'b00;
        end

        if(s_bvalid && s_bready)begin
            s_bvalid <= 1'b0;
        end
        if(s_arvalid && s_arready)begin
            s_rdata <= 32'b0;
            s_rresp <= 2'b00;
            s_rvalid<= 1'b1;
        end

        if(s_rvalid && s_rready)begin
            s_rvalid <= 1'b0;
        end
    end
end

endmodule