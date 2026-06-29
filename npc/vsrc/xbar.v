//import "DPI-C" function int pmem_read(input int raddr);
//`define SLAVE2_EN 
module XBAR(
    input           clk,
    input           rst,

    input      [31:0] m1_awaddr,
    input             m1_awvalid,
    output reg        m1_awready,
    
    //写数据通道
    input      [31:0] m1_wdata,
    input      [ 3:0] m1_wstrb,
    input             m1_wvalid,
    output reg        m1_wready,
    
    // 写响应通道
    output reg [ 1:0] m1_bresp,
    output reg        m1_bvalid,
    input             m1_bready,

    input      [31:0] m1_araddr,
    input             m1_arvalid,
    output reg        m1_arready,

    output reg [31:0] m1_rdata,
    output reg [ 1:0] m1_rresp,
    output reg        m1_rvalid,
    input             m1_rready,

    input      [31:0] m0_awaddr,
    input             m0_awvalid,
    output reg        m0_awready,
    
    //写数据通道
    input      [31:0] m0_wdata,
    input      [ 3:0] m0_wstrb,
    input             m0_wvalid,
    output reg        m0_wready,
    
    // 写响应通道
    output reg [ 1:0] m0_bresp,
    output reg        m0_bvalid,
    input             m0_bready,

    input      [31:0] m0_araddr,
    input             m0_arvalid,
    output reg        m0_arready,

    output reg [31:0] m0_rdata,
    output reg [ 1:0] m0_rresp,
    output reg        m0_rvalid,
    input             m0_rready,

    output reg [31:0] s0_awaddr,
    output reg        s0_awvalid,
    input             s0_awready,
    
    //写数据
    output reg [31:0] s0_wdata,
    output reg [ 3:0] s0_wstrb,
    output reg        s0_wvalid,
    input             s0_wready,
    
    // 写响道
    input      [ 1:0] s0_bresp,
    input             s0_bvalid,
    output reg        s0_bready,

    output reg [31:0] s0_araddr,
    output reg        s0_arvalid,
    input             s0_arready,

    input      [31:0] s0_rdata,
    input      [ 1:0] s0_rresp,
    input             s0_rvalid,
    output reg        s0_rready,

`ifdef SLAVE2_EN
    output reg [31:0] s2_awaddr,
    output reg        s2_awvalid,
    input             s2_awready,
    
    //写数据
    output reg [31:0] s2_wdata,
    output reg [ 3:0] s2_wstrb,
    output reg        s2_wvalid,
    input             s2_wready,
    
    // 写响道
    input      [ 1:0] s2_bresp,
    input             s2_bvalid,
    output reg        s2_bready,

    output reg [31:0] s2_araddr,
    output reg        s2_arvalid,
    input             s2_arready,

    input      [31:0] s2_rdata,
    input      [ 1:0] s2_rresp,
    input             s2_rvalid,
    output reg        s2_rready,
`endif

    output reg [31:0] s1_awaddr,
    output reg        s1_awvalid,
    input             s1_awready,
    
    //写数据
    output reg [31:0] s1_wdata,
    output reg [ 3:0] s1_wstrb,
    output reg        s1_wvalid,
    input             s1_wready,
    
    // 写响道
    input      [ 1:0] s1_bresp,
    input             s1_bvalid,
    output reg        s1_bready,

    output reg [31:0] s1_araddr,
    output reg        s1_arvalid,
    input             s1_arready,

    input      [31:0] s1_rdata,
    input      [ 1:0] s1_rresp,
    input             s1_rvalid,
    output reg        s1_rready
);

wire m0_r_s0;
wire m0_r_s1;
wire m1_r_s0;
wire m1_r_s1;
`ifdef SLAVE2_EN
wire m1_r_s2;
`endif

