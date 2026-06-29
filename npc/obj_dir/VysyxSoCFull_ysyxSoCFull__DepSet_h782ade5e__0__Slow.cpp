// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyxSoCFull.h"

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.flash__DOT__flash_cmd_i__DOT__cmd = vlSelfRef.flash__DOT__cmd;
    vlSelfRef.flash__DOT__flash_cmd_i__DOT__data = vlSelfRef.flash__DOT__rdata;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D0__DOT__out 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d0;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D1__DOT__in 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d0;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D1__DOT__out 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d1;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D2__DOT__in 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d1;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D2__DOT__out 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d2;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D3__DOT__in 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d2;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D3__DOT__out 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d3;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D4__DOT__in 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d3;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D4__DOT__out 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d4;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D5__DOT__in 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d4;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D5__DOT__out 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d5;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D6__DOT__in 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d5;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D6__DOT__out 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d6;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D7__DOT__in 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d6;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D7__DOT__out 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d7;
    vlSelfRef.sdram__DOT__burst_length = ((0U == (7U 
                                                  & (IData)(vlSelfRef.sdram__DOT__mode_reg)))
                                           ? 1U : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelfRef.sdram__DOT__mode_reg)))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelfRef.sdram__DOT__mode_reg)))
                                                     ? 4U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelfRef.sdram__DOT__mode_reg)))
                                                      ? 8U
                                                      : 0U))));
    vlSelfRef.sdram__DOT__cas_latency = ((1U == (7U 
                                                 & ((IData)(vlSelfRef.sdram__DOT__mode_reg) 
                                                    >> 4U)))
                                          ? 1U : ((2U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.sdram__DOT__mode_reg) 
                                                       >> 4U)))
                                                   ? 2U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.sdram__DOT__mode_reg) 
                                                        >> 4U)))
                                                    ? 3U
                                                    : 0U)));
    vlSelfRef.flash__DOT__ren = ((1U == (IData)(vlSelfRef.flash__DOT__state)) 
                                 & (0x17U == (IData)(vlSelfRef.flash__DOT__counter)));
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
    vlSelfRef.bitrev__DOT__data_i_1 = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d1;
    vlSelfRef.bitrev__DOT__data_i_2 = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d2;
    vlSelfRef.bitrev__DOT__data_i_3 = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d3;
    vlSelfRef.bitrev__DOT__data_i_4 = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d4;
    vlSelfRef.bitrev__DOT__data_i_5 = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d5;
    vlSelfRef.bitrev__DOT__data_i_6 = (0x40U == ((IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d6) 
                                                 << 6U));
    vlSelfRef.bitrev__DOT__data_i_7 = (0x80U == ((IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__d7) 
                                                 << 7U));
    vlSelfRef._asic_spi_mosi = vlSymsp->TOP__ysyxSoCFull__asic.spi_mosi;
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
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__sel 
        = (0xfU & ((IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__i) 
                   - (IData)(9U)));
    if (vlSelfRef.sdram__DOT__read_valid) {
        if ((0U == (IData)(vlSelfRef.sdram__DOT__bank_num))) {
            vlSelfRef.sdram__DOT__out = vlSelfRef.sdram__DOT__bank0
                [(0x3fffffU & ((VL_SHIFTL_III(22,32,32, (IData)(vlSelfRef.sdram__DOT__row_num), 9U) 
                                + (IData)(vlSelfRef.sdram__DOT__col_num)) 
                               + (IData)(vlSelfRef.sdram__DOT__cas_count)))];
        } else if ((1U == (IData)(vlSelfRef.sdram__DOT__bank_num))) {
            vlSelfRef.sdram__DOT__out = vlSelfRef.sdram__DOT__bank1
                [(0x3fffffU & ((VL_SHIFTL_III(22,32,32, (IData)(vlSelfRef.sdram__DOT__row_num), 9U) 
                                + (IData)(vlSelfRef.sdram__DOT__col_num)) 
                               + (IData)(vlSelfRef.sdram__DOT__cas_count)))];
        } else if ((2U == (IData)(vlSelfRef.sdram__DOT__bank_num))) {
            vlSelfRef.sdram__DOT__out = vlSelfRef.sdram__DOT__bank2
                [(0x3fffffU & ((VL_SHIFTL_III(22,32,32, (IData)(vlSelfRef.sdram__DOT__row_num), 9U) 
                                + (IData)(vlSelfRef.sdram__DOT__col_num)) 
                               + (IData)(vlSelfRef.sdram__DOT__cas_count)))];
        } else if ((3U == (IData)(vlSelfRef.sdram__DOT__bank_num))) {
            vlSelfRef.sdram__DOT__out = vlSelfRef.sdram__DOT__bank3
                [(0x3fffffU & ((VL_SHIFTL_III(22,32,32, (IData)(vlSelfRef.sdram__DOT__row_num), 9U) 
                                + (IData)(vlSelfRef.sdram__DOT__col_num)) 
                               + (IData)(vlSelfRef.sdram__DOT__cas_count)))];
        }
    }
    vlSelfRef._asic_spi_sck = vlSymsp->TOP__ysyxSoCFull__asic.spi_sck;
    vlSelfRef.psram__DOT__dout = (0xfU & ((0xfU == (IData)(vlSelfRef.psram__DOT__count))
                                           ? (vlSelfRef.psram__DOT__mem
                                              [vlSelfRef.psram__DOT__addr] 
                                              >> 4U)
                                           : ((0x10U 
                                               == (IData)(vlSelfRef.psram__DOT__count))
                                               ? vlSelfRef.psram__DOT__mem
                                              [vlSelfRef.psram__DOT__addr]
                                               : ((0x11U 
                                                   == (IData)(vlSelfRef.psram__DOT__count))
                                                   ? 
                                                  (vlSelfRef.psram__DOT__mem
                                                   [
                                                   (0xffffffU 
                                                    & ((IData)(1U) 
                                                       + vlSelfRef.psram__DOT__addr))] 
                                                   >> 4U)
                                                   : 
                                                  ((0x12U 
                                                    == (IData)(vlSelfRef.psram__DOT__count))
                                                    ? 
                                                   vlSelfRef.psram__DOT__mem
                                                   [
                                                   (0xffffffU 
                                                    & ((IData)(1U) 
                                                       + vlSelfRef.psram__DOT__addr))]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelfRef.psram__DOT__count))
                                                     ? 
                                                    (vlSelfRef.psram__DOT__mem
                                                     [
                                                     (0xffffffU 
                                                      & ((IData)(2U) 
                                                         + vlSelfRef.psram__DOT__addr))] 
                                                     >> 4U)
                                                     : 
                                                    ((0x14U 
                                                      == (IData)(vlSelfRef.psram__DOT__count))
                                                      ? 
                                                     vlSelfRef.psram__DOT__mem
                                                     [
                                                     (0xffffffU 
                                                      & ((IData)(2U) 
                                                         + vlSelfRef.psram__DOT__addr))]
                                                      : 
                                                     ((0x15U 
                                                       == (IData)(vlSelfRef.psram__DOT__count))
                                                       ? 
                                                      (vlSelfRef.psram__DOT__mem
                                                       [
                                                       (0xffffffU 
                                                        & ((IData)(3U) 
                                                           + vlSelfRef.psram__DOT__addr))] 
                                                       >> 4U)
                                                       : 
                                                      ((0x16U 
                                                        == (IData)(vlSelfRef.psram__DOT__count))
                                                        ? 
                                                       vlSelfRef.psram__DOT__mem
                                                       [
                                                       (0xffffffU 
                                                        & ((IData)(3U) 
                                                           + vlSelfRef.psram__DOT__addr))]
                                                        : 0U)))))))));
    vlSelfRef.psram__DOT__douten = ((0xebU == (IData)(vlSelfRef.psram__DOT__cmd)) 
                                    & ((IData)(vlSelfRef.psram__DOT__count) 
                                       > (0xffU & ((IData)(vlSelfRef.psram__DOT__ADDR_COUNT) 
                                                   + (IData)(vlSelfRef.psram__DOT__CMD_COUNT)))));
    vlSelfRef.flash__DOT__flash_cmd_i__DOT__valid = vlSelfRef.flash__DOT__ren;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__out_p 
        = vlSelfRef.bitrev__DOT__data_i;
    vlSelfRef.bitrev__DOT__data_o_7 = vlSelfRef.bitrev__DOT__data_i_0;
    vlSelfRef.bitrev__DOT__data_o_6 = vlSelfRef.bitrev__DOT__data_i_1;
    vlSelfRef.bitrev__DOT__data_o_5 = vlSelfRef.bitrev__DOT__data_i_2;
    vlSelfRef.bitrev__DOT__data_o_4 = vlSelfRef.bitrev__DOT__data_i_3;
    vlSelfRef.bitrev__DOT__data_o_3 = vlSelfRef.bitrev__DOT__data_i_4;
    vlSelfRef.bitrev__DOT__data_o_2 = vlSelfRef.bitrev__DOT__data_i_5;
    vlSelfRef.bitrev__DOT__data_o_1 = vlSelfRef.bitrev__DOT__data_i_6;
    vlSelfRef.bitrev__DOT__data_o_0 = vlSelfRef.bitrev__DOT__data_i_7;
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
    vlSelfRef.flash__DOT__mosi = vlSelfRef._asic_spi_mosi;
    vlSelfRef.flash__DOT__raddr = ((0xfffffeU & (vlSelfRef.flash__DOT__addr 
                                                 << 1U)) 
                                   | (IData)(vlSelfRef._asic_spi_mosi));
    vlSelfRef.bitrev__DOT__mosi = vlSelfRef._asic_spi_mosi;
    vlSelfRef.bitrev__DOT__out = (1U & ((0x11U <= (IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__i)) 
                                        | ((IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__out_r) 
                                           >> (7U & 
                                               ((IData)(7U) 
                                                - (IData)(vlSelfRef.bitrev__DOT__serial2pare_init__DOT__sel))))));
    vlSelfRef.flash__DOT__sck = vlSelfRef._asic_spi_sck;
    vlSelfRef.bitrev__DOT__sck = vlSelfRef._asic_spi_sck;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__in_p 
        = vlSelfRef.bitrev__DOT__data_o;
    vlSelfRef.flash__DOT__flash_cmd_i__DOT__addr = vlSelfRef.flash__DOT__raddr;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__in_s 
        = vlSelfRef.bitrev__DOT__mosi;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__out_s 
        = vlSelfRef.bitrev__DOT__out;
    vlSelfRef.flash__DOT__flash_cmd_i__DOT__clock = vlSelfRef.flash__DOT__sck;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__clk 
        = vlSelfRef.bitrev__DOT__sck;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__D0__DOT__in 
        = vlSelfRef.bitrev__DOT__serial2pare_init__DOT__in_s;
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
}

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ dq__en3;
    dq__en3 = 0;
    CData/*0:0*/ sdram__DOT____VdfgRegularize_h49d81015_0_1;
    sdram__DOT____VdfgRegularize_h49d81015_0_1 = 0;
    CData/*0:0*/ sdram__DOT____VdfgRegularize_h49d81015_0_2;
    sdram__DOT____VdfgRegularize_h49d81015_0_2 = 0;
    // Body
    vlSelfRef.externalPins_gpio_out = vlSymsp->TOP__ysyxSoCFull__asic.gpio_out;
    vlSelfRef.externalPins_vga_hsync = vlSymsp->TOP__ysyxSoCFull__asic.vga_hsync;
    vlSelfRef.externalPins_vga_vsync = vlSymsp->TOP__ysyxSoCFull__asic.vga_vsync;
    vlSelfRef._asic_sdram_cke = vlSymsp->TOP__ysyxSoCFull__asic.sdram_cke;
    vlSelfRef._asic_sdram_a = vlSymsp->TOP__ysyxSoCFull__asic.sdram_a;
    vlSelfRef._asic_sdram_ba = vlSymsp->TOP__ysyxSoCFull__asic.sdram_ba;
    vlSelfRef._asic_sdram_we = vlSymsp->TOP__ysyxSoCFull__asic.sdram_we;
    vlSelfRef._asic_sdram_cas = vlSymsp->TOP__ysyxSoCFull__asic.sdram_cas;
    vlSelfRef._asic_sdram_ras = vlSymsp->TOP__ysyxSoCFull__asic.sdram_ras;
    vlSelfRef._asic_sdram_cs = vlSymsp->TOP__ysyxSoCFull__asic.sdram_cs;
    vlSelfRef._asic_sdram_dqm = vlSymsp->TOP__ysyxSoCFull__asic.sdram_dqm;
    vlSelfRef.externalPins_vga_valid = vlSymsp->TOP__ysyxSoCFull__asic.vga_valid;
    vlSelfRef.externalPins_uart_tx = vlSymsp->TOP__ysyxSoCFull__asic.uart_tx;
    vlSelfRef._asic_spi_ss = vlSymsp->TOP__ysyxSoCFull__asic.spi_ss;
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
    vlSelfRef._asic_psram_ce_n = vlSymsp->TOP__ysyxSoCFull__asic.psram_ce_n;
    vlSelfRef._asic_psram_sck = vlSymsp->TOP__ysyxSoCFull__asic.psram_sck;
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
    vlSymsp->TOP__ysyxSoCFull__asic.ps2_data = vlSelfRef.externalPins_ps2_data;
    vlSymsp->TOP__ysyxSoCFull__asic.ps2_clk = vlSelfRef.externalPins_ps2_clk;
    vlSymsp->TOP__ysyxSoCFull__asic.uart_rx = vlSelfRef.externalPins_uart_rx;
    vlSymsp->TOP__ysyxSoCFull__asic.gpio_in = vlSelfRef.externalPins_gpio_in;
    vlSymsp->TOP__ysyxSoCFull__asic.clock = vlSelfRef.clock;
    vlSymsp->TOP__ysyxSoCFull__asic.reset = vlSelfRef.reset;
    vlSelfRef.sdram__DOT__cke = vlSelfRef._asic_sdram_cke;
    vlSelfRef.sdram__DOT__a = vlSelfRef._asic_sdram_a;
    vlSelfRef.sdram__DOT__ba = vlSelfRef._asic_sdram_ba;
    vlSelfRef.sdram__DOT__we = vlSelfRef._asic_sdram_we;
    vlSelfRef.sdram__DOT__cas = vlSelfRef._asic_sdram_cas;
    vlSelfRef.sdram__DOT__ras = vlSelfRef._asic_sdram_ras;
    vlSelfRef.sdram__DOT__cs = vlSelfRef._asic_sdram_cs;
    vlSelfRef.sdram__DOT__COMMAND_INHIBIT = vlSelfRef._asic_sdram_cs;
    vlSelfRef.sdram__DOT____VdfgRegularize_h49d81015_0_3 
        = (1U & ((~ (IData)(vlSelfRef._asic_sdram_cs)) 
                 & (~ (IData)(vlSelfRef._asic_sdram_ras))));
    sdram__DOT____VdfgRegularize_h49d81015_0_1 = ((~ (IData)(vlSelfRef._asic_sdram_cs)) 
                                                  & (IData)(vlSelfRef._asic_sdram_ras));
    vlSelfRef.sdram__DOT__dqm = vlSelfRef._asic_sdram_dqm;
    dq__en3 = ((IData)(vlSelfRef.sdram__DOT__read_valid)
                ? ((((2U & (IData)(vlSelfRef._asic_sdram_dqm))
                      ? 0U : 0xffU) << 8U) | ((1U & (IData)(vlSelfRef._asic_sdram_dqm))
                                               ? 0U
                                               : 0xffU))
                : 0U);
    vlSelfRef._bitrev_miso = ((IData)(vlSelfRef.bitrev__DOT__out) 
                              | ((IData)(vlSelfRef._asic_spi_ss) 
                                 >> 7U));
    vlSelfRef.bitrev__DOT__ss = (1U & ((IData)(vlSelfRef._asic_spi_ss) 
                                       >> 7U));
    vlSelfRef.flash__DOT__reset = (1U & (IData)(vlSelfRef._asic_spi_ss));
    vlSelfRef.psram__DOT__ce_n = vlSelfRef._asic_psram_ce_n;
    vlSelfRef.psram__DOT__sck = vlSelfRef._asic_psram_sck;
    vlSelfRef._dio_wire = vlSelfRef.psram__DOT__din;
    vlSelfRef.sdram__DOT__LOAD_MODE_REGISTER = ((IData)(vlSelfRef.sdram__DOT____VdfgRegularize_h49d81015_0_3) 
                                                & ((~ (IData)(vlSelfRef._asic_sdram_cas)) 
                                                   & (~ (IData)(vlSelfRef._asic_sdram_we))));
    vlSelfRef.sdram__DOT__ACTIVE = ((IData)(vlSelfRef.sdram__DOT____VdfgRegularize_h49d81015_0_3) 
                                    & ((IData)(vlSelfRef._asic_sdram_cas) 
                                       & (IData)(vlSelfRef._asic_sdram_we)));
    sdram__DOT____VdfgRegularize_h49d81015_0_2 = ((IData)(sdram__DOT____VdfgRegularize_h49d81015_0_1) 
                                                  & (IData)(vlSelfRef._asic_sdram_cas));
    vlSelfRef.sdram__DOT____VdfgRegularize_h49d81015_0_6 
        = ((~ (IData)(vlSelfRef._asic_sdram_cas)) & (IData)(sdram__DOT____VdfgRegularize_h49d81015_0_1));
    vlSelfRef._dq_wire = (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                              ? 0U : 0xffffU) & ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                                    ? 0U
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                                      ? 0U
                                                      : 0xffffU)) 
                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                                     ? 0U
                                                     : 0xffffU))) 
                           & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                               ? 0U : 0xffffU)) | (
                                                   (((IData)(vlSelfRef.sdram__DOT__read_valid)
                                                      ? 
                                                     ((((2U 
                                                         & (IData)(vlSelfRef._asic_sdram_dqm))
                                                         ? 0U
                                                         : 
                                                        (0xffU 
                                                         & ((IData)(vlSelfRef.sdram__DOT__out) 
                                                            >> 8U))) 
                                                       << 8U) 
                                                      | ((1U 
                                                          & (IData)(vlSelfRef._asic_sdram_dqm))
                                                          ? 0U
                                                          : 
                                                         (0xffU 
                                                          & (IData)(vlSelfRef.sdram__DOT__out))))
                                                      : 0U) 
                                                    & (IData)(dq__en3)) 
                                                   & (IData)(dq__en3)));
    vlSelfRef.bitrev__DOT__miso = vlSelfRef._bitrev_miso;
    vlSelfRef.bitrev__DOT__serial2pare_init__DOT__ss 
        = vlSelfRef.bitrev__DOT__ss;
    vlSelfRef.flash__DOT__ss = vlSelfRef.flash__DOT__reset;
    vlSelfRef._flash_miso = (1U & ((IData)(vlSelfRef.flash__DOT__reset) 
                                   | ((((2U == (IData)(vlSelfRef.flash__DOT__state)) 
                                        & (0U == (IData)(vlSelfRef.flash__DOT__counter)))
                                        ? vlSelfRef.flash__DOT__data_bswap
                                        : vlSelfRef.flash__DOT__data) 
                                      >> 0x1fU)));
    vlSelfRef.psram__DOT__dio = vlSelfRef._dio_wire;
    vlSymsp->TOP__ysyxSoCFull__asic.psram_dio = vlSelfRef._dio_wire;
    vlSelfRef.sdram__DOT__NO_OPERATION = ((IData)(sdram__DOT____VdfgRegularize_h49d81015_0_2) 
                                          & (IData)(vlSelfRef._asic_sdram_we));
    vlSelfRef.sdram__DOT__BURST_TERMINATE = ((~ (IData)(vlSelfRef._asic_sdram_we)) 
                                             & (IData)(sdram__DOT____VdfgRegularize_h49d81015_0_2));
    vlSelfRef.sdram__DOT__READ = ((IData)(vlSelfRef.sdram__DOT____VdfgRegularize_h49d81015_0_6) 
                                  & (IData)(vlSelfRef._asic_sdram_we));
    vlSelfRef.sdram__DOT__WRITE = ((~ (IData)(vlSelfRef._asic_sdram_we)) 
                                   & (IData)(vlSelfRef.sdram__DOT____VdfgRegularize_h49d81015_0_6));
    vlSelfRef.sdram__DOT__dq = vlSelfRef._dq_wire;
    vlSymsp->TOP__ysyxSoCFull__asic.sdram_dq = vlSelfRef._dq_wire;
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
    vlSelfRef.flash__DOT__miso = vlSelfRef._flash_miso;
    vlSymsp->TOP__ysyxSoCFull__asic.spi_miso = ((IData)(vlSelfRef._bitrev_miso) 
                                                & (IData)(vlSelfRef._flash_miso));
}
