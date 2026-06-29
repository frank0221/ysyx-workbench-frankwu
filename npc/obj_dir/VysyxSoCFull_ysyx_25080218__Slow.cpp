// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyx_25080218.h"

// Parameter definitions for VysyxSoCFull_ysyx_25080218
constexpr IData/*31:0*/ VysyxSoCFull_ysyx_25080218::IFU_init__DOT__S_AR;
constexpr IData/*31:0*/ VysyxSoCFull_ysyx_25080218::IFU_init__DOT__S_R;
constexpr IData/*31:0*/ VysyxSoCFull_ysyx_25080218::MAU_init__DOT__S_IDLE;
constexpr IData/*31:0*/ VysyxSoCFull_ysyx_25080218::MAU_init__DOT__S_AR;
constexpr IData/*31:0*/ VysyxSoCFull_ysyx_25080218::MAU_init__DOT__S_R;
constexpr IData/*31:0*/ VysyxSoCFull_ysyx_25080218::MAU_init__DOT__S_AW_W;
constexpr IData/*31:0*/ VysyxSoCFull_ysyx_25080218::MAU_init__DOT__S_B;


void VysyxSoCFull_ysyx_25080218___ctor_var_reset(VysyxSoCFull_ysyx_25080218* vlSelf);

VysyxSoCFull_ysyx_25080218::VysyxSoCFull_ysyx_25080218(VysyxSoCFull__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VysyxSoCFull_ysyx_25080218___ctor_var_reset(this);
}

void VysyxSoCFull_ysyx_25080218::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VysyxSoCFull_ysyx_25080218::~VysyxSoCFull_ysyx_25080218() {
}
