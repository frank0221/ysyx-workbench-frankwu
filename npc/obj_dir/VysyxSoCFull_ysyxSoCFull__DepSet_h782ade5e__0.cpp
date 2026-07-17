// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyxSoCFull.h"

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___ico_sequent__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___ico_sequent__TOP__ysyxSoCFull__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ysyxSoCFull__asic.ps2_data = vlSelfRef.externalPins_ps2_data;
    vlSymsp->TOP__ysyxSoCFull__asic.ps2_clk = vlSelfRef.externalPins_ps2_clk;
    vlSymsp->TOP__ysyxSoCFull__asic.uart_rx = vlSelfRef.externalPins_uart_rx;
    vlSymsp->TOP__ysyxSoCFull__asic.gpio_in = vlSelfRef.externalPins_gpio_in;
    vlSymsp->TOP__ysyxSoCFull__asic.clock = vlSelfRef.clock;
    vlSymsp->TOP__ysyxSoCFull__asic.reset = vlSelfRef.reset;
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___ico_sequent__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___ico_sequent__TOP__ysyxSoCFull__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef._asic_sdram_clk = vlSymsp->TOP__ysyxSoCFull__asic.sdram_clk;
    vlSelfRef.sdram__DOT__clk = vlSelfRef._asic_sdram_clk;
    vlSelfRef.sdram__DOT__sdram0__DOT__clk = vlSelfRef.sdram__DOT__clk;
    vlSelfRef.sdram__DOT__sdram1__DOT__clk = vlSelfRef.sdram__DOT__clk;
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__flash__DOT__state;
    __Vdly__flash__DOT__state = 0;
    CData/*7:0*/ __Vdly__flash__DOT__counter;
    __Vdly__flash__DOT__counter = 0;
    IData/*23:0*/ __Vdly__flash__DOT__addr;
    __Vdly__flash__DOT__addr = 0;
    IData/*31:0*/ __Vdly__flash__DOT__data;
    __Vdly__flash__DOT__data = 0;
    // Body
    vlSelfRef.__Vdly__flash__DOT__cmd = vlSelfRef.flash__DOT__cmd;
    __Vdly__flash__DOT__addr = vlSelfRef.flash__DOT__addr;
    __Vdly__flash__DOT__counter = vlSelfRef.flash__DOT__counter;
    __Vdly__flash__DOT__state = vlSelfRef.flash__DOT__state;
    __Vdly__flash__DOT__data = vlSelfRef.flash__DOT__data;
    if (vlSelfRef.flash__DOT__reset) {
        vlSelfRef.__Vdly__flash__DOT__cmd = 0U;
        __Vdly__flash__DOT__addr = 0U;
        __Vdly__flash__DOT__counter = 0U;
    } else {
        if ((0U == (IData)(vlSelfRef.flash__DOT__state))) {
            vlSelfRef.__Vdly__flash__DOT__cmd = ((0xfeU 
                                                  & ((IData)(vlSelfRef.flash__DOT__cmd) 
                                                     << 1U)) 
                                                 | (IData)(vlSelfRef._asic_spi_mosi));
            __Vdly__flash__DOT__counter = (0xffU & 
                                           ((7U > (IData)(vlSelfRef.flash__DOT__counter))
                                             ? ((IData)(1U) 
                                                + (IData)(vlSelfRef.flash__DOT__counter))
                                             : 0U));
        } else {
            __Vdly__flash__DOT__counter = (0xffU & 
                                           ((1U == (IData)(vlSelfRef.flash__DOT__state))
                                             ? ((0x17U 
                                                 > (IData)(vlSelfRef.flash__DOT__counter))
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelfRef.flash__DOT__counter))
                                                 : 0U)
                                             : ((IData)(1U) 
                                                + (IData)(vlSelfRef.flash__DOT__counter))));
        }
        if (((1U == (IData)(vlSelfRef.flash__DOT__state)) 
             & (0x17U > (IData)(vlSelfRef.flash__DOT__counter)))) {
            __Vdly__flash__DOT__addr = ((0xfffffeU 
                                         & (vlSelfRef.flash__DOT__addr 
                                            << 1U)) 
                                        | (IData)(vlSelfRef._asic_spi_mosi));
        }
    }
    if (vlSelfRef.flash__DOT__reset) {
        __Vdly__flash__DOT__state = 0U;
    } else if ((0U == (IData)(vlSelfRef.flash__DOT__state))) {
        __Vdly__flash__DOT__state = ((7U == (IData)(vlSelfRef.flash__DOT__counter))
                                      ? 1U : (IData)(vlSelfRef.flash__DOT__state));
    } else if ((1U == (IData)(vlSelfRef.flash__DOT__state))) {
        __Vdly__flash__DOT__state = ((3U != (IData)(vlSelfRef.flash__DOT__cmd))
                                      ? 3U : ((0x17U 
                                               == (IData)(vlSelfRef.flash__DOT__counter))
                                               ? 2U
                                               : (IData)(vlSelfRef.flash__DOT__state)));
    } else if (VL_LIKELY(((2U == (IData)(vlSelfRef.flash__DOT__state))))) {
        __Vdly__flash__DOT__state = vlSelfRef.flash__DOT__state;
    } else {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Unsupported command `%xh`, only support `03h` read command\n",0,
                      8,vlSelfRef.flash__DOT__cmd);
        if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
        __Vdly__flash__DOT__state = vlSelfRef.flash__DOT__state;
        VL_WRITEF_NX("[%0t] %%Fatal: flash.v:44: Assertion failed in %NysyxSoCFull.flash\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/perip/flash/flash.v", 44, "", false);
    }
    if (vlSelfRef.flash__DOT__reset) {
        __Vdly__flash__DOT__data = 0U;
    } else if ((2U == (IData)(vlSelfRef.flash__DOT__state))) {
        __Vdly__flash__DOT__data = (((0U == (IData)(vlSelfRef.flash__DOT__counter))
                                      ? vlSelfRef.flash__DOT__data_bswap
                                      : vlSelfRef.flash__DOT__data) 
                                    << 1U);
    }
    vlSelfRef.flash__DOT__addr = __Vdly__flash__DOT__addr;
    vlSelfRef.flash__DOT__data = __Vdly__flash__DOT__data;
    vlSelfRef.flash__DOT__counter = __Vdly__flash__DOT__counter;
    vlSelfRef.flash__DOT__state = __Vdly__flash__DOT__state;
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.externalPins_gpio_out = vlSymsp->TOP__ysyxSoCFull__asic.gpio_out;
    vlSelfRef.externalPins_vga_vsync = vlSymsp->TOP__ysyxSoCFull__asic.vga_vsync;
    vlSelfRef.externalPins_vga_hsync = vlSymsp->TOP__ysyxSoCFull__asic.vga_hsync;
    vlSelfRef.externalPins_vga_valid = vlSymsp->TOP__ysyxSoCFull__asic.vga_valid;
    vlSelfRef.externalPins_gpio_seg_0 = vlSymsp->TOP__ysyxSoCFull__asic.gpio_seg_0;
    vlSelfRef.externalPins_gpio_seg_1 = vlSymsp->TOP__ysyxSoCFull__asic.gpio_seg_1;
    vlSelfRef.externalPins_gpio_seg_2 = vlSymsp->TOP__ysyxSoCFull__asic.gpio_seg_2;
    vlSelfRef.externalPins_gpio_seg_3 = vlSymsp->TOP__ysyxSoCFull__asic.gpio_seg_3;
    vlSelfRef.externalPins_gpio_seg_4 = vlSymsp->TOP__ysyxSoCFull__asic.gpio_seg_4;
    vlSelfRef.externalPins_gpio_seg_5 = vlSymsp->TOP__ysyxSoCFull__asic.gpio_seg_5;
    vlSelfRef.externalPins_gpio_seg_6 = vlSymsp->TOP__ysyxSoCFull__asic.gpio_seg_6;
    vlSelfRef.externalPins_gpio_seg_7 = vlSymsp->TOP__ysyxSoCFull__asic.gpio_seg_7;
    vlSelfRef.externalPins_vga_r = vlSymsp->TOP__ysyxSoCFull__asic.vga_r;
    vlSelfRef.externalPins_vga_g = vlSymsp->TOP__ysyxSoCFull__asic.vga_g;
    vlSelfRef.externalPins_vga_b = vlSymsp->TOP__ysyxSoCFull__asic.vga_b;
}

