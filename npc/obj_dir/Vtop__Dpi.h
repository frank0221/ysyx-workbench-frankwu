// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at /home/frank_wu/ysyx-workbench/npc/vsrc/ysyx_25080218_IDU.v:321:24
    extern int get_gpr(int idx);

    // DPI IMPORTS
    // DPI import at /home/frank_wu/ysyx-workbench/npc/vsrc/ysyx_25080218_IDU.v:1:30
    extern void halt();
    // DPI import at /home/frank_wu/ysyx-workbench/npc/vsrc/ysyx_25080218_IFU.v:15:29
    extern int pmem_read(int raddr);
    // DPI import at /home/frank_wu/ysyx-workbench/npc/vsrc/ysyx_25080218_MAU.v:2:30
    extern void pmem_write(int waddr, int wdata, char wmask);

#ifdef __cplusplus
}
#endif

#endif  // guard
