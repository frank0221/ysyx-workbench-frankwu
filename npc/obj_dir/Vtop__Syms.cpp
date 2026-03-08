// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"
#include "Vtop___024unit.h"

void Vtop___024root____Vdpiexp_top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__get_gpr_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ &get_gpr__Vfuncrtn);

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{
}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
        // Check resources
        Verilated::stackCheck(205);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_top__IDU_init__ysyx_25080218_GPR_init.configure(this, name(), "top.IDU_init.ysyx_25080218_GPR_init", "ysyx_25080218_GPR_init", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_top__IDU_init__ysyx_25080218_GPR_init.exportInsert(__Vfinal, "get_gpr", (void*)(&Vtop___024root____Vdpiexp_top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__get_gpr_TOP));
    }
}