assign m0_r_s0 = 1;
assign m0_r_s1 = 0;
assign m1_r_s0 = !m1_r_s1;
assign m1_r_s1 = (m1_araddr[31:16] == 16'h0200);
`ifdef SLAVE2_EN
assign m1_r_s2 = (m1_araddr[31: 4] == 28'ha000004);
`endif 

wire m0_rreq_s0;
wire m0_rreq_s1;
wire m1_rreq_s0;
wire m1_rreq_s1;
`ifdef SLAVE2_EN 
wire m1_rreq_s2;
`endif

assign m0_rreq_s0 = (m0_arvalid && m0_r_s0);
assign m0_rreq_s1 = (m0_arvalid && m0_r_s1);
assign m1_rreq_s0 = (m1_arvalid && m1_r_s0);
assign m1_rreq_s1 = (m1_arvalid && m1_r_s1);
`ifdef SLAVE2_EN
assign m1_rreq_s2 = (m1_arvalid && m1_r_s2);
`endif

wire m0_w_s0;
wire m0_w_s1;
wire m1_w_s0;
wire m1_w_s1;
`ifdef SLAVE2_EN
wire m1_w_s2;
`endif



assign m1_w_s0 = !m1_w_s1;
assign m1_w_s1 = (m1_awaddr[31:16] == 16'h0200);
`ifdef SLAVE2_EN
assign m1_w_s2 = (m1_awaddr[31: 4] == 28'ha000004);
`endif

reg s0_r_owner;
reg s0_r_busy;
reg s1_r_owner;
reg s1_r_busy;
reg s0_w_busy;
reg s1_w_busy;

`ifdef SLAVE2_EN
reg s2_w_busy;
reg s2_r_busy;
reg s2_r_owner;
`endif

always @(posedge clk or posedge rst)begin
    if(rst)begin
        s0_r_owner <= 1'b0;
        s0_r_busy  <= 1'b0;
        s1_r_owner <= 1'b0;
        s1_r_busy  <= 1'b0;
        s0_w_busy  <= 1'b0;
        s1_w_busy  <= 1'b0;

`ifdef SLAVE2_EN
        s2_w_busy  <= 1'b0;
        s2_r_owner <= 1'b0;
        s2_r_busy  <= 1'b0;
`endif
        
    end
    else begin
        if(!s0_r_busy)begin
            if(m0_r_s0 && m0_arvalid && m0_arready)begin
                s0_r_busy <= 1'b1;
                s0_r_owner <= 1'b0;
            end
            else if(m1_r_s0 && m1_arvalid && m1_arready)begin
                s0_r_busy <= 1'b1;
                s0_r_owner <= 1'b1;
            end
        end

        if(!s1_r_busy)begin
            if(m0_r_s1 && m0_arvalid && m0_arready)begin
                s1_r_busy <= 1'b1;
                s1_r_owner <= 1'b0;
            end
            else if(m1_r_s1 && m1_arvalid && m1_arready)begin
                s1_r_busy <= 1'b1;
                s1_r_owner <= 1'b1;
            end
        end

`ifdef SLAVE2_EN
        if(!s2_r_busy)begin
            if(m1_r_s2 && m1_arvalid && m1_arready)begin
                s2_r_busy <= 1'b1;
                s2_r_owner <= 1'b1;
            end
        end
`endif

        if((s0_r_owner == 1'b0) && s0_rvalid && s0_rready)begin
            s0_r_busy <= 1'b0;
        end
        else if((s0_r_owner == 1'b1) && s0_rvalid && s0_rready)begin
            s0_r_busy <= 1'b0;
        end

        if((s1_r_owner == 1'b0) && s1_rvalid && s1_rready)begin
            s1_r_busy <= 1'b0;
        end
        else if((s1_r_owner == 1'b1) && s1_rvalid && s1_rready)begin
            s1_r_busy <= 1'b0;
        end

`ifdef SLAVE2_EN
        if(s2_rvalid && s2_rready)begin
            s2_r_busy <= 1'b0;
        end
`endif
       
        if(!s0_w_busy)begin
            if(m1_awvalid && m1_wvalid && m1_w_s0 && m1_awready && m1_wready)begin
                s0_w_busy  <= 1'b1;
            end
        end
        else begin
            if(s0_bready && s0_bvalid)begin
                s0_w_busy  <= 1'b0;
            end
        end

        if(!s1_w_busy)begin
            if(m1_awvalid && m1_wvalid && m1_w_s1 && m1_awready && m1_wready)begin
                s1_w_busy  <= 1'b1;
            end
        end
        else if(s1_bready && s1_bvalid)begin
                s1_w_busy  <= 1'b0;
        end

`ifdef SLAVE2_EN
        if(!s2_w_busy)begin
            if(m1_awvalid && m1_wvalid && m1_w_s2 && m1_awready && m1_wready)begin
                s2_w_busy  <= 1'b1;
            end
        end
        else if(s2_bready && s2_bvalid)begin
                s2_w_busy  <= 1'b0;
        end
`endif
    end
end


always @(*)begin
    m0_awready = 1'b0;
    m0_wready  = 1'b0;
    m1_awready = 1'b0;
    m1_wready  = 1'b0;

    m0_arready = 1'b0;
    m1_arready = 1'b0;

    m0_bresp   = 2'b00;
    m0_bvalid  = 1'b0;
    m1_bresp   = 2'b00;
    m1_bvalid  = 1'b0;

    m0_rdata   = 32'b0;
    m0_rresp   = 2'b00;
    m0_rvalid  = 1'b0;
    m1_rdata   = 32'b0;
    m1_rresp   = 2'b00;
    m1_rvalid  = 1'b0;

    s0_awaddr  = 32'b0;
    s0_awvalid = 1'b0;
    s0_wdata   = 32'b0;
    s0_wstrb   = 4'b0;
    s0_wvalid  = 1'b0;
    s0_bready  = 1'b0;
    s0_araddr  = 32'b0;
    s0_arvalid = 1'b0;
    s0_rready  = 1'b0;

    s1_awaddr  = 32'b0;
    s1_awvalid = 1'b0;
    s1_wdata   = 32'b0;
    s1_wstrb   = 4'b0;
    s1_wvalid  = 1'b0;
    s1_bready  = 1'b0;
    s1_araddr  = 32'b0;
    s1_arvalid = 1'b0;
    s1_rready  = 1'b0;

`ifdef SLAVE2_EN
    s2_awaddr  = 32'b0;
    s2_awvalid = 1'b0;
    s2_wdata   = 32'b0;
    s2_wstrb   = 4'b0;
    s2_wvalid  = 1'b0;
    s2_bready  = 1'b0;
    s2_araddr  = 32'b0;
    s2_arvalid = 1'b0;
    s2_rready  = 1'b0;
`endif

    if(!s0_r_busy)begin
        if(m0_rreq_s0)begin
            s0_araddr  = m0_araddr;
            s0_arvalid = m0_arvalid;
            m0_arready = s0_arready;
        end
        else if(m1_rreq_s0)begin
            s0_araddr  = m1_araddr;
            s0_arvalid = m1_arvalid;
            m1_arready = s0_arready;
        end
    end

    if(!s1_r_busy)begin
        if(m0_rreq_s1)begin
            s1_araddr  = m0_araddr;
            s1_arvalid = m0_arvalid;
            m0_arready = s1_arready;
        end
        else if(m1_rreq_s1)begin
            s1_araddr  = m1_araddr;
            s1_arvalid = m1_arvalid;
            m1_arready = s1_arready;
        end
    end

`ifdef SLAVE2_EN
    if(!s2_r_busy)begin
        if(m1_rreq_s2)begin
            s2_araddr  = m1_araddr;
            s2_arvalid = m1_arvalid;
            m1_arready = s2_arready;
        end
    end
`endif    

    if(s0_r_busy)begin
        if(s0_r_owner == 1'b0)begin
            m0_rdata  = s0_rdata;
            m0_rresp  = s0_rresp;
            s0_rready = m0_rready;
            m0_rvalid = s0_rvalid;
        end
        else begin
            m1_rdata  = s0_rdata;
            m1_rresp  = s0_rresp;
            s0_rready = m1_rready;
            m1_rvalid = s0_rvalid;
        end
    end

    if(s1_r_busy)begin
        if(s1_r_owner == 1'b1)begin
            m1_rdata  = s1_rdata;
            m1_rresp  = s1_rresp;
            s1_rready = m1_rready;
            m1_rvalid = s1_rvalid;
        end
        else begin
            m0_rdata  = s1_rdata;
            m0_rresp  = s1_rresp;
            s1_rready = m0_rready;
            m0_rvalid = s1_rvalid;
        end
    end

`ifdef SLAVE2_EN
    if(s2_r_busy)begin
        if(s2_r_owner == 1'b1)begin
            m1_rdata  = s2_rdata;
            m1_rresp  = s2_rresp;
            s2_rready = m1_rready;
            m1_rvalid = s2_rvalid;
        end
    end
`endif    

    if(!s0_w_busy)begin
        if((m1_awvalid && m1_wvalid) && m1_w_s0)begin
            s0_awaddr = m1_awaddr;
            s0_wdata  = m1_wdata;
            s0_wstrb  = m1_wstrb;
            s0_wvalid = 1'b1;
            s0_awvalid= 1'b1;
            m1_awready= s0_awready;
            m1_wready = s0_wready;
        end
    end
    else begin
            m1_bresp  = s0_bresp;
            s0_bready = m1_bready;
            m1_bvalid = s0_bvalid;
    end

    if(!s1_w_busy)begin
        if((m1_awvalid && m1_wvalid) && m1_w_s1)begin
            s1_awaddr = m1_awaddr;
            s1_wdata  = m1_wdata;
            s1_wstrb  = m1_wstrb;
            s1_wvalid = 1'b1;
            s1_awvalid= 1'b1;
            m1_awready= s1_awready;
            m1_wready = s1_wready;
        end
    end
    else begin
            m1_bresp  = s1_bresp;
            s1_bready = m1_bready;
            m1_bvalid = s1_bvalid;
    end

`ifdef SLAVE2_EN
    if(!s2_w_busy)begin
        if((m1_awvalid && m1_wvalid) && m1_w_s2)begin
            s2_awaddr = m1_awaddr;
            s2_wdata  = m1_wdata;
            s2_wstrb  = m1_wstrb;
            s2_wvalid = 1'b1;
            s2_awvalid= 1'b1;
            m1_awready= s2_awready;
            m1_wready = s2_wready;
        end
    end
    else begin
            m1_bresp  = s2_bresp;
            s2_bready = m1_bready;
            m1_bvalid = s2_bvalid;
    end
`endif
    

end

endmodule
