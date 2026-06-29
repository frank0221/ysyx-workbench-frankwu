`timescale 1ns / 1ps

module tb;

    reg  clk;
    reg  ss;
    reg  mosi;
    wire miso; // DUT输出的信号用 wire

    bitrev bitrev_init(
        .sck(clk),
        .ss(ss),
        .mosi(mosi),
        .miso(miso)
    );

    initial begin
        clk = 1;
        forever #50 clk = ~clk; // 产生周期为 100ns 的时钟
    end

    initial begin
            #100 ss = 0; 
    end

    initial begin
        // 初始化
        ss = 1;
        mosi = 0;
    
        @(posedge clk);  mosi = 0;
        @(posedge clk);  mosi = 0;
        @(posedge clk);  mosi = 1;
        @(posedge clk);  mosi = 0;
        @(posedge clk);  mosi = 0;
        @(posedge clk);  mosi = 1;
        @(posedge clk);  mosi = 0;
        @(posedge clk);  mosi = 1;

        @(posedge clk); 
        
        #1500 ss = 1; 
        

        #20 $finish; 
    end      

endmodule
