// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___eval_static__TOP__ysyxSoCFull__asic(VysyxSoCFull_ysyxSoCASIC* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyx_25080218___eval_static__TOP__ysyxSoCFull__asic__cpu__cpu(VysyxSoCFull_ysyx_25080218* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_static(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_static\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VysyxSoCFull_ysyxSoCASIC___eval_static__TOP__ysyxSoCFull__asic((&vlSymsp->TOP__ysyxSoCFull__asic));
    VysyxSoCFull_ysyx_25080218___eval_static__TOP__ysyxSoCFull__asic__cpu__cpu((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
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
}

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCFull___eval_initial__TOP__ysyxSoCFull(VysyxSoCFull_ysyxSoCFull* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___eval_initial__TOP__ysyxSoCFull__asic(VysyxSoCFull_ysyxSoCASIC* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_CPU___eval_initial__TOP__ysyxSoCFull__asic__cpu(VysyxSoCFull_CPU* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyx_25080218___eval_initial__TOP__ysyxSoCFull__asic__cpu__cpu(VysyxSoCFull_ysyx_25080218* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_initial(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_initial\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VysyxSoCFull_ysyxSoCFull___eval_initial__TOP__ysyxSoCFull((&vlSymsp->TOP__ysyxSoCFull));
    VysyxSoCFull_ysyxSoCASIC___eval_initial__TOP__ysyxSoCFull__asic((&vlSymsp->TOP__ysyxSoCFull__asic));
    VysyxSoCFull_CPU___eval_initial__TOP__ysyxSoCFull__asic__cpu((&vlSymsp->TOP__ysyxSoCFull__asic__cpu));
    VysyxSoCFull_ysyx_25080218___eval_initial__TOP__ysyxSoCFull__asic__cpu__cpu((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_25080218___eval_final__TOP__ysyxSoCFull__asic__cpu__cpu(VysyxSoCFull_ysyx_25080218* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_final(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_final\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VysyxSoCFull_ysyx_25080218___eval_final__TOP__ysyxSoCFull__asic__cpu__cpu((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__stl(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VysyxSoCFull___024root___eval_triggers__stl(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_triggers__stl\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VysyxSoCFull___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyx_25080218___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_25080218* vlSelf);
void VysyxSoCFull___024root___ico_sequent__TOP__0(VysyxSoCFull___024root* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_CPU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__0(VysyxSoCFull_CPU* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyx_25080218___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_25080218* vlSelf);
VL_ATTR_COLD void VysyxSoCFull___024root___stl_sequent__TOP__1(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_ysyxSoCFull___ico_sequent__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf);
void VysyxSoCFull_CPU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__0(VysyxSoCFull_CPU* vlSelf);
VL_ATTR_COLD void VysyxSoCFull_ysyx_25080218___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_25080218* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_stl(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_stl\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__0((&vlSymsp->TOP__ysyxSoCFull));
        VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__0((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_ysyx_25080218___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull___024root___ico_sequent__TOP__0(vlSelf);
        VysyxSoCFull_CPU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu));
        VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__1((&vlSymsp->TOP__ysyxSoCFull));
        VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__1((&vlSymsp->TOP__ysyxSoCFull__asic));
        VysyxSoCFull_ysyx_25080218___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
        VysyxSoCFull___024root___stl_sequent__TOP__1(vlSelf);
        VysyxSoCFull_ysyxSoCFull___ico_sequent__TOP__ysyxSoCFull__1((&vlSymsp->TOP__ysyxSoCFull));
        VysyxSoCFull_CPU___ico_sequent__TOP__ysyxSoCFull__asic__cpu__0((&vlSymsp->TOP__ysyxSoCFull__asic__cpu));
        VysyxSoCFull_ysyx_25080218___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2((&vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu));
    }
}

VL_ATTR_COLD void VysyxSoCFull___024root___stl_sequent__TOP__1(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___stl_sequent__TOP__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.externalPins_gpio_out = vlSymsp->TOP__ysyxSoCFull.externalPins_gpio_out;
    vlSelfRef.externalPins_vga_hsync = vlSymsp->TOP__ysyxSoCFull.externalPins_vga_hsync;
    vlSelfRef.externalPins_vga_vsync = vlSymsp->TOP__ysyxSoCFull.externalPins_vga_vsync;
    vlSelfRef.externalPins_vga_valid = vlSymsp->TOP__ysyxSoCFull.externalPins_vga_valid;
    vlSelfRef.externalPins_uart_tx = vlSymsp->TOP__ysyxSoCFull.externalPins_uart_tx;
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
