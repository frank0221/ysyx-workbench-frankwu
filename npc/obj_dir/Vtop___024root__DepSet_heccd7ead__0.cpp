// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst) {
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x20U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[1U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[2U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[3U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[4U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[5U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[6U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[7U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[8U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[9U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0xaU] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0xbU] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0xcU] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0xdU] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0xeU] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0xfU] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x10U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x11U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x12U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x13U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x14U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x15U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x16U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x17U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x18U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x19U] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x1aU] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x1bU] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x1cU] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x1dU] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x1eU] = 0U;
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x1fU] = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__gpr_we) 
                      & (0U != (0x1fU & (vlSelfRef.top__DOT__inst 
                                         >> 7U))))))) {
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x20U;
        }
        if (((IData)(vlSelfRef.top__DOT__gpr_we) & 
             (0U != (0x1fU & (vlSelfRef.top__DOT__inst 
                              >> 7U))))) {
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[(0x1fU 
                                                                                & (vlSelfRef.top__DOT__inst 
                                                                                >> 7U))] 
                = vlSelfRef.top__DOT__IDU_init__DOT__gpr_wdata_total;
        } else {
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0U] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0U];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[1U] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [1U];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[2U] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [2U];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[3U] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [3U];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[4U] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [4U];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[5U] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [5U];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[6U] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [6U];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[7U] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [7U];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[8U] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [8U];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[9U] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [9U];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0xaU] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0xaU];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0xbU] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0xbU];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0xcU] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0xcU];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0xdU] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0xdU];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0xeU] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0xeU];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0xfU] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0xfU];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x10U] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x10U];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x11U] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x11U];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x12U] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x12U];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x13U] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x13U];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x14U] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x14U];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x15U] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x15U];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x16U] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x16U];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x17U] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x17U];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x18U] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x18U];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x19U] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x19U];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x1aU] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x1aU];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x1bU] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x1bU];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x1cU] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x1cU];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x1dU] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x1dU];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x1eU] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x1eU];
            vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x1fU] 
                = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x1fU];
        }
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__top__DOT__IFU_init__DOT__valid_rst;
    __Vdly__top__DOT__IFU_init__DOT__valid_rst = 0;
    CData/*0:0*/ __Vdly__top__DOT__uart_init__DOT__aw_holding;
    __Vdly__top__DOT__uart_init__DOT__aw_holding = 0;
    CData/*0:0*/ __Vdly__top__DOT__uart_init__DOT__w_holding;
    __Vdly__top__DOT__uart_init__DOT__w_holding = 0;
    IData/*31:0*/ __Vdly__top__DOT__uart_init__DOT__awaddr_hold;
    __Vdly__top__DOT__uart_init__DOT__awaddr_hold = 0;
    IData/*31:0*/ __Vdly__top__DOT__uart_init__DOT__wdata_hold;
    __Vdly__top__DOT__uart_init__DOT__wdata_hold = 0;
    CData/*0:0*/ __Vdly__top__DOT__clint_init__DOT__s_busy;
    __Vdly__top__DOT__clint_init__DOT__s_busy = 0;
    CData/*0:0*/ __Vdly__top__DOT__s2_arready;
    __Vdly__top__DOT__s2_arready = 0;
    QData/*63:0*/ __Vdly__top__DOT__clint_init__DOT__mtime;
    __Vdly__top__DOT__clint_init__DOT__mtime = 0;
    CData/*0:0*/ __VdlySet__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v0;
    __VdlySet__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v32;
    __VdlyVal__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v32 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v32;
    __VdlyDim0__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v32 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v32;
    __VdlySet__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v32 = 0;
    // Body
    __Vdly__top__DOT__clint_init__DOT__mtime = vlSelfRef.top__DOT__clint_init__DOT__mtime;
    __Vdly__top__DOT__clint_init__DOT__s_busy = vlSelfRef.top__DOT__clint_init__DOT__s_busy;
    __Vdly__top__DOT__s2_arready = vlSelfRef.top__DOT__s2_arready;
    vlSelfRef.__Vdly__top__DOT__s2_rvalid = vlSelfRef.top__DOT__s2_rvalid;
    __Vdly__top__DOT__uart_init__DOT__awaddr_hold = vlSelfRef.top__DOT__uart_init__DOT__awaddr_hold;
    __Vdly__top__DOT__uart_init__DOT__wdata_hold = vlSelfRef.top__DOT__uart_init__DOT__wdata_hold;
    __Vdly__top__DOT__uart_init__DOT__aw_holding = vlSelfRef.top__DOT__uart_init__DOT__aw_holding;
    __Vdly__top__DOT__uart_init__DOT__w_holding = vlSelfRef.top__DOT__uart_init__DOT__w_holding;
    vlSelfRef.__Vdly__top__DOT__s1_bvalid = vlSelfRef.top__DOT__s1_bvalid;
    vlSelfRef.__Vdly__top__DOT__s1_rvalid = vlSelfRef.top__DOT__s1_rvalid;
    __Vdly__top__DOT__IFU_init__DOT__valid_rst = vlSelfRef.top__DOT__IFU_init__DOT__valid_rst;
    vlSelfRef.__Vdly__pc = vlSelfRef.pc;
    vlSelfRef.__Vdly__top__DOT__MAU_init__DOT__state 
        = vlSelfRef.top__DOT__MAU_init__DOT__state;
    vlSelfRef.__Vdly__top__DOT__MAU_init__DOT__aw_done 
        = vlSelfRef.top__DOT__MAU_init__DOT__aw_done;
    vlSelfRef.__Vdly__top__DOT__MAU_init__DOT__w_done 
        = vlSelfRef.top__DOT__MAU_init__DOT__w_done;
    vlSelfRef.__Vdly__top__DOT__m1_bready = vlSelfRef.top__DOT__m1_bready;
    vlSelfRef.__Vdly__top__DOT__MAU_init__DOT__done 
        = vlSelfRef.top__DOT__MAU_init__DOT__done;
    vlSelfRef.__Vdly__top__DOT__m1_rready = vlSelfRef.top__DOT__m1_rready;
    vlSelfRef.__Vdly__top__DOT__m1_arvalid = vlSelfRef.top__DOT__m1_arvalid;
    vlSelfRef.__Vdly__top__DOT__m1_awvalid = vlSelfRef.top__DOT__m1_awvalid;
    vlSelfRef.__Vdly__top__DOT__m1_wvalid = vlSelfRef.top__DOT__m1_wvalid;
    vlSelfRef.__Vdly__top__DOT__IFU_init__DOT__state 
        = vlSelfRef.top__DOT__IFU_init__DOT__state;
    vlSelfRef.__Vdly__top__DOT__m0_rready = vlSelfRef.top__DOT__m0_rready;
    vlSelfRef.__Vdly__top__DOT__m0_arvalid = vlSelfRef.top__DOT__m0_arvalid;
    vlSelfRef.__Vdly__top__DOT__m0_araddr = vlSelfRef.top__DOT__m0_araddr;
    vlSelfRef.__Vdly__top__DOT__Ifu2Idu_valid = vlSelfRef.top__DOT__Ifu2Idu_valid;
    __VdlySet__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v0 = 0U;
    __VdlySet__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v32 = 0U;
    if (vlSelfRef.rst) {
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__i = 0x20U;
        __Vdly__top__DOT__clint_init__DOT__mtime = 0ULL;
        vlSelfRef.__Vdly__pc = 0x80000000U;
        __Vdly__top__DOT__IFU_init__DOT__valid_rst = 0U;
        __VdlySet__top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR__v0 = 1U;
        __Vdly__top__DOT__clint_init__DOT__s_busy = 0U;
        vlSelfRef.__Vdly__top__DOT__s2_rvalid = 0U;
        vlSelfRef.top__DOT__s2_rresp = 0U;
        vlSelfRef.top__DOT__s2_rdata = 0U;
        __Vdly__top__DOT__s2_arready = 0U;
    } else {
        __Vdly__top__DOT__clint_init__DOT__mtime = 
            (1ULL + vlSelfRef.top__DOT__clint_init__DOT__mtime);
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
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__clint_init__DOT__s_busy)))) {
            __Vdly__top__DOT__s2_arready = 1U;
            if (((IData)(vlSelfRef.top__DOT__s2_arvalid) 
                 & (IData)(vlSelfRef.top__DOT__s2_arready))) {
                vlSelfRef.__Vdly__top__DOT__s2_rvalid = 1U;
                vlSelfRef.top__DOT__s2_rresp = 0U;
                __Vdly__top__DOT__clint_init__DOT__s_busy = 1U;
                vlSelfRef.top__DOT__s2_rdata = ((0xa0000048U 
                                                 == vlSelfRef.top__DOT__s2_araddr)
                                                 ? (IData)(vlSelfRef.top__DOT__clint_init__DOT__mtime)
                                                 : 
                                                ((0xa000004cU 
                                                  == vlSelfRef.top__DOT__s2_araddr)
                                                  ? (IData)(
                                                            (vlSelfRef.top__DOT__clint_init__DOT__mtime 
                                                             >> 0x20U))
                                                  : 0U));
            }
        } else {
            __Vdly__top__DOT__s2_arready = 0U;
        }
        if (((IData)(vlSelfRef.top__DOT__s2_rvalid) 
             & (IData)(vlSelfRef.top__DOT__s2_rready))) {
            vlSelfRef.__Vdly__top__DOT__s2_rvalid = 0U;
            __Vdly__top__DOT__clint_init__DOT__s_busy = 0U;
        }
    }
    if (vlSelfRef.rst) {
        __Vdly__top__DOT__uart_init__DOT__aw_holding = 0U;
        __Vdly__top__DOT__uart_init__DOT__w_holding = 0U;
        __Vdly__top__DOT__uart_init__DOT__awaddr_hold = 0U;
        __Vdly__top__DOT__uart_init__DOT__wdata_hold = 0U;
        vlSelfRef.top__DOT__uart_init__DOT__wstrb_hold = 0U;
        vlSelfRef.__Vdly__top__DOT__s1_bvalid = 0U;
        vlSelfRef.top__DOT__s1_bresp = 0U;
        vlSelfRef.__Vdly__top__DOT__s1_rvalid = 0U;
        vlSelfRef.top__DOT__s1_rresp = 0U;
        vlSelfRef.top__DOT__s1_rdata = 0U;
    } else {
        if (((IData)(vlSelfRef.top__DOT__s1_awready) 
             & (IData)(vlSelfRef.top__DOT__s1_awvalid))) {
            __Vdly__top__DOT__uart_init__DOT__awaddr_hold 
                = vlSelfRef.top__DOT__s1_awaddr;
            __Vdly__top__DOT__uart_init__DOT__aw_holding = 1U;
        }
        if (((IData)(vlSelfRef.top__DOT__s1_wready) 
             & (IData)(vlSelfRef.top__DOT__s1_wvalid))) {
            __Vdly__top__DOT__uart_init__DOT__wdata_hold 
                = vlSelfRef.top__DOT__s1_wdata;
            vlSelfRef.top__DOT__uart_init__DOT__wstrb_hold 
                = vlSelfRef.top__DOT__s1_wstrb;
            __Vdly__top__DOT__uart_init__DOT__w_holding = 1U;
        }
        if (((IData)(vlSelfRef.top__DOT__s1_arvalid) 
             & (IData)(vlSelfRef.top__DOT__s1_arready))) {
            vlSelfRef.top__DOT__s1_rdata = 0U;
            vlSelfRef.top__DOT__s1_rresp = 0U;
            vlSelfRef.__Vdly__top__DOT__s1_rvalid = 1U;
        }
        if ((((~ (IData)(vlSelfRef.top__DOT__s1_bvalid)) 
              & (IData)(vlSelfRef.top__DOT__uart_init__DOT__aw_holding)) 
             & (IData)(vlSelfRef.top__DOT__uart_init__DOT__w_holding))) {
            if (VL_UNLIKELY(((0xa00003f8U == vlSelfRef.top__DOT__uart_init__DOT__awaddr_hold)))) {
                VL_WRITEF_NX("%c",0,8,(0xffU & vlSelfRef.top__DOT__uart_init__DOT__wdata_hold));
            }
            __Vdly__top__DOT__uart_init__DOT__aw_holding = 0U;
            __Vdly__top__DOT__uart_init__DOT__w_holding = 0U;
            vlSelfRef.__Vdly__top__DOT__s1_bvalid = 1U;
            vlSelfRef.top__DOT__s1_bresp = 0U;
        }
        if (((IData)(vlSelfRef.top__DOT__s1_rvalid) 
             & (IData)(vlSelfRef.top__DOT__s1_rready))) {
            vlSelfRef.__Vdly__top__DOT__s1_rvalid = 0U;
        }
        if (((IData)(vlSelfRef.top__DOT__s1_bvalid) 
             & (IData)(vlSelfRef.top__DOT__s1_bready))) {
            vlSelfRef.__Vdly__top__DOT__s1_bvalid = 0U;
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
    vlSelfRef.top__DOT__clint_init__DOT__s_busy = __Vdly__top__DOT__clint_init__DOT__s_busy;
    vlSelfRef.top__DOT__clint_init__DOT__mtime = __Vdly__top__DOT__clint_init__DOT__mtime;
    vlSelfRef.top__DOT__s2_arready = __Vdly__top__DOT__s2_arready;
    vlSelfRef.top__DOT__uart_init__DOT__awaddr_hold 
        = __Vdly__top__DOT__uart_init__DOT__awaddr_hold;
    vlSelfRef.top__DOT__uart_init__DOT__wdata_hold 
        = __Vdly__top__DOT__uart_init__DOT__wdata_hold;
    vlSelfRef.top__DOT__uart_init__DOT__aw_holding 
        = __Vdly__top__DOT__uart_init__DOT__aw_holding;
    vlSelfRef.top__DOT__uart_init__DOT__w_holding = __Vdly__top__DOT__uart_init__DOT__w_holding;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__top__DOT__IDU_init__DOT__mstatus;
    __Vdly__top__DOT__IDU_init__DOT__mstatus = 0;
    IData/*31:0*/ __Vdly__top__DOT__IDU_init__DOT__mtvec;
    __Vdly__top__DOT__IDU_init__DOT__mtvec = 0;
    IData/*31:0*/ __Vdly__top__DOT__IDU_init__DOT__mepc;
    __Vdly__top__DOT__IDU_init__DOT__mepc = 0;
    IData/*31:0*/ __Vdly__top__DOT__IDU_init__DOT__mcause;
    __Vdly__top__DOT__IDU_init__DOT__mcause = 0;
    CData/*0:0*/ __Vdly__top__DOT__xbar_init__DOT__s0_w_busy;
    __Vdly__top__DOT__xbar_init__DOT__s0_w_busy = 0;
    CData/*0:0*/ __Vdly__top__DOT__xbar_init__DOT__s0_r_owner;
    __Vdly__top__DOT__xbar_init__DOT__s0_r_owner = 0;
    CData/*0:0*/ __Vdly__top__DOT__xbar_init__DOT__s0_r_busy;
    __Vdly__top__DOT__xbar_init__DOT__s0_r_busy = 0;
    CData/*0:0*/ __Vdly__top__DOT__xbar_init__DOT__s2_w_busy;
    __Vdly__top__DOT__xbar_init__DOT__s2_w_busy = 0;
    CData/*0:0*/ __Vdly__top__DOT__xbar_init__DOT__s1_w_busy;
    __Vdly__top__DOT__xbar_init__DOT__s1_w_busy = 0;
    CData/*0:0*/ __Vdly__top__DOT__xbar_init__DOT__s1_r_owner;
    __Vdly__top__DOT__xbar_init__DOT__s1_r_owner = 0;
    CData/*0:0*/ __Vdly__top__DOT__xbar_init__DOT__s1_r_busy;
    __Vdly__top__DOT__xbar_init__DOT__s1_r_busy = 0;
    CData/*0:0*/ __Vdly__top__DOT__xbar_init__DOT__s2_r_busy;
    __Vdly__top__DOT__xbar_init__DOT__s2_r_busy = 0;
    // Body
    __Vdly__top__DOT__xbar_init__DOT__s2_r_busy = vlSelfRef.top__DOT__xbar_init__DOT__s2_r_busy;
    __Vdly__top__DOT__xbar_init__DOT__s1_r_owner = vlSelfRef.top__DOT__xbar_init__DOT__s1_r_owner;
    __Vdly__top__DOT__xbar_init__DOT__s1_r_busy = vlSelfRef.top__DOT__xbar_init__DOT__s1_r_busy;
    __Vdly__top__DOT__xbar_init__DOT__s0_r_owner = vlSelfRef.top__DOT__xbar_init__DOT__s0_r_owner;
    __Vdly__top__DOT__xbar_init__DOT__s0_r_busy = vlSelfRef.top__DOT__xbar_init__DOT__s0_r_busy;
    __Vdly__top__DOT__xbar_init__DOT__s2_w_busy = vlSelfRef.top__DOT__xbar_init__DOT__s2_w_busy;
    __Vdly__top__DOT__xbar_init__DOT__s0_w_busy = vlSelfRef.top__DOT__xbar_init__DOT__s0_w_busy;
    __Vdly__top__DOT__xbar_init__DOT__s1_w_busy = vlSelfRef.top__DOT__xbar_init__DOT__s1_w_busy;
    __Vdly__top__DOT__IDU_init__DOT__mstatus = vlSelfRef.top__DOT__IDU_init__DOT__mstatus;
    __Vdly__top__DOT__IDU_init__DOT__mcause = vlSelfRef.top__DOT__IDU_init__DOT__mcause;
    __Vdly__top__DOT__IDU_init__DOT__mtvec = vlSelfRef.top__DOT__IDU_init__DOT__mtvec;
    __Vdly__top__DOT__IDU_init__DOT__mepc = vlSelfRef.top__DOT__IDU_init__DOT__mepc;
    if (vlSelfRef.rst) {
        __Vdly__top__DOT__xbar_init__DOT__s1_r_owner = 0U;
        __Vdly__top__DOT__xbar_init__DOT__s1_r_busy = 0U;
        __Vdly__top__DOT__xbar_init__DOT__s0_r_owner = 0U;
        __Vdly__top__DOT__xbar_init__DOT__s0_r_busy = 0U;
        __Vdly__top__DOT__xbar_init__DOT__s2_w_busy = 0U;
        __Vdly__top__DOT__xbar_init__DOT__s0_w_busy = 0U;
        __Vdly__top__DOT__xbar_init__DOT__s1_w_busy = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__xbar_init__DOT__s1_r_busy)))) {
            if ((((0x10000U == (vlSelfRef.top__DOT__m1_araddr 
                                >> 0xcU)) & (IData)(vlSelfRef.top__DOT__m1_arvalid)) 
                 & (IData)(vlSelfRef.top__DOT__m1_arready))) {
                __Vdly__top__DOT__xbar_init__DOT__s1_r_busy = 1U;
                __Vdly__top__DOT__xbar_init__DOT__s1_r_owner = 1U;
            }
        }
        if ((((~ (IData)(vlSelfRef.top__DOT__xbar_init__DOT__s1_r_owner)) 
              & (IData)(vlSelfRef.top__DOT__s1_rvalid)) 
             & (IData)(vlSelfRef.top__DOT__s1_rready))) {
            __Vdly__top__DOT__xbar_init__DOT__s1_r_busy = 0U;
        } else if ((((IData)(vlSelfRef.top__DOT__xbar_init__DOT__s1_r_owner) 
                     & (IData)(vlSelfRef.top__DOT__s1_rvalid)) 
                    & (IData)(vlSelfRef.top__DOT__s1_rready))) {
            __Vdly__top__DOT__xbar_init__DOT__s1_r_busy = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__xbar_init__DOT__s0_r_busy)))) {
            if ((((0x80U == (vlSelfRef.top__DOT__m0_araddr 
                             >> 0x18U)) & (IData)(vlSelfRef.top__DOT__m0_arvalid)) 
                 & (IData)(vlSelfRef.top__DOT__m0_arready))) {
                __Vdly__top__DOT__xbar_init__DOT__s0_r_busy = 1U;
                __Vdly__top__DOT__xbar_init__DOT__s0_r_owner = 0U;
            } else if ((((0x80U == (vlSelfRef.top__DOT__m1_araddr 
                                    >> 0x18U)) & (IData)(vlSelfRef.top__DOT__m1_arvalid)) 
                        & (IData)(vlSelfRef.top__DOT__m1_arready))) {
                __Vdly__top__DOT__xbar_init__DOT__s0_r_busy = 1U;
                __Vdly__top__DOT__xbar_init__DOT__s0_r_owner = 1U;
            }
        }
        if (((~ (IData)(vlSelfRef.top__DOT__xbar_init__DOT__s0_r_owner)) 
             & (IData)(vlSelfRef.top__DOT__s0_rready))) {
            __Vdly__top__DOT__xbar_init__DOT__s0_r_busy = 0U;
        } else if (((IData)(vlSelfRef.top__DOT__xbar_init__DOT__s0_r_owner) 
                    & (IData)(vlSelfRef.top__DOT__s0_rready))) {
            __Vdly__top__DOT__xbar_init__DOT__s0_r_busy = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__xbar_init__DOT__s2_w_busy)))) {
            if ((((((IData)(vlSelfRef.top__DOT__m1_awvalid) 
                    & (IData)(vlSelfRef.top__DOT__m1_wvalid)) 
                   & (0xa000004U == (vlSelfRef.top__DOT__m1_awaddr 
                                     >> 4U))) & (IData)(vlSelfRef.top__DOT__m1_awready)) 
                 & (IData)(vlSelfRef.top__DOT__m1_wready))) {
                __Vdly__top__DOT__xbar_init__DOT__s2_w_busy = 1U;
            }
        }
        if (vlSelfRef.top__DOT__xbar_init__DOT__s0_w_busy) {
            if (vlSelfRef.top__DOT__s0_bready) {
                __Vdly__top__DOT__xbar_init__DOT__s0_w_busy = 0U;
            }
        } else if ((((((IData)(vlSelfRef.top__DOT__m1_awvalid) 
                       & (IData)(vlSelfRef.top__DOT__m1_wvalid)) 
                      & (0x80U == (vlSelfRef.top__DOT__m1_awaddr 
                                   >> 0x18U))) & (IData)(vlSelfRef.top__DOT__m1_awready)) 
                    & (IData)(vlSelfRef.top__DOT__m1_wready))) {
            __Vdly__top__DOT__xbar_init__DOT__s0_w_busy = 1U;
        }
        if (vlSelfRef.top__DOT__xbar_init__DOT__s1_w_busy) {
            if (((IData)(vlSelfRef.top__DOT__s1_bready) 
                 & (IData)(vlSelfRef.top__DOT__s1_bvalid))) {
                __Vdly__top__DOT__xbar_init__DOT__s1_w_busy = 0U;
            }
        } else if ((((((IData)(vlSelfRef.top__DOT__m1_awvalid) 
                       & (IData)(vlSelfRef.top__DOT__m1_wvalid)) 
                      & (0xa000U == (vlSelfRef.top__DOT__m1_awaddr 
                                     >> 0x10U))) & (IData)(vlSelfRef.top__DOT__m1_awready)) 
                    & (IData)(vlSelfRef.top__DOT__m1_wready))) {
            __Vdly__top__DOT__xbar_init__DOT__s1_w_busy = 1U;
        }
    }
    if (vlSelfRef.rst) {
        __Vdly__top__DOT__IDU_init__DOT__mstatus = 0x1800U;
        __Vdly__top__DOT__IDU_init__DOT__mtvec = 0U;
        __Vdly__top__DOT__IDU_init__DOT__mepc = 0U;
        __Vdly__top__DOT__IDU_init__DOT__mcause = 0U;
    } else if (VL_UNLIKELY(((0x73U == vlSelfRef.top__DOT__inst)))) {
        VL_WRITEF_NX("ECALL at PC=%x\n",0,32,vlSelfRef.pc);
        __Vdly__top__DOT__IDU_init__DOT__mcause = 0xbU;
        __Vdly__top__DOT__IDU_init__DOT__mepc = vlSelfRef.pc;
    } else if (VL_UNLIKELY((vlSelfRef.top__DOT__IDU_init__DOT__is_csrrs))) {
        VL_WRITEF_NX("CSRRS at PC=%x Addr=%x mstatus=%x\n",0,
                     32,vlSelfRef.pc,12,(vlSelfRef.top__DOT__inst 
                                         >> 0x14U),
                     32,vlSelfRef.top__DOT__IDU_init__DOT__mstatus);
        if ((0x300U == (vlSelfRef.top__DOT__inst >> 0x14U))) {
            __Vdly__top__DOT__IDU_init__DOT__mstatus 
                = (vlSelfRef.top__DOT__IDU_init__DOT__mstatus 
                   | vlSelfRef.top__DOT__rs1);
        } else if ((0x305U == (vlSelfRef.top__DOT__inst 
                               >> 0x14U))) {
            __Vdly__top__DOT__IDU_init__DOT__mtvec 
                = (vlSelfRef.top__DOT__IDU_init__DOT__mtvec 
                   | vlSelfRef.top__DOT__rs1);
        } else if ((0x341U == (vlSelfRef.top__DOT__inst 
                               >> 0x14U))) {
            __Vdly__top__DOT__IDU_init__DOT__mepc = 
                (vlSelfRef.top__DOT__IDU_init__DOT__mepc 
                 | vlSelfRef.top__DOT__rs1);
        } else if ((0x342U == (vlSelfRef.top__DOT__inst 
                               >> 0x14U))) {
            __Vdly__top__DOT__IDU_init__DOT__mcause 
                = (vlSelfRef.top__DOT__IDU_init__DOT__mcause 
                   | vlSelfRef.top__DOT__rs1);
        }
    } else if (vlSelfRef.top__DOT__IDU_init__DOT__is_csrrw) {
        if ((0x300U == (vlSelfRef.top__DOT__inst >> 0x14U))) {
            __Vdly__top__DOT__IDU_init__DOT__mstatus 
                = vlSelfRef.top__DOT__rs1;
        } else if ((0x305U == (vlSelfRef.top__DOT__inst 
                               >> 0x14U))) {
            __Vdly__top__DOT__IDU_init__DOT__mtvec 
                = vlSelfRef.top__DOT__rs1;
        } else if ((0x341U == (vlSelfRef.top__DOT__inst 
                               >> 0x14U))) {
            __Vdly__top__DOT__IDU_init__DOT__mepc = vlSelfRef.top__DOT__rs1;
        } else if ((0x342U == (vlSelfRef.top__DOT__inst 
                               >> 0x14U))) {
            __Vdly__top__DOT__IDU_init__DOT__mcause 
                = vlSelfRef.top__DOT__rs1;
        }
    }
    if (vlSelfRef.rst) {
        vlSelfRef.top__DOT__xbar_init__DOT__s2_r_owner = 0U;
        __Vdly__top__DOT__xbar_init__DOT__s2_r_busy = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__xbar_init__DOT__s2_r_busy)))) {
            if ((((0xa000004U == (vlSelfRef.top__DOT__m1_araddr 
                                  >> 4U)) & (IData)(vlSelfRef.top__DOT__m1_arvalid)) 
                 & (IData)(vlSelfRef.top__DOT__m1_arready))) {
                __Vdly__top__DOT__xbar_init__DOT__s2_r_busy = 1U;
                vlSelfRef.top__DOT__xbar_init__DOT__s2_r_owner = 1U;
            }
        }
        if (((IData)(vlSelfRef.top__DOT__s2_rvalid) 
             & (IData)(vlSelfRef.top__DOT__s2_rready))) {
            __Vdly__top__DOT__xbar_init__DOT__s2_r_busy = 0U;
        }
    }
    vlSelfRef.top__DOT__xbar_init__DOT__s1_r_owner 
        = __Vdly__top__DOT__xbar_init__DOT__s1_r_owner;
    vlSelfRef.top__DOT__xbar_init__DOT__s1_r_busy = __Vdly__top__DOT__xbar_init__DOT__s1_r_busy;
    vlSelfRef.top__DOT__xbar_init__DOT__s0_r_owner 
        = __Vdly__top__DOT__xbar_init__DOT__s0_r_owner;
    vlSelfRef.top__DOT__xbar_init__DOT__s0_r_busy = __Vdly__top__DOT__xbar_init__DOT__s0_r_busy;
    vlSelfRef.top__DOT__xbar_init__DOT__s2_w_busy = __Vdly__top__DOT__xbar_init__DOT__s2_w_busy;
    vlSelfRef.top__DOT__xbar_init__DOT__s0_w_busy = __Vdly__top__DOT__xbar_init__DOT__s0_w_busy;
    vlSelfRef.top__DOT__xbar_init__DOT__s1_w_busy = __Vdly__top__DOT__xbar_init__DOT__s1_w_busy;
    vlSelfRef.top__DOT__IDU_init__DOT__mstatus = __Vdly__top__DOT__IDU_init__DOT__mstatus;
    vlSelfRef.top__DOT__IDU_init__DOT__mcause = __Vdly__top__DOT__IDU_init__DOT__mcause;
    vlSelfRef.top__DOT__IDU_init__DOT__mtvec = __Vdly__top__DOT__IDU_init__DOT__mtvec;
    vlSelfRef.top__DOT__IDU_init__DOT__mepc = __Vdly__top__DOT__IDU_init__DOT__mepc;
    vlSelfRef.top__DOT__xbar_init__DOT__s2_r_busy = __Vdly__top__DOT__xbar_init__DOT__s2_r_busy;
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/frank_wu/ysyx-workbench/npc/vsrc/top.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/frank_wu/ysyx-workbench/npc/vsrc/top.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/frank_wu/ysyx-workbench/npc/vsrc/top.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
