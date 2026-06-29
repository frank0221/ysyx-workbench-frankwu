// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at /home/frank_wu/ysyx-workbench/npc/vsrc/ysyx_25080218_IDU.v:368:24
    extern int get_gpr(int idx);

    // DPI IMPORTS
    // DPI import at /home/frank_wu/ysyx-workbench/npc/vsrc/ysyx_25080218_IDU.v:2:30
    extern void B_inst_analysis();
    // DPI import at /home/frank_wu/ysyx-workbench/npc/vsrc/ysyx_25080218_EXU.v:1:30
    extern void EXU_stastic();
    // DPI import at /home/frank_wu/ysyx-workbench/npc/vsrc/ysyx_25080218_IFU.v:1:30
    extern void IFU_stastic();
    // DPI import at /home/frank_wu/ysyx-workbench/npc/vsrc/ysyx_25080218_IDU.v:3:30
    extern void I_inst_analysis();
    // DPI import at /home/frank_wu/ysyx-workbench/npc/vsrc/ysyx_25080218_IDU.v:4:30
    extern void J_inst_analysis();
    // DPI import at /home/frank_wu/ysyx-workbench/npc/vsrc/ysyx_25080218_MAU.v:4:30
    extern void LSU_stastic();
    // DPI import at /home/frank_wu/ysyx-workbench/npc/vsrc/ysyx_25080218_IDU.v:5:30
    extern void R_inst_analysis();
    // DPI import at /home/frank_wu/ysyx-workbench/npc/vsrc/ysyx_25080218_IDU.v:6:30
    extern void S_inst_analysis();
    // DPI import at /home/frank_wu/ysyx-workbench/npc/vsrc/ysyx_25080218_IDU.v:7:30
    extern void U_inst_analysis();
    // DPI import at /home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/frank_wu/ysyx-workbench/npc/vsrc/ysyx_25080218_IDU.v:1:30
    extern void halt();
    // DPI import at /home/frank_wu/ysyx-workbench/npc/vsrc/ysyx_25080218_MAU.v:5:30
    extern void lsu_time();
    // DPI import at /home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v:5402:30
    extern void mrom_read(int raddr, int* rdata);

#ifdef __cplusplus
}
#endif

#endif  // guard
