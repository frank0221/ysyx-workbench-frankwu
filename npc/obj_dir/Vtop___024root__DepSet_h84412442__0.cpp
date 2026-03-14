// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024root____Vdpiexp_top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__get_gpr_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ &get_gpr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__get_gpr_TOP\n"); );
    // Init
    // Body
    get_gpr__Vfuncrtn = vlSymsp->TOP.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
        [(0x1fU & idx)];
}

extern "C" int pmem_read(int raddr);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__IFU_init__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__IFU_init__DOT__pmem_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(raddr__Vcvt);
    pmem_read__Vfuncrtn = pmem_read__Vfuncrtn__Vcvt;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.rst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_pmem_read__2__Vfuncout;
    __Vfunc_pmem_read__2__Vfuncout = 0;
    CData/*0:0*/ __Vdly__top__DOT__IFU_init__DOT__valid_rst;
    __Vdly__top__DOT__IFU_init__DOT__valid_rst = 0;
    CData/*2:0*/ __Vdly__top__DOT__MAU_init__DOT__state;
    __Vdly__top__DOT__MAU_init__DOT__state = 0;
    CData/*0:0*/ __Vdly__top__DOT__MAU_init__DOT__done;
    __Vdly__top__DOT__MAU_init__DOT__done = 0;
    CData/*0:0*/ __Vdly__top__DOT__LSU_ARVALID;
    __Vdly__top__DOT__LSU_ARVALID = 0;
    CData/*0:0*/ __Vdly__top__DOT__LSU_AWVALID;
    __Vdly__top__DOT__LSU_AWVALID = 0;
    CData/*0:0*/ __Vdly__top__DOT__LSU_WVALID;
    __Vdly__top__DOT__LSU_WVALID = 0;
    CData/*0:0*/ __Vdly__top__DOT__LSU_RREADY;
    __Vdly__top__DOT__LSU_RREADY = 0;
    CData/*0:0*/ __Vdly__top__DOT__LSU_BREADY;
    __Vdly__top__DOT__LSU_BREADY = 0;
    CData/*0:0*/ __Vdly__top__DOT__MAU_init__DOT__aw_done;
    __Vdly__top__DOT__MAU_init__DOT__aw_done = 0;
    CData/*0:0*/ __Vdly__top__DOT__MAU_init__DOT__w_done;
    __Vdly__top__DOT__MAU_init__DOT__w_done = 0;
    IData/*31:0*/ __Vdly__top__DOT__MAU_init__DOT__araddr_latched;
    __Vdly__top__DOT__MAU_init__DOT__araddr_latched = 0;
    CData/*0:0*/ __VdlySet__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v0;
    __VdlySet__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v32;
    __VdlyVal__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v32 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v32;
    __VdlyDim0__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v32 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v32;
    __VdlySet__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v32 = 0;
    // Body
    __Vdly__top__DOT__MAU_init__DOT__state = vlSelfRef.top__DOT__MAU_init__DOT__state;
    __Vdly__top__DOT__LSU_ARVALID = vlSelfRef.top__DOT__LSU_ARVALID;
    __Vdly__top__DOT__LSU_AWVALID = vlSelfRef.top__DOT__LSU_AWVALID;
    __Vdly__top__DOT__LSU_WVALID = vlSelfRef.top__DOT__LSU_WVALID;
    __Vdly__top__DOT__LSU_RREADY = vlSelfRef.top__DOT__LSU_RREADY;
    __Vdly__top__DOT__LSU_BREADY = vlSelfRef.top__DOT__LSU_BREADY;
    __Vdly__top__DOT__MAU_init__DOT__aw_done = vlSelfRef.top__DOT__MAU_init__DOT__aw_done;
    __Vdly__top__DOT__MAU_init__DOT__w_done = vlSelfRef.top__DOT__MAU_init__DOT__w_done;
    __Vdly__top__DOT__MAU_init__DOT__araddr_latched 
        = vlSelfRef.top__DOT__MAU_init__DOT__araddr_latched;
    __Vdly__top__DOT__MAU_init__DOT__done = vlSelfRef.top__DOT__MAU_init__DOT__done;
    __Vdly__top__DOT__IFU_init__DOT__valid_rst = vlSelfRef.top__DOT__IFU_init__DOT__valid_rst;
    vlSelfRef.__Vdly__pc = vlSelfRef.pc;
    vlSelfRef.__Vdly__top__DOT__IFU_init__DOT__state 
        = vlSelfRef.top__DOT__IFU_init__DOT__state;
    vlSelfRef.__Vdly__top__DOT__ARVALID = vlSelfRef.top__DOT__ARVALID;
    vlSelfRef.__Vdly__top__DOT__RREADY = vlSelfRef.top__DOT__RREADY;
    vlSelfRef.__Vdly__top__DOT__ARADDR = vlSelfRef.top__DOT__ARADDR;
    vlSelfRef.__Vdly__top__DOT__IFU_init__DOT__araddr_latched 
        = vlSelfRef.top__DOT__IFU_init__DOT__araddr_latched;
    vlSelfRef.__Vdly__top__DOT__Ifu2Idu_valid = vlSelfRef.top__DOT__Ifu2Idu_valid;
    __VdlySet__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v0 = 0U;
    __VdlySet__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v32 = 0U;
    if (vlSelfRef.rst) {
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__i = 0x20U;
        vlSelfRef.__Vdly__pc = 0x80000000U;
        __Vdly__top__DOT__IFU_init__DOT__valid_rst = 0U;
        __VdlySet__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v0 = 1U;
    } else {
        if (vlSelfRef.top__DOT__IFU_init__DOT__valid_rst) {
            vlSelfRef.__Vdly__pc = (((IData)(vlSelfRef.top__DOT__Ifu2Idu_valid) 
                                     & (IData)(vlSelfRef.top__DOT__MAU_init__DOT____VdfgRegularize_h3fdffd83_0_0))
                                     ? ((IData)(vlSelfRef.top__DOT__is_jump)
                                         ? vlSelfRef.top__DOT__next_pc_jump
                                         : ((IData)(vlSelfRef.top__DOT__branch_taken)
                                             ? vlSelfRef.top__DOT__branch_pc
                                             : ((IData)(vlSelfRef.top__DOT__is_ecall_mret)
                                                 ? vlSelfRef.top__DOT__next_pc_csr
                                                 : vlSelfRef.top__DOT__IFU_init__DOT__next_pc)))
                                     : vlSelfRef.pc);
        } else {
            vlSelfRef.__Vdly__pc = 0x80000000U;
            __Vdly__top__DOT__IFU_init__DOT__valid_rst = 1U;
        }
        if (((IData)(vlSelfRef.top__DOT__gpr_we) & 
             (0U != (0x1fU & (vlSelfRef.top__DOT__inst 
                              >> 7U))))) {
            __VdlyVal__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v32 
                = vlSelfRef.top__DOT__IDU_init__DOT__gpr_wdata_total;
            __VdlyDim0__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v32 
                = (0x1fU & (vlSelfRef.top__DOT__inst 
                            >> 7U));
            __VdlySet__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v32 = 1U;
        }
    }
    if (vlSelfRef.rst) {
        __Vdly__top__DOT__MAU_init__DOT__state = 0U;
        __Vdly__top__DOT__MAU_init__DOT__done = 0U;
        __Vdly__top__DOT__LSU_ARVALID = 0U;
        __Vdly__top__DOT__LSU_AWVALID = 0U;
        __Vdly__top__DOT__LSU_WVALID = 0U;
        __Vdly__top__DOT__LSU_RREADY = 0U;
        __Vdly__top__DOT__LSU_BREADY = 0U;
        __Vdly__top__DOT__MAU_init__DOT__aw_done = 0U;
        __Vdly__top__DOT__MAU_init__DOT__w_done = 0U;
    } else if ((0U == (IData)(vlSelfRef.top__DOT__MAU_init__DOT__state))) {
        if (((IData)(vlSelfRef.top__DOT__MAU_init__DOT__is_mem_op) 
             & (~ (IData)(vlSelfRef.top__DOT__MAU_init__DOT__done)))) {
            if (vlSelfRef.top__DOT__MAU_init__DOT__load_valid) {
                __Vdly__top__DOT__MAU_init__DOT__state = 1U;
            }
            if (vlSelfRef.top__DOT__MAU_init__DOT__store_valid) {
                __Vdly__top__DOT__MAU_init__DOT__state = 3U;
            }
        }
        __Vdly__top__DOT__MAU_init__DOT__done = 0U;
    } else if ((1U == (IData)(vlSelfRef.top__DOT__MAU_init__DOT__state))) {
        __Vdly__top__DOT__LSU_ARVALID = 1U;
        if (vlSelfRef.top__DOT__LSU_ARVALID) {
            __Vdly__top__DOT__MAU_init__DOT__state = 2U;
            __Vdly__top__DOT__LSU_ARVALID = 0U;
            __Vdly__top__DOT__LSU_RREADY = 1U;
            __Vdly__top__DOT__MAU_init__DOT__araddr_latched 
                = vlSelfRef.top__DOT__LSU_ARADDR;
        }
        vlSelfRef.top__DOT__LSU_ARADDR = vlSelfRef.top__DOT__branch_pc;
    } else if ((2U == (IData)(vlSelfRef.top__DOT__MAU_init__DOT__state))) {
        if (vlSelfRef.top__DOT__LSU_RREADY) {
            Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.top__DOT__MAU_init__DOT__araddr_latched, __Vfunc_pmem_read__2__Vfuncout);
            __Vdly__top__DOT__MAU_init__DOT__state = 0U;
            __Vdly__top__DOT__LSU_RREADY = 0U;
            vlSelfRef.top__DOT__MAU_init__DOT__rdata_r 
                = __Vfunc_pmem_read__2__Vfuncout;
            __Vdly__top__DOT__MAU_init__DOT__done = 1U;
        }
    } else if ((3U == (IData)(vlSelfRef.top__DOT__MAU_init__DOT__state))) {
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__MAU_init__DOT__aw_done)))) {
            __Vdly__top__DOT__LSU_AWVALID = 1U;
            vlSelfRef.top__DOT__LSU_AWADDR = vlSelfRef.top__DOT__branch_pc;
        }
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__MAU_init__DOT__w_done)))) {
            __Vdly__top__DOT__LSU_WVALID = 1U;
            vlSelfRef.top__DOT__LSU_WDATA = vlSelfRef.top__DOT__rs2;
        }
        if (vlSelfRef.top__DOT__LSU_AWVALID) {
            __Vdly__top__DOT__MAU_init__DOT__aw_done = 1U;
            __Vdly__top__DOT__LSU_AWVALID = 0U;
        }
        if (vlSelfRef.top__DOT__LSU_WVALID) {
            __Vdly__top__DOT__MAU_init__DOT__w_done = 1U;
            __Vdly__top__DOT__LSU_WVALID = 0U;
        }
        if (((IData)(vlSelfRef.top__DOT__MAU_init__DOT__aw_done) 
             & (IData)(vlSelfRef.top__DOT__MAU_init__DOT__w_done))) {
            Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelfRef.top__DOT__branch_pc, vlSelfRef.top__DOT__rs2, 
                                                                   (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sb) 
                                                                     & (0U 
                                                                        == 
                                                                        (3U 
                                                                         & vlSelfRef.top__DOT__branch_pc)))
                                                                     ? 1U
                                                                     : 
                                                                    (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sb) 
                                                                      & (1U 
                                                                         == 
                                                                         (3U 
                                                                          & vlSelfRef.top__DOT__branch_pc)))
                                                                      ? 2U
                                                                      : 
                                                                     (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sb) 
                                                                       & (2U 
                                                                          == 
                                                                          (3U 
                                                                           & vlSelfRef.top__DOT__branch_pc)))
                                                                       ? 4U
                                                                       : 
                                                                      (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sb) 
                                                                        & (3U 
                                                                           == 
                                                                           (3U 
                                                                            & vlSelfRef.top__DOT__branch_pc)))
                                                                        ? 8U
                                                                        : 
                                                                       (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sh) 
                                                                         & (0U 
                                                                            == 
                                                                            (3U 
                                                                             & vlSelfRef.top__DOT__branch_pc)))
                                                                         ? 3U
                                                                         : 
                                                                        (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sh) 
                                                                          & (2U 
                                                                             == 
                                                                             (3U 
                                                                              & vlSelfRef.top__DOT__branch_pc)))
                                                                          ? 0xcU
                                                                          : 
                                                                         ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sw)
                                                                           ? 0xfU
                                                                           : 0U))))))));
            __Vdly__top__DOT__MAU_init__DOT__aw_done = 0U;
            __Vdly__top__DOT__MAU_init__DOT__w_done = 0U;
            __Vdly__top__DOT__MAU_init__DOT__state = 4U;
        }
    } else if ((4U == (IData)(vlSelfRef.top__DOT__MAU_init__DOT__state))) {
        __Vdly__top__DOT__LSU_BREADY = 1U;
        if (vlSelfRef.top__DOT__LSU_BREADY) {
            __Vdly__top__DOT__LSU_BREADY = 0U;
            __Vdly__top__DOT__MAU_init__DOT__state = 0U;
            __Vdly__top__DOT__MAU_init__DOT__done = 1U;
        }
    }
    vlSelfRef.top__DOT__IFU_init__DOT__valid_rst = __Vdly__top__DOT__IFU_init__DOT__valid_rst;
    if (__VdlySet__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v0) {
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[1U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[2U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[3U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[4U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[5U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[6U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[7U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[8U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[9U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0xaU] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0xbU] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0xcU] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0xdU] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0xeU] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0xfU] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0x10U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0x11U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0x12U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0x13U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0x14U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0x15U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0x16U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0x17U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0x18U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0x19U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0x1aU] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0x1bU] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0x1cU] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0x1dU] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0x1eU] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0x1fU] = 0U;
    }
    if (__VdlySet__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v32) {
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[__VdlyDim0__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v32] 
            = __VdlyVal__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v32;
    }
    vlSelfRef.top__DOT__MAU_init__DOT__state = __Vdly__top__DOT__MAU_init__DOT__state;
    vlSelfRef.top__DOT__LSU_ARVALID = __Vdly__top__DOT__LSU_ARVALID;
    vlSelfRef.top__DOT__LSU_AWVALID = __Vdly__top__DOT__LSU_AWVALID;
    vlSelfRef.top__DOT__LSU_WVALID = __Vdly__top__DOT__LSU_WVALID;
    vlSelfRef.top__DOT__LSU_RREADY = __Vdly__top__DOT__LSU_RREADY;
    vlSelfRef.top__DOT__LSU_BREADY = __Vdly__top__DOT__LSU_BREADY;
    vlSelfRef.top__DOT__MAU_init__DOT__aw_done = __Vdly__top__DOT__MAU_init__DOT__aw_done;
    vlSelfRef.top__DOT__MAU_init__DOT__w_done = __Vdly__top__DOT__MAU_init__DOT__w_done;
    vlSelfRef.top__DOT__MAU_init__DOT__araddr_latched 
        = __Vdly__top__DOT__MAU_init__DOT__araddr_latched;
    vlSelfRef.top__DOT__MAU_init__DOT__done = __Vdly__top__DOT__MAU_init__DOT__done;
}

