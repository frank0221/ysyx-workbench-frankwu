module SDRAM (
  input        clk,
  input        cke,
  input        cs,
  input        ras,
  input        cas,
  input        we,
  input [12:0] a,
  input [ 1:0] ba,
  input [ 3:0] dqm,
  inout [31:0] dq
);

sdram sdram0(
    .clk (clk),	// home/frank_wu/ysyx-workbench/ysyxSoC/src/SoC.scala:107:24
    .cke (cke),	// home/frank_wu/ysyx-workbench/ysyxSoC/src/SoC.scala:107:24
    .cs  (cs),	// home/frank_wu/ysyx-workbench/ysyxSoC/src/SoC.scala:107:24
    .ras (ras),	// home/frank_wu/ysyx-workbench/ysyxSoC/src/SoC.scala:107:24
    .cas (cas),	// home/frank_wu/ysyx-workbench/ysyxSoC/src/SoC.scala:107:24
    .we  (we),	// home/frank_wu/ysyx-workbench/ysyxSoC/src/SoC.scala:107:24
    .a   (a),	// home/frank_wu/ysyx-workbench/ysyxSoC/src/SoC.scala:107:24
    .ba  (ba),	// home/frank_wu/ysyx-workbench/ysyxSoC/src/SoC.scala:107:24
    .dqm (dqm[1:0]),	// home/frank_wu/ysyx-workbench/ysyxSoC/src/SoC.scala:107:24
    .dq  (dq[15:0])
);

sdram sdram1(
    .clk (clk),	// home/frank_wu/ysyx-workbench/ysyxSoC/src/SoC.scala:107:24
    .cke (cke),	// home/frank_wu/ysyx-workbench/ysyxSoC/src/SoC.scala:107:24
    .cs  (cs),	// home/frank_wu/ysyx-workbench/ysyxSoC/src/SoC.scala:107:24
    .ras (ras),	// home/frank_wu/ysyx-workbench/ysyxSoC/src/SoC.scala:107:24
    .cas (cas),	// home/frank_wu/ysyx-workbench/ysyxSoC/src/SoC.scala:107:24
    .we  (we),	// home/frank_wu/ysyx-workbench/ysyxSoC/src/SoC.scala:107:24
    .a   (a),	// home/frank_wu/ysyx-workbench/ysyxSoC/src/SoC.scala:107:24
    .ba  (ba),	// home/frank_wu/ysyx-workbench/ysyxSoC/src/SoC.scala:107:24
    .dqm (dqm[3:2]),	// home/frank_wu/ysyx-workbench/ysyxSoC/src/SoC.scala:107:24
    .dq  (dq[31:16])
);
    
endmodule