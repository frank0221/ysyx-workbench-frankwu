// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__ico(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG

void VysyxSoCFull___024root___eval_triggers__ico(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_triggers__ico\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VysyxSoCFull___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void VysyxSoCFull_ysyx_25080218___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_25080218* vlSelf);
void VysyxSoCFull___024root___ico_sequent__TOP__0(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_ysyxSoCFull___ico_sequent__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyxSoCFull___ico_sequent__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_CPU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__0(VysyxSoCFull_CPU* vlSelf);
void VysyxSoCFull_ysyx_25080218___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_25080218* vlSelf);

void VysyxSoCFull___024root___eval_ico(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_ico\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VysyxSoCFull_ysyx_25080218___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull___024root___ico_sequent__TOP__0(vlSelf);
        VysyxSoCFull_ysyxSoCFull___ico_sequent__TOP__ysyxSoCFull__0((&vlSymsp->TOP__ysyxSoCFull));
        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__0((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_ysyxSoCFull___ico_sequent__TOP__ysyxSoCFull__1((&vlSymsp->TOP__ysyxSoCFull));
        VysyxSoCFull_CPU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu));
        VysyxSoCFull_ysyx_25080218___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
}

VL_INLINE_OPT void VysyxSoCFull___024root___ico_sequent__TOP__0(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___ico_sequent__TOP__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ysyxSoCFull.externalPins_ps2_data 
        = vlSelfRef.externalPins_ps2_data;
    vlSymsp->TOP__ysyxSoCFull.externalPins_ps2_clk 
        = vlSelfRef.externalPins_ps2_clk;
    vlSymsp->TOP__ysyxSoCFull.externalPins_uart_rx 
        = vlSelfRef.externalPins_uart_rx;
    vlSymsp->TOP__ysyxSoCFull.externalPins_gpio_in 
        = vlSelfRef.externalPins_gpio_in;
    vlSymsp->TOP__ysyxSoCFull.clock = vlSelfRef.clock;
    vlSymsp->TOP__ysyxSoCFull.reset = vlSelfRef.reset;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__act(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG

void VysyxSoCFull___024root___eval_triggers__act(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_triggers__act\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSymsp->TOP__ysyxSoCFull._asic_spi_sck) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull___asic_spi_sck__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSymsp->TOP__ysyxSoCFull.flash__DOT__reset) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__flash__DOT__reset__0))));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSymsp->TOP__ysyxSoCFull._asic_psram_ce_n) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull___asic_psram_ce_n__0))));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSymsp->TOP__ysyxSoCFull._asic_psram_sck) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull___asic_psram_sck__0))));
    vlSelfRef.__VactTriggered.setBit(4U, ((IData)(vlSymsp->TOP__ysyxSoCFull._asic_sdram_clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull___asic_sdram_clk__0))));
    vlSelfRef.__VactTriggered.setBit(5U, ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.clock) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic__clock__0))));
    vlSelfRef.__VactTriggered.setBit(6U, ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.reset) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic__reset__0))));
    vlSelfRef.__VactTriggered.setBit(7U, ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.clock) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic__clock__0)));
    vlSelfRef.__VactTriggered.setBit(8U, ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.clock) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic__cpu__cpu__clock__0))));
    vlSelfRef.__VactTriggered.setBit(9U, ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic__cpu__cpu__reset__0))));
    vlSelfRef.__VactTriggered.setBit(0xaU, ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_init__DOT__imm_is_B) 
                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic__cpu__cpu__IDU_init__DOT__imm_is_B__0))));
    vlSelfRef.__VactTriggered.setBit(0xbU, ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_init__DOT__imm_is_I) 
                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic__cpu__cpu__IDU_init__DOT__imm_is_I__0))));
    vlSelfRef.__VactTriggered.setBit(0xcU, ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_init__DOT__imm_is_J) 
                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic__cpu__cpu__IDU_init__DOT__imm_is_J__0))));
    vlSelfRef.__VactTriggered.setBit(0xdU, ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_init__DOT__imm_is_R) 
                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic__cpu__cpu__IDU_init__DOT__imm_is_R__0))));
    vlSelfRef.__VactTriggered.setBit(0xeU, ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_init__DOT__imm_is_S) 
                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic__cpu__cpu__IDU_init__DOT__imm_is_S__0))));
    vlSelfRef.__VactTriggered.setBit(0xfU, ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_init__DOT__imm_is_U) 
                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic__cpu__cpu__IDU_init__DOT__imm_is_U__0))));
    vlSelfRef.__VactTriggered.setBit(0x10U, ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.valid_to_lsu) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic__cpu__cpu__valid_to_lsu__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull___asic_spi_sck__0 
        = vlSymsp->TOP__ysyxSoCFull._asic_spi_sck;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__flash__DOT__reset__0 
        = vlSymsp->TOP__ysyxSoCFull.flash__DOT__reset;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull___asic_psram_ce_n__0 
        = vlSymsp->TOP__ysyxSoCFull._asic_psram_ce_n;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull___asic_psram_sck__0 
        = vlSymsp->TOP__ysyxSoCFull._asic_psram_sck;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull___asic_sdram_clk__0 
        = vlSymsp->TOP__ysyxSoCFull._asic_sdram_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic__clock__0 
        = vlSymsp->TOP__ysyxSoCFull__asic.clock;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic__reset__0 
        = vlSymsp->TOP__ysyxSoCFull__asic.reset;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic__cpu__cpu__clock__0 
        = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.clock;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic__cpu__cpu__reset__0 
        = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic__cpu__cpu__IDU_init__DOT__imm_is_B__0 
        = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_init__DOT__imm_is_B;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic__cpu__cpu__IDU_init__DOT__imm_is_I__0 
        = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_init__DOT__imm_is_I;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic__cpu__cpu__IDU_init__DOT__imm_is_J__0 
        = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_init__DOT__imm_is_J;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic__cpu__cpu__IDU_init__DOT__imm_is_R__0 
        = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_init__DOT__imm_is_R;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic__cpu__cpu__IDU_init__DOT__imm_is_S__0 
        = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_init__DOT__imm_is_S;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic__cpu__cpu__IDU_init__DOT__imm_is_U__0 
        = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.IDU_init__DOT__imm_is_U;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyxSoCFull__asic__cpu__cpu__valid_to_lsu__0 
        = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.valid_to_lsu;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(7U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VysyxSoCFull___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_25080218* vlSelf);
void VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_25080218* vlSelf);
void VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_25080218* vlSelf);
void VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3(VysyxSoCFull_ysyx_25080218* vlSelf);
void VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__4(VysyxSoCFull_ysyx_25080218* vlSelf);
void VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__5(VysyxSoCFull_ysyx_25080218* vlSelf);
void VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__6(VysyxSoCFull_ysyx_25080218* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__7(VysyxSoCFull_ysyx_25080218* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_CPU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__0(VysyxSoCFull_CPU* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__0(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__8(VysyxSoCFull_ysyx_25080218* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__2(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__3(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__1(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__4(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__9(VysyxSoCFull_ysyx_25080218* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__5(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__3(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__6(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__4(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_CPU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__1(VysyxSoCFull_CPU* vlSelf);
void VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__10(VysyxSoCFull_ysyx_25080218* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__2(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__11(VysyxSoCFull_ysyx_25080218* vlSelf);
void VysyxSoCFull_ysyx_25080218___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_25080218* vlSelf);
void VysyxSoCFull_CPU___nba_comb__TOP__ysyxSoCFull__asic__cpu__0(VysyxSoCFull_CPU* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyx_25080218___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_25080218* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__7(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__3(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__3(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__4(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__4(VysyxSoCFull_ysyxSoCASIC* vlSelf);
void VysyxSoCFull_ysyx_25080218___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_25080218* vlSelf);
void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__5(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__5(VysyxSoCFull_ysyxSoCASIC* vlSelf);

void VysyxSoCFull___024root___eval_nba(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_nba\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__4((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if ((0x8000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__5((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if ((0x10000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__6((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__0((&vlSymsp->TOP__ysyxSoCFull__asic));
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__7((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__0((&vlSymsp->TOP__ysyxSoCFull));
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__1((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__1((&vlSymsp->TOP__ysyxSoCFull));
        VysyxSoCFull_CPU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu));
        VysyxSoCFull___024root___nba_sequent__TOP__0(vlSelf);
        VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__8((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__2((&vlSymsp->TOP__ysyxSoCFull));
    }
    if ((0x60ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__2((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__3((&vlSymsp->TOP__ysyxSoCFull));
        VysyxSoCFull___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__4((&vlSymsp->TOP__ysyxSoCFull));
    }
    if ((0x300ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__9((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__5((&vlSymsp->TOP__ysyxSoCFull));
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__3((&vlSymsp->TOP__ysyxSoCFull__asic));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__6((&vlSymsp->TOP__ysyxSoCFull));
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__4((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_CPU___nba_sequent__TOP__ysyxSoCFull__asic__cpu__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu));
        VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__10((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if ((0x60ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__0((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__0((&vlSymsp->TOP__ysyxSoCFull));
    }
    if ((0x63ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__1((&vlSymsp->TOP__ysyxSoCFull));
    }
    if ((0x61ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__2((&vlSymsp->TOP__ysyxSoCFull));
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__11((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if ((0x300ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyx_25080218___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_CPU___nba_comb__TOP__ysyxSoCFull__asic__cpu__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu));
        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__1((&vlSymsp->TOP__ysyxSoCFull__asic));
    }
    if ((0x320ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyx_25080218___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__2((&vlSymsp->TOP__ysyxSoCFull__asic));
    }
    if ((0x60ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__7((&vlSymsp->TOP__ysyxSoCFull));
    }
    if ((0x6cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__3((&vlSymsp->TOP__ysyxSoCFull));
        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__3((&vlSymsp->TOP__ysyxSoCFull__asic));
    }
    if ((0x63ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__4((&vlSymsp->TOP__ysyxSoCFull));
        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__4((&vlSymsp->TOP__ysyxSoCFull__asic));
    }
    if ((0x120ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyx_25080218___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
    if ((0x70ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__5((&vlSymsp->TOP__ysyxSoCFull));
        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__5((&vlSymsp->TOP__ysyxSoCFull__asic));
    }
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__0(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.externalPins_gpio_out = vlSymsp->TOP__ysyxSoCFull.externalPins_gpio_out;
    vlSelfRef.externalPins_vga_vsync = vlSymsp->TOP__ysyxSoCFull.externalPins_vga_vsync;
    vlSelfRef.externalPins_vga_hsync = vlSymsp->TOP__ysyxSoCFull.externalPins_vga_hsync;
    vlSelfRef.externalPins_vga_valid = vlSymsp->TOP__ysyxSoCFull.externalPins_vga_valid;
    vlSelfRef.externalPins_gpio_seg_0 = vlSymsp->TOP__ysyxSoCFull.externalPins_gpio_seg_0;
    vlSelfRef.externalPins_gpio_seg_1 = vlSymsp->TOP__ysyxSoCFull.externalPins_gpio_seg_1;
    vlSelfRef.externalPins_gpio_seg_2 = vlSymsp->TOP__ysyxSoCFull.externalPins_gpio_seg_2;
    vlSelfRef.externalPins_gpio_seg_3 = vlSymsp->TOP__ysyxSoCFull.externalPins_gpio_seg_3;
    vlSelfRef.externalPins_gpio_seg_4 = vlSymsp->TOP__ysyxSoCFull.externalPins_gpio_seg_4;
    vlSelfRef.externalPins_gpio_seg_5 = vlSymsp->TOP__ysyxSoCFull.externalPins_gpio_seg_5;
    vlSelfRef.externalPins_gpio_seg_6 = vlSymsp->TOP__ysyxSoCFull.externalPins_gpio_seg_6;
    vlSelfRef.externalPins_gpio_seg_7 = vlSymsp->TOP__ysyxSoCFull.externalPins_gpio_seg_7;
    vlSelfRef.externalPins_vga_r = vlSymsp->TOP__ysyxSoCFull.externalPins_vga_r;
    vlSelfRef.externalPins_vga_g = vlSymsp->TOP__ysyxSoCFull.externalPins_vga_g;
    vlSelfRef.externalPins_vga_b = vlSymsp->TOP__ysyxSoCFull.externalPins_vga_b;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__1(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.externalPins_uart_tx = vlSymsp->TOP__ysyxSoCFull.externalPins_uart_tx;
}
