// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyxSoCFull.h"

// Parameter definitions for VysyxSoCFull_ysyxSoCFull
constexpr CData/*0:0*/ VysyxSoCFull_ysyxSoCFull::psram__DOT__WORK;
constexpr CData/*0:0*/ VysyxSoCFull_ysyxSoCFull::psram__DOT__IDLE;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCFull::sdram__DOT__idle;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCFull::sdram__DOT__active;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCFull::sdram__DOT__read;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCFull::sdram__DOT__write;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCFull::sdram__DOT__read_latency;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCFull::sdram__DOT__read_latency_1;


void VysyxSoCFull_ysyxSoCFull___ctor_var_reset(VysyxSoCFull_ysyxSoCFull* vlSelf);

VysyxSoCFull_ysyxSoCFull::VysyxSoCFull_ysyxSoCFull(VysyxSoCFull__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VysyxSoCFull_ysyxSoCFull___ctor_var_reset(this);
}

void VysyxSoCFull_ysyxSoCFull::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VysyxSoCFull_ysyxSoCFull::~VysyxSoCFull_ysyxSoCFull() {
}
