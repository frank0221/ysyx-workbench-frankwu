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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(commit,0,0);
        CData/*0:0*/ top__DOT__gpr_we;
        CData/*0:0*/ top__DOT__is_jump;
        CData/*4:0*/ top__DOT__load_ctrl;
        CData/*2:0*/ top__DOT__store_ctrl;
        CData/*0:0*/ top__DOT__is_ecall_mret;
        CData/*0:0*/ top__DOT__Ifu2Idu_valid;
        CData/*0:0*/ top__DOT__branch_taken;
        CData/*0:0*/ top__DOT__m0_arvalid;
        CData/*0:0*/ top__DOT__m0_arready;
        CData/*1:0*/ top__DOT__m0_rresp;
        CData/*0:0*/ top__DOT__m0_rvalid;
        CData/*0:0*/ top__DOT__m0_rready;
        CData/*0:0*/ top__DOT__m1_awvalid;
        CData/*0:0*/ top__DOT__m1_awready;
        CData/*3:0*/ top__DOT__m1_wstrb;
        CData/*0:0*/ top__DOT__m1_wvalid;
        CData/*0:0*/ top__DOT__m1_wready;
        CData/*1:0*/ top__DOT__m1_bresp;
        CData/*0:0*/ top__DOT__m1_bvalid;
        CData/*0:0*/ top__DOT__m1_bready;
        CData/*0:0*/ top__DOT__m1_arvalid;
        CData/*0:0*/ top__DOT__m1_arready;
        CData/*1:0*/ top__DOT__m1_rresp;
        CData/*0:0*/ top__DOT__m1_rvalid;
        CData/*0:0*/ top__DOT__m1_rready;
        CData/*0:0*/ top__DOT__s0_awvalid;
        CData/*3:0*/ top__DOT__s0_wstrb;
        CData/*0:0*/ top__DOT__s0_wvalid;
        CData/*0:0*/ top__DOT__s0_bready;
        CData/*0:0*/ top__DOT__s0_arvalid;
        CData/*0:0*/ top__DOT__s0_rready;
        CData/*0:0*/ top__DOT__s1_awvalid;
        CData/*0:0*/ top__DOT__s1_awready;
        CData/*3:0*/ top__DOT__s1_wstrb;
        CData/*0:0*/ top__DOT__s1_wvalid;
        CData/*0:0*/ top__DOT__s1_wready;
        CData/*1:0*/ top__DOT__s1_bresp;
        CData/*0:0*/ top__DOT__s1_bvalid;
        CData/*0:0*/ top__DOT__s1_bready;
        CData/*0:0*/ top__DOT__s1_arvalid;
        CData/*0:0*/ top__DOT__s1_arready;
        CData/*1:0*/ top__DOT__s1_rresp;
        CData/*0:0*/ top__DOT__s1_rvalid;
        CData/*0:0*/ top__DOT__s1_rready;
        CData/*0:0*/ top__DOT__s2_awvalid;
        CData/*3:0*/ top__DOT__s2_wstrb;
        CData/*0:0*/ top__DOT__s2_wvalid;
        CData/*0:0*/ top__DOT__s2_bready;
        CData/*0:0*/ top__DOT__s2_arvalid;
        CData/*0:0*/ top__DOT__s2_arready;
        CData/*1:0*/ top__DOT__s2_rresp;
        CData/*0:0*/ top__DOT__s2_rvalid;
        CData/*0:0*/ top__DOT__s2_rready;
        CData/*0:0*/ top__DOT__IDU_init__DOT__imm_is_I;
        CData/*0:0*/ top__DOT__IDU_init__DOT__imm_is_U;
        CData/*0:0*/ top__DOT__IDU_init__DOT__is_jalr;
        CData/*0:0*/ top__DOT__IDU_init__DOT__is_sll;
        CData/*0:0*/ top__DOT__IDU_init__DOT__is_srl;
        CData/*0:0*/ top__DOT__IDU_init__DOT__is_sra;
        CData/*0:0*/ top__DOT__IDU_init__DOT__is_lb;
        CData/*0:0*/ top__DOT__IDU_init__DOT__is_lh;
    };
    struct {
        CData/*0:0*/ top__DOT__IDU_init__DOT__is_lw;
        CData/*0:0*/ top__DOT__IDU_init__DOT__is_lhu;
        CData/*0:0*/ top__DOT__IDU_init__DOT__is_lbu;
        CData/*0:0*/ top__DOT__IDU_init__DOT__is_sw;
        CData/*0:0*/ top__DOT__IDU_init__DOT__is_sh;
        CData/*0:0*/ top__DOT__IDU_init__DOT__is_sb;
        CData/*0:0*/ top__DOT__IDU_init__DOT__is_csrrw;
        CData/*0:0*/ top__DOT__IDU_init__DOT__is_csrrs;
        CData/*0:0*/ top__DOT__IDU_init__DOT__is_csr;
        CData/*0:0*/ top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_10;
        CData/*0:0*/ top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_14;
        CData/*0:0*/ top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_15;
        CData/*0:0*/ top__DOT__IFU_init__DOT__valid_rst;
        CData/*2:0*/ top__DOT__IFU_init__DOT__state;
        CData/*0:0*/ top__DOT__EXU_init__DOT__is_beq;
        CData/*0:0*/ top__DOT__EXU_init__DOT__is_bne;
        CData/*0:0*/ top__DOT__EXU_init__DOT__is_blt;
        CData/*0:0*/ top__DOT__EXU_init__DOT__is_bge;
        CData/*0:0*/ top__DOT__EXU_init__DOT__is_bltu;
        CData/*0:0*/ top__DOT__EXU_init__DOT__is_bgeu;
        CData/*0:0*/ top__DOT__EXU_init__DOT__equal;
        CData/*0:0*/ top__DOT__EXU_init__DOT__less_than_signed;
        CData/*0:0*/ top__DOT__EXU_init__DOT__less_than_unsigned;
        CData/*4:0*/ top__DOT__EXU_init__DOT____VdfgRegularize_he932f07c_0_0;
        CData/*0:0*/ top__DOT__MAU_init__DOT__lsu_reqValid;
        CData/*0:0*/ top__DOT__MAU_init__DOT__is_mem_op;
        CData/*0:0*/ top__DOT__MAU_init__DOT__load_valid;
        CData/*0:0*/ top__DOT__MAU_init__DOT__store_valid;
        CData/*2:0*/ top__DOT__MAU_init__DOT__state;
        CData/*0:0*/ top__DOT__MAU_init__DOT__done;
        CData/*0:0*/ top__DOT__MAU_init__DOT__aw_done;
        CData/*0:0*/ top__DOT__MAU_init__DOT__w_done;
        CData/*0:0*/ top__DOT__MAU_init__DOT____VdfgRegularize_h3fdffd83_0_0;
        CData/*0:0*/ top__DOT__xbar_init__DOT__m0_rreq_s0;
        CData/*0:0*/ top__DOT__xbar_init__DOT__m1_rreq_s0;
        CData/*0:0*/ top__DOT__xbar_init__DOT__m1_rreq_s1;
        CData/*0:0*/ top__DOT__xbar_init__DOT__m1_rreq_s2;
        CData/*0:0*/ top__DOT__xbar_init__DOT__m0_w_s0;
        CData/*0:0*/ top__DOT__xbar_init__DOT__m0_w_s1;
        CData/*0:0*/ top__DOT__xbar_init__DOT__s0_r_owner;
        CData/*0:0*/ top__DOT__xbar_init__DOT__s0_r_busy;
        CData/*0:0*/ top__DOT__xbar_init__DOT__s1_r_owner;
        CData/*0:0*/ top__DOT__xbar_init__DOT__s1_r_busy;
        CData/*0:0*/ top__DOT__xbar_init__DOT__s2_r_busy;
        CData/*0:0*/ top__DOT__xbar_init__DOT__s2_r_owner;
        CData/*0:0*/ top__DOT__xbar_init__DOT__s0_w_busy;
        CData/*0:0*/ top__DOT__xbar_init__DOT__s1_w_busy;
        CData/*0:0*/ top__DOT__xbar_init__DOT__s2_w_busy;
        CData/*0:0*/ top__DOT__uart_init__DOT__aw_holding;
        CData/*0:0*/ top__DOT__uart_init__DOT__w_holding;
        CData/*3:0*/ top__DOT__uart_init__DOT__wstrb_hold;
        CData/*0:0*/ top__DOT__clint_init__DOT__s_busy;
        CData/*2:0*/ __Vdly__top__DOT__IFU_init__DOT__state;
        CData/*0:0*/ __Vdly__top__DOT__m0_arvalid;
        CData/*0:0*/ __Vdly__top__DOT__m0_rready;
        CData/*0:0*/ __Vdly__top__DOT__Ifu2Idu_valid;
        CData/*2:0*/ __Vdly__top__DOT__MAU_init__DOT__state;
        CData/*0:0*/ __Vdly__top__DOT__MAU_init__DOT__done;
        CData/*0:0*/ __Vdly__top__DOT__m1_arvalid;
        CData/*0:0*/ __Vdly__top__DOT__m1_awvalid;
        CData/*0:0*/ __Vdly__top__DOT__m1_wvalid;
        CData/*0:0*/ __Vdly__top__DOT__m1_rready;
        CData/*0:0*/ __Vdly__top__DOT__m1_bready;
        CData/*0:0*/ __Vdly__top__DOT__MAU_init__DOT__aw_done;
    };
    struct {
        CData/*0:0*/ __Vdly__top__DOT__MAU_init__DOT__w_done;
        CData/*0:0*/ __Vdly__top__DOT__s1_bvalid;
        CData/*0:0*/ __Vdly__top__DOT__s1_rvalid;
        CData/*0:0*/ __Vdly__top__DOT__s2_rvalid;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ top__DOT__imm;
        SData/*11:0*/ top__DOT__alu_op;
        VL_OUT(pc,31,0);
        VL_OUT(dnpc,31,0);
        IData/*31:0*/ top__DOT__inst;
        IData/*31:0*/ top__DOT__alu_src1;
        IData/*31:0*/ top__DOT__alu_src2;
        IData/*31:0*/ top__DOT__next_pc_jump;
        IData/*31:0*/ top__DOT__pc_wire;
        IData/*31:0*/ top__DOT__rs2;
        IData/*31:0*/ top__DOT__rs1;
        IData/*31:0*/ top__DOT__branch_pc;
        IData/*31:0*/ top__DOT__next_pc_csr;
        IData/*31:0*/ top__DOT__m0_araddr;
        IData/*31:0*/ top__DOT__m0_rdata;
        IData/*31:0*/ top__DOT__rdata;
        IData/*31:0*/ top__DOT__m1_awaddr;
        IData/*31:0*/ top__DOT__m1_wdata;
        IData/*31:0*/ top__DOT__m1_araddr;
        IData/*31:0*/ top__DOT__m1_rdata;
        IData/*31:0*/ top__DOT__s0_awaddr;
        IData/*31:0*/ top__DOT__s0_wdata;
        IData/*31:0*/ top__DOT__s0_araddr;
        IData/*31:0*/ top__DOT__s0_rdata;
        IData/*31:0*/ top__DOT__s1_awaddr;
        IData/*31:0*/ top__DOT__s1_wdata;
        IData/*31:0*/ top__DOT__s1_araddr;
        IData/*31:0*/ top__DOT__s1_rdata;
        IData/*31:0*/ top__DOT__s2_awaddr;
        IData/*31:0*/ top__DOT__s2_wdata;
        IData/*31:0*/ top__DOT__s2_araddr;
        IData/*31:0*/ top__DOT__s2_rdata;
        IData/*31:0*/ top__DOT__IDU_init__DOT__imm_I;
        IData/*31:0*/ top__DOT__IDU_init__DOT__mstatus;
        IData/*31:0*/ top__DOT__IDU_init__DOT__mtvec;
        IData/*31:0*/ top__DOT__IDU_init__DOT__mepc;
        IData/*31:0*/ top__DOT__IDU_init__DOT__mcause;
        IData/*31:0*/ top__DOT__IDU_init__DOT__gpr_wdata_total;
        IData/*31:0*/ top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j;
        IData/*31:0*/ top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__i;
        IData/*31:0*/ top__DOT__IFU_init__DOT__next_pc;
        IData/*31:0*/ top__DOT__IFU_init__DOT__araddr_latched;
        IData/*31:0*/ top__DOT__EXU_init__DOT____VdfgRegularize_he932f07c_0_1;
        IData/*31:0*/ top__DOT__MAU_init__DOT__rdata_r;
        IData/*31:0*/ top__DOT__MAU_init__DOT__araddr_latched;
        IData/*31:0*/ top__DOT__uart_init__DOT__awaddr_hold;
        IData/*31:0*/ top__DOT__uart_init__DOT__wdata_hold;
        IData/*31:0*/ top__DOT__clint_init__DOT__s_araddr_r;
        IData/*31:0*/ __VdfgRegularize_hd87f99a1_0_0;
        IData/*31:0*/ __Vfunc_pmem_read__2__Vfuncout;
        IData/*31:0*/ __Vfunc_pmem_read__3__Vfuncout;
        IData/*31:0*/ __Vfunc_pmem_read__4__Vfuncout;
        IData/*31:0*/ __Vdly__pc;
        IData/*31:0*/ __Vdly__top__DOT__m0_araddr;
        IData/*31:0*/ __VactIterCount;
    };
    struct {
        QData/*63:0*/ top__DOT__clint_init__DOT__mtime;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

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
