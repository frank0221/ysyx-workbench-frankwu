// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtop___024unit;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ top__DOT__is_jump;
    CData/*4:0*/ top__DOT__IDU_init__DOT__src2;
    CData/*0:0*/ top__DOT__IDU_init__DOT__imm_is_I;
    CData/*0:0*/ top__DOT__IDU_init__DOT__imm_is_U;
    CData/*0:0*/ top__DOT__IFU_init__DOT__valid;
    CData/*0:0*/ top__DOT__EXU_init__DOT__op_sub;
    CData/*0:0*/ top__DOT__EXU_init__DOT__op_and;
    CData/*0:0*/ top__DOT__EXU_init__DOT__op_or;
    CData/*0:0*/ top__DOT__EXU_init__DOT__op_xor;
    CData/*0:0*/ top__DOT__EXU_init__DOT__op_sll;
    CData/*0:0*/ top__DOT__EXU_init__DOT__op_srl;
    CData/*0:0*/ top__DOT__EXU_init__DOT__op_sra;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ top__DOT__imm;
    SData/*11:0*/ top__DOT__alu_op;
    VL_IN(inst,31,0);
    VL_OUT(pc,31,0);
    IData/*31:0*/ top__DOT__alu_src1;
    IData/*31:0*/ top__DOT__alu_src2;
    IData/*31:0*/ top__DOT__next_pc_jump;
    IData/*31:0*/ top__DOT__pc_wire;
    IData/*31:0*/ top__DOT__IDU_init__DOT__imm_I;
    IData/*31:0*/ top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__i;
    IData/*31:0*/ top__DOT__IFU_init__DOT__next_pc;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