void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data);

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__3(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_flash_read__0__data;
    __Vtask_flash_read__0__data = 0;
    CData/*4:0*/ __Vdly__bitrev__DOT__serial2pare_init__DOT__i;
    __Vdly__bitrev__DOT__serial2pare_init__DOT__i = 0;
    // Body
    __Vdly__bitrev__DOT__serial2pare_init__DOT__i = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__i;
    if (vlSelfRef.flash__DOT__ren) {
        if (VL_LIKELY(((3U == (IData)(vlSelfRef.flash__DOT__cmd))))) {
            VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(vlSelfRef.flash__DOT__raddr, __Vtask_flash_read__0__data);
            vlSelfRef.flash__DOT__rdata = __Vtask_flash_read__0__data;
        } else {
            VL_FWRITEF_NX(0x80000002U,"Assertion failed: Unsupport command `%xh`, only support `03h` read command\n",0,
                          8,vlSelfRef.flash__DOT__cmd);
            if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
            VL_WRITEF_NX("[%0t] %%Fatal: flash.v:98: Assertion failed in %NysyxSoCFull.flash.flash_cmd_i\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            Verilated::runFlushCallbacks();
            VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/perip/flash/flash.v", 98, "", false);
        }
    }
    vlSelfRef.flash__DOT__flash_cmd_i__DOT__data = vlSelfRef.flash__DOT__rdata;
    vlSelfRef.flash__DOT__data_bswap = (((vlSelfRef.flash__DOT__rdata 
                                          << 0x18U) 
                                         | (0xff0000U 
                                            & (vlSelfRef.flash__DOT__rdata 
                                               << 8U))) 
                                        | ((0xff00U 
                                            & (vlSelfRef.flash__DOT__rdata 
                                               >> 8U)) 
                                           | (vlSelfRef.flash__DOT__rdata 
                                              >> 0x18U)));
    if ((1U & (~ ((IData)(vlSelfRef._asic_spi_ss) >> 7U)))) {
        __Vdly__bitrev__DOT__serial2pare_init__DOT__i 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__i)));
        if ((8U == (IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__i))) {
            vlSelfRef.bitrev__DOT__serial2pare_init__DOT__out_r 
                = vlSelfRef.bitrev__DOT__data_o;
        }
    }
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d7 
        = ((1U & (~ ((IData)(vlSelfRef._asic_spi_ss) 
                     >> 7U))) && (IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d6));
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__i 
        = __Vdly__bitrev__DOT__serial2pare_init__DOT__i;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__sel 
        = (0xfU & ((IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__i) 
                   - (IData)(9U)));
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D7__DOT__out 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d7;
    vlSelfRef.bitrev__DOT__data_i_7 = (0x80U == ((IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d7) 
                                                 << 7U));
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d6 
        = ((1U & (~ ((IData)(vlSelfRef._asic_spi_ss) 
                     >> 7U))) && (IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d5));
    vlSelfRef.bitrev__DOT__out = (1U & ((0x11U <= (IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__i)) 
                                        | ((IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__out_r) 
                                           >> (7U & 
                                               ((IData)(7U) 
                                                - (IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__sel))))));
    vlSelfRef.bitrev__DOT__data_o_0 = vlSelfRef.bitrev__DOT__data_i_7;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__out_s 
        = vlSelfRef.bitrev__DOT__out;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D6__DOT__out 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d6;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D7__DOT__in 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d6;
    vlSelfRef.bitrev__DOT__data_i_6 = (0x40U == ((IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d6) 
                                                 << 6U));
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d5 
        = ((1U & (~ ((IData)(vlSelfRef._asic_spi_ss) 
                     >> 7U))) && (IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d4));
    vlSelfRef.bitrev__DOT__data_o_1 = vlSelfRef.bitrev__DOT__data_i_6;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D5__DOT__out 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d5;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D6__DOT__in 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d5;
    vlSelfRef.bitrev__DOT__data_i_5 = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d5;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d4 
        = ((1U & (~ ((IData)(vlSelfRef._asic_spi_ss) 
                     >> 7U))) && (IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d3));
    vlSelfRef.bitrev__DOT__data_o_2 = vlSelfRef.bitrev__DOT__data_i_5;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D4__DOT__out 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d4;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D5__DOT__in 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d4;
    vlSelfRef.bitrev__DOT__data_i_4 = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d4;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d3 
        = ((1U & (~ ((IData)(vlSelfRef._asic_spi_ss) 
                     >> 7U))) && (IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d2));
    vlSelfRef.bitrev__DOT__data_o_3 = vlSelfRef.bitrev__DOT__data_i_4;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D3__DOT__out 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d3;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D4__DOT__in 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d3;
    vlSelfRef.bitrev__DOT__data_i_3 = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d3;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d2 
        = ((1U & (~ ((IData)(vlSelfRef._asic_spi_ss) 
                     >> 7U))) && (IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d1));
    vlSelfRef.bitrev__DOT__data_o_4 = vlSelfRef.bitrev__DOT__data_i_3;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D2__DOT__out 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d2;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D3__DOT__in 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d2;
    vlSelfRef.bitrev__DOT__data_i_2 = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d2;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d1 
        = ((1U & (~ ((IData)(vlSelfRef._asic_spi_ss) 
                     >> 7U))) && (IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d0));
    vlSelfRef.bitrev__DOT__data_o_5 = vlSelfRef.bitrev__DOT__data_i_2;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D1__DOT__out 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d1;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D2__DOT__in 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d1;
    vlSelfRef.bitrev__DOT__data_i_1 = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d1;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d0 
        = ((1U & (~ ((IData)(vlSelfRef._asic_spi_ss) 
                     >> 7U))) && (IData)(vlSelfRef._asic_spi_mosi));
    vlSelfRef.bitrev__DOT__data_o_6 = vlSelfRef.bitrev__DOT__data_i_1;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D0__DOT__out 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d0;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D1__DOT__in 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d0;
    vlSelfRef.bitrev__DOT__data_i = (((((IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d7) 
                                        << 7U) | ((IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d6) 
                                                  << 6U)) 
                                      | (((IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d5) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d4) 
                                          << 4U))) 
                                     | ((((IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d3) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d2) 
                                          << 2U)) | 
                                        (((IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d1) 
                                          << 1U) | (IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d0))));
    vlSelfRef.bitrev__DOT__data_i_0 = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d0;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__out_p 
        = vlSelfRef.bitrev__DOT__data_i;
    vlSelfRef.bitrev__DOT__data_o_7 = vlSelfRef.bitrev__DOT__data_i_0;
    vlSelfRef.bitrev__DOT__data_o = (((((IData)(vlSelfRef.bitrev__DOT__data_i_0) 
                                        << 7U) | ((IData)(vlSelfRef.bitrev__DOT__data_i_1) 
                                                  << 6U)) 
                                      | (((IData)(vlSelfRef.bitrev__DOT__data_i_2) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.bitrev__DOT__data_i_3) 
                                          << 4U))) 
                                     | ((((IData)(vlSelfRef.bitrev__DOT__data_i_4) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.bitrev__DOT__data_i_5) 
                                          << 2U)) | 
                                        (((IData)(vlSelfRef.bitrev__DOT__data_i_6) 
                                          << 1U) | (IData)(vlSelfRef.bitrev__DOT__data_i_7))));
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__in_p 
        = vlSelfRef.bitrev__DOT__data_o;
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__4(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_1;
    sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_1 = 0;
    CData/*0:0*/ sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_2;
    sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_2 = 0;
    CData/*0:0*/ sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_3;
    sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_3 = 0;
    CData/*0:0*/ sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_4;
    sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_4 = 0;
    CData/*0:0*/ sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_7;
    sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_7 = 0;
    CData/*0:0*/ sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_8;
    sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_8 = 0;
    // Body
    vlSelfRef._asic_spi_mosi = vlSymsp->TOP__ysyxSoCFull__asic.spi_mosi;
    vlSelfRef._asic_sdram_cke = vlSymsp->TOP__ysyxSoCFull__asic.sdram_cke;
    vlSelfRef._asic_sdram_ba = vlSymsp->TOP__ysyxSoCFull__asic.sdram_ba;
    vlSelfRef._asic_sdram_a = vlSymsp->TOP__ysyxSoCFull__asic.sdram_a;
    vlSelfRef._asic_sdram_dqm = vlSymsp->TOP__ysyxSoCFull__asic.sdram_dqm;
    vlSelfRef._asic_sdram_we = vlSymsp->TOP__ysyxSoCFull__asic.sdram_we;
    vlSelfRef._asic_sdram_cas = vlSymsp->TOP__ysyxSoCFull__asic.sdram_cas;
    vlSelfRef._asic_sdram_ras = vlSymsp->TOP__ysyxSoCFull__asic.sdram_ras;
    vlSelfRef._asic_sdram_cs = vlSymsp->TOP__ysyxSoCFull__asic.sdram_cs;
    vlSelfRef._asic_spi_sck = vlSymsp->TOP__ysyxSoCFull__asic.spi_sck;
    vlSelfRef._asic_spi_ss = vlSymsp->TOP__ysyxSoCFull__asic.spi_ss;
    vlSelfRef.externalPins_uart_tx = vlSymsp->TOP__ysyxSoCFull__asic.uart_tx;
    vlSelfRef.flash__DOT__mosi = vlSelfRef._asic_spi_mosi;
    vlSelfRef.bitrev__DOT__mosi = vlSelfRef._asic_spi_mosi;
    vlSelfRef.sdram__DOT__cke = vlSelfRef._asic_sdram_cke;
    vlSelfRef.sdram__DOT__ba = vlSelfRef._asic_sdram_ba;
    vlSelfRef.sdram__DOT__a = vlSelfRef._asic_sdram_a;
    vlSelfRef.sdram__DOT__dqm = vlSelfRef._asic_sdram_dqm;
    vlSelfRef.sdram__DOT__sdram0__DOT__dqm = (3U & 
                                              ((IData)(vlSelfRef._asic_sdram_dqm) 
                                               >> 0U));
    vlSelfRef.sdram__DOT__sdram1__DOT__dqm = (3U & 
                                              ((IData)(vlSelfRef._asic_sdram_dqm) 
                                               >> 2U));
    vlSelfRef.sdram__DOT__we = vlSelfRef._asic_sdram_we;
    vlSelfRef.sdram__DOT__cas = vlSelfRef._asic_sdram_cas;
    vlSelfRef.sdram__DOT__ras = vlSelfRef._asic_sdram_ras;
    vlSelfRef.sdram__DOT__sdram0__DOT__COMMAND_INHIBIT 
        = vlSelfRef._asic_sdram_cs;
    vlSelfRef.sdram__DOT__sdram1__DOT__COMMAND_INHIBIT 
        = vlSelfRef._asic_sdram_cs;
    vlSelfRef.sdram__DOT__cs = vlSelfRef._asic_sdram_cs;
    sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_3 
        = (1U & ((~ (IData)(vlSelfRef._asic_sdram_cs)) 
                 & (~ (IData)(vlSelfRef._asic_sdram_ras))));
    sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_1 
        = ((~ (IData)(vlSelfRef._asic_sdram_cs)) & (IData)(vlSelfRef._asic_sdram_ras));
    vlSelfRef.flash__DOT__sck = vlSelfRef._asic_spi_sck;
    vlSelfRef.bitrev__DOT__sck = vlSelfRef._asic_spi_sck;
    vlSelfRef.bitrev__DOT__ss = (1U & ((IData)(vlSelfRef._asic_spi_ss) 
                                       >> 7U));
    vlSelfRef.flash__DOT__reset = (1U & (IData)(vlSelfRef._asic_spi_ss));
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__in_s 
        = vlSelfRef.bitrev__DOT__mosi;
    vlSelfRef.sdram__DOT__sdram0__DOT__cke = vlSelfRef.sdram__DOT__cke;
    vlSelfRef.sdram__DOT__sdram1__DOT__cke = vlSelfRef.sdram__DOT__cke;
    vlSelfRef.sdram__DOT__sdram0__DOT__ba = vlSelfRef.sdram__DOT__ba;
    vlSelfRef.sdram__DOT__sdram1__DOT__ba = vlSelfRef.sdram__DOT__ba;
    vlSelfRef.sdram__DOT__sdram0__DOT__a = vlSelfRef.sdram__DOT__a;
    vlSelfRef.sdram__DOT__sdram1__DOT__a = vlSelfRef.sdram__DOT__a;
    vlSelfRef.sdram__DOT__sdram0__DOT__we = vlSelfRef.sdram__DOT__we;
    vlSelfRef.sdram__DOT__sdram1__DOT__we = vlSelfRef.sdram__DOT__we;
    vlSelfRef.sdram__DOT__sdram0__DOT__cas = vlSelfRef.sdram__DOT__cas;
    vlSelfRef.sdram__DOT__sdram1__DOT__cas = vlSelfRef.sdram__DOT__cas;
    vlSelfRef.sdram__DOT__sdram0__DOT__ras = vlSelfRef.sdram__DOT__ras;
    vlSelfRef.sdram__DOT__sdram1__DOT__ras = vlSelfRef.sdram__DOT__ras;
    vlSelfRef.sdram__DOT__sdram0__DOT__cs = vlSelfRef.sdram__DOT__cs;
    vlSelfRef.sdram__DOT__sdram1__DOT__cs = vlSelfRef.sdram__DOT__cs;
    sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_4 
        = ((IData)(sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_3) 
           & (IData)(vlSelfRef._asic_sdram_cas));
    sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_7 
        = ((~ (IData)(vlSelfRef._asic_sdram_cas)) & (IData)(sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_3));
    sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_2 
        = ((IData)(sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_1) 
           & (IData)(vlSelfRef._asic_sdram_cas));
    sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_8 
        = ((~ (IData)(vlSelfRef._asic_sdram_cas)) & (IData)(sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_1));
    vlSelfRef.flash__DOT__flash_cmd_i__DOT__clock = vlSelfRef.flash__DOT__sck;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__clk 
        = vlSelfRef.bitrev__DOT__sck;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__ss 
        = vlSelfRef.bitrev__DOT__ss;
    vlSelfRef.flash__DOT__ss = vlSelfRef.flash__DOT__reset;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D0__DOT__in 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__in_s;
    vlSelfRef.sdram__DOT__sdram0__DOT__ACTIVE = ((IData)(sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_4) 
                                                 & (IData)(vlSelfRef._asic_sdram_we));
    vlSelfRef.sdram__DOT__sdram0__DOT__PRECHARGE = 
        ((~ (IData)(vlSelfRef._asic_sdram_we)) & (IData)(sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_4));
    vlSelfRef.sdram__DOT__sdram0__DOT__LOAD_MODE_REGISTER 
        = ((~ (IData)(vlSelfRef._asic_sdram_we)) & (IData)(sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_7));
    vlSelfRef.sdram__DOT__sdram0__DOT__AUTO_REFRESH 
        = ((IData)(sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_7) 
           & (IData)(vlSelfRef._asic_sdram_we));
    vlSelfRef.sdram__DOT__sdram0__DOT__NO_OPERATION 
        = ((IData)(sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_2) 
           & (IData)(vlSelfRef._asic_sdram_we));
    vlSelfRef.sdram__DOT__sdram0__DOT__BURST_TERMINATE 
        = ((~ (IData)(vlSelfRef._asic_sdram_we)) & (IData)(sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_2));
    vlSelfRef.sdram__DOT__sdram0__DOT__READ = ((IData)(sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_8) 
                                               & (IData)(vlSelfRef._asic_sdram_we));
    vlSelfRef.sdram__DOT__sdram0__DOT__WRITE = ((~ (IData)(vlSelfRef._asic_sdram_we)) 
                                                & (IData)(sdram__DOT__sdram0__DOT____VdfgRegularize_h49d81015_0_8));
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D0__DOT__clk 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__clk;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D1__DOT__clk 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__clk;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D2__DOT__clk 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__clk;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D3__DOT__clk 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__clk;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D4__DOT__clk 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__clk;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D5__DOT__clk 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__clk;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D6__DOT__clk 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__clk;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D7__DOT__clk 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__clk;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D0__DOT__ss 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__ss;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D1__DOT__ss 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__ss;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D2__DOT__ss 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__ss;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D3__DOT__ss 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__ss;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D4__DOT__ss 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__ss;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D5__DOT__ss 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__ss;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D6__DOT__ss 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__ss;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D7__DOT__ss 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__ss;
    vlSelfRef.sdram__DOT__sdram1__DOT__ACTIVE = vlSelfRef.sdram__DOT__sdram0__DOT__ACTIVE;
    vlSelfRef.sdram__DOT__sdram1__DOT__PRECHARGE = vlSelfRef.sdram__DOT__sdram0__DOT__PRECHARGE;
    vlSelfRef.sdram__DOT__sdram1__DOT__LOAD_MODE_REGISTER 
        = vlSelfRef.sdram__DOT__sdram0__DOT__LOAD_MODE_REGISTER;
    vlSelfRef.sdram__DOT__sdram1__DOT__AUTO_REFRESH 
        = vlSelfRef.sdram__DOT__sdram0__DOT__AUTO_REFRESH;
    vlSelfRef.sdram__DOT__sdram1__DOT__NO_OPERATION 
        = vlSelfRef.sdram__DOT__sdram0__DOT__NO_OPERATION;
    vlSelfRef.sdram__DOT__sdram1__DOT__BURST_TERMINATE 
        = vlSelfRef.sdram__DOT__sdram0__DOT__BURST_TERMINATE;
    vlSelfRef.sdram__DOT__sdram1__DOT__READ = vlSelfRef.sdram__DOT__sdram0__DOT__READ;
    vlSelfRef.sdram__DOT__sdram1__DOT__WRITE = vlSelfRef.sdram__DOT__sdram0__DOT__WRITE;
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef._asic_psram_ce_n = vlSymsp->TOP__ysyxSoCFull__asic.psram_ce_n;
    vlSelfRef._asic_psram_sck = vlSymsp->TOP__ysyxSoCFull__asic.psram_sck;
    vlSelfRef.psram__DOT__ce_n = vlSelfRef._asic_psram_ce_n;
    vlSelfRef.psram__DOT__sck = vlSelfRef._asic_psram_sck;
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__2(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ sdram__DOT__dq__en0;
    sdram__DOT__dq__en0 = 0;
    SData/*15:0*/ sdram__DOT__dq__en1;
    sdram__DOT__dq__en1 = 0;
    // Body
    sdram__DOT__dq__en0 = ((IData)(vlSelfRef.sdram__DOT__sdram0__DOT__read_valid)
                            ? ((((2U & (IData)(vlSelfRef._asic_sdram_dqm))
                                  ? 0U : 0xffU) << 8U) 
                               | ((1U & (IData)(vlSelfRef._asic_sdram_dqm))
                                   ? 0U : 0xffU)) : 0U);
    sdram__DOT__dq__en1 = ((IData)(vlSelfRef.sdram__DOT__sdram1__DOT__read_valid)
                            ? ((((8U & (IData)(vlSelfRef._asic_sdram_dqm))
                                  ? 0U : 0xffU) << 8U) 
                               | ((4U & (IData)(vlSelfRef._asic_sdram_dqm))
                                   ? 0U : 0xffU)) : 0U);
    if (vlSelfRef.sdram__DOT__sdram0__DOT__WRITE) {
        vlSelfRef.sdram__DOT__sdram0__DOT__write_bank 
            = vlSelfRef._asic_sdram_ba;
        vlSelfRef.sdram__DOT__sdram0__DOT__write_col 
            = (0x1ffU & (IData)(vlSelfRef._asic_sdram_a));
        vlSelfRef.sdram__DOT__sdram1__DOT__write_bank 
            = vlSelfRef._asic_sdram_ba;
        vlSelfRef.sdram__DOT__sdram1__DOT__write_col 
            = (0x1ffU & (IData)(vlSelfRef._asic_sdram_a));
    } else {
        vlSelfRef.sdram__DOT__sdram0__DOT__write_bank 
            = vlSelfRef.sdram__DOT__sdram0__DOT__bank_num;
        vlSelfRef.sdram__DOT__sdram0__DOT__write_col 
            = vlSelfRef.sdram__DOT__sdram0__DOT__col_num;
        vlSelfRef.sdram__DOT__sdram1__DOT__write_bank 
            = vlSelfRef.sdram__DOT__sdram1__DOT__bank_num;
        vlSelfRef.sdram__DOT__sdram1__DOT__write_col 
            = vlSelfRef.sdram__DOT__sdram1__DOT__col_num;
    }
    vlSelfRef.sdram__DOT__dq__out__strong__out2 = (
                                                   (0xffff0000U 
                                                    & vlSelfRef.sdram__DOT__dq__out__strong__out2) 
                                                   | (((IData)(vlSelfRef.sdram__DOT__sdram0__DOT__read_valid)
                                                        ? 
                                                       ((((2U 
                                                           & (IData)(vlSelfRef._asic_sdram_dqm))
                                                           ? 0U
                                                           : 
                                                          (0xffU 
                                                           & ((IData)(vlSelfRef.sdram__DOT__sdram0__DOT__out) 
                                                              >> 8U))) 
                                                         << 8U) 
                                                        | ((1U 
                                                            & (IData)(vlSelfRef._asic_sdram_dqm))
                                                            ? 0U
                                                            : 
                                                           (0xffU 
                                                            & (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__out))))
                                                        : 0U) 
                                                      & (IData)(sdram__DOT__dq__en0)));
    vlSelfRef.sdram__DOT__dq__out__strong__out3 = (
                                                   (0xffffU 
                                                    & vlSelfRef.sdram__DOT__dq__out__strong__out3) 
                                                   | ((((IData)(vlSelfRef.sdram__DOT__sdram1__DOT__read_valid)
                                                         ? 
                                                        ((((8U 
                                                            & (IData)(vlSelfRef._asic_sdram_dqm))
                                                            ? 0U
                                                            : 
                                                           (0xffU 
                                                            & ((IData)(vlSelfRef.sdram__DOT__sdram1__DOT__out) 
                                                               >> 8U))) 
                                                          << 8U) 
                                                         | ((4U 
                                                             & (IData)(vlSelfRef._asic_sdram_dqm))
                                                             ? 0U
                                                             : 
                                                            (0xffU 
                                                             & (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__out))))
                                                         : 0U) 
                                                       & (IData)(sdram__DOT__dq__en1)) 
                                                      << 0x10U));
    vlSelfRef._dq_wire = (((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                ? 0U : 0xffffU) << 0x10U) 
                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                 ? 0U : 0xffffU)) & 
                            (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lsdram_apb__DOT__msdram__DOT__dq1) 
                                << 0x10U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.lsdram_apb__DOT__msdram__DOT__dq0)) 
                              & ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : 0xffffU) 
                                  << 0x10U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                                ? 0U
                                                : 0xffffU))) 
                             & ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU) 
                                 << 0x10U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                               ? 0U
                                               : 0xffffU)))) 
                           & ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                 ? 0U : 0xffffU) << 0x10U) 
                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU))) 
                          | (((vlSelfRef.sdram__DOT__dq__out__strong__out2 
                               & (IData)(sdram__DOT__dq__en0)) 
                              | (vlSelfRef.sdram__DOT__dq__out__strong__out3 
                                 & ((IData)(sdram__DOT__dq__en1) 
                                    << 0x10U))) & ((IData)(sdram__DOT__dq__en0) 
                                                   | ((IData)(sdram__DOT__dq__en1) 
                                                      << 0x10U))));
    vlSelfRef.sdram__DOT__dq = vlSelfRef._dq_wire;
    vlSelfRef.sdram__DOT__sdram0__DOT__dq = (0xffffU 
                                             & (vlSelfRef._dq_wire 
                                                >> 0U));
    vlSelfRef.sdram__DOT__sdram1__DOT__dq = (0xffffU 
                                             & (vlSelfRef._dq_wire 
                                                >> 0x10U));
    vlSymsp->TOP__ysyxSoCFull__asic.sdram_dq = vlSelfRef._dq_wire;
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__4(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.psram__DOT__din = ((((((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.lpsram__DOT__mpsram__DOT__douten))) 
                                     | (0xcU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.lpsram__DOT__mpsram__DOT__douten)))) 
                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.psram_dio__en)) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.psram_dio__en)) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.psram_dio__en)) 
                                 | ((((IData)(vlSelfRef.psram__DOT__douten)
                                       ? (IData)(vlSelfRef.psram__DOT__dout)
                                       : 0U) & ((IData)(vlSelfRef.psram__DOT__douten)
                                                 ? 0xfU
                                                 : 0U)) 
                                    & ((IData)(vlSelfRef.psram__DOT__douten)
                                        ? 0xfU : 0U)));
    vlSelfRef._dio_wire = vlSelfRef.psram__DOT__din;
    vlSelfRef.psram__DOT__dio = vlSelfRef._dio_wire;
    vlSymsp->TOP__ysyxSoCFull__asic.psram_dio = vlSelfRef._dio_wire;
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__5(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__5\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ysyxSoCFull__asic.spi_miso = ((IData)(vlSelfRef._bitrev_miso) 
                                                & (IData)(vlSelfRef._flash_miso));
}
