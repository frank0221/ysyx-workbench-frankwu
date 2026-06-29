// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024unit.h"

extern "C" void IFU_stastic();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_IFU_stastic_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_IFU_stastic_TOP____024unit\n"); );
    // Body
    IFU_stastic();
}

extern "C" void LSU_stastic();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_LSU_stastic_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_LSU_stastic_TOP____024unit\n"); );
    // Body
    LSU_stastic();
}

extern "C" void lsu_time();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_lsu_time_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_lsu_time_TOP____024unit\n"); );
    // Body
    lsu_time();
}

extern "C" void EXU_stastic();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_EXU_stastic_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_EXU_stastic_TOP____024unit\n"); );
    // Body
    EXU_stastic();
}

extern "C" void halt();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_halt_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_halt_TOP____024unit\n"); );
    // Body
    halt();
}

extern "C" void B_inst_analysis();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_B_inst_analysis_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_B_inst_analysis_TOP____024unit\n"); );
    // Body
    B_inst_analysis();
}

extern "C" void I_inst_analysis();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_I_inst_analysis_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_I_inst_analysis_TOP____024unit\n"); );
    // Body
    I_inst_analysis();
}

extern "C" void J_inst_analysis();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_J_inst_analysis_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_J_inst_analysis_TOP____024unit\n"); );
    // Body
    J_inst_analysis();
}

extern "C" void R_inst_analysis();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_R_inst_analysis_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_R_inst_analysis_TOP____024unit\n"); );
    // Body
    R_inst_analysis();
}

extern "C" void S_inst_analysis();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_S_inst_analysis_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_S_inst_analysis_TOP____024unit\n"); );
    // Body
    S_inst_analysis();
}

extern "C" void U_inst_analysis();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_U_inst_analysis_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_U_inst_analysis_TOP____024unit\n"); );
    // Body
    U_inst_analysis();
}

extern "C" void flash_read(int addr, int* data);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int data__Vcvt;
    flash_read(addr__Vcvt, &data__Vcvt);
    data = data__Vcvt;
}