void Vtop___024unit____Vdpiimwrap_halt_TOP____024unit();

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_top__DOT__IFU_init__DOT__pmem_read__1__Vfuncout;
    __Vfunc_top__DOT__IFU_init__DOT__pmem_read__1__Vfuncout = 0;
    // Body
    if (vlSelfRef.rst) {
        vlSelfRef.__Vdly__top__DOT__IFU_init__DOT__state = 0U;
        vlSelfRef.__Vdly__top__DOT__ARVALID = 0U;
        vlSelfRef.__Vdly__top__DOT__RREADY = 0U;
        vlSelfRef.__Vdly__top__DOT__Ifu2Idu_valid = 0U;
    } else if ((0U == (IData)(vlSelfRef.top__DOT__IFU_init__DOT__state))) {
        if (((IData)(vlSelfRef.top__DOT__Ifu2Idu_valid) 
             & (IData)(vlSelfRef.top__DOT__MAU_init__DOT____VdfgRegularize_h3fdffd83_0_0))) {
            vlSelfRef.__Vdly__top__DOT__Ifu2Idu_valid = 0U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.top__DOT__Ifu2Idu_valid)) 
                   & (~ (IData)(vlSelfRef.top__DOT__ARVALID))))) {
            vlSelfRef.__Vdly__top__DOT__ARVALID = 1U;
            vlSelfRef.__Vdly__top__DOT__ARADDR = vlSelfRef.pc;
        }
        if (vlSelfRef.top__DOT__ARVALID) {
            vlSelfRef.__Vdly__top__DOT__IFU_init__DOT__state = 1U;
            vlSelfRef.__Vdly__top__DOT__ARVALID = 0U;
            vlSelfRef.__Vdly__top__DOT__IFU_init__DOT__araddr_latched 
                = vlSelfRef.top__DOT__ARADDR;
            vlSelfRef.__Vdly__top__DOT__RREADY = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.top__DOT__IFU_init__DOT__state))) {
        if (vlSelfRef.top__DOT__RREADY) {
            Vtop___024root____Vdpiimwrap_top__DOT__IFU_init__DOT__pmem_read_TOP(vlSelfRef.top__DOT__IFU_init__DOT__araddr_latched, __Vfunc_top__DOT__IFU_init__DOT__pmem_read__1__Vfuncout);
            vlSelfRef.top__DOT__inst = __Vfunc_top__DOT__IFU_init__DOT__pmem_read__1__Vfuncout;
            vlSelfRef.__Vdly__top__DOT__Ifu2Idu_valid = 1U;
            vlSelfRef.__Vdly__top__DOT__RREADY = 0U;
            vlSelfRef.__Vdly__top__DOT__IFU_init__DOT__state = 0U;
        }
    }
    vlSelfRef.top__DOT__IFU_init__DOT__state = vlSelfRef.__Vdly__top__DOT__IFU_init__DOT__state;
    vlSelfRef.top__DOT__ARVALID = vlSelfRef.__Vdly__top__DOT__ARVALID;
    vlSelfRef.top__DOT__RREADY = vlSelfRef.__Vdly__top__DOT__RREADY;
    vlSelfRef.top__DOT__ARADDR = vlSelfRef.__Vdly__top__DOT__ARADDR;
    vlSelfRef.top__DOT__IFU_init__DOT__araddr_latched 
        = vlSelfRef.__Vdly__top__DOT__IFU_init__DOT__araddr_latched;
    vlSelfRef.top__DOT__Ifu2Idu_valid = vlSelfRef.__Vdly__top__DOT__Ifu2Idu_valid;
    vlSelfRef.pc = vlSelfRef.__Vdly__pc;
    vlSelfRef.top__DOT__IFU_init__DOT__next_pc = ((IData)(4U) 
                                                  + vlSelfRef.pc);
    if ((0x100073U == vlSelfRef.top__DOT__inst)) {
        Vtop___024unit____Vdpiimwrap_halt_TOP____024unit();
    }
    vlSelfRef.top__DOT__rs1 = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
        [(0x1fU & (vlSelfRef.top__DOT__inst >> 0xfU))];
    vlSelfRef.top__DOT__rs2 = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
        [(0x1fU & (vlSelfRef.top__DOT__inst >> 0x14U))];
    vlSelfRef.top__DOT__is_ecall_mret = ((0x73U == vlSelfRef.top__DOT__inst) 
                                         | (0x30200073U 
                                            == vlSelfRef.top__DOT__inst));
    vlSelfRef.top__DOT__EXU_init__DOT__equal = (vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                                [(0x1fU 
                                                  & (vlSelfRef.top__DOT__inst 
                                                     >> 0xfU))] 
                                                == 
                                                vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                                [(0x1fU 
                                                  & (vlSelfRef.top__DOT__inst 
                                                     >> 0x14U))]);
    vlSelfRef.top__DOT__EXU_init__DOT__less_than_signed 
        = VL_LTS_III(32, vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                     [(0x1fU & (vlSelfRef.top__DOT__inst 
                                >> 0xfU))], vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                     [(0x1fU & (vlSelfRef.top__DOT__inst 
                                >> 0x14U))]);
    vlSelfRef.top__DOT__EXU_init__DOT__less_than_unsigned 
        = (vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
           [(0x1fU & (vlSelfRef.top__DOT__inst >> 0xfU))] 
           < vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
           [(0x1fU & (vlSelfRef.top__DOT__inst >> 0x14U))]);
    vlSelfRef.top__DOT__IDU_init__DOT__is_csrrs = (IData)(
                                                          (0x2073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_csrrw = (IData)(
                                                          (0x1073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_10 
        = (IData)((0x33U == (0x707fU & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__EXU_init__DOT__is_beq = (IData)(
                                                        (0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__EXU_init__DOT__is_bne = (IData)(
                                                        (0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__EXU_init__DOT__is_blt = (IData)(
                                                        (0x4063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__EXU_init__DOT__is_bge = (IData)(
                                                        (0x5063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__EXU_init__DOT__is_bltu = (IData)(
                                                         (0x6063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__EXU_init__DOT__is_bgeu = (IData)(
                                                         (0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_sw = (IData)(
                                                       (0x2023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_sh = (IData)(
                                                       (0x1023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_sb = (IData)(
                                                       (0x23U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_lhu = (IData)(
                                                        (0x5003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_lbu = (IData)(
                                                        (0x4003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_lw = (IData)(
                                                       (0x2003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_lh = (IData)(
                                                       (0x1003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_lb = (IData)(
                                                       (3U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__imm_I = (((- (IData)(
                                                            (vlSelfRef.top__DOT__inst 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | (vlSelfRef.top__DOT__inst 
                                                   >> 0x14U));
    vlSelfRef.top__DOT__IDU_init__DOT__imm_is_U = (
                                                   (0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.top__DOT__inst)) 
                                                   | (0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_sll = (((0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.top__DOT__inst)) 
                                                  | (0x13U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.top__DOT__inst))) 
                                                 & (IData)(
                                                           (0x1000U 
                                                            == 
                                                            (0xfe007000U 
                                                             & vlSelfRef.top__DOT__inst))));
    vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I = (
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.top__DOT__inst)) 
                                                   | ((0x13U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelfRef.top__DOT__inst)) 
                                                      | (0x67U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelfRef.top__DOT__inst))));
    vlSelfRef.top__DOT__IDU_init__DOT__is_jalr = (IData)(
                                                         (0x67U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_14 
        = (IData)((0x5033U == (0x707fU & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_15 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_csr = ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_csrrs) 
                                                 | (IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_csrrw));
    vlSelfRef.top__DOT__branch_taken = (((IData)(vlSelfRef.top__DOT__EXU_init__DOT__is_beq) 
                                         & (IData)(vlSelfRef.top__DOT__EXU_init__DOT__equal)) 
                                        | (((~ (IData)(vlSelfRef.top__DOT__EXU_init__DOT__equal)) 
                                            & (IData)(vlSelfRef.top__DOT__EXU_init__DOT__is_bne)) 
                                           | (((IData)(vlSelfRef.top__DOT__EXU_init__DOT__is_blt) 
                                               & (IData)(vlSelfRef.top__DOT__EXU_init__DOT__less_than_signed)) 
                                              | (((~ (IData)(vlSelfRef.top__DOT__EXU_init__DOT__less_than_signed)) 
                                                  & (IData)(vlSelfRef.top__DOT__EXU_init__DOT__is_bge)) 
                                                 | (((IData)(vlSelfRef.top__DOT__EXU_init__DOT__is_bltu) 
                                                     & (IData)(vlSelfRef.top__DOT__EXU_init__DOT__less_than_unsigned)) 
                                                    | ((~ (IData)(vlSelfRef.top__DOT__EXU_init__DOT__less_than_unsigned)) 
                                                       & (IData)(vlSelfRef.top__DOT__EXU_init__DOT__is_bgeu)))))));
    vlSelfRef.top__DOT__store_ctrl = (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sw) 
                                       << 2U) | (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sh) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sb)));
    vlSelfRef.top__DOT__rdata = ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lb)
                                  ? (((- (IData)((1U 
                                                  & (vlSelfRef.top__DOT__MAU_init__DOT__rdata_r 
                                                     >> 7U)))) 
                                      << 8U) | (0xffU 
                                                & vlSelfRef.top__DOT__MAU_init__DOT__rdata_r))
                                  : ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lh)
                                      ? (((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.top__DOT__MAU_init__DOT__rdata_r 
                                                         >> 0xfU)))) 
                                          << 0x10U) 
                                         | (0xffffU 
                                            & vlSelfRef.top__DOT__MAU_init__DOT__rdata_r))
                                      : ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lw)
                                          ? vlSelfRef.top__DOT__MAU_init__DOT__rdata_r
                                          : ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lbu)
                                              ? (0xffU 
                                                 & vlSelfRef.top__DOT__MAU_init__DOT__rdata_r)
                                              : ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lhu)
                                                  ? 
                                                 (0xffffU 
                                                  & vlSelfRef.top__DOT__MAU_init__DOT__rdata_r)
                                                  : 0U)))));
    vlSelfRef.top__DOT__load_ctrl = ((((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lhu) 
                                       << 4U) | (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lbu) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lw) 
                                                    << 2U))) 
                                     | (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lh) 
                                         << 1U) | (IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lb)));
    vlSelfRef.top__DOT__next_pc_jump = ((0x6fU == (0x7fU 
                                                   & vlSelfRef.top__DOT__inst))
                                         ? (vlSelfRef.pc 
                                            + (((- (IData)(
                                                           (vlSelfRef.top__DOT__inst 
                                                            >> 0x1fU))) 
                                                << 0x14U) 
                                               | (((0xff000U 
                                                    & vlSelfRef.top__DOT__inst) 
                                                   | (0x800U 
                                                      & (vlSelfRef.top__DOT__inst 
                                                         >> 9U))) 
                                                  | (0x7feU 
                                                     & (vlSelfRef.top__DOT__inst 
                                                        >> 0x14U)))))
                                         : ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_jalr)
                                             ? (vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                                [(0x1fU 
                                                  & (vlSelfRef.top__DOT__inst 
                                                     >> 0xfU))] 
                                                + vlSelfRef.top__DOT__IDU_init__DOT__imm_I)
                                             : 0U));
    vlSelfRef.top__DOT__is_jump = ((0x6fU == (0x7fU 
                                              & vlSelfRef.top__DOT__inst)) 
                                   | (IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_jalr));
    vlSelfRef.top__DOT__IDU_init__DOT__is_srl = (((IData)(vlSelfRef.top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_14) 
                                                  | (IData)(vlSelfRef.top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_15)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelfRef.top__DOT__inst 
                                                     >> 0x19U)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_sra = (((IData)(vlSelfRef.top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_14) 
                                                  | (IData)(vlSelfRef.top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_15)) 
                                                 & (0x20U 
                                                    == 
                                                    (vlSelfRef.top__DOT__inst 
                                                     >> 0x19U)));
    vlSelfRef.top__DOT__MAU_init__DOT__store_valid 
        = ((IData)(vlSelfRef.top__DOT__Ifu2Idu_valid) 
           & (0U != (IData)(vlSelfRef.top__DOT__store_ctrl)));
    vlSelfRef.top__DOT__MAU_init__DOT__load_valid = 
        ((IData)(vlSelfRef.top__DOT__Ifu2Idu_valid) 
         & (0U != (IData)(vlSelfRef.top__DOT__load_ctrl)));
    vlSelfRef.top__DOT__alu_op = ((0x800U & (IData)(vlSelfRef.top__DOT__alu_op)) 
                                  | (((((((0x33U == 
                                           (0x7fU & vlSelfRef.top__DOT__inst)) 
                                          | (0x13U 
                                             == (0x7fU 
                                                 & vlSelfRef.top__DOT__inst))) 
                                         & (IData)(
                                                   (0x3000U 
                                                    == 
                                                    (0xfe007000U 
                                                     & vlSelfRef.top__DOT__inst)))) 
                                        << 0xaU) | 
                                       (((((0x33U == 
                                            (0x7fU 
                                             & vlSelfRef.top__DOT__inst)) 
                                           | (0x13U 
                                              == (0x7fU 
                                                  & vlSelfRef.top__DOT__inst))) 
                                          & (IData)(
                                                    (0x2000U 
                                                     == 
                                                     (0xfe007000U 
                                                      & vlSelfRef.top__DOT__inst)))) 
                                         << 9U) | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sra) 
                                                   << 8U))) 
                                      | (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_srl) 
                                          << 7U) | 
                                         (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sll) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_10) 
                                            & (0x20U 
                                               == (vlSelfRef.top__DOT__inst 
                                                   >> 0x19U))) 
                                           << 5U)))) 
                                     | (((((IData)(
                                                   (0x4033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelfRef.top__DOT__inst))) 
                                           | (IData)(
                                                     (0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.top__DOT__inst)))) 
                                          << 4U) | 
                                         ((((IData)(
                                                    (0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelfRef.top__DOT__inst))) 
                                            | (IData)(
                                                      (0x6013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.top__DOT__inst)))) 
                                           << 3U) | 
                                          (((IData)(
                                                    (0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelfRef.top__DOT__inst))) 
                                            | (IData)(
                                                      (0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.top__DOT__inst)))) 
                                           << 2U))) 
                                        | (((0x37U 
                                             == (0x7fU 
                                                 & vlSelfRef.top__DOT__inst)) 
                                            << 1U) 
                                           | (((IData)(vlSelfRef.top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_10) 
                                               & (0U 
                                                  == 
                                                  (vlSelfRef.top__DOT__inst 
                                                   >> 0x19U))) 
                                              | ((0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelfRef.top__DOT__inst)) 
                                                 | ((IData)(
                                                            (0x13U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.top__DOT__inst))) 
                                                    | ((IData)(vlSelfRef.top__DOT__is_jump) 
                                                       | ((0U 
                                                           != (IData)(vlSelfRef.top__DOT__load_ctrl)) 
                                                          | ((0U 
                                                              != (IData)(vlSelfRef.top__DOT__store_ctrl)) 
                                                             | ((IData)(vlSelfRef.top__DOT__EXU_init__DOT__is_bgeu) 
                                                                | ((IData)(vlSelfRef.top__DOT__EXU_init__DOT__is_bltu) 
                                                                   | ((IData)(vlSelfRef.top__DOT__EXU_init__DOT__is_bge) 
                                                                      | ((IData)(vlSelfRef.top__DOT__EXU_init__DOT__is_blt) 
                                                                         | ((IData)(vlSelfRef.top__DOT__EXU_init__DOT__is_bne) 
                                                                            | (IData)(vlSelfRef.top__DOT__EXU_init__DOT__is_beq))))))))))))))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 = (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I) 
                                                 & ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sll) 
                                                    | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_srl) 
                                                       | (IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sra))))
                                                 ? 
                                                (0x1fU 
                                                 & (vlSelfRef.top__DOT__inst 
                                                    >> 0x14U))
                                                 : 
                                                ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I)
                                                  ? vlSelfRef.top__DOT__IDU_init__DOT__imm_I
                                                  : 
                                                 ((0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.top__DOT__inst))
                                                   ? 
                                                  vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                                  [
                                                  (0x1fU 
                                                   & (vlSelfRef.top__DOT__inst 
                                                      >> 0x14U))]
                                                   : 
                                                  ((0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.top__DOT__inst))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelfRef.top__DOT__inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelfRef.top__DOT__inst 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelfRef.top__DOT__inst 
                                                             >> 7U))))
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.top__DOT__inst))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelfRef.top__DOT__inst 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0x800U 
                                                         & (vlSelfRef.top__DOT__inst 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelfRef.top__DOT__inst 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelfRef.top__DOT__inst 
                                                                 >> 7U)))))
                                                     : 
                                                    ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_U)
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelfRef.top__DOT__inst)
                                                      : 0U))))));
    if (vlSelfRef.top__DOT__is_jump) {
        vlSelfRef.top__DOT__alu_src1 = vlSelfRef.pc;
        vlSelfRef.top__DOT__alu_src2 = 4U;
        vlSelfRef.top__DOT__EXU_init__DOT____VdfgRegularize_he932f07c_0_0 = 4U;
    } else {
        vlSelfRef.top__DOT__alu_src1 = ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I)
                                         ? vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                        [(0x1fU & (vlSelfRef.top__DOT__inst 
                                                   >> 0xfU))]
                                         : ((0x33U 
                                             == (0x7fU 
                                                 & vlSelfRef.top__DOT__inst))
                                             ? vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                            [(0x1fU 
                                              & (vlSelfRef.top__DOT__inst 
                                                 >> 0xfU))]
                                             : ((0x23U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelfRef.top__DOT__inst))
                                                 ? 
                                                vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                                [(0x1fU 
                                                  & (vlSelfRef.top__DOT__inst 
                                                     >> 0xfU))]
                                                 : 
                                                ((0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelfRef.top__DOT__inst))
                                                  ? vlSelfRef.pc
                                                  : 
                                                 ((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.top__DOT__inst))
                                                   ? vlSelfRef.pc
                                                   : 0U)))));
        vlSelfRef.top__DOT__alu_src2 = vlSelfRef.__VdfgRegularize_hd87f99a1_0_0;
        vlSelfRef.top__DOT__EXU_init__DOT____VdfgRegularize_he932f07c_0_0 
            = (0x1fU & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0);
    }
    vlSelfRef.top__DOT__MAU_init__DOT__is_mem_op = 
        ((IData)(vlSelfRef.top__DOT__MAU_init__DOT__store_valid) 
         | (IData)(vlSelfRef.top__DOT__MAU_init__DOT__load_valid));
    vlSelfRef.top__DOT__MAU_init__DOT____VdfgRegularize_h3fdffd83_0_0 
        = (1U & ((~ (IData)(vlSelfRef.top__DOT__MAU_init__DOT__is_mem_op)) 
                 | (IData)(vlSelfRef.top__DOT__MAU_init__DOT__done)));
    vlSelfRef.top__DOT__EXU_init__DOT____VdfgRegularize_he932f07c_0_1 
        = (vlSelfRef.top__DOT__alu_src1 >> (IData)(vlSelfRef.top__DOT__EXU_init__DOT____VdfgRegularize_he932f07c_0_0));
    vlSelfRef.commit = ((IData)(vlSelfRef.top__DOT__Ifu2Idu_valid) 
                        & (IData)(vlSelfRef.top__DOT__MAU_init__DOT____VdfgRegularize_h3fdffd83_0_0));
    vlSelfRef.top__DOT__branch_pc = ((IData)((0U != 
                                              (0x21U 
                                               & (IData)(vlSelfRef.top__DOT__alu_op))))
                                      ? (vlSelfRef.top__DOT__alu_src1 
                                         + (((0x20U 
                                              & (IData)(vlSelfRef.top__DOT__alu_op))
                                              ? ((IData)(vlSelfRef.top__DOT__is_jump)
                                                  ? 0xfffffffbU
                                                  : 
                                                 (~ vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))
                                              : vlSelfRef.top__DOT__alu_src2) 
                                            + (1U & 
                                               ((IData)(vlSelfRef.top__DOT__alu_op) 
                                                >> 5U))))
                                      : ((2U & (IData)(vlSelfRef.top__DOT__alu_op))
                                          ? vlSelfRef.top__DOT__alu_src2
                                          : ((4U & (IData)(vlSelfRef.top__DOT__alu_op))
                                              ? (vlSelfRef.top__DOT__alu_src1 
                                                 & vlSelfRef.top__DOT__alu_src2)
                                              : ((8U 
                                                  & (IData)(vlSelfRef.top__DOT__alu_op))
                                                  ? 
                                                 (vlSelfRef.top__DOT__alu_src1 
                                                  | vlSelfRef.top__DOT__alu_src2)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.top__DOT__alu_op))
                                                   ? 
                                                  (vlSelfRef.top__DOT__alu_src1 
                                                   ^ vlSelfRef.top__DOT__alu_src2)
                                                   : 
                                                  ((0x40U 
                                                    & (IData)(vlSelfRef.top__DOT__alu_op))
                                                    ? 
                                                   (vlSelfRef.top__DOT__alu_src1 
                                                    << (IData)(vlSelfRef.top__DOT__EXU_init__DOT____VdfgRegularize_he932f07c_0_0))
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSelfRef.top__DOT__alu_op))
                                                     ? vlSelfRef.top__DOT__EXU_init__DOT____VdfgRegularize_he932f07c_0_1
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSelfRef.top__DOT__alu_op))
                                                      ? 
                                                     ((vlSelfRef.top__DOT__alu_src1 
                                                       >> 0x1fU)
                                                       ? 
                                                      (~ 
                                                       ((~ vlSelfRef.top__DOT__alu_src1) 
                                                        >> (IData)(vlSelfRef.top__DOT__EXU_init__DOT____VdfgRegularize_he932f07c_0_0)))
                                                       : vlSelfRef.top__DOT__EXU_init__DOT____VdfgRegularize_he932f07c_0_1)
                                                      : 
                                                     ((0x200U 
                                                       & (IData)(vlSelfRef.top__DOT__alu_op))
                                                       ? 
                                                      (VL_LTS_III(32, vlSelfRef.top__DOT__alu_src1, vlSelfRef.top__DOT__alu_src2)
                                                        ? 1U
                                                        : 0U)
                                                       : 
                                                      ((0x400U 
                                                        & (IData)(vlSelfRef.top__DOT__alu_op))
                                                        ? 
                                                       ((vlSelfRef.top__DOT__alu_src1 
                                                         < vlSelfRef.top__DOT__alu_src2)
                                                         ? 1U
                                                         : 0U)
                                                        : 0U))))))))));
    vlSelfRef.top__DOT__gpr_we = (((0x33U == (0x7fU 
                                              & vlSelfRef.top__DOT__inst)) 
                                   | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_U) 
                                      | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I) 
                                         | ((IData)(vlSelfRef.top__DOT__is_jump) 
                                            | (IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_csr))))) 
                                  & (IData)(vlSelfRef.commit));
    if (vlSelfRef.rst) {
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x20U;
    } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__gpr_we) 
                         & (0U != (0x1fU & (vlSelfRef.top__DOT__inst 
                                            >> 7U))))))) {
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x20U;
    }
}
