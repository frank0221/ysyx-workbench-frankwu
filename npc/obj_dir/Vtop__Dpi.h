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
    // DPI export at vsrc/ysyx_25080218_IDU.v:127:24
    extern int get_gpr(int idx);

    // DPI IMPORTS
    // DPI import at vsrc/ysyx_25080218_IDU.v:1:30
    extern void halt();

#ifdef __cplusplus
}
#endif

#endif  // guard
