// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull.h"
#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull_ysyxSoCFull.h"
#include "VysyxSoCFull___024unit.h"
#include "VysyxSoCFull_ysyxSoCASIC.h"
#include "VysyxSoCFull_CPU.h"
#include "VysyxSoCFull_ysyx_25080218.h"

void VysyxSoCFull_ysyx_25080218____Vdpiexp_IDU_init__DOT__ysyx_25080218_GPR_init__DOT__get_gpr_TOP__ysyxSoCFull__asic__cpu__cpu(VysyxSoCFull__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ &get_gpr__Vfuncrtn);

// FUNCTIONS
VysyxSoCFull__Syms::~VysyxSoCFull__Syms()
{
}

VysyxSoCFull__Syms::VysyxSoCFull__Syms(VerilatedContext* contextp, const char* namep, VysyxSoCFull* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
    , TOP__ysyxSoCFull{this, Verilated::catName(namep, "ysyxSoCFull")}
    , TOP__ysyxSoCFull__asic{this, Verilated::catName(namep, "ysyxSoCFull.asic")}
    , TOP__ysyxSoCFull__asic__cpu{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu")}
    , TOP__ysyxSoCFull__asic__cpu__cpu{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu")}
{
        // Check resources
        Verilated::stackCheck(1259);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.ysyxSoCFull = &TOP__ysyxSoCFull;
    TOP__ysyxSoCFull.asic = &TOP__ysyxSoCFull__asic;
    TOP__ysyxSoCFull__asic.cpu = &TOP__ysyxSoCFull__asic__cpu;
    TOP__ysyxSoCFull__asic__cpu.cpu = &TOP__ysyxSoCFull__asic__cpu__cpu;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__ysyxSoCFull.__Vconfigure(true);
    TOP__ysyxSoCFull__asic.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__cpu.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__cpu__cpu.__Vconfigure(true);
    // Setup scopes
    __Vscope_ysyxSoCFull__asic__axi42apb.configure(this, name(), "ysyxSoCFull.asic.axi42apb", "axi42apb", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4frag.configure(this, name(), "ysyxSoCFull.asic.axi4frag", "axi4frag", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4xbar_1.configure(this, name(), "ysyxSoCFull.asic.axi4xbar_1", "axi4xbar_1", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4yank.configure(this, name(), "ysyxSoCFull.asic.axi4yank", "axi4yank", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4yank__unnamedblk1.configure(this, name(), "ysyxSoCFull.asic.axi4yank.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu", "cpu", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__cpu__cpu__IDU_init__ysyx_25080218_GPR_init.configure(this, name(), "ysyxSoCFull.asic.cpu.cpu.IDU_init.ysyx_25080218_GPR_init", "ysyx_25080218_GPR_init", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__lmrom.configure(this, name(), "ysyxSoCFull.asic.lmrom", "lmrom", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__flash.configure(this, name(), "ysyxSoCFull.flash", "flash", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__flash__flash_cmd_i.configure(this, name(), "ysyxSoCFull.flash.flash_cmd_i", "flash_cmd_i", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_ysyxSoCFull__asic__cpu__cpu__IDU_init__ysyx_25080218_GPR_init.exportInsert(__Vfinal, "get_gpr", (void*)(&VysyxSoCFull_ysyx_25080218____Vdpiexp_IDU_init__DOT__ysyx_25080218_GPR_init__DOT__get_gpr_TOP__ysyxSoCFull__asic__cpu__cpu));
        __Vscope_ysyxSoCFull__asic__cpu__cpu.varInsert(__Vfinal,"commit", &(TOP__ysyxSoCFull__asic__cpu__cpu.commit), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu.varInsert(__Vfinal,"dnpc", &(TOP__ysyxSoCFull__asic__cpu__cpu.dnpc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ysyxSoCFull__asic__cpu__cpu.varInsert(__Vfinal,"pc", &(TOP__ysyxSoCFull__asic__cpu__cpu.pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
    }
}
