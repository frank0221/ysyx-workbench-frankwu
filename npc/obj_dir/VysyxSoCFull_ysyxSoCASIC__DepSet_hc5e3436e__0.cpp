// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyxSoCASIC.h"

extern "C" void mrom_read(int raddr, int* rdata);

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCASIC____Vdpiimwrap_lmrom__DOT__mrom__DOT__mrom_read_TOP__ysyxSoCFull__asic(IData/*31:0*/ raddr, IData/*31:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC____Vdpiimwrap_lmrom__DOT__mrom__DOT__mrom_read_TOP__ysyxSoCFull__asic\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int rdata__Vcvt;
    mrom_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lkeyboard__DOT__ps2_bundle_data = vlSelfRef.ps2_data;
    vlSelfRef.lkeyboard__DOT__ps2_bundle_clk = vlSelfRef.ps2_clk;
    vlSelfRef.luart__DOT__uart_rx = vlSelfRef.uart_rx;
    vlSelfRef.lgpio__DOT__gpio_bundle_in = vlSelfRef.gpio_in;
    vlSelfRef._lgpio_auto_in_prdata = (((IData)(vlSelfRef._apbxbar_auto_anon_out_3_penable) 
                                        & (0U == (3U 
                                                  & vlSelfRef.lgpio__DOT__mgpio__DOT__addr)))
                                        ? (IData)(vlSelfRef.gpio_in)
                                        : 0U);
    vlSelfRef.axi4xbar__DOT__clock = vlSelfRef.clock;
    vlSelfRef.lmrom__DOT__clock = vlSelfRef.clock;
    vlSelfRef.apbdelay_delayer__DOT__clock = vlSelfRef.clock;
    vlSelfRef.axi42apb__DOT__clock = vlSelfRef.clock;
    vlSelfRef.lgpio__DOT__clock = vlSelfRef.clock;
    vlSelfRef.lkeyboard__DOT__clock = vlSelfRef.clock;
    vlSelfRef.lvga__DOT__clock = vlSelfRef.clock;
    vlSelfRef.cpu_reset_chain__DOT__clock = vlSelfRef.clock;
    vlSelfRef.axi4ram__DOT__clock = vlSelfRef.clock;
    vlSelfRef.lsdram_apb__DOT__clock = vlSelfRef.clock;
    vlSelfRef.axi4xbar_1__DOT__clock = vlSelfRef.clock;
    vlSelfRef.axi4frag__DOT__clock = vlSelfRef.clock;
    vlSelfRef.lspi__DOT__clock = vlSelfRef.clock;
    vlSelfRef.lpsram__DOT__clock = vlSelfRef.clock;
    vlSelfRef.sdram_clk = (1U & (~ (IData)(vlSelfRef.clock)));
    vlSymsp->TOP__ysyxSoCFull__asic__cpu.clock = vlSelfRef.clock;
    vlSelfRef.luart__DOT__clock = vlSelfRef.clock;
    vlSelfRef.axi4buf__DOT__clock = vlSelfRef.clock;
    vlSelfRef.axi4yank__DOT__clock = vlSelfRef.clock;
    vlSelfRef.axi4xbar__DOT__reset = vlSelfRef.reset;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rst_n 
        = (1U & (~ (IData)(vlSelfRef.reset)));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__rst_n 
        = (1U & (~ (IData)(vlSelfRef.reset)));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__rst_n 
        = (1U & (~ (IData)(vlSelfRef.reset)));
    if (vlSelfRef.reset) {
        vlSelfRef.lmrom__DOT__reset = 1U;
        vlSelfRef.axi4ram__DOT__reset = 1U;
        vlSelfRef.apbdelay_delayer__DOT__reset = 1U;
        vlSelfRef.axi42apb__DOT__reset = 1U;
        vlSelfRef.lgpio__DOT__mgpio__DOT__state = 0U;
        vlSelfRef.axi4xbar_1__DOT__reset = 1U;
        vlSelfRef.lgpio__DOT__reset = 1U;
        vlSelfRef.lkeyboard__DOT__reset = 1U;
        vlSelfRef.lvga__DOT__reset = 1U;
        vlSelfRef.cpu_reset_chain__DOT__io_d = 1U;
        vlSelfRef.lpsram__DOT__reset = 1U;
        vlSelfRef.lsdram_apb__DOT__reset = 1U;
        vlSelfRef.axi4frag__DOT__reset = 1U;
        vlSelfRef.lspi__DOT__reset = 1U;
        vlSelfRef.axi4buf__DOT__reset = 1U;
        vlSelfRef.luart__DOT__reset = 1U;
    } else {
        vlSelfRef.lmrom__DOT__reset = 0U;
        vlSelfRef.axi4ram__DOT__reset = 0U;
        vlSelfRef.apbdelay_delayer__DOT__reset = 0U;
        vlSelfRef.axi42apb__DOT__reset = 0U;
        vlSelfRef.lgpio__DOT__mgpio__DOT__state = (
                                                   ((IData)(vlSelfRef._apbxbar_auto_anon_out_3_psel) 
                                                    & (~ (IData)(vlSelfRef._apbxbar_auto_anon_out_3_penable)))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelfRef._apbxbar_auto_anon_out_3_penable)
                                                     ? 2U
                                                     : 0U));
        vlSelfRef.axi4xbar_1__DOT__reset = 0U;
        vlSelfRef.lgpio__DOT__reset = 0U;
        vlSelfRef.lkeyboard__DOT__reset = 0U;
        vlSelfRef.lvga__DOT__reset = 0U;
        vlSelfRef.cpu_reset_chain__DOT__io_d = 0U;
        vlSelfRef.lpsram__DOT__reset = 0U;
        vlSelfRef.lsdram_apb__DOT__reset = 0U;
        vlSelfRef.axi4frag__DOT__reset = 0U;
        vlSelfRef.lspi__DOT__reset = 0U;
        vlSelfRef.axi4buf__DOT__reset = 0U;
        vlSelfRef.luart__DOT__reset = 0U;
    }
    vlSymsp->TOP__ysyxSoCFull__asic__cpu.reset = ((IData)(vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__sync_0) 
                                                  | (IData)(vlSelfRef.reset));
    vlSelfRef.luart__DOT__muart__DOT____VdfgRegularize_hc00137df_0_0 
        = ((~ (IData)(vlSelfRef.reset)) & ((~ (IData)(vlSelfRef._apbxbar_auto_anon_out_1_penable)) 
                                           & (IData)(vlSelfRef._apbxbar_auto_anon_out_1_psel)));
    vlSelfRef.axi4yank__DOT__reset = vlSelfRef.reset;
    vlSelfRef.lkeyboard__DOT__mps2__DOT__ps2_data = vlSelfRef.lkeyboard__DOT__ps2_bundle_data;
    vlSelfRef.lkeyboard__DOT__mps2__DOT__ps2_clk = vlSelfRef.lkeyboard__DOT__ps2_bundle_clk;
    vlSelfRef.luart__DOT__muart__DOT__uart_rx = vlSelfRef.luart__DOT__uart_rx;
    vlSelfRef.lgpio__DOT__mgpio__DOT__gpio_in = vlSelfRef.lgpio__DOT__gpio_bundle_in;
    vlSelfRef.apbxbar__DOT__auto_anon_out_3_prdata 
        = vlSelfRef._lgpio_auto_in_prdata;
    vlSelfRef.lgpio__DOT__auto_in_prdata = vlSelfRef._lgpio_auto_in_prdata;
    vlSelfRef._apbxbar_auto_anon_in_prdata = (((IData)(vlSelfRef.apbxbar__DOT__sel_0)
                                                ? vlSelfRef._lspi_auto_in_prdata
                                                : 0U) 
                                              | (((IData)(vlSelfRef.apbxbar__DOT__sel_1)
                                                   ? vlSelfRef._luart_auto_in_prdata
                                                   : 0U) 
                                                 | (((IData)(vlSelfRef.apbxbar__DOT__sel_2)
                                                      ? vlSelfRef._lpsram_auto_in_prdata
                                                      : 0U) 
                                                    | (((IData)(vlSelfRef.apbxbar__DOT__sel_3)
                                                         ? vlSelfRef._lgpio_auto_in_prdata
                                                         : 0U) 
                                                       | (((IData)(vlSelfRef.apbxbar__DOT__sel_4)
                                                            ? vlSelfRef._lkeyboard_auto_in_prdata
                                                            : 0U) 
                                                          | (((IData)(vlSelfRef.apbxbar__DOT__sel_5)
                                                               ? vlSelfRef._lvga_auto_in_prdata
                                                               : 0U) 
                                                             | ((IData)(vlSelfRef.apbxbar__DOT__sel_6)
                                                                 ? vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q
                                                                 : 0U)))))));
    vlSelfRef.lgpio__DOT__mgpio__DOT__clock = vlSelfRef.lgpio__DOT__clock;
    vlSelfRef.lkeyboard__DOT__mps2__DOT__clock = vlSelfRef.lkeyboard__DOT__clock;
    vlSelfRef.lvga__DOT__mvga__DOT__clock = vlSelfRef.lvga__DOT__clock;
    vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__clock 
        = vlSelfRef.cpu_reset_chain__DOT__clock;
    vlSelfRef.axi4ram__DOT__mem_ext__DOT__R0_clk = vlSelfRef.axi4ram__DOT__clock;
    vlSelfRef.axi4ram__DOT__mem_ext__DOT__W0_clk = vlSelfRef.axi4ram__DOT__clock;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__clock = vlSelfRef.lsdram_apb__DOT__clock;
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__clock = vlSelfRef.axi4xbar_1__DOT__clock;
    vlSelfRef.axi4frag__DOT__deq_q__DOT__clock = vlSelfRef.axi4frag__DOT__clock;
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__clock = vlSelfRef.axi4frag__DOT__clock;
    vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__clock 
        = vlSelfRef.axi4frag__DOT__clock;
    vlSelfRef.lspi__DOT__mspi__DOT__clock = vlSelfRef.lspi__DOT__clock;
    vlSelfRef.lpsram__DOT__mpsram__DOT__clock = vlSelfRef.lpsram__DOT__clock;
    vlSelfRef.lsdram_apb__DOT__sdram_bundle_clk = vlSelfRef.sdram_clk;
    vlSelfRef.luart__DOT__muart__DOT__clock = vlSelfRef.luart__DOT__clock;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__clock 
        = vlSelfRef.axi4buf__DOT__clock;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__clock 
        = vlSelfRef.axi4buf__DOT__clock;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__clock 
        = vlSelfRef.axi4buf__DOT__clock;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__clock 
        = vlSelfRef.axi4buf__DOT__clock;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__clock 
        = vlSelfRef.axi4buf__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__clock 
        = vlSelfRef.axi4yank__DOT__clock;
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__reset = vlSelfRef.axi4xbar_1__DOT__reset;
    vlSelfRef.lgpio__DOT__mgpio__DOT__reset = vlSelfRef.lgpio__DOT__reset;
    vlSelfRef.lkeyboard__DOT__mps2__DOT__reset = vlSelfRef.lkeyboard__DOT__reset;
    vlSelfRef.lvga__DOT__mvga__DOT__reset = vlSelfRef.lvga__DOT__reset;
    vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__io_d 
        = vlSelfRef.cpu_reset_chain__DOT__io_d;
    vlSelfRef.lpsram__DOT__mpsram__DOT__reset = vlSelfRef.lpsram__DOT__reset;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__reset = vlSelfRef.lsdram_apb__DOT__reset;
    vlSelfRef.axi4frag__DOT__deq_q__DOT__reset = vlSelfRef.axi4frag__DOT__reset;
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__reset = vlSelfRef.axi4frag__DOT__reset;
    vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__reset 
        = vlSelfRef.axi4frag__DOT__reset;
    vlSelfRef.lspi__DOT__mspi__DOT__reset = vlSelfRef.lspi__DOT__reset;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__reset 
        = vlSelfRef.axi4buf__DOT__reset;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__reset 
        = vlSelfRef.axi4buf__DOT__reset;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__reset 
        = vlSelfRef.axi4buf__DOT__reset;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__reset 
        = vlSelfRef.axi4buf__DOT__reset;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__reset 
        = vlSelfRef.axi4buf__DOT__reset;
    vlSelfRef.luart__DOT__muart__DOT__reset = vlSelfRef.luart__DOT__reset;
    vlSelfRef.luart__DOT__muart__DOT__reg_we = ((IData)(vlSelfRef.luart__DOT__muart__DOT____VdfgRegularize_hc00137df_0_0) 
                                                & (IData)(vlSelfRef._axi42apb_auto_out_pwrite));
    vlSelfRef.luart__DOT__muart__DOT__reg_re = ((~ (IData)(vlSelfRef._axi42apb_auto_out_pwrite)) 
                                                & (IData)(vlSelfRef.luart__DOT__muart__DOT____VdfgRegularize_hc00137df_0_0));
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__reset 
        = vlSelfRef.axi4yank__DOT__reset;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__srx_pad_i 
        = vlSelfRef.luart__DOT__muart__DOT__uart_rx;
    vlSelfRef.lgpio__DOT__mgpio__DOT__in_prdata = vlSelfRef.lgpio__DOT__auto_in_prdata;
    vlSelfRef.apbxbar__DOT__auto_anon_in_prdata = vlSelfRef._apbxbar_auto_anon_in_prdata;
    vlSelfRef.apbdelay_delayer__DOT__out_prdata = vlSelfRef._apbxbar_auto_anon_in_prdata;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__clk_i 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__clock;
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__R0_clk 
        = vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__clock;
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_clk 
        = vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__clock;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_clk_i 
        = vlSelfRef.lspi__DOT__mspi__DOT__clock;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__clk_i 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__clock;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_clk 
        = vlSelfRef.lsdram_apb__DOT__sdram_bundle_clk;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__clk 
        = vlSelfRef.luart__DOT__muart__DOT__clock;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_clk 
        = vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__clock;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_clk 
        = vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__clock;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_clk 
        = vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__clock;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_clk 
        = vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__clock;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_clk 
        = vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__clock;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_clk 
        = vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__clock;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_clk 
        = vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__clock;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_clk 
        = vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__clock;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_clk 
        = vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__clock;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_clk 
        = vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__clock;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__rst_i 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__reset;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rst_i 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__reset;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_rst_i 
        = vlSelfRef.lspi__DOT__mspi__DOT__reset;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__wb_rst_i 
        = vlSelfRef.luart__DOT__muart__DOT__reset;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__wb_we_i 
        = vlSelfRef.luart__DOT__muart__DOT__reg_we;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_0_1));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__wb_re_i 
        = vlSelfRef.luart__DOT__muart__DOT__reg_re;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_0_1));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_re) 
           & ((~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dlab)) 
              & (6U == (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_adr))));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_re) 
           & ((~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dlab)) 
              & (2U == (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_adr))));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_re) 
           & ((~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dlab)) 
              & (5U == (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_adr))));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__async_dat_i 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__srx_pad_i;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_in 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_clk_i;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__clk 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_clk_i;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__clk 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__clk_i;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__clk 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__clk_i;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__clk 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__clk_i;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_clk_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_clk;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__clk_i 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__clk;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__clk 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__clk;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__clk 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__clk;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__rst 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_rst_i;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rst 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_rst_i;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__rst_i 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__wb_rst_i;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__wb_rst_i 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__wb_rst_i;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__wb_rst_i 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__wb_rst_i;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__clk 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__clk;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__clk 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__clk;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__wb_rst_i 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__wb_rst_i;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__wb_rst_i 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__wb_rst_i;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__lsr_mask 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr_mask;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr_mask;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__clk 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__clk;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__clk 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__clk;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__reset_status 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__lsr_mask;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__reset_status 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask;
}

extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h95603f8d_0;
extern const VlUnpacked<CData/*1:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h76f36359_0;

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*18:0*/ lvga__DOT__mvga__DOT____VdfgRegularize_hae95e661_1_0;
    lvga__DOT__mvga__DOT____VdfgRegularize_hae95e661_1_0 = 0;
    IData/*23:0*/ lvga__DOT__mvga__DOT____VdfgRegularize_hae95e661_1_1;
    lvga__DOT__mvga__DOT____VdfgRegularize_hae95e661_1_1 = 0;
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*0:0*/ __Vdly__axi4xbar_1__DOT__idle_3;
    __Vdly__axi4xbar_1__DOT__idle_3 = 0;
    CData/*0:0*/ __Vdly__axi4xbar_1__DOT__idle_4;
    __Vdly__axi4xbar_1__DOT__idle_4 = 0;
    CData/*0:0*/ __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap = 0;
    SData/*15:0*/ __Vdly__lgpio__DOT__mgpio__DOT__led_reg;
    __Vdly__lgpio__DOT__mgpio__DOT__led_reg = 0;
    IData/*31:0*/ __Vdly__lgpio__DOT__mgpio__DOT__seg_reg;
    __Vdly__lgpio__DOT__mgpio__DOT__seg_reg = 0;
    SData/*9:0*/ __Vdly__lkeyboard__DOT__mps2__DOT__buffer;
    __Vdly__lkeyboard__DOT__mps2__DOT__buffer = 0;
    CData/*2:0*/ __Vdly__lkeyboard__DOT__mps2__DOT__w_ptr;
    __Vdly__lkeyboard__DOT__mps2__DOT__w_ptr = 0;
    CData/*2:0*/ __Vdly__lkeyboard__DOT__mps2__DOT__r_ptr;
    __Vdly__lkeyboard__DOT__mps2__DOT__r_ptr = 0;
    SData/*9:0*/ __Vdly__lvga__DOT__mvga__DOT__vcount;
    __Vdly__lvga__DOT__mvga__DOT__vcount = 0;
    SData/*9:0*/ __Vdly__lvga__DOT__mvga__DOT__hcount;
    __Vdly__lvga__DOT__mvga__DOT__hcount = 0;
    CData/*2:0*/ __Vdly__lspi__DOT__mspi__DOT__state;
    __Vdly__lspi__DOT__mspi__DOT__state = 0;
    CData/*1:0*/ __Vdly__axi42apb__DOT__state;
    __Vdly__axi42apb__DOT__state = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_0;
    __Vdly__axi4frag__DOT__error_0 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_1;
    __Vdly__axi4frag__DOT__error_1 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_2;
    __Vdly__axi4frag__DOT__error_2 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_3;
    __Vdly__axi4frag__DOT__error_3 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_4;
    __Vdly__axi4frag__DOT__error_4 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_5;
    __Vdly__axi4frag__DOT__error_5 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_6;
    __Vdly__axi4frag__DOT__error_6 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_7;
    __Vdly__axi4frag__DOT__error_7 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_8;
    __Vdly__axi4frag__DOT__error_8 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_9;
    __Vdly__axi4frag__DOT__error_9 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_10;
    __Vdly__axi4frag__DOT__error_10 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_11;
    __Vdly__axi4frag__DOT__error_11 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_12;
    __Vdly__axi4frag__DOT__error_12 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_13;
    __Vdly__axi4frag__DOT__error_13 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_14;
    __Vdly__axi4frag__DOT__error_14 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_15;
    __Vdly__axi4frag__DOT__error_15 = 0;
    CData/*0:0*/ __Vdly__axi4frag__DOT__deq_q__DOT__full;
    __Vdly__axi4frag__DOT__deq_q__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4frag__DOT__deq_q_1__DOT__full;
    __Vdly__axi4frag__DOT__deq_q_1__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full;
    __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full = 0;
    CData/*2:0*/ __VdlyVal__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*3:0*/ __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*3:0*/ __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__lkeyboard__DOT__mps2__DOT__fifo__v0;
    __VdlyVal__lkeyboard__DOT__mps2__DOT__fifo__v0 = 0;
    CData/*2:0*/ __VdlyDim0__lkeyboard__DOT__mps2__DOT__fifo__v0;
    __VdlyDim0__lkeyboard__DOT__mps2__DOT__fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__lkeyboard__DOT__mps2__DOT__fifo__v0;
    __VdlySet__lkeyboard__DOT__mps2__DOT__fifo__v0 = 0;
    CData/*2:0*/ __VdlyDim0__lkeyboard__DOT__mps2__DOT__fifo__v1;
    __VdlyDim0__lkeyboard__DOT__mps2__DOT__fifo__v1 = 0;
    CData/*0:0*/ __VdlySet__lkeyboard__DOT__mps2__DOT__fifo__v1;
    __VdlySet__lkeyboard__DOT__mps2__DOT__fifo__v1 = 0;
    IData/*23:0*/ __VdlyVal__lvga__DOT__mvga__DOT__mem__v0;
    __VdlyVal__lvga__DOT__mvga__DOT__mem__v0 = 0;
    IData/*18:0*/ __VdlyDim0__lvga__DOT__mvga__DOT__mem__v0;
    __VdlyDim0__lvga__DOT__mvga__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__lvga__DOT__mvga__DOT__mem__v0;
    __VdlySet__lvga__DOT__mvga__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    __VdlyVal__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0;
    CData/*1:0*/ __VdlyDim0__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    __VdlyDim0__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0;
    CData/*0:0*/ __VdlySet__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    __VdlySet__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0;
    CData/*7:0*/ __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    SData/*10:0*/ __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    SData/*10:0*/ __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    SData/*10:0*/ __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    CData/*7:0*/ __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    SData/*10:0*/ __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    QData/*46:0*/ __VdlyVal__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*35:0*/ __VdlyVal__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*5:0*/ __VdlyVal__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*46:0*/ __VdlyVal__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*38:0*/ __VdlyVal__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    // Body
    __Vdly__lkeyboard__DOT__mps2__DOT__buffer = vlSelfRef.lkeyboard__DOT__mps2__DOT__buffer;
    __Vdly__lkeyboard__DOT__mps2__DOT__w_ptr = vlSelfRef.lkeyboard__DOT__mps2__DOT__w_ptr;
    __VdlySet__lkeyboard__DOT__mps2__DOT__fifo__v0 = 0U;
    __Vdly__lkeyboard__DOT__mps2__DOT__r_ptr = vlSelfRef.lkeyboard__DOT__mps2__DOT__r_ptr;
    __VdlySet__lkeyboard__DOT__mps2__DOT__fifo__v1 = 0U;
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (IData)(vlSelfRef._axi4xbar_1_auto_anon_out_1_awvalid))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1795: Assertion failed in %NysyxSoCFull.asic.lmrom: Assertion failed: do not support write operations\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 1795, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1797: Assertion failed in %NysyxSoCFull.asic.lmrom\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 1797, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (IData)(vlSelfRef._axi4xbar_1_auto_anon_out_1_wvalid))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1801: Assertion failed in %NysyxSoCFull.asic.lmrom: Assertion failed: do not support write operations\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 1801, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1803: Assertion failed in %NysyxSoCFull.asic.lmrom\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 1803, "", false);
    }
    __VdlySet__lvga__DOT__mvga__DOT__mem__v0 = 0U;
    __VdlySet__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0U;
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.reset)) 
                      & (0U == ((0x200U & ((~ (IData)(vlSelfRef.axi4frag__DOT___wcounter_T)) 
                                           << 9U)) 
                                | (IData)(vlSelfRef.axi4frag__DOT__w_todo))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3882: Assertion failed in %NysyxSoCFull.asic.axi4frag: Assertion failed at Fragmenter.scala:181\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 3882, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3884: Assertion failed in %NysyxSoCFull.asic.axi4frag\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 3884, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.axi4frag__DOT__nodeOut_wvalid)) 
                                   | (~ (IData)(vlSelfRef.axi4frag__DOT___in_wdeq_q_io_deq_bits_last))) 
                                  | (IData)(vlSelfRef.axi4frag__DOT__w_last)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3888: Assertion failed in %NysyxSoCFull.asic.axi4frag: Assertion failed at Fragmenter.scala:190\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 3888, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3890: Assertion failed in %NysyxSoCFull.asic.axi4frag\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 3890, "", false);
    }
    __Vdly__lgpio__DOT__mgpio__DOT__led_reg = vlSelfRef.lgpio__DOT__mgpio__DOT__led_reg;
    __Vdly__lgpio__DOT__mgpio__DOT__seg_reg = vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg;
    __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    __Vdly__lvga__DOT__mvga__DOT__vcount = vlSelfRef.lvga__DOT__mvga__DOT__vcount;
    __Vdly__lvga__DOT__mvga__DOT__hcount = vlSelfRef.lvga__DOT__mvga__DOT__hcount;
    __Vdly__lspi__DOT__mspi__DOT__state = vlSelfRef.lspi__DOT__mspi__DOT__state;
    __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full = vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__full;
    __VdlySet__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    __Vdly__axi4frag__DOT__error_0 = vlSelfRef.axi4frag__DOT__error_0;
    __Vdly__axi4frag__DOT__error_1 = vlSelfRef.axi4frag__DOT__error_1;
    __Vdly__axi4frag__DOT__error_2 = vlSelfRef.axi4frag__DOT__error_2;
    __Vdly__axi4frag__DOT__error_3 = vlSelfRef.axi4frag__DOT__error_3;
    __Vdly__axi4frag__DOT__error_4 = vlSelfRef.axi4frag__DOT__error_4;
    __Vdly__axi4frag__DOT__error_5 = vlSelfRef.axi4frag__DOT__error_5;
    __Vdly__axi4frag__DOT__error_6 = vlSelfRef.axi4frag__DOT__error_6;
    __Vdly__axi4frag__DOT__error_7 = vlSelfRef.axi4frag__DOT__error_7;
    __Vdly__axi4frag__DOT__error_8 = vlSelfRef.axi4frag__DOT__error_8;
    __Vdly__axi4frag__DOT__error_9 = vlSelfRef.axi4frag__DOT__error_9;
    __Vdly__axi4frag__DOT__error_10 = vlSelfRef.axi4frag__DOT__error_10;
    __Vdly__axi4frag__DOT__error_11 = vlSelfRef.axi4frag__DOT__error_11;
    __Vdly__axi4frag__DOT__error_12 = vlSelfRef.axi4frag__DOT__error_12;
    __Vdly__axi4frag__DOT__error_13 = vlSelfRef.axi4frag__DOT__error_13;
    __Vdly__axi4frag__DOT__error_14 = vlSelfRef.axi4frag__DOT__error_14;
    __Vdly__axi4frag__DOT__error_15 = vlSelfRef.axi4frag__DOT__error_15;
    __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap = vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__wrap;
    __VdlySet__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0U;
    __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0U;
    __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0U;
    __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0U;
    __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0U;
    __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_0_T_6)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_0_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:595: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 595, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:597: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 597, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_0_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:601: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 601, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:603: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 603, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_0_T_5)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_0_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:607: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 607, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:609: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 609, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_0_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:613: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 613, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:615: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 615, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_1_T_6)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_1_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:619: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 619, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:621: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 621, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_1_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_1_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:625: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 625, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:627: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 627, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_1_T_5)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_1_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:631: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 631, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:633: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 633, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_1_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_1_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:637: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 637, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:639: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 639, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_2_T_6)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_2_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:643: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 643, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:645: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 645, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_2_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_2_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:649: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 649, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:651: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 651, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_2_T_5)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_2_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:655: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 655, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:657: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 657, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_2_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_2_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:661: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 661, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:663: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 663, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_3_T_6)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_3_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:667: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 667, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:669: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 669, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_3_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_3_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:673: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 673, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:675: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 675, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_3_T_5)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_3_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:679: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 679, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:681: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 681, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_3_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_3_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:685: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 685, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:687: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 687, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_4_T_6)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_4_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:691: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 691, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:693: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 693, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_4_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_4_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:697: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 697, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:699: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 699, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_4_T_5)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_4_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:703: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 703, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:705: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 705, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_4_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_4_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:709: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 709, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:711: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 711, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_5_T_6)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_5_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:715: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 715, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:717: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 717, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_5_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_5_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:721: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 721, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:723: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 723, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_5_T_5)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_5_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:727: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 727, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:729: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 729, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_5_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_5_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:733: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 733, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:735: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 735, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_6_T_6)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_6_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:739: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 739, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:741: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 741, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_6_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_6_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:745: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 745, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:747: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 747, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_6_T_5)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_6_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:751: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 751, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:753: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 753, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_6_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_6_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:757: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 757, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:759: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 759, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_7_T_6)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_7_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:763: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 763, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:765: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 765, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_7_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_7_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:769: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 769, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:771: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 771, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_7_T_5)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_7_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:775: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 775, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:777: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 777, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_7_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_7_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:781: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 781, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:783: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 783, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_8_T_6)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_8_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:787: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 787, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:789: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 789, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_8_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_8_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:793: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 793, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:795: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 795, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_8_T_5)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_8_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:799: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 799, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:801: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 801, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_8_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_8_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:805: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 805, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:807: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 807, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_9_T_6)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_9_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:811: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 811, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:813: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 813, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_9_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_9_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:817: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 817, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:819: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 819, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_9_T_5)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_9_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:823: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 823, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:825: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 825, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_9_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_9_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:829: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 829, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:831: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 831, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_10_T_6)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_10_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:835: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 835, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:837: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 837, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_10_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_10_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:841: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 841, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:843: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 843, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_10_T_5)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_10_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:847: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 847, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:849: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 849, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_10_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_10_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:853: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 853, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:855: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 855, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_11_T_6)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_11_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:859: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 859, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:861: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 861, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_11_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_11_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:865: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 865, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:867: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 867, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_11_T_5)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_11_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:871: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 871, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:873: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 873, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_11_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_11_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:877: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 877, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:879: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 879, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_12_T_6)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_12_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:883: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 883, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:885: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 885, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_12_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_12_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:889: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 889, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:891: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 891, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_12_T_5)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_12_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:895: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 895, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:897: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 897, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_12_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_12_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:901: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 901, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:903: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 903, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_13_T_6)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_13_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:907: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 907, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:909: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 909, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_13_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_13_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:913: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 913, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:915: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 915, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_13_T_5)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_13_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:919: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 919, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:921: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 921, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_13_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_13_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:925: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 925, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:927: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 927, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_14_T_6)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_14_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:931: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 931, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:933: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 933, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_14_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_14_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:937: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 937, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:939: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 939, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_14_T_5)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_14_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:943: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 943, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:945: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 945, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_14_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_14_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:949: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 949, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:951: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 951, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_6)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_15_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:955: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 955, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:957: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 957, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_15_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:961: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 961, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:963: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 963, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_5)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_15_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:967: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:131\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 967, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:969: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 969, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_2)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_15_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:973: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:132\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 973, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:975: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 975, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.axi4xbar_1__DOT__prefixOR_1)) 
                                   | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__winner_3_1))) 
                                  & ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT__prefixOR_1) 
                                         | (IData)(vlSelfRef.axi4xbar_1__DOT__winner_3_1))) 
                                     | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__winner_3_2)))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:981: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 981, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:983: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 983, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((((~ (IData)(vlSelfRef.axi4xbar_1__DOT__anyValid)) 
                                    | (IData)(vlSelfRef.axi4xbar_1__DOT__prefixOR_1)) 
                                   | (IData)(vlSelfRef.axi4xbar_1__DOT__winner_3_1)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__winner_3_2)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:987: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 987, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:989: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 989, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.axi4xbar_1__DOT__winner_4_0)) 
                                  | (~ (IData)(vlSelfRef.axi4xbar_1__DOT__winner_4_2))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:993: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:286\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 993, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:995: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 995, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.axi4xbar_1__DOT__anyValid_1)) 
                                   | (IData)(vlSelfRef.axi4xbar_1__DOT__winner_4_0)) 
                                  | (IData)(vlSelfRef.axi4xbar_1__DOT__winner_4_2)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:999: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1: Assertion failed at Xbar.scala:288\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 999, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1001: Assertion failed in %NysyxSoCFull.asic.axi4xbar_1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 1001, "", false);
    }
    vlSelfRef.__Vdly__apbdelay_delayer__DOT__counter 
        = vlSelfRef.apbdelay_delayer__DOT__counter;
    vlSelfRef.__Vdly__apbdelay_delayer__DOT__state 
        = vlSelfRef.apbdelay_delayer__DOT__state;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0U;
    if (VL_UNLIKELY(((((~ (IData)(vlSelfRef.reset)) 
                       & (IData)(vlSelfRef._axi4buf_auto_out_arvalid)) 
                      & (0U != (IData)(vlSelfRef._axi4buf_auto_out_arlen)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2132: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:61\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 2132, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2134: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 2134, "", false);
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelfRef.reset)) 
                       & (IData)(vlSelfRef._axi4buf_auto_out_awvalid)) 
                      & (0U != (IData)(vlSelfRef._axi4buf_auto_out_awlen)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2138: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:62\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 2138, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2140: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 2140, "", false);
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelfRef.reset)) 
                       & (IData)(vlSelfRef._axi4buf_auto_out_arvalid)) 
                      & (2U < (IData)(vlSelfRef._axi4buf_auto_out_arsize)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2144: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:64\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 2144, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2146: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 2146, "", false);
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelfRef.reset)) 
                       & (IData)(vlSelfRef._axi4buf_auto_out_awvalid)) 
                      & (2U < (IData)(vlSelfRef._axi4buf_auto_out_awsize)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2150: Assertion failed in %NysyxSoCFull.asic.axi42apb: Assertion failed at AXI4ToAPB.scala:65\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 2150, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2152: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 2152, "", false);
    }
    __VdlySet__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__axi4frag__DOT__deq_q__DOT__full = vlSelfRef.axi4frag__DOT__deq_q__DOT__full;
    __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
        = vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
        = vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
        = vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
        = vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
        = vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
        = vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
        = vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
        = vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    __Vdly__axi4frag__DOT__deq_q_1__DOT__full = vlSelfRef.axi4frag__DOT__deq_q_1__DOT__full;
    __Vdly__axi4xbar_1__DOT__idle_3 = vlSelfRef.axi4xbar_1__DOT__idle_3;
    __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
        = vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    __Vdly__axi4xbar_1__DOT__idle_4 = vlSelfRef.axi4xbar_1__DOT__idle_4;
    __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
        = vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    __Vdly__axi42apb__DOT__state = vlSelfRef.axi42apb__DOT__state;
    vlSelfRef.axi4yank__DOT__unnamedblk1__DOT___GEN_4 
        = ((((((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_15_io_deq_valid) 
               << 0xfU) | ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_14_io_deq_valid) 
                           << 0xeU)) | (((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_13_io_deq_valid) 
                                         << 0xdU) | 
                                        ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_12_io_deq_valid) 
                                         << 0xcU))) 
            | ((((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_11_io_deq_valid) 
                 << 0xbU) | ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_10_io_deq_valid) 
                             << 0xaU)) | (((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_9_io_deq_valid) 
                                           << 9U) | 
                                          ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_8_io_deq_valid) 
                                           << 8U)))) 
           | (((((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_7_io_deq_valid) 
                 << 7U) | ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_6_io_deq_valid) 
                           << 6U)) | (((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_5_io_deq_valid) 
                                       << 5U) | ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_4_io_deq_valid) 
                                                 << 4U))) 
              | ((((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_3_io_deq_valid) 
                   << 3U) | ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_2_io_deq_valid) 
                             << 2U)) | (((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_1_io_deq_valid) 
                                         << 1U) | (IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_io_deq_valid)))));
    vlSelfRef.axi4yank__DOT__unnamedblk1__DOT___GEN_5 
        = ((((((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_31_io_deq_valid) 
               << 0xfU) | ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_30_io_deq_valid) 
                           << 0xeU)) | (((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_29_io_deq_valid) 
                                         << 0xdU) | 
                                        ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_28_io_deq_valid) 
                                         << 0xcU))) 
            | ((((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_27_io_deq_valid) 
                 << 0xbU) | ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_26_io_deq_valid) 
                             << 0xaU)) | (((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_25_io_deq_valid) 
                                           << 9U) | 
                                          ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_24_io_deq_valid) 
                                           << 8U)))) 
           | (((((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_23_io_deq_valid) 
                 << 7U) | ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_22_io_deq_valid) 
                           << 6U)) | (((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_21_io_deq_valid) 
                                       << 5U) | ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_20_io_deq_valid) 
                                                 << 4U))) 
              | ((((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_19_io_deq_valid) 
                   << 3U) | ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_18_io_deq_valid) 
                             << 2U)) | (((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_17_io_deq_valid) 
                                         << 1U) | (IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_16_io_deq_valid)))));
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef._axi4xbar_1_auto_anon_in_rvalid)) 
                                  | ((IData)(vlSelfRef.axi4yank__DOT__unnamedblk1__DOT___GEN_4) 
                                     >> (IData)(vlSelfRef._axi4xbar_1_auto_anon_in_rid))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3202: Assertion failed in %NysyxSoCFull.asic.axi4yank.unnamedblk1: Assertion failed at UserYanker.scala:69\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 3202, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3204: Assertion failed in %NysyxSoCFull.asic.axi4yank.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 3204, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.reset)) 
                            & (~ ((~ (IData)(vlSelfRef._axi4xbar_1_auto_anon_in_bvalid)) 
                                  | ((IData)(vlSelfRef.axi4yank__DOT__unnamedblk1__DOT___GEN_5) 
                                     >> (IData)(vlSelfRef._axi4xbar_1_auto_anon_in_bid))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3208: Assertion failed in %NysyxSoCFull.asic.axi4yank.unnamedblk1: Assertion failed at UserYanker.scala:98\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 3208, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3210: Assertion failed in %NysyxSoCFull.asic.axi4yank.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/frank_wu/ysyx-workbench/nemu/../ysyxSoC/build/ysyxSoCFull.v", 3210, "", false);
    }
    if (vlSelfRef.lkeyboard__DOT__mps2__DOT__ps2_clk_sync) {
        if ((9U >= (IData)(vlSelfRef.lkeyboard__DOT__mps2__DOT__ptr))) {
            vlSelfRef.lkeyboard__DOT__mps2__DOT____Vlvbound_h9b277a57__0 
                = vlSelfRef.ps2_data;
            if ((9U >= (IData)(vlSelfRef.lkeyboard__DOT__mps2__DOT__ptr))) {
                __Vdly__lkeyboard__DOT__mps2__DOT__buffer 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.lkeyboard__DOT__mps2__DOT__ptr))) 
                        & (IData)(__Vdly__lkeyboard__DOT__mps2__DOT__buffer)) 
                       | (0x3ffU & ((IData)(vlSelfRef.lkeyboard__DOT__mps2__DOT____Vlvbound_h9b277a57__0) 
                                    << (IData)(vlSelfRef.lkeyboard__DOT__mps2__DOT__ptr))));
            }
            vlSelfRef.lkeyboard__DOT__mps2__DOT__ptr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.lkeyboard__DOT__mps2__DOT__ptr)));
        } else if (((~ (IData)(vlSelfRef.lkeyboard__DOT__mps2__DOT__buffer)) 
                    & (IData)(vlSelfRef.ps2_data))) {
            __Vdly__lkeyboard__DOT__mps2__DOT__w_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.lkeyboard__DOT__mps2__DOT__w_ptr)));
            vlSelfRef.lkeyboard__DOT__mps2__DOT__ptr = 0U;
            __VdlyVal__lkeyboard__DOT__mps2__DOT__fifo__v0 
                = (0xffU & ((IData)(vlSelfRef.lkeyboard__DOT__mps2__DOT__buffer) 
                            >> 1U));
            __VdlyDim0__lkeyboard__DOT__mps2__DOT__fifo__v0 
                = vlSelfRef.lkeyboard__DOT__mps2__DOT__w_ptr;
            __VdlySet__lkeyboard__DOT__mps2__DOT__fifo__v0 = 1U;
        }
    }
    if (((IData)(vlSelfRef._apbxbar_auto_anon_out_4_penable) 
         & (IData)(vlSelfRef._apbxbar_auto_anon_out_4_psel))) {
        __Vdly__lkeyboard__DOT__mps2__DOT__r_ptr = 
            (7U & ((IData)(1U) + (IData)(vlSelfRef.lkeyboard__DOT__mps2__DOT__r_ptr)));
        __VdlyDim0__lkeyboard__DOT__mps2__DOT__fifo__v1 
            = vlSelfRef.lkeyboard__DOT__mps2__DOT__r_ptr;
        __VdlySet__lkeyboard__DOT__mps2__DOT__fifo__v1 = 1U;
    }
    vlSelfRef.axi4xbar_1__DOT__awFIFOMap_10_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_10_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_10_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_10_T_5))));
    vlSelfRef.axi4xbar_1__DOT__arFIFOMap_10_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_10_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_10_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_10_T_6))));
    vlSelfRef.axi4xbar_1__DOT__awFIFOMap_9_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_9_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_9_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_9_T_5))));
    vlSelfRef.axi4xbar_1__DOT__arFIFOMap_9_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_9_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_9_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_9_T_6))));
    vlSelfRef.axi4xbar_1__DOT__awFIFOMap_8_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_8_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_8_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_8_T_5))));
    vlSelfRef.axi4xbar_1__DOT__arFIFOMap_8_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_8_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_8_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_8_T_6))));
    vlSelfRef.axi4xbar_1__DOT__awFIFOMap_7_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_7_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_7_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_7_T_5))));
    vlSelfRef.axi4xbar_1__DOT__arFIFOMap_7_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_7_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_7_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_7_T_6))));
    vlSelfRef.axi4xbar_1__DOT__awFIFOMap_6_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_6_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_6_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_6_T_5))));
    vlSelfRef.axi4xbar_1__DOT__arFIFOMap_6_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_6_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_6_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_6_T_6))));
    vlSelfRef.axi4xbar_1__DOT__awFIFOMap_5_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_5_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_5_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_5_T_5))));
    vlSelfRef.axi4xbar_1__DOT__arFIFOMap_5_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_5_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_5_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_5_T_6))));
    vlSelfRef.axi4xbar_1__DOT__awFIFOMap_1_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_1_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_1_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_1_T_5))));
    vlSelfRef.axi4xbar_1__DOT__arFIFOMap_1_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_1_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_1_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_1_T_6))));
    vlSelfRef.axi4xbar_1__DOT__awFIFOMap_0_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_0_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_0_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_0_T_5))));
    vlSelfRef.axi4xbar_1__DOT__arFIFOMap_0_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_0_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_0_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_0_T_6))));
    vlSelfRef.axi4xbar_1__DOT__arFIFOMap_2_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_2_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_2_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_2_T_6))));
    vlSelfRef.axi4xbar_1__DOT__awFIFOMap_2_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_2_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_2_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_2_T_5))));
    vlSelfRef.axi4xbar_1__DOT__arFIFOMap_3_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_3_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_3_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_3_T_6))));
    vlSelfRef.axi4xbar_1__DOT__awFIFOMap_3_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_3_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_3_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_3_T_5))));
    vlSelfRef.axi4xbar_1__DOT__arFIFOMap_4_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_4_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_4_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_4_T_6))));
    vlSelfRef.axi4xbar_1__DOT__awFIFOMap_4_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_4_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_4_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_4_T_5))));
    vlSelfRef.axi4xbar_1__DOT__arFIFOMap_11_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_11_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_11_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_11_T_6))));
    vlSelfRef.axi4xbar_1__DOT__awFIFOMap_11_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_11_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_11_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_11_T_5))));
    vlSelfRef.axi4xbar_1__DOT__arFIFOMap_12_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_12_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_12_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_12_T_6))));
    vlSelfRef.axi4xbar_1__DOT__awFIFOMap_12_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_12_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_12_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_12_T_5))));
    vlSelfRef.axi4xbar_1__DOT__arFIFOMap_13_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_13_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_13_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_13_T_6))));
    vlSelfRef.axi4xbar_1__DOT__awFIFOMap_13_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_13_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_13_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_13_T_5))));
    vlSelfRef.axi4xbar_1__DOT__arFIFOMap_14_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_14_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_14_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_14_T_6))));
    vlSelfRef.axi4xbar_1__DOT__awFIFOMap_14_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_14_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_14_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_14_T_5))));
    vlSelfRef.axi4xbar_1__DOT__arFIFOMap_15_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__arFIFOMap_15_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_6))));
    vlSelfRef.axi4xbar_1__DOT__awFIFOMap_15_count = 
        ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                 & (((IData)(vlSelfRef.axi4xbar_1__DOT__awFIFOMap_15_count) 
                                                     + (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_2)) 
                                                    - (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_5))));
    if ((((IData)(vlSelfRef._apbxbar_auto_anon_out_5_penable) 
          & (IData)(vlSelfRef._apbxbar_auto_anon_out_5_psel)) 
         & (IData)(vlSelfRef._apbxbar_auto_anon_out_5_pwrite))) {
        vlSelfRef.lvga__DOT__mvga__DOT____Vlvbound_h9f1e51c2__0 
            = (0xffffffU & vlSelfRef._apbxbar_auto_anon_out_5_pwdata);
        if ((0x4afffU >= (0x7ffffU & (vlSelfRef._apbxbar_auto_anon_out_5_paddr 
                                      >> 2U)))) {
            __VdlyVal__lvga__DOT__mvga__DOT__mem__v0 
                = vlSelfRef.lvga__DOT__mvga__DOT____Vlvbound_h9f1e51c2__0;
            __VdlyDim0__lvga__DOT__mvga__DOT__mem__v0 
                = (0x7ffffU & (vlSelfRef._apbxbar_auto_anon_out_5_paddr 
                               >> 2U));
            __VdlySet__lvga__DOT__mvga__DOT__mem__v0 = 1U;
        }
    }
    if (((0xeU <= (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
         & ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
            <= ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__FINAL_COUNT) 
                - (IData)(6U))))) {
        if (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck) {
            __VdlyVal__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 
                = ((0xf0U & (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                             [vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__byte_index] 
                             << 4U)) | (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_din));
            __VdlyDim0__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 
                = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__byte_index;
            __VdlySet__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 1U;
        }
    }
    __Vtableidx6 = (((((IData)(vlSelfRef._lsdram_apb_auto_in_pready) 
                       << 6U) | ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__req_accept) 
                                 << 5U)) | (((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__is_write) 
                                             << 4U) 
                                            | ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__is_read) 
                                               << 3U))) 
                    | (((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__state) 
                        << 1U) | (IData)(vlSelfRef.reset)));
    if (VysyxSoCFull__ConstPool__TABLE_h95603f8d_0[__Vtableidx6]) {
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__state 
            = VysyxSoCFull__ConstPool__TABLE_h76f36359_0
            [__Vtableidx6];
    }
    if (vlSelfRef.reset) {
        __Vdly__lgpio__DOT__mgpio__DOT__led_reg = 0U;
        __Vdly__lgpio__DOT__mgpio__DOT__seg_reg = 0xaaaaaaaaU;
    }
    if ((1U != (IData)(vlSelfRef.lgpio__DOT__mgpio__DOT__state))) {
        if ((2U == (IData)(vlSelfRef.lgpio__DOT__mgpio__DOT__state))) {
            if (vlSelfRef._apbxbar_auto_anon_out_3_pwrite) {
                if ((0U == (0xfU & vlSelfRef.lgpio__DOT__mgpio__DOT__addr))) {
                    __Vdly__lgpio__DOT__mgpio__DOT__led_reg 
                        = (0xffffU & vlSelfRef.lgpio__DOT__mgpio__DOT__wdata);
                } else if ((8U == (0xfU & vlSelfRef.lgpio__DOT__mgpio__DOT__addr))) {
                    __Vdly__lgpio__DOT__mgpio__DOT__seg_reg 
                        = vlSelfRef.lgpio__DOT__mgpio__DOT__wdata;
                } else {
                    __Vdly__lgpio__DOT__mgpio__DOT__led_reg 
                        = vlSelfRef.lgpio__DOT__mgpio__DOT__led_reg;
                    __Vdly__lgpio__DOT__mgpio__DOT__seg_reg 
                        = vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg;
                }
            }
        }
    }
    if (vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__do_enq) {
        __VdlyVal__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits;
        __VdlyDim0__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__wrap;
        __VdlySet__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.axi4xbar_1__DOT__latched = ((1U & (~ (IData)(vlSelfRef.reset))) 
                                          && ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT__in_0_awready) 
                                                  & (IData)(vlSelfRef.axi4xbar_1__DOT__in_0_awvalid))) 
                                              & (((IData)(vlSelfRef.axi4xbar_1__DOT___awIn_0_io_enq_ready) 
                                                  & (IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0_io_enq_valid)) 
                                                 | (IData)(vlSelfRef.axi4xbar_1__DOT__latched))));
    if (vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq) {
        __VdlyVal__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT____Vcellinp__ram_ext__W0_data;
        __VdlyDim0__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
        __VdlySet__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq) {
        __VdlyVal__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT____Vcellinp__ram_ext__W0_data;
        __VdlyDim0__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
        __VdlySet__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) {
        __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                        >> 3U));
        __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
        __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSelfRef.axi4ram__DOT____Vcellinp__mem_ext__W0_en) 
         & (IData)(vlSelfRef._axi4xbar_1_auto_anon_out_2_wstrb))) {
        __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v0 
            = (0xffU & vlSelfRef._axi4xbar_1_auto_anon_out_2_wdata);
        __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v0 
            = (0x7ffU & (vlSelfRef._axi4frag_auto_out_awaddr 
                         >> 2U));
        __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.axi4ram__DOT____Vcellinp__mem_ext__W0_en) 
         & ((IData)(vlSelfRef._axi4xbar_1_auto_anon_out_2_wstrb) 
            >> 1U))) {
        __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v1 
            = (0xffU & (vlSelfRef._axi4xbar_1_auto_anon_out_2_wdata 
                        >> 8U));
        __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v1 
            = (0x7ffU & (vlSelfRef._axi4frag_auto_out_awaddr 
                         >> 2U));
        __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 1U;
    }
    if (((IData)(vlSelfRef.axi4ram__DOT____Vcellinp__mem_ext__W0_en) 
         & ((IData)(vlSelfRef._axi4xbar_1_auto_anon_out_2_wstrb) 
            >> 2U))) {
        __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v2 
            = (0xffU & (vlSelfRef._axi4xbar_1_auto_anon_out_2_wdata 
                        >> 0x10U));
        __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v2 
            = (0x7ffU & (vlSelfRef._axi4frag_auto_out_awaddr 
                         >> 2U));
        __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 1U;
    }
    if (((IData)(vlSelfRef.axi4ram__DOT____Vcellinp__mem_ext__W0_en) 
         & ((IData)(vlSelfRef._axi4xbar_1_auto_anon_out_2_wstrb) 
            >> 3U))) {
        __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v3 
            = (vlSelfRef._axi4xbar_1_auto_anon_out_2_wdata 
               >> 0x18U);
        __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v3 
            = (0x7ffU & (vlSelfRef._axi4frag_auto_out_awaddr 
                         >> 2U));
        __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 1U;
    }
    vlSelfRef.axi4frag__DOT__wbeats_latched = ((1U 
                                                & (~ (IData)(vlSelfRef.reset))) 
                                               && ((~ 
                                                    ((IData)(vlSelfRef._axi4yank_auto_in_awready) 
                                                     & (IData)(vlSelfRef.axi4frag__DOT__nodeOut_awvalid))) 
                                                   & (((IData)(vlSelfRef.axi4frag__DOT__wbeats_valid) 
                                                       & (IData)(vlSelfRef.axi4frag__DOT__w_idle)) 
                                                      | (IData)(vlSelfRef.axi4frag__DOT__wbeats_latched))));
    if (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tf_push) {
        __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
        __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top;
        __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 1U;
    }
    if (vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq) {
        __VdlyVal__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT____Vcellinp__ram_ext__W0_data;
        __VdlyDim0__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
        __VdlySet__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq) {
        __VdlyVal__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT____Vcellinp__ram_ext__W0_data;
        __VdlyDim0__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
        __VdlySet__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq) {
        __VdlyVal__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT____Vcellinp__ram_ext__W0_data;
        __VdlyDim0__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
        __VdlySet__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.lmrom__DOT__state = (1U & ((~ (IData)(vlSelfRef.reset)) 
                                         & ((IData)(vlSelfRef.lmrom__DOT__state)
                                             ? (~ ((IData)(vlSelfRef._axi4xbar_1_auto_anon_out_1_rready) 
                                                   & (IData)(vlSelfRef.lmrom__DOT__state)))
                                             : (IData)(vlSelfRef.lmrom__DOT___nodeIn_rid_T))));
    vlSelfRef.axi4ram__DOT__r_full = ((1U & (~ (IData)(vlSelfRef.reset))) 
                                      && ((IData)(vlSelfRef.axi4ram__DOT__ren) 
                                          | ((~ ((IData)(vlSelfRef._axi4xbar_1_auto_anon_out_2_rready) 
                                                 & (IData)(vlSelfRef.axi4ram__DOT__r_full))) 
                                             & (IData)(vlSelfRef.axi4ram__DOT__r_full))));
    vlSelfRef.axi4ram__DOT__w_full = ((1U & (~ (IData)(vlSelfRef.reset))) 
                                      && ((IData)(vlSelfRef.axi4ram__DOT___GEN) 
                                          | ((~ ((IData)(vlSelfRef._axi4xbar_1_auto_anon_out_2_bready) 
                                                 & (IData)(vlSelfRef.axi4ram__DOT__w_full))) 
                                             & (IData)(vlSelfRef.axi4ram__DOT__w_full))));
    vlSelfRef.luart__DOT__muart__DOT__reg_dat8_w_reg 
        = vlSelfRef.luart__DOT__muart__DOT__reg_dat8_w;
    vlSelfRef.axi4ram__DOT__w_sel1 = vlSelfRef.axi4ram__DOT__w_sel0;
    vlSelfRef.axi4ram__DOT__r_sel1 = (0x7800U == (0x7fffU 
                                                  & (vlSelfRef._axi4xbar_1_auto_anon_out_2_araddr 
                                                     >> 0xdU)));
    if (vlSelfRef.axi42apb__DOT__nodeOut_penable) {
        vlSelfRef.axi42apb__DOT__nodeIn_rdata_r = vlSelfRef._apbdelay_delayer_in_prdata;
        vlSelfRef.axi42apb__DOT__resp_hold_r = vlSelfRef.axi42apb__DOT__resp;
    }
    if (vlSelfRef.lmrom__DOT___nodeIn_rid_T) {
        vlSelfRef.lmrom__DOT__nodeIn_rdata_r = vlSelfRef.lmrom__DOT___mrom_rdata;
        vlSelfRef.lmrom__DOT__nodeIn_rid_r = vlSelfRef._axi4xbar_1_auto_anon_out_1_arid;
    }
    vlSelfRef.axi4ram__DOT__mem_ext__DOT___R0_en_d0 
        = vlSelfRef.axi4ram__DOT__ren;
    if (vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__do_enq) {
        vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__ram 
            = (((QData)((IData)(vlSelfRef._axi4xbar_auto_anon_out_wdata)) 
                << 5U) | (QData)((IData)((((IData)(vlSelfRef._axi4xbar_auto_anon_out_wstrb) 
                                           << 1U) | (IData)(vlSelfRef._axi4xbar_auto_anon_out_wlast)))));
    }
    if (((6U == (IData)(vlSelfRef.lspi__DOT__mspi__DOT__state)) 
         & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__flash_pready))) {
        vlSelfRef.lspi__DOT__mspi__DOT__flash_prdata_r 
            = vlSelfRef.lspi__DOT__mspi__DOT__flash_prdata;
    }
    if (vlSelfRef.axi4ram__DOT__ren) {
        vlSelfRef.axi4ram__DOT__r_id = vlSelfRef._axi4xbar_1_auto_anon_out_2_arid;
    }
    vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__sync_0 
        = vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__sync_1;
    if (vlSelfRef.axi4ram__DOT__rdata_REG) {
        vlSelfRef.axi4ram__DOT__rdata_r0 = (0xffU & vlSelfRef.axi4ram__DOT___mem_ext_R0_data);
        vlSelfRef.axi4ram__DOT__rdata_r1 = (0xffU & 
                                            (vlSelfRef.axi4ram__DOT___mem_ext_R0_data 
                                             >> 8U));
        vlSelfRef.axi4ram__DOT__rdata_r2 = (0xffU & 
                                            (vlSelfRef.axi4ram__DOT___mem_ext_R0_data 
                                             >> 0x10U));
        vlSelfRef.axi4ram__DOT__rdata_r3 = (vlSelfRef.axi4ram__DOT___mem_ext_R0_data 
                                            >> 0x18U);
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_arecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_1__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_arecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_2__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_arecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_3__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_arecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_4__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_arecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_5__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_arecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_6__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_arecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_7__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_arecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_8__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_arecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_9__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_arecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_10__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_arecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_11__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_arecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_12__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_arecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_13__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_arecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_14__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_arecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_15__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_arecho_real_last;
    }
    vlSelfRef.axi4ram__DOT__mem_ext__DOT___R0_addr_d0 
        = (0x7ffU & (vlSelfRef._axi4frag_auto_out_araddr 
                     >> 2U));
    if (vlSelfRef.axi4ram__DOT___GEN) {
        vlSelfRef.axi4ram__DOT__w_id = vlSelfRef._axi4xbar_1_auto_anon_out_2_awid;
    }
    vlSelfRef.lspi__DOT__mspi__DOT__flash_psel = ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__flash_penable) 
                                                  & (~ (IData)(vlSelfRef.lspi__DOT__mspi__DOT__flash_pready)));
    if (((IData)(vlSelfRef.lspi__DOT__mspi__DOT__is_flash_r) 
         != (IData)(vlSelfRef.lspi__DOT__mspi__DOT__is_flash))) {
        vlSelfRef.lspi__DOT__mspi__DOT__XIP_ex = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        if (((IData)(vlSelfRef.lspi__DOT__mspi__DOT__is_flash) 
             & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__xip))) {
            if ((4U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__state))) {
                        vlSelfRef.lspi__DOT__mspi__DOT__XIP_ex = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_16__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_awecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_17__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_awecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_18__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_awecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_19__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_awecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_20__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_awecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_21__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_awecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_22__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_awecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_23__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_awecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_24__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_awecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_25__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_awecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_26__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_awecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_27__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_awecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_28__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_awecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_29__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_awecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_30__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_awecho_real_last;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
           & (IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_31__io_enq_valid));
    if (vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last 
            = vlSelfRef._axi4frag_auto_out_awecho_real_last;
    }
    if (vlSelfRef.axi42apb__DOT__accept_read) {
        vlSelfRef.axi42apb__DOT__rid_reg = vlSelfRef._axi4buf_auto_out_arid;
        vlSelfRef.axi42apb__DOT__araddr_reg_r = vlSelfRef._axi4buf_auto_out_araddr;
    }
    if (vlSelfRef.axi4frag__DOT__deq_q__DOT__do_enq) {
        vlSelfRef.axi4frag__DOT__deq_q__DOT__ram = 
            (((QData)((IData)(vlSelfRef._axi4xbar_auto_anon_out_arid)) 
              << 0x2dU) | (((QData)((IData)(vlSelfRef._axi4xbar_auto_anon_out_araddr)) 
                            << 0xdU) | (QData)((IData)(
                                                       (((IData)(vlSelfRef._axi4xbar_auto_anon_out_arlen) 
                                                         << 5U) 
                                                        | (((IData)(vlSelfRef._axi4xbar_auto_anon_out_arsize) 
                                                            << 2U) 
                                                           | (IData)(vlSelfRef._axi4xbar_auto_anon_out_arburst)))))));
    }
    vlSelfRef.axi4frag__DOT__unnamedblk1__DOT___GEN_0 
        = ((IData)(vlSelfRef._axi4yank_auto_in_arready) 
           & (IData)(vlSelfRef.axi4frag__DOT___deq_q_io_deq_valid));
    if (vlSelfRef.axi4frag__DOT__unnamedblk1__DOT___GEN_0) {
        vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1 
            = (vlSelfRef.axi4frag__DOT__addr + (0xffffU 
                                                & ((IData)(1U) 
                                                   << (IData)(vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_size))));
        vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 
            = (0x7fffffU & ((0xffU | ((IData)(vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_len) 
                                      << 8U)) << (IData)(vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_size)));
        vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1 
            = (~ vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_addr);
        vlSelfRef.axi4frag__DOT__r_len = (0xffU & ((IData)(vlSelfRef.axi4frag__DOT__len) 
                                                   - (IData)(1U)));
        vlSelfRef.axi4frag__DOT__r_addr = ((0U == (IData)(vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_burst))
                                            ? vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_addr
                                            : ((2U 
                                                == (IData)(vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_burst))
                                                ? (
                                                   (0x7fffU 
                                                    & (vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1 
                                                       & (vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 
                                                          >> 8U))) 
                                                   | (~ 
                                                      ((0xffff8000U 
                                                        & vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1) 
                                                       | (0x7fffU 
                                                          & (vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1 
                                                             | (vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 
                                                                >> 8U))))))
                                                : vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1));
    }
    if (vlSelfRef.axi4frag__DOT__deq_q_1__DOT__do_enq) {
        vlSelfRef.axi4frag__DOT__deq_q_1__DOT__ram 
            = (((QData)((IData)(vlSelfRef._axi4xbar_auto_anon_out_awid)) 
                << 0x2dU) | (((QData)((IData)(vlSelfRef._axi4xbar_auto_anon_out_awaddr)) 
                              << 0xdU) | (QData)((IData)(
                                                         (((IData)(vlSelfRef._axi4xbar_auto_anon_out_awlen) 
                                                           << 5U) 
                                                          | (((IData)(vlSelfRef._axi4xbar_auto_anon_out_awsize) 
                                                              << 2U) 
                                                             | (IData)(vlSelfRef._axi4xbar_auto_anon_out_awburst)))))));
    }
    vlSelfRef.axi4frag__DOT__unnamedblk1__DOT___GEN_1 
        = ((IData)(vlSelfRef.axi4frag__DOT__in_awready) 
           & (IData)(vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_valid));
    if (vlSelfRef.reset) {
        __Vdly__lvga__DOT__mvga__DOT__vcount = 0U;
        __Vdly__lvga__DOT__mvga__DOT__hcount = 0U;
        __Vdly__lspi__DOT__mspi__DOT__state = 0U;
        __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full = 0U;
        __Vdly__axi4frag__DOT__error_0 = 0U;
        __Vdly__axi4frag__DOT__error_1 = 0U;
        __Vdly__axi4frag__DOT__error_2 = 0U;
        __Vdly__axi4frag__DOT__error_3 = 0U;
        __Vdly__axi4frag__DOT__error_4 = 0U;
        __Vdly__axi4frag__DOT__error_5 = 0U;
        __Vdly__axi4frag__DOT__error_6 = 0U;
        __Vdly__axi4frag__DOT__error_7 = 0U;
        __Vdly__axi4frag__DOT__error_8 = 0U;
        __Vdly__axi4frag__DOT__error_9 = 0U;
        __Vdly__axi4frag__DOT__error_10 = 0U;
        __Vdly__axi4frag__DOT__error_11 = 0U;
        __Vdly__axi4frag__DOT__error_12 = 0U;
        __Vdly__axi4frag__DOT__error_13 = 0U;
        __Vdly__axi4frag__DOT__error_14 = 0U;
        __Vdly__axi4frag__DOT__error_15 = 0U;
        __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap = 0U;
        __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = 0U;
        __Vdly__axi4frag__DOT__deq_q__DOT__full = 0U;
        __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap = 0U;
        __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap = 0U;
        __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap = 0U;
        __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap = 0U;
        __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap = 0U;
        __Vdly__axi4frag__DOT__deq_q_1__DOT__full = 0U;
        __Vdly__axi42apb__DOT__state = 0U;
        vlSelfRef.lgpio__DOT__mgpio__DOT__switch_reg = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full = 0U;
        vlSelfRef.lspi__DOT__mspi__DOT__flash_pstrb = 0U;
        vlSelfRef.lspi__DOT__mspi__DOT__flash_pwrite = 0U;
        vlSelfRef.lspi__DOT__mspi__DOT__flash_paddr = 0U;
        vlSelfRef.lspi__DOT__mspi__DOT__flash_pwdata = 0U;
        vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__maybe_full = 0U;
        vlSelfRef.axi4frag__DOT__w_counter = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full = 0U;
        vlSelfRef.axi4frag__DOT__busy = 0U;
        vlSelfRef.axi4frag__DOT__busy_1 = 0U;
        __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full = 0U;
        __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full = 0U;
        __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full = 0U;
        __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full = 0U;
        __Vdly__axi4xbar_1__DOT__idle_3 = 1U;
        vlSelfRef.axi4xbar_1__DOT__readys_mask = 7U;
        vlSelfRef.axi4xbar_1__DOT__state_3_0 = 0U;
        vlSelfRef.axi4xbar_1__DOT__state_3_1 = 0U;
        vlSelfRef.axi4xbar_1__DOT__state_3_2 = 0U;
        __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full = 0U;
        __Vdly__axi4xbar_1__DOT__idle_4 = 1U;
        vlSelfRef.axi4xbar_1__DOT__readys_mask_1 = 7U;
        vlSelfRef.axi4xbar_1__DOT__state_4_0 = 0U;
        vlSelfRef.axi4xbar_1__DOT__state_4_2 = 0U;
        vlSelfRef.lspi__DOT__mspi__DOT__flash_penable = 0U;
    } else {
        if (((0x20cU == (IData)(vlSelfRef.lvga__DOT__mvga__DOT__vcount)) 
             & (0x31fU == (IData)(vlSelfRef.lvga__DOT__mvga__DOT__hcount)))) {
            __Vdly__lvga__DOT__mvga__DOT__vcount = 0U;
        } else if ((0x31fU == (IData)(vlSelfRef.lvga__DOT__mvga__DOT__hcount))) {
            __Vdly__lvga__DOT__mvga__DOT__vcount = 
                (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.lvga__DOT__mvga__DOT__vcount)));
        }
        __Vdly__lvga__DOT__mvga__DOT__hcount = (0x3ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.lvga__DOT__mvga__DOT__hcount)));
        if ((0x31fU == (IData)(vlSelfRef.lvga__DOT__mvga__DOT__hcount))) {
            __Vdly__lvga__DOT__mvga__DOT__hcount = 0U;
        }
        if (((IData)(vlSelfRef.lspi__DOT__mspi__DOT__is_flash) 
             & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__xip))) {
            if ((4U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__state))) {
                        __Vdly__lspi__DOT__mspi__DOT__state = 0U;
                        vlSelfRef.lspi__DOT__mspi__DOT__flash_penable = 0U;
                    } else {
                        __Vdly__lspi__DOT__mspi__DOT__state 
                            = ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__flash_pready)
                                ? 7U : (IData)(vlSelfRef.lspi__DOT__mspi__DOT__state));
                    }
                    if ((1U & (~ (IData)(vlSelfRef.lspi__DOT__mspi__DOT__state)))) {
                        vlSelfRef.lspi__DOT__mspi__DOT__flash_pstrb = 0xfU;
                        vlSelfRef.lspi__DOT__mspi__DOT__flash_pwrite = 0U;
                        vlSelfRef.lspi__DOT__mspi__DOT__flash_paddr = 0U;
                        vlSelfRef.lspi__DOT__mspi__DOT__flash_pwdata = 0U;
                    }
                } else if ((1U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__state))) {
                    __Vdly__lspi__DOT__mspi__DOT__state 
                        = ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__flash_pready)
                            ? 6U : (IData)(vlSelfRef.lspi__DOT__mspi__DOT__state));
                    vlSelfRef.lspi__DOT__mspi__DOT__flash_paddr = 0x18U;
                    vlSelfRef.lspi__DOT__mspi__DOT__flash_pwdata = 0U;
                    vlSelfRef.lspi__DOT__mspi__DOT__flash_pstrb = 0xfU;
                    vlSelfRef.lspi__DOT__mspi__DOT__flash_pwrite = 1U;
                } else {
                    __Vdly__lspi__DOT__mspi__DOT__state 
                        = (((0xfffffeffU == (0xfffffeffU 
                                             | vlSelfRef.lspi__DOT__mspi__DOT__flash_prdata)) 
                            & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__flash_pready))
                            ? 5U : (IData)(vlSelfRef.lspi__DOT__mspi__DOT__state));
                    vlSelfRef.lspi__DOT__mspi__DOT__flash_paddr = 0x10U;
                    vlSelfRef.lspi__DOT__mspi__DOT__flash_pstrb = 0xfU;
                    vlSelfRef.lspi__DOT__mspi__DOT__flash_pwrite = 0U;
                }
            } else {
                if ((2U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__state))) {
                        __Vdly__lspi__DOT__mspi__DOT__state 
                            = ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__flash_pready)
                                ? 4U : (IData)(vlSelfRef.lspi__DOT__mspi__DOT__state));
                        vlSelfRef.lspi__DOT__mspi__DOT__flash_paddr = 0x10U;
                        vlSelfRef.lspi__DOT__mspi__DOT__flash_pwdata = 0x140U;
                    } else {
                        __Vdly__lspi__DOT__mspi__DOT__state 
                            = ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__flash_pready)
                                ? 3U : (IData)(vlSelfRef.lspi__DOT__mspi__DOT__state));
                        vlSelfRef.lspi__DOT__mspi__DOT__flash_paddr = 4U;
                        vlSelfRef.lspi__DOT__mspi__DOT__flash_pwdata 
                            = (0x3000000U | (0xffffffU 
                                             & vlSelfRef._apbxbar_auto_anon_out_5_paddr));
                    }
                } else if ((1U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__state))) {
                    __Vdly__lspi__DOT__mspi__DOT__state 
                        = ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__flash_pready)
                            ? 2U : (IData)(vlSelfRef.lspi__DOT__mspi__DOT__state));
                    vlSelfRef.lspi__DOT__mspi__DOT__flash_paddr = 0x18U;
                    vlSelfRef.lspi__DOT__mspi__DOT__flash_pwdata = 1U;
                } else {
                    __Vdly__lspi__DOT__mspi__DOT__state 
                        = ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__flash_pready)
                            ? 1U : (IData)(vlSelfRef.lspi__DOT__mspi__DOT__state));
                    vlSelfRef.lspi__DOT__mspi__DOT__flash_paddr = 0x14U;
                    vlSelfRef.lspi__DOT__mspi__DOT__flash_pwdata = 0U;
                }
                vlSelfRef.lspi__DOT__mspi__DOT__flash_pstrb = 0xfU;
                vlSelfRef.lspi__DOT__mspi__DOT__flash_pwrite = 1U;
                if ((1U & (~ ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.lspi__DOT__mspi__DOT__state)))) {
                        vlSelfRef.lspi__DOT__mspi__DOT__flash_penable = 1U;
                    }
                }
            }
        }
        if (((IData)(vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__do_enq) 
             != (((IData)(vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__full) 
                  & (IData)(vlSelfRef.axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready)) 
                 & (IData)(vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0)))) {
            __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full 
                = vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__do_enq;
        }
        vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2 
            = (0xffffU & ((IData)(1U) << (IData)(vlSelfRef._axi4yank_auto_in_bid)));
        vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3 
            = ((IData)(vlSelfRef.axi4frag__DOT__nodeOut_bready) 
               & (IData)(vlSelfRef._axi4yank_auto_in_bvalid));
        if (((IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
             & (IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_0 = ((IData)(vlSelfRef._axi4yank_auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.axi4frag__DOT__error_0) 
                                                  | (IData)(vlSelfRef._axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 1U) & (IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_1 = ((IData)(vlSelfRef._axi4yank_auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.axi4frag__DOT__error_1) 
                                                  | (IData)(vlSelfRef._axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 2U) & (IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_2 = ((IData)(vlSelfRef._axi4yank_auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.axi4frag__DOT__error_2) 
                                                  | (IData)(vlSelfRef._axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 3U) & (IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_3 = ((IData)(vlSelfRef._axi4yank_auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.axi4frag__DOT__error_3) 
                                                  | (IData)(vlSelfRef._axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 4U) & (IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_4 = ((IData)(vlSelfRef._axi4yank_auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.axi4frag__DOT__error_4) 
                                                  | (IData)(vlSelfRef._axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 5U) & (IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_5 = ((IData)(vlSelfRef._axi4yank_auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.axi4frag__DOT__error_5) 
                                                  | (IData)(vlSelfRef._axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 6U) & (IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_6 = ((IData)(vlSelfRef._axi4yank_auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.axi4frag__DOT__error_6) 
                                                  | (IData)(vlSelfRef._axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 7U) & (IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_7 = ((IData)(vlSelfRef._axi4yank_auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.axi4frag__DOT__error_7) 
                                                  | (IData)(vlSelfRef._axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 8U) & (IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_8 = ((IData)(vlSelfRef._axi4yank_auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.axi4frag__DOT__error_8) 
                                                  | (IData)(vlSelfRef._axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 9U) & (IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_9 = ((IData)(vlSelfRef._axi4yank_auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.axi4frag__DOT__error_9) 
                                                  | (IData)(vlSelfRef._axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0xaU) & (IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_10 = ((IData)(vlSelfRef._axi4yank_auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.axi4frag__DOT__error_10) 
                                                   | (IData)(vlSelfRef._axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0xbU) & (IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_11 = ((IData)(vlSelfRef._axi4yank_auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.axi4frag__DOT__error_11) 
                                                   | (IData)(vlSelfRef._axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0xcU) & (IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_12 = ((IData)(vlSelfRef._axi4yank_auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.axi4frag__DOT__error_12) 
                                                   | (IData)(vlSelfRef._axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0xdU) & (IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_13 = ((IData)(vlSelfRef._axi4yank_auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.axi4frag__DOT__error_13) 
                                                   | (IData)(vlSelfRef._axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0xeU) & (IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_14 = ((IData)(vlSelfRef._axi4yank_auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.axi4frag__DOT__error_14) 
                                                   | (IData)(vlSelfRef._axi4yank_auto_in_bresp)));
        }
        if ((((IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0xfU) & (IData)(vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_15 = ((IData)(vlSelfRef._axi4yank_auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.axi4frag__DOT__error_15) 
                                                   | (IData)(vlSelfRef._axi4yank_auto_in_bresp)));
        }
        if (vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__do_enq) {
            __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__do_deq) {
            __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.axi4frag__DOT__deq_q__DOT__do_enq) 
             != (((IData)(vlSelfRef.axi4frag__DOT__deq_q__DOT__full) 
                  & (IData)(vlSelfRef.axi4frag__DOT____Vcellinp__deq_q__io_deq_ready)) 
                 & (IData)(vlSelfRef.axi4frag__DOT__deq_q__DOT__io_deq_valid_0)))) {
            __Vdly__axi4frag__DOT__deq_q__DOT__full 
                = vlSelfRef.axi4frag__DOT__deq_q__DOT__do_enq;
        }
        if (vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq) {
            __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq) {
            __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq) {
            __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq) {
            __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq) {
            __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.axi4frag__DOT__deq_q_1__DOT__do_enq) 
             != (((IData)(vlSelfRef.axi4frag__DOT__deq_q_1__DOT__full) 
                  & (IData)(vlSelfRef.axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready)) 
                 & (IData)(vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0)))) {
            __Vdly__axi4frag__DOT__deq_q_1__DOT__full 
                = vlSelfRef.axi4frag__DOT__deq_q_1__DOT__do_enq;
        }
        vlSelfRef.axi42apb__DOT__unnamedblk1__DOT___GEN 
            = (((IData)(vlSelfRef.axi42apb__DOT__state) 
                << 6U) | ((0x20U & ((~ (((IData)(vlSelfRef._axi4buf_auto_out_rready) 
                                         & (IData)(vlSelfRef.axi42apb__DOT__nodeIn_rvalid)) 
                                        | ((IData)(vlSelfRef._axi4buf_auto_out_bready) 
                                           & (IData)(vlSelfRef.axi42apb__DOT__nodeIn_bvalid)))) 
                                    << 5U)) | ((((IData)(vlSelfRef._apbdelay_delayer_in_pready)
                                                  ? 
                                                 (2U 
                                                  & ((~ 
                                                      (((IData)(vlSelfRef._axi4buf_auto_out_rready) 
                                                        & (IData)(vlSelfRef.axi42apb__DOT__nodeIn_rvalid)) 
                                                       | ((IData)(vlSelfRef._axi4buf_auto_out_bready) 
                                                          & (IData)(vlSelfRef.axi42apb__DOT__nodeIn_bvalid)))) 
                                                     << 1U))
                                                  : 1U) 
                                                << 2U) 
                                               | ((IData)(vlSelfRef._axi4buf_auto_out_arvalid) 
                                                  | ((IData)(vlSelfRef._axi4buf_auto_out_awvalid) 
                                                     & (IData)(vlSelfRef._axi4buf_auto_out_wvalid))))));
        __Vdly__axi42apb__DOT__state = (3U & ((IData)(vlSelfRef.axi42apb__DOT__unnamedblk1__DOT___GEN) 
                                              >> (7U 
                                                  & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.axi42apb__DOT__state), 1U))));
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_1__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_2__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_3__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_4__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_5__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_6__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_7__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_8__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_9__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_10__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_11__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_12__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_13__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_14__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_15__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__do_enq) 
             != (IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__do_deq))) {
            vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__maybe_full 
                = vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__do_enq;
        }
        vlSelfRef.axi4frag__DOT__w_counter = (0x1ffU 
                                              & ((IData)(vlSelfRef.axi4frag__DOT__w_todo) 
                                                 - (IData)(vlSelfRef.axi4frag__DOT___wcounter_T)));
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_16__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_17__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_18__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_19__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_20__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_21__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_22__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_23__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_24__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_25__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_26__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_27__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_28__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_29__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_30__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_31__io_deq_ready) 
                 & (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
                = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq;
        }
        if (vlSelfRef.axi4frag__DOT__unnamedblk1__DOT___GEN_0) {
            vlSelfRef.axi4frag__DOT__busy = (0U != (IData)(vlSelfRef.axi4frag__DOT__len));
        }
        if (vlSelfRef.axi4frag__DOT__unnamedblk1__DOT___GEN_1) {
            vlSelfRef.axi4frag__DOT__busy_1 = (0U != (IData)(vlSelfRef.axi4frag__DOT__len_1));
        }
        vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelfRef._axi42apb_auto_in_awready) 
               & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)));
        if (vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq) 
             != (IData)(vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full 
                = vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq;
        }
        vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelfRef._axi42apb_auto_in_arready) 
               & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)));
        if (vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq) 
             != (IData)(vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full 
                = vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq;
        }
        vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelfRef._axi42apb_auto_in_wready) 
               & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)));
        if (vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq) 
             != (IData)(vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full 
                = vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq;
        }
        vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelfRef._axi4xbar_1_auto_anon_out_0_rready) 
               & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)));
        if (vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq) 
             != (IData)(vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full 
                = vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq;
        }
        __Vdly__axi4xbar_1__DOT__idle_3 = (((IData)(vlSelfRef._axi4yank_auto_out_rready) 
                                            & (IData)(vlSelfRef.axi4xbar_1__DOT__in_0_rvalid)) 
                                           | ((~ (IData)(vlSelfRef.axi4xbar_1__DOT__anyValid)) 
                                              & (IData)(vlSelfRef.axi4xbar_1__DOT__idle_3)));
        if (((IData)(vlSelfRef.axi4xbar_1__DOT__idle_3) 
             & (0U != (IData)(vlSelfRef.axi4xbar_1__DOT__readys_valid)))) {
            vlSelfRef.axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T 
                = ((IData)(vlSelfRef.axi4xbar_1__DOT__readys_readys) 
                   & (IData)(vlSelfRef.axi4xbar_1__DOT__readys_valid));
            vlSelfRef.axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3 
                = ((IData)(vlSelfRef.axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T) 
                   | (6U & ((IData)(vlSelfRef.axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T) 
                            << 1U)));
            vlSelfRef.axi4xbar_1__DOT__readys_mask 
                = ((IData)(vlSelfRef.axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3) 
                   | (4U & ((IData)(vlSelfRef.axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3) 
                            << 2U)));
        }
        if (vlSelfRef.axi4xbar_1__DOT__idle_3) {
            vlSelfRef.axi4xbar_1__DOT__state_3_0 = vlSelfRef.axi4xbar_1__DOT__prefixOR_1;
            vlSelfRef.axi4xbar_1__DOT__state_3_1 = vlSelfRef.axi4xbar_1__DOT__winner_3_1;
            vlSelfRef.axi4xbar_1__DOT__state_3_2 = vlSelfRef.axi4xbar_1__DOT__winner_3_2;
        }
        vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelfRef._axi4xbar_1_auto_anon_out_0_bready) 
               & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)));
        if (vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq) 
             != (IData)(vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full 
                = vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq;
        }
        __Vdly__axi4xbar_1__DOT__idle_4 = (((IData)(vlSelfRef._axi4yank_auto_out_bready) 
                                            & (IData)(vlSelfRef.axi4xbar_1__DOT__in_0_bvalid)) 
                                           | ((~ (IData)(vlSelfRef.axi4xbar_1__DOT__anyValid_1)) 
                                              & (IData)(vlSelfRef.axi4xbar_1__DOT__idle_4)));
        if (((IData)(vlSelfRef.axi4xbar_1__DOT__idle_4) 
             & ((IData)(vlSelfRef._axi4ram_auto_in_bvalid) 
                | (IData)(vlSelfRef._axi4buf_auto_in_bvalid)))) {
            vlSelfRef.axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8 
                = ((IData)(vlSelfRef.axi4xbar_1__DOT__readys_readys_1) 
                   & (IData)(vlSelfRef.axi4xbar_1__DOT__readys_valid_1));
            vlSelfRef.axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11 
                = ((IData)(vlSelfRef.axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8) 
                   | (6U & ((IData)(vlSelfRef.axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8) 
                            << 1U)));
            vlSelfRef.axi4xbar_1__DOT__readys_mask_1 
                = ((IData)(vlSelfRef.axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11) 
                   | (4U & ((IData)(vlSelfRef.axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11) 
                            << 2U)));
        }
        if (vlSelfRef.axi4xbar_1__DOT__idle_4) {
            vlSelfRef.axi4xbar_1__DOT__state_4_0 = vlSelfRef.axi4xbar_1__DOT__winner_4_0;
            vlSelfRef.axi4xbar_1__DOT__state_4_2 = vlSelfRef.axi4xbar_1__DOT__winner_4_2;
        }
    }
    if (vlSelfRef.axi4frag__DOT__unnamedblk1__DOT___GEN_1) {
        vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3 
            = (vlSelfRef.axi4frag__DOT__addr_1 + (0xffffU 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_size))));
        vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 
            = (0x7fffffU & ((0xffU | ((IData)(vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_len) 
                                      << 8U)) << (IData)(vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_size)));
        vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6 
            = (~ vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_addr);
        vlSelfRef.axi4frag__DOT__r_len_1 = (0xffU & 
                                            ((IData)(vlSelfRef.axi4frag__DOT__len_1) 
                                             - (IData)(1U)));
        vlSelfRef.axi4frag__DOT__r_addr_1 = ((0U == (IData)(vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_burst))
                                              ? vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_addr
                                              : ((2U 
                                                  == (IData)(vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_burst))
                                                  ? 
                                                 ((0x7fffU 
                                                   & (vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3 
                                                      & (vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 
                                                         >> 8U))) 
                                                  | (~ 
                                                     ((0xffff8000U 
                                                       & vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6) 
                                                      | (0x7fffU 
                                                         & (vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6 
                                                            | (vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 
                                                               >> 8U))))))
                                                  : vlSelfRef.axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3));
    }
    vlSelfRef.lkeyboard__DOT__mps2__DOT__buffer = __Vdly__lkeyboard__DOT__mps2__DOT__buffer;
    vlSelfRef.lkeyboard__DOT__mps2__DOT__w_ptr = __Vdly__lkeyboard__DOT__mps2__DOT__w_ptr;
    vlSelfRef.lkeyboard__DOT__mps2__DOT__r_ptr = __Vdly__lkeyboard__DOT__mps2__DOT__r_ptr;
    if (__VdlySet__lkeyboard__DOT__mps2__DOT__fifo__v0) {
        vlSelfRef.lkeyboard__DOT__mps2__DOT__fifo[__VdlyDim0__lkeyboard__DOT__mps2__DOT__fifo__v0] 
            = __VdlyVal__lkeyboard__DOT__mps2__DOT__fifo__v0;
    }
    if (__VdlySet__lkeyboard__DOT__mps2__DOT__fifo__v1) {
        vlSelfRef.lkeyboard__DOT__mps2__DOT__fifo[__VdlyDim0__lkeyboard__DOT__mps2__DOT__fifo__v1] = 0U;
    }
    if (__VdlySet__lvga__DOT__mvga__DOT__mem__v0) {
        vlSelfRef.lvga__DOT__mvga__DOT__mem[__VdlyDim0__lvga__DOT__mvga__DOT__mem__v0] 
            = __VdlyVal__lvga__DOT__mvga__DOT__mem__v0;
    }
    if (__VdlySet__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0) {
        vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[__VdlyDim0__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0] 
            = __VdlyVal__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    }
    vlSelfRef.lgpio__DOT__mgpio__DOT__led_reg = __Vdly__lgpio__DOT__mgpio__DOT__led_reg;
    vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg = __Vdly__lgpio__DOT__mgpio__DOT__seg_reg;
    vlSelfRef.lvga__DOT__mvga__DOT__vcount = __Vdly__lvga__DOT__mvga__DOT__vcount;
    vlSelfRef.lvga__DOT__mvga__DOT__hcount = __Vdly__lvga__DOT__mvga__DOT__hcount;
    vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__full = __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full;
    if (__VdlySet__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.axi4frag__DOT__error_0 = __Vdly__axi4frag__DOT__error_0;
    vlSelfRef.axi4frag__DOT__error_1 = __Vdly__axi4frag__DOT__error_1;
    vlSelfRef.axi4frag__DOT__error_2 = __Vdly__axi4frag__DOT__error_2;
    vlSelfRef.axi4frag__DOT__error_3 = __Vdly__axi4frag__DOT__error_3;
    vlSelfRef.axi4frag__DOT__error_4 = __Vdly__axi4frag__DOT__error_4;
    vlSelfRef.axi4frag__DOT__error_5 = __Vdly__axi4frag__DOT__error_5;
    vlSelfRef.axi4frag__DOT__error_6 = __Vdly__axi4frag__DOT__error_6;
    vlSelfRef.axi4frag__DOT__error_7 = __Vdly__axi4frag__DOT__error_7;
    vlSelfRef.axi4frag__DOT__error_8 = __Vdly__axi4frag__DOT__error_8;
    vlSelfRef.axi4frag__DOT__error_9 = __Vdly__axi4frag__DOT__error_9;
    vlSelfRef.axi4frag__DOT__error_10 = __Vdly__axi4frag__DOT__error_10;
    vlSelfRef.axi4frag__DOT__error_11 = __Vdly__axi4frag__DOT__error_11;
    vlSelfRef.axi4frag__DOT__error_12 = __Vdly__axi4frag__DOT__error_12;
    vlSelfRef.axi4frag__DOT__error_13 = __Vdly__axi4frag__DOT__error_13;
    vlSelfRef.axi4frag__DOT__error_14 = __Vdly__axi4frag__DOT__error_14;
    vlSelfRef.axi4frag__DOT__error_15 = __Vdly__axi4frag__DOT__error_15;
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__wrap = __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    if (__VdlySet__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0) {
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0] 
            = __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    }
    if (__VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v0) {
        vlSelfRef.axi4ram__DOT__mem_ext__DOT__Memory[__VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v0] 
            = ((0xffffff00U & vlSelfRef.axi4ram__DOT__mem_ext__DOT__Memory
                [__VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v0]) 
               | (IData)(__VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v0));
    }
    if (__VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v1) {
        vlSelfRef.axi4ram__DOT__mem_ext__DOT__Memory[__VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v1] 
            = ((0xffff00ffU & vlSelfRef.axi4ram__DOT__mem_ext__DOT__Memory
                [__VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v1]) 
               | ((IData)(__VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v1) 
                  << 8U));
    }
    if (__VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v2) {
        vlSelfRef.axi4ram__DOT__mem_ext__DOT__Memory[__VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v2] 
            = ((0xff00ffffU & vlSelfRef.axi4ram__DOT__mem_ext__DOT__Memory
                [__VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v2]) 
               | ((IData)(__VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v2) 
                  << 0x10U));
    }
    if (__VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v3) {
        vlSelfRef.axi4ram__DOT__mem_ext__DOT__Memory[__VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v3] 
            = ((0xffffffU & vlSelfRef.axi4ram__DOT__mem_ext__DOT__Memory
                [__VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v3]) 
               | ((IData)(__VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v3) 
                  << 0x18U));
    }
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__wrap_1 
        = __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    if (__VdlySet__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0) {
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0] 
            = __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    }
    if (__VdlySet__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.axi4frag__DOT__deq_q__DOT__full = __Vdly__axi4frag__DOT__deq_q__DOT__full;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__full = __Vdly__axi4frag__DOT__deq_q_1__DOT__full;
    vlSelfRef.axi42apb__DOT__state = __Vdly__axi42apb__DOT__state;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    vlSelfRef.axi4xbar_1__DOT__idle_3 = __Vdly__axi4xbar_1__DOT__idle_3;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    vlSelfRef.axi4xbar_1__DOT__idle_4 = __Vdly__axi4xbar_1__DOT__idle_4;
    vlSelfRef._lpsram_auto_in_prdata = (((vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                          [3U] << 0x18U) 
                                         | (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                            [2U] << 0x10U)) 
                                        | ((vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                            [1U] << 8U) 
                                           | vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                           [0U]));
    vlSelfRef.gpio_out = vlSelfRef.lgpio__DOT__mgpio__DOT__led_reg;
    if ((1U == (IData)(vlSelfRef.lgpio__DOT__mgpio__DOT__state))) {
        if (vlSelfRef._apbxbar_auto_anon_out_3_pwrite) {
            vlSelfRef.lgpio__DOT__mgpio__DOT__wdata 
                = vlSelfRef._apbxbar_auto_anon_out_3_pwdata;
        }
        vlSelfRef.lgpio__DOT__mgpio__DOT__addr = vlSelfRef._apbxbar_auto_anon_out_4_paddr;
    }
    vlSelfRef.lgpio__DOT__mgpio__DOT__seg = ((0xffffffffffffff00ULL 
                                              & vlSelfRef.lgpio__DOT__mgpio__DOT__seg) 
                                             | (IData)((IData)(
                                                               ((8U 
                                                                 & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                 ? 
                                                                ((4U 
                                                                  & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                  ? 0xffU
                                                                  : 
                                                                 ((2U 
                                                                   & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                   ? 0xffU
                                                                   : 
                                                                  ((1U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 9U
                                                                    : 1U)))
                                                                 : 
                                                                ((4U 
                                                                  & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                  ? 
                                                                 ((2U 
                                                                   & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                   ? 
                                                                  ((1U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 0x1fU
                                                                    : 0x41U)
                                                                   : 
                                                                  ((1U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 0x49U
                                                                    : 0x99U))
                                                                  : 
                                                                 ((2U 
                                                                   & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                   ? 
                                                                  ((1U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 0xdU
                                                                    : 0x25U)
                                                                   : 
                                                                  ((1U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 0x9fU
                                                                    : 3U)))))));
    vlSelfRef.lgpio__DOT__mgpio__DOT__seg = ((0xffffffffffff00ffULL 
                                              & vlSelfRef.lgpio__DOT__mgpio__DOT__seg) 
                                             | ((QData)((IData)(
                                                                ((0x80U 
                                                                  & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                  ? 
                                                                 ((0x40U 
                                                                   & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                   ? 0xffU
                                                                   : 
                                                                  ((0x20U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 0xffU
                                                                    : 
                                                                   ((0x10U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 9U
                                                                     : 1U)))
                                                                  : 
                                                                 ((0x40U 
                                                                   & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                   ? 
                                                                  ((0x20U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 
                                                                   ((0x10U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0x1fU
                                                                     : 0x41U)
                                                                    : 
                                                                   ((0x10U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0x49U
                                                                     : 0x99U))
                                                                   : 
                                                                  ((0x20U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 
                                                                   ((0x10U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0xdU
                                                                     : 0x25U)
                                                                    : 
                                                                   ((0x10U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0x9fU
                                                                     : 3U)))))) 
                                                << 8U));
    vlSelfRef.lgpio__DOT__mgpio__DOT__seg = ((0xffffffffff00ffffULL 
                                              & vlSelfRef.lgpio__DOT__mgpio__DOT__seg) 
                                             | ((QData)((IData)(
                                                                ((0x800U 
                                                                  & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                  ? 
                                                                 ((0x400U 
                                                                   & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                   ? 0xffU
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 0xffU
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 9U
                                                                     : 1U)))
                                                                  : 
                                                                 ((0x400U 
                                                                   & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                   ? 
                                                                  ((0x200U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 
                                                                   ((0x100U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0x1fU
                                                                     : 0x41U)
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0x49U
                                                                     : 0x99U))
                                                                   : 
                                                                  ((0x200U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 
                                                                   ((0x100U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0xdU
                                                                     : 0x25U)
                                                                    : 
                                                                   ((0x100U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0x9fU
                                                                     : 3U)))))) 
                                                << 0x10U));
    vlSelfRef.lgpio__DOT__mgpio__DOT__seg = ((0xffffffff00ffffffULL 
                                              & vlSelfRef.lgpio__DOT__mgpio__DOT__seg) 
                                             | ((QData)((IData)(
                                                                ((0x8000U 
                                                                  & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                  ? 
                                                                 ((0x4000U 
                                                                   & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                   ? 0xffU
                                                                   : 
                                                                  ((0x2000U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 0xffU
                                                                    : 
                                                                   ((0x1000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 9U
                                                                     : 1U)))
                                                                  : 
                                                                 ((0x4000U 
                                                                   & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                   ? 
                                                                  ((0x2000U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 
                                                                   ((0x1000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0x1fU
                                                                     : 0x41U)
                                                                    : 
                                                                   ((0x1000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0x49U
                                                                     : 0x99U))
                                                                   : 
                                                                  ((0x2000U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 
                                                                   ((0x1000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0xdU
                                                                     : 0x25U)
                                                                    : 
                                                                   ((0x1000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0x9fU
                                                                     : 3U)))))) 
                                                << 0x18U));
    vlSelfRef.lgpio__DOT__mgpio__DOT__seg = ((0xffffff00ffffffffULL 
                                              & vlSelfRef.lgpio__DOT__mgpio__DOT__seg) 
                                             | ((QData)((IData)(
                                                                ((0x80000U 
                                                                  & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                  ? 
                                                                 ((0x40000U 
                                                                   & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                   ? 0xffU
                                                                   : 
                                                                  ((0x20000U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 0xffU
                                                                    : 
                                                                   ((0x10000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 9U
                                                                     : 1U)))
                                                                  : 
                                                                 ((0x40000U 
                                                                   & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                   ? 
                                                                  ((0x20000U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 
                                                                   ((0x10000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0x1fU
                                                                     : 0x41U)
                                                                    : 
                                                                   ((0x10000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0x49U
                                                                     : 0x99U))
                                                                   : 
                                                                  ((0x20000U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 
                                                                   ((0x10000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0xdU
                                                                     : 0x25U)
                                                                    : 
                                                                   ((0x10000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0x9fU
                                                                     : 3U)))))) 
                                                << 0x20U));
    vlSelfRef.lgpio__DOT__mgpio__DOT__seg = ((0xffff00ffffffffffULL 
                                              & vlSelfRef.lgpio__DOT__mgpio__DOT__seg) 
                                             | ((QData)((IData)(
                                                                ((0x800000U 
                                                                  & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                  ? 
                                                                 ((0x400000U 
                                                                   & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                   ? 0xffU
                                                                   : 
                                                                  ((0x200000U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 0xffU
                                                                    : 
                                                                   ((0x100000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 9U
                                                                     : 1U)))
                                                                  : 
                                                                 ((0x400000U 
                                                                   & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                   ? 
                                                                  ((0x200000U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 
                                                                   ((0x100000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0x1fU
                                                                     : 0x41U)
                                                                    : 
                                                                   ((0x100000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0x49U
                                                                     : 0x99U))
                                                                   : 
                                                                  ((0x200000U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 
                                                                   ((0x100000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0xdU
                                                                     : 0x25U)
                                                                    : 
                                                                   ((0x100000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0x9fU
                                                                     : 3U)))))) 
                                                << 0x28U));
    vlSelfRef.lgpio__DOT__mgpio__DOT__seg = ((0xff00ffffffffffffULL 
                                              & vlSelfRef.lgpio__DOT__mgpio__DOT__seg) 
                                             | ((QData)((IData)(
                                                                ((0x8000000U 
                                                                  & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                  ? 
                                                                 ((0x4000000U 
                                                                   & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                   ? 0xffU
                                                                   : 
                                                                  ((0x2000000U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 0xffU
                                                                    : 
                                                                   ((0x1000000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 9U
                                                                     : 1U)))
                                                                  : 
                                                                 ((0x4000000U 
                                                                   & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                   ? 
                                                                  ((0x2000000U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 
                                                                   ((0x1000000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0x1fU
                                                                     : 0x41U)
                                                                    : 
                                                                   ((0x1000000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0x49U
                                                                     : 0x99U))
                                                                   : 
                                                                  ((0x2000000U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 
                                                                   ((0x1000000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0xdU
                                                                     : 0x25U)
                                                                    : 
                                                                   ((0x1000000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0x9fU
                                                                     : 3U)))))) 
                                                << 0x30U));
    vlSelfRef.lgpio__DOT__mgpio__DOT__seg = ((0xffffffffffffffULL 
                                              & vlSelfRef.lgpio__DOT__mgpio__DOT__seg) 
                                             | ((QData)((IData)(
                                                                ((vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg 
                                                                  >> 0x1fU)
                                                                  ? 
                                                                 ((0x40000000U 
                                                                   & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                   ? 0xffU
                                                                   : 
                                                                  ((0x20000000U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 0xffU
                                                                    : 
                                                                   ((0x10000000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 9U
                                                                     : 1U)))
                                                                  : 
                                                                 ((0x40000000U 
                                                                   & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                   ? 
                                                                  ((0x20000000U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 
                                                                   ((0x10000000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0x1fU
                                                                     : 0x41U)
                                                                    : 
                                                                   ((0x10000000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0x49U
                                                                     : 0x99U))
                                                                   : 
                                                                  ((0x20000000U 
                                                                    & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                    ? 
                                                                   ((0x10000000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0xdU
                                                                     : 0x25U)
                                                                    : 
                                                                   ((0x10000000U 
                                                                     & vlSelfRef.lgpio__DOT__mgpio__DOT__seg_reg)
                                                                     ? 0x9fU
                                                                     : 3U)))))) 
                                                << 0x38U));
    vlSelfRef.vga_vsync = (1U < (IData)(vlSelfRef.lvga__DOT__mvga__DOT__vcount));
    vlSelfRef.vga_hsync = (0x5fU < (IData)(vlSelfRef.lvga__DOT__mvga__DOT__hcount));
    vlSelfRef.vga_valid = ((0x90U <= (IData)(vlSelfRef.lvga__DOT__mvga__DOT__hcount)) 
                           & ((0x30fU >= (IData)(vlSelfRef.lvga__DOT__mvga__DOT__hcount)) 
                              & ((0x23U <= (IData)(vlSelfRef.lvga__DOT__mvga__DOT__vcount)) 
                                 & (0x202U >= (IData)(vlSelfRef.lvga__DOT__mvga__DOT__vcount)))));
    vlSelfRef._axi4frag_auto_in_wready = (1U & (~ (IData)(vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__full)));
    vlSelfRef.axi4frag__DOT___GEN = ((((((IData)(vlSelfRef.axi4frag__DOT__error_15) 
                                         << 0x1eU) 
                                        | ((IData)(vlSelfRef.axi4frag__DOT__error_14) 
                                           << 0x1cU)) 
                                       | (((IData)(vlSelfRef.axi4frag__DOT__error_13) 
                                           << 0x1aU) 
                                          | ((IData)(vlSelfRef.axi4frag__DOT__error_12) 
                                             << 0x18U))) 
                                      | ((((IData)(vlSelfRef.axi4frag__DOT__error_11) 
                                           << 0x16U) 
                                          | ((IData)(vlSelfRef.axi4frag__DOT__error_10) 
                                             << 0x14U)) 
                                         | (((IData)(vlSelfRef.axi4frag__DOT__error_9) 
                                             << 0x12U) 
                                            | ((IData)(vlSelfRef.axi4frag__DOT__error_8) 
                                               << 0x10U)))) 
                                     | (((((IData)(vlSelfRef.axi4frag__DOT__error_7) 
                                           << 0xeU) 
                                          | ((IData)(vlSelfRef.axi4frag__DOT__error_6) 
                                             << 0xcU)) 
                                         | (((IData)(vlSelfRef.axi4frag__DOT__error_5) 
                                             << 0xaU) 
                                            | ((IData)(vlSelfRef.axi4frag__DOT__error_4) 
                                               << 8U))) 
                                        | ((((IData)(vlSelfRef.axi4frag__DOT__error_3) 
                                             << 6U) 
                                            | ((IData)(vlSelfRef.axi4frag__DOT__error_2) 
                                               << 4U)) 
                                           | (((IData)(vlSelfRef.axi4frag__DOT__error_1) 
                                               << 2U) 
                                              | (IData)(vlSelfRef.axi4frag__DOT__error_0)))));
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_addr 
        = vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__wrap;
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__R0_addr 
        = vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT___ram_ext_R0_data 
        = vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
        [vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__wrap_1];
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    vlSelfRef._axi4frag_auto_in_arready = (1U & (~ (IData)(vlSelfRef.axi4frag__DOT__deq_q__DOT__full)));
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_addr 
        = vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_addr 
        = vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_addr 
        = vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_addr 
        = vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_addr 
        = vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    vlSelfRef._lmrom_auto_in_rvalid = vlSelfRef.lmrom__DOT__state;
    vlSelfRef._lmrom_auto_in_arready = (1U & (~ (IData)(vlSelfRef.lmrom__DOT__state)));
    vlSelfRef._axi4ram_auto_in_rvalid = vlSelfRef.axi4ram__DOT__r_full;
    vlSelfRef._axi4ram_auto_in_bvalid = vlSelfRef.axi4ram__DOT__w_full;
    vlSelfRef._axi4frag_auto_in_awready = (1U & (~ (IData)(vlSelfRef.axi4frag__DOT__deq_q_1__DOT__full)));
    vlSelfRef.axi42apb__DOT___nodeIn_bvalid_T_2 = (2U 
                                                   == (IData)(vlSelfRef.axi42apb__DOT__state));
    vlSelfRef.axi42apb__DOT__nodeOut_penable = (1U 
                                                == (IData)(vlSelfRef.axi42apb__DOT__state));
    if (vlSelfRef.axi42apb__DOT___is_write_T) {
        vlSelfRef.axi42apb__DOT__is_write_r = vlSelfRef.axi42apb__DOT__accept_write;
    }
    vlSelfRef.axi42apb__DOT___is_write_T = (0U == (IData)(vlSelfRef.axi42apb__DOT__state));
    vlSelfRef._axi4ram_auto_in_bresp = ((IData)(vlSelfRef.axi4ram__DOT__w_sel1)
                                         ? 0U : 3U);
    vlSelfRef._axi4ram_auto_in_rresp = ((IData)(vlSelfRef.axi4ram__DOT__r_sel1)
                                         ? 0U : 3U);
    vlSelfRef._lmrom_auto_in_rdata = vlSelfRef.lmrom__DOT__nodeIn_rdata_r;
    vlSelfRef.axi4frag__DOT___in_wdeq_q_io_deq_bits_last 
        = (1U & ((IData)(vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__full)
                  ? (IData)(vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__ram)
                  : (IData)(vlSelfRef._cpu_auto_master_out_wlast)));
    vlSelfRef._axi4ram_auto_in_rid = vlSelfRef.axi4ram__DOT__r_id;
    vlSelfRef._lmrom_auto_in_rid = vlSelfRef.lmrom__DOT__nodeIn_rid_r;
    vlSelfRef._cpu_reset_chain_io_q = vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__sync_0;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu.reset = ((IData)(vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__sync_0) 
                                                  | (IData)(vlSelfRef.reset));
    vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__sync_1 
        = vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__sync_2;
    vlSelfRef.axi4ram__DOT__rdata_REG = vlSelfRef.axi4ram__DOT__ren;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_1_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_1_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_1_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_2_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_2_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_2_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_3_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_3_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_3_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_4_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_4_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_4_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_5_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_5_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_5_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_6_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_6_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_6_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_7_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_7_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_7_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_8_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_8_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_8_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_9_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_9_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_9_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_10_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_10_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_10_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_11_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_11_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_11_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_12_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_12_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_12_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_13_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_13_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_13_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_14_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_14_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_14_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_15_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___GEN_0 = ((((((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                           << 0xfU) 
                                          | ((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                             << 0xeU)) 
                                         | (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                             << 0xdU) 
                                            | ((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                               << 0xcU))) 
                                        | ((((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                             << 0xbU) 
                                            | ((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                               << 0xaU)) 
                                           | (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                               << 9U) 
                                              | ((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                 << 8U)))) 
                                       | (((((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                             << 7U) 
                                            | ((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                               << 6U)) 
                                           | (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                 << 4U))) 
                                          | ((((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_15_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_15_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__full)));
    vlSelfRef.axi4ram__DOT___mem_ext_R0_data = ((IData)(vlSelfRef.axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                 ? 
                                                vlSelfRef.axi4ram__DOT__mem_ext__DOT__Memory
                                                [vlSelfRef.axi4ram__DOT__mem_ext__DOT___R0_addr_d0]
                                                 : 0U);
    vlSelfRef._axi4ram_auto_in_bid = vlSelfRef.axi4ram__DOT__w_id;
    vlSelfRef.axi4frag__DOT__w_idle = (0U == (IData)(vlSelfRef.axi4frag__DOT__w_counter));
    vlSelfRef.lspi__DOT__mspi__DOT__is_flash_r = vlSelfRef.lspi__DOT__mspi__DOT__is_flash;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_16_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_16_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_16_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_17_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_17_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_17_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_18_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_18_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_18_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_19_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_19_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_19_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_20_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_20_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_20_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_21_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_21_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_21_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_22_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_22_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_22_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_23_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_23_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_23_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_24_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_24_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_24_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_25_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_25_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_25_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_26_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_26_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_26_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_27_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_27_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_27_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_28_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_28_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_28_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_29_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_29_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_29_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_30_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_30_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_30_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_31_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_31_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_31_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___GEN_6 = ((((((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last) 
                                           << 0xfU) 
                                          | ((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last) 
                                             << 0xeU)) 
                                         | (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last) 
                                             << 0xdU) 
                                            | ((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last) 
                                               << 0xcU))) 
                                        | ((((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last) 
                                             << 0xbU) 
                                            | ((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last) 
                                               << 0xaU)) 
                                           | (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last) 
                                               << 9U) 
                                              | ((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last) 
                                                 << 8U)))) 
                                       | (((((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last) 
                                             << 7U) 
                                            | ((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last) 
                                               << 6U)) 
                                           | (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last) 
                                                 << 4U))) 
                                          | ((((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last)))));
    if (vlSelfRef.axi42apb__DOT__accept_write) {
        vlSelfRef.axi42apb__DOT__bid_reg = vlSelfRef._axi4buf_auto_out_awid;
    }
    vlSelfRef._axi42apb_auto_in_bid = vlSelfRef.axi42apb__DOT__bid_reg;
    vlSelfRef._axi42apb_auto_in_rid = vlSelfRef.axi42apb__DOT__rid_reg;
    if (vlSelfRef.axi4frag__DOT__deq_q__DOT__full) {
        vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_burst 
            = (3U & (IData)(vlSelfRef.axi4frag__DOT__deq_q__DOT__ram));
        vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_len 
            = (0xffU & (IData)((vlSelfRef.axi4frag__DOT__deq_q__DOT__ram 
                                >> 5U)));
        vlSelfRef._axi4frag_auto_out_arid = (0xfU & (IData)(
                                                            (vlSelfRef.axi4frag__DOT__deq_q__DOT__ram 
                                                             >> 0x2dU)));
        vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_size 
            = (7U & (IData)((vlSelfRef.axi4frag__DOT__deq_q__DOT__ram 
                             >> 2U)));
    } else {
        vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_burst 
            = (3U & (IData)(vlSelfRef._cpu_auto_master_out_arburst));
        vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_len 
            = (0xffU & (IData)(vlSelfRef._cpu_auto_master_out_arlen));
        vlSelfRef._axi4frag_auto_out_arid = (0xfU & (IData)(vlSelfRef._cpu_auto_master_out_arid));
        vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_size 
            = (7U & (IData)(vlSelfRef._cpu_auto_master_out_arsize));
    }
    if (vlSelfRef.axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_burst 
            = (3U & (IData)(vlSelfRef.axi4frag__DOT__deq_q_1__DOT__ram));
        vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_len 
            = (0xffU & (IData)((vlSelfRef.axi4frag__DOT__deq_q_1__DOT__ram 
                                >> 5U)));
        vlSelfRef._axi4frag_auto_out_awid = (0xfU & (IData)(
                                                            (vlSelfRef.axi4frag__DOT__deq_q_1__DOT__ram 
                                                             >> 0x2dU)));
        vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_size 
            = (7U & (IData)((vlSelfRef.axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 2U)));
    } else {
        vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_burst 
            = (3U & (IData)(vlSelfRef._cpu_auto_master_out_awburst));
        vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_len 
            = (0xffU & (IData)(vlSelfRef._cpu_auto_master_out_awlen));
        vlSelfRef._axi4frag_auto_out_awid = (0xfU & (IData)(vlSelfRef._cpu_auto_master_out_awid));
        vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_size 
            = (7U & (IData)(vlSelfRef._cpu_auto_master_out_awsize));
    }
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_addr 
        = vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
        = vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1];
    vlSelfRef._axi4buf_auto_out_awid = (0xfU & (IData)(
                                                       (vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory
                                                        [vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1] 
                                                        >> 0x2bU)));
    vlSelfRef._axi4buf_auto_out_awlen = (0xffU & (IData)(
                                                         (vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory
                                                          [vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1] 
                                                          >> 3U)));
    vlSelfRef._axi4buf_auto_out_awsize = (7U & (IData)(
                                                       vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory
                                                       [vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1]));
    if (vlSelfRef.axi42apb__DOT__accept_write) {
        vlSelfRef.axi42apb__DOT__awaddr_reg_r = vlSelfRef._axi4buf_auto_out_awaddr;
    }
    vlSelfRef._axi4buf_auto_out_awaddr = (IData)((vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory
                                                  [vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1] 
                                                  >> 0xbU));
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_addr 
        = vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
        = vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1];
    vlSelfRef._axi4buf_auto_out_arid = (0xfU & (IData)(
                                                       (vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory
                                                        [vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1] 
                                                        >> 0x2bU)));
    vlSelfRef._axi4buf_auto_out_arlen = (0xffU & (IData)(
                                                         (vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory
                                                          [vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1] 
                                                          >> 3U)));
    vlSelfRef._axi4buf_auto_out_arsize = (7U & (IData)(
                                                       vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory
                                                       [vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1]));
    vlSelfRef._axi4buf_auto_out_araddr = (IData)((vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory
                                                  [vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1] 
                                                  >> 0xbU));
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_addr 
        = vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
        = vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1];
    if (vlSelfRef.axi42apb__DOT__accept_write) {
        vlSelfRef.axi42apb__DOT__wstrb_reg_r = vlSelfRef._axi4buf_auto_out_wstrb;
    }
    vlSelfRef._axi4buf_auto_out_wstrb = (0xfU & (IData)(
                                                        vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory
                                                        [vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1]));
    if (vlSelfRef.axi42apb__DOT__accept_write) {
        vlSelfRef.axi42apb__DOT__wdata_reg_r = vlSelfRef._axi4buf_auto_out_wdata;
    }
    vlSelfRef._axi4buf_auto_out_wdata = (IData)((vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory
                                                 [vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1] 
                                                 >> 4U));
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_addr 
        = vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
        = vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1];
    vlSelfRef._axi4buf_auto_in_rresp = (3U & (IData)(
                                                     (vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
                                                      [vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1] 
                                                      >> 1U)));
    vlSelfRef._axi4buf_auto_in_rdata = (IData)((vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
                                                [vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1] 
                                                >> 3U));
    vlSelfRef._axi4buf_auto_in_rlast = (1U & (IData)(
                                                     vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
                                                     [vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1]));
    vlSelfRef._axi4buf_auto_in_rid = (0xfU & (IData)(
                                                     (vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
                                                      [vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1] 
                                                      >> 0x23U)));
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_addr 
        = vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data 
        = vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1];
    vlSelfRef._axi4buf_auto_in_bresp = (3U & vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
                                        [vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1]);
    vlSelfRef._axi4buf_auto_in_bid = (0xfU & (vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
                                              [vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1] 
                                              >> 2U));
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    vlSelfRef.apbxbar__DOT__auto_anon_out_2_prdata 
        = vlSelfRef._lpsram_auto_in_prdata;
    vlSelfRef.lpsram__DOT__auto_in_prdata = vlSelfRef._lpsram_auto_in_prdata;
    vlSelfRef.lgpio__DOT__gpio_bundle_out = vlSelfRef.gpio_out;
    vlSelfRef.gpio_seg_0 = (0xffU & (IData)(vlSelfRef.lgpio__DOT__mgpio__DOT__seg));
    vlSelfRef.gpio_seg_1 = (0xffU & (IData)((vlSelfRef.lgpio__DOT__mgpio__DOT__seg 
                                             >> 8U)));
    vlSelfRef.gpio_seg_2 = (0xffU & (IData)((vlSelfRef.lgpio__DOT__mgpio__DOT__seg 
                                             >> 0x10U)));
    vlSelfRef.gpio_seg_3 = (0xffU & (IData)((vlSelfRef.lgpio__DOT__mgpio__DOT__seg 
                                             >> 0x18U)));
    vlSelfRef.gpio_seg_4 = (0xffU & (IData)((vlSelfRef.lgpio__DOT__mgpio__DOT__seg 
                                             >> 0x20U)));
    vlSelfRef.gpio_seg_5 = (0xffU & (IData)((vlSelfRef.lgpio__DOT__mgpio__DOT__seg 
                                             >> 0x28U)));
    vlSelfRef.gpio_seg_6 = (0xffU & (IData)((vlSelfRef.lgpio__DOT__mgpio__DOT__seg 
                                             >> 0x30U)));
    vlSelfRef.gpio_seg_7 = (0xffU & (IData)((vlSelfRef.lgpio__DOT__mgpio__DOT__seg 
                                             >> 0x38U)));
    vlSelfRef.lvga__DOT__vga_bundle_vsync = vlSelfRef.vga_vsync;
    vlSelfRef.lvga__DOT__vga_bundle_hsync = vlSelfRef.vga_hsync;
    vlSelfRef.lvga__DOT__vga_bundle_valid = vlSelfRef.vga_valid;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_wready = vlSelfRef._axi4frag_auto_in_wready;
    vlSelfRef.axi4frag__DOT__auto_in_wready = vlSelfRef._axi4frag_auto_in_wready;
    vlSelfRef._axi4xbar_auto_anon_in_wready = vlSelfRef._axi4frag_auto_in_wready;
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT___ram_ext_R0_data;
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__full = 
        ((IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__ptr_match) 
         & (IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__empty = 
        ((~ (IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__maybe_full)) 
         & (IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    vlSelfRef.axi4xbar__DOT__auto_anon_out_arready 
        = vlSelfRef._axi4frag_auto_in_arready;
    vlSelfRef.axi4frag__DOT__auto_in_arready = vlSelfRef._axi4frag_auto_in_arready;
    vlSelfRef._axi4xbar_auto_anon_in_arready = vlSelfRef._axi4frag_auto_in_arready;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_1_rvalid 
        = vlSelfRef._lmrom_auto_in_rvalid;
    vlSelfRef.lmrom__DOT__auto_in_rvalid = vlSelfRef._lmrom_auto_in_rvalid;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_1_arready 
        = vlSelfRef._lmrom_auto_in_arready;
    vlSelfRef.lmrom__DOT__auto_in_arready = vlSelfRef._lmrom_auto_in_arready;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_rvalid 
        = vlSelfRef._axi4ram_auto_in_rvalid;
    vlSelfRef.axi4ram__DOT__auto_in_rvalid = vlSelfRef._axi4ram_auto_in_rvalid;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_bvalid 
        = vlSelfRef._axi4ram_auto_in_bvalid;
    vlSelfRef.axi4ram__DOT__auto_in_bvalid = vlSelfRef._axi4ram_auto_in_bvalid;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_awready 
        = vlSelfRef._axi4frag_auto_in_awready;
    vlSelfRef.axi4frag__DOT__auto_in_awready = vlSelfRef._axi4frag_auto_in_awready;
    vlSelfRef._axi4xbar_auto_anon_in_awready = vlSelfRef._axi4frag_auto_in_awready;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_bresp 
        = vlSelfRef._axi4ram_auto_in_bresp;
    vlSelfRef.axi4ram__DOT__auto_in_bresp = vlSelfRef._axi4ram_auto_in_bresp;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_rresp 
        = vlSelfRef._axi4ram_auto_in_rresp;
    vlSelfRef.axi4ram__DOT__auto_in_rresp = vlSelfRef._axi4ram_auto_in_rresp;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_1_rdata 
        = vlSelfRef._lmrom_auto_in_rdata;
    vlSelfRef.lmrom__DOT__auto_in_rdata = vlSelfRef._lmrom_auto_in_rdata;
    vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_last 
        = vlSelfRef.axi4frag__DOT___in_wdeq_q_io_deq_bits_last;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_rid 
        = vlSelfRef._axi4ram_auto_in_rid;
    vlSelfRef.axi4ram__DOT__auto_in_rid = vlSelfRef._axi4ram_auto_in_rid;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_1_rid 
        = vlSelfRef._lmrom_auto_in_rid;
    vlSelfRef.lmrom__DOT__auto_in_rid = vlSelfRef._lmrom_auto_in_rid;
    vlSelfRef.cpu_reset_chain__DOT__io_q = vlSelfRef._cpu_reset_chain_io_q;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_1_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_1_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_1_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_2_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_2_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_2_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_3_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_3_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_3_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_4_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_4_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_4_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_5_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_5_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_5_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_6_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_6_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_6_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_7_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_7_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_7_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_8_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_8_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_8_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_9_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_9_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_9_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_10_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_10_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_10_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_11_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_11_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_11_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_12_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_12_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_12_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_13_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_13_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_13_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_14_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_14_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_14_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_15_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_15_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_15_io_enq_ready;
    vlSelfRef.axi4yank__DOT___GEN = ((((((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_15_io_enq_ready) 
                                         << 0xfU) | 
                                        ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_14_io_enq_ready) 
                                         << 0xeU)) 
                                       | (((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_13_io_enq_ready) 
                                           << 0xdU) 
                                          | ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_12_io_enq_ready) 
                                             << 0xcU))) 
                                      | ((((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_11_io_enq_ready) 
                                           << 0xbU) 
                                          | ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_10_io_enq_ready) 
                                             << 0xaU)) 
                                         | (((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_9_io_enq_ready) 
                                             << 9U) 
                                            | ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_8_io_enq_ready) 
                                               << 8U)))) 
                                     | (((((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_7_io_enq_ready) 
                                           << 7U) | 
                                          ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_6_io_enq_ready) 
                                           << 6U)) 
                                         | (((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_5_io_enq_ready) 
                                             << 5U) 
                                            | ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_4_io_enq_ready) 
                                               << 4U))) 
                                        | ((((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_3_io_enq_ready) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_2_io_enq_ready) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_1_io_enq_ready) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_io_enq_ready)))));
    vlSelfRef.axi4ram__DOT__mem_ext__DOT__R0_data = vlSelfRef.axi4ram__DOT___mem_ext_R0_data;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_bid 
        = vlSelfRef._axi4ram_auto_in_bid;
    vlSelfRef.axi4ram__DOT__auto_in_bid = vlSelfRef._axi4ram_auto_in_bid;
    vlSelfRef.axi4frag__DOT___in_awready_T = ((IData)(vlSelfRef.axi4frag__DOT__w_idle) 
                                              | (IData)(vlSelfRef.axi4frag__DOT__wbeats_latched));
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_16_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_16_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_16_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_17_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_17_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_17_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_18_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_18_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_18_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_19_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_19_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_19_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_20_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_20_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_20_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_21_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_21_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_21_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_22_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_22_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_22_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_23_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_23_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_23_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_24_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_24_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_24_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_25_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_25_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_25_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_26_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_26_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_26_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_27_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_27_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_27_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_28_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_28_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_28_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_29_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_29_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_29_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_30_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_30_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_30_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_31_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_31_io_enq_ready;
    vlSelfRef.axi4yank__DOT___GEN_3 = ((((((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_31_io_enq_ready) 
                                           << 0xfU) 
                                          | ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_30_io_enq_ready) 
                                             << 0xeU)) 
                                         | (((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_29_io_enq_ready) 
                                             << 0xdU) 
                                            | ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_28_io_enq_ready) 
                                               << 0xcU))) 
                                        | ((((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_27_io_enq_ready) 
                                             << 0xbU) 
                                            | ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_26_io_enq_ready) 
                                               << 0xaU)) 
                                           | (((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_25_io_enq_ready) 
                                               << 9U) 
                                              | ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_24_io_enq_ready) 
                                                 << 8U)))) 
                                       | (((((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_23_io_enq_ready) 
                                             << 7U) 
                                            | ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_22_io_enq_ready) 
                                               << 6U)) 
                                           | (((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_21_io_enq_ready) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_20_io_enq_ready) 
                                                 << 4U))) 
                                          | ((((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_19_io_enq_ready) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_18_io_enq_ready) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_17_io_enq_ready) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.axi4yank__DOT___Queue1_BundleMap_16_io_enq_ready)))));
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_31_io_deq_bits_real_last;
    vlSelfRef.axi42apb__DOT__auto_in_bid = vlSelfRef._axi42apb_auto_in_bid;
    vlSelfRef.axi4buf__DOT__auto_out_bid = vlSelfRef._axi42apb_auto_in_bid;
    vlSelfRef.axi42apb__DOT__auto_in_rid = vlSelfRef._axi42apb_auto_in_rid;
    vlSelfRef.axi4buf__DOT__auto_out_rid = vlSelfRef._axi42apb_auto_in_rid;
    vlSelfRef.axi4frag__DOT__deq_q__DOT__io_deq_bits_burst 
        = vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_burst;
    vlSelfRef._axi4yank_auto_out_arburst = vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_burst;
    vlSelfRef._axi4frag_auto_out_arburst = vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_burst;
    vlSelfRef._axi4xbar_1_auto_anon_out_0_arburst = vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_burst;
    vlSelfRef.axi4frag__DOT__deq_q__DOT__io_deq_bits_len 
        = vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_len;
    vlSelfRef.axi4frag__DOT__len = ((IData)(vlSelfRef.axi4frag__DOT__busy)
                                     ? (IData)(vlSelfRef.axi4frag__DOT__r_len)
                                     : (IData)(vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_len));
    vlSelfRef.axi4yank__DOT__auto_in_arid = vlSelfRef._axi4frag_auto_out_arid;
    vlSelfRef.axi4frag__DOT__auto_out_arid = vlSelfRef._axi4frag_auto_out_arid;
    vlSelfRef._axi4yank_auto_out_arid = vlSelfRef._axi4frag_auto_out_arid;
    vlSelfRef._axi4xbar_1_auto_anon_out_2_arid = vlSelfRef._axi4frag_auto_out_arid;
    vlSelfRef._axi4xbar_1_auto_anon_out_1_arid = vlSelfRef._axi4frag_auto_out_arid;
    vlSelfRef._axi4xbar_1_auto_anon_out_0_arid = vlSelfRef._axi4frag_auto_out_arid;
    vlSelfRef.axi4xbar_1__DOT__arSel = (0xffffU & ((IData)(1U) 
                                                   << (IData)(vlSelfRef._axi4frag_auto_out_arid)));
    vlSelfRef.axi4frag__DOT__deq_q__DOT__io_deq_bits_size 
        = vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_size;
    vlSelfRef.axi4frag__DOT___out_bits_addr_T_1 = (0x1ffU 
                                                   & ((IData)(3U) 
                                                      << (IData)(vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_size)));
    vlSelfRef._axi4yank_auto_out_arsize = vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_size;
    vlSelfRef._axi4frag_auto_out_arsize = vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_size;
    vlSelfRef._axi4xbar_1_auto_anon_out_0_arsize = vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_size;
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_deq_bits_burst 
        = vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_burst;
    vlSelfRef._axi4yank_auto_out_awburst = vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_burst;
    vlSelfRef._axi4frag_auto_out_awburst = vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_burst;
    vlSelfRef._axi4xbar_1_auto_anon_out_0_awburst = vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_burst;
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len 
        = vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_len;
    vlSelfRef.axi4frag__DOT__len_1 = ((IData)(vlSelfRef.axi4frag__DOT__busy_1)
                                       ? (IData)(vlSelfRef.axi4frag__DOT__r_len_1)
                                       : (IData)(vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_len));
    vlSelfRef.axi4yank__DOT__auto_in_awid = vlSelfRef._axi4frag_auto_out_awid;
    vlSelfRef.axi4frag__DOT__auto_out_awid = vlSelfRef._axi4frag_auto_out_awid;
    vlSelfRef._axi4yank_auto_out_awid = vlSelfRef._axi4frag_auto_out_awid;
    vlSelfRef._axi4xbar_1_auto_anon_out_2_awid = vlSelfRef._axi4frag_auto_out_awid;
    vlSelfRef._axi4xbar_1_auto_anon_out_0_awid = vlSelfRef._axi4frag_auto_out_awid;
    vlSelfRef.axi4xbar_1__DOT__awSel = (0xffffU & ((IData)(1U) 
                                                   << (IData)(vlSelfRef._axi4frag_auto_out_awid)));
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_deq_bits_size 
        = vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_size;
    vlSelfRef.axi4frag__DOT___out_bits_addr_T_7 = (0x1ffU 
                                                   & ((IData)(3U) 
                                                      << (IData)(vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_size)));
    vlSelfRef._axi4yank_auto_out_awsize = vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_size;
    vlSelfRef._axi4frag_auto_out_awsize = vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_size;
    vlSelfRef._axi4xbar_1_auto_anon_out_0_awsize = vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_size;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data;
    vlSelfRef.axi42apb__DOT__auto_in_awid = vlSelfRef._axi4buf_auto_out_awid;
    vlSelfRef.axi4buf__DOT__auto_out_awid = vlSelfRef._axi4buf_auto_out_awid;
    vlSelfRef.axi42apb__DOT__auto_in_awlen = vlSelfRef._axi4buf_auto_out_awlen;
    vlSelfRef.axi4buf__DOT__auto_out_awlen = vlSelfRef._axi4buf_auto_out_awlen;
    vlSelfRef.axi42apb__DOT__auto_in_awsize = vlSelfRef._axi4buf_auto_out_awsize;
    vlSelfRef.axi4buf__DOT__auto_out_awsize = vlSelfRef._axi4buf_auto_out_awsize;
    vlSelfRef.axi42apb__DOT__auto_in_awaddr = vlSelfRef._axi4buf_auto_out_awaddr;
    vlSelfRef.axi4buf__DOT__auto_out_awaddr = vlSelfRef._axi4buf_auto_out_awaddr;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__full 
        = ((IData)(vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data;
    vlSelfRef.axi42apb__DOT__auto_in_arid = vlSelfRef._axi4buf_auto_out_arid;
    vlSelfRef.axi4buf__DOT__auto_out_arid = vlSelfRef._axi4buf_auto_out_arid;
    vlSelfRef.axi42apb__DOT__auto_in_arlen = vlSelfRef._axi4buf_auto_out_arlen;
    vlSelfRef.axi4buf__DOT__auto_out_arlen = vlSelfRef._axi4buf_auto_out_arlen;
    vlSelfRef.axi42apb__DOT__auto_in_arsize = vlSelfRef._axi4buf_auto_out_arsize;
    vlSelfRef.axi4buf__DOT__auto_out_arsize = vlSelfRef._axi4buf_auto_out_arsize;
    vlSelfRef.axi42apb__DOT__auto_in_araddr = vlSelfRef._axi4buf_auto_out_araddr;
    vlSelfRef.axi4buf__DOT__auto_out_araddr = vlSelfRef._axi4buf_auto_out_araddr;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__full 
        = ((IData)(vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data;
    vlSelfRef.axi42apb__DOT__auto_in_wstrb = vlSelfRef._axi4buf_auto_out_wstrb;
    vlSelfRef.axi4buf__DOT__auto_out_wstrb = vlSelfRef._axi4buf_auto_out_wstrb;
    vlSelfRef.axi42apb__DOT__auto_in_wdata = vlSelfRef._axi4buf_auto_out_wdata;
    vlSelfRef.axi4buf__DOT__auto_out_wdata = vlSelfRef._axi4buf_auto_out_wdata;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__full 
        = ((IData)(vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_rresp 
        = vlSelfRef._axi4buf_auto_in_rresp;
    vlSelfRef.axi4buf__DOT__auto_in_rresp = vlSelfRef._axi4buf_auto_in_rresp;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_rdata 
        = vlSelfRef._axi4buf_auto_in_rdata;
    vlSelfRef.axi4buf__DOT__auto_in_rdata = vlSelfRef._axi4buf_auto_in_rdata;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_rlast 
        = vlSelfRef._axi4buf_auto_in_rlast;
    vlSelfRef.axi4buf__DOT__auto_in_rlast = vlSelfRef._axi4buf_auto_in_rlast;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_rid 
        = vlSelfRef._axi4buf_auto_in_rid;
    vlSelfRef.axi4buf__DOT__auto_in_rid = vlSelfRef._axi4buf_auto_in_rid;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__full 
        = ((IData)(vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_bresp 
        = vlSelfRef._axi4buf_auto_in_bresp;
    vlSelfRef.axi4buf__DOT__auto_in_bresp = vlSelfRef._axi4buf_auto_in_bresp;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_bid 
        = vlSelfRef._axi4buf_auto_in_bid;
    vlSelfRef.axi4buf__DOT__auto_in_bid = vlSelfRef._axi4buf_auto_in_bid;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__full 
        = ((IData)(vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    vlSelfRef.lpsram__DOT__mpsram__DOT__in_prdata = vlSelfRef.lpsram__DOT__auto_in_prdata;
    vlSelfRef.lgpio__DOT__mgpio__DOT__gpio_out = vlSelfRef.lgpio__DOT__gpio_bundle_out;
    vlSelfRef.lgpio__DOT__gpio_bundle_seg_0 = vlSelfRef.gpio_seg_0;
    vlSelfRef.lgpio__DOT__gpio_bundle_seg_1 = vlSelfRef.gpio_seg_1;
    vlSelfRef.lgpio__DOT__gpio_bundle_seg_2 = vlSelfRef.gpio_seg_2;
    vlSelfRef.lgpio__DOT__gpio_bundle_seg_3 = vlSelfRef.gpio_seg_3;
    vlSelfRef.lgpio__DOT__gpio_bundle_seg_4 = vlSelfRef.gpio_seg_4;
    vlSelfRef.lgpio__DOT__gpio_bundle_seg_5 = vlSelfRef.gpio_seg_5;
    vlSelfRef.lgpio__DOT__gpio_bundle_seg_6 = vlSelfRef.gpio_seg_6;
    vlSelfRef.lgpio__DOT__gpio_bundle_seg_7 = vlSelfRef.gpio_seg_7;
    vlSelfRef.lvga__DOT__mvga__DOT__vga_vsync = vlSelfRef.lvga__DOT__vga_bundle_vsync;
    vlSelfRef.lvga__DOT__mvga__DOT__vga_hsync = vlSelfRef.lvga__DOT__vga_bundle_hsync;
    vlSelfRef.lvga__DOT__mvga__DOT__vga_valid = vlSelfRef.lvga__DOT__vga_bundle_valid;
    if (vlSelfRef.vga_valid) {
        vlSelfRef.lvga__DOT__mvga__DOT__x_addr = (0x3ffU 
                                                  & ((IData)(vlSelfRef.lvga__DOT__mvga__DOT__hcount) 
                                                     - (IData)(0x90U)));
        vlSelfRef.lvga__DOT__mvga__DOT__y_addr = (0x3ffU 
                                                  & ((IData)(vlSelfRef.lvga__DOT__mvga__DOT__vcount) 
                                                     - (IData)(0x23U)));
    } else {
        vlSelfRef.lvga__DOT__mvga__DOT__x_addr = 0U;
        vlSelfRef.lvga__DOT__mvga__DOT__y_addr = 0U;
    }
    lvga__DOT__mvga__DOT____VdfgRegularize_hae95e661_1_0 
        = (0x7ffffU & (((IData)(0x280U) * (IData)(vlSelfRef.lvga__DOT__mvga__DOT__y_addr)) 
                       + (IData)(vlSelfRef.lvga__DOT__mvga__DOT__x_addr)));
    vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__io_enq_ready 
        = vlSelfRef.axi4frag__DOT__auto_in_wready;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_wready = vlSelfRef._axi4xbar_auto_anon_in_wready;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_wready 
        = vlSelfRef._axi4xbar_auto_anon_in_wready;
    vlSelfRef.axi4xbar_1__DOT___awIn_0_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__full)));
    vlSelfRef.axi4frag__DOT__deq_q__DOT__io_enq_ready 
        = vlSelfRef.axi4frag__DOT__auto_in_arready;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_arready = vlSelfRef._axi4xbar_auto_anon_in_arready;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_arready 
        = vlSelfRef._axi4xbar_auto_anon_in_arready;
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_enq_ready 
        = vlSelfRef.axi4frag__DOT__auto_in_awready;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_awready = vlSelfRef._axi4xbar_auto_anon_in_awready;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_awready 
        = vlSelfRef._axi4xbar_auto_anon_in_awready;
    vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__io_q 
        = vlSelfRef.cpu_reset_chain__DOT__io_q;
    vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__sync_2 
        = vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__sync_3;
    vlSelfRef._axi4ram_auto_in_rdata = (((((IData)(vlSelfRef.axi4ram__DOT__rdata_REG)
                                            ? ((IData)(vlSelfRef.axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                ? (
                                                   vlSelfRef.axi4ram__DOT__mem_ext__DOT__Memory
                                                   [vlSelfRef.axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                   >> 0x18U)
                                                : 0U)
                                            : (IData)(vlSelfRef.axi4ram__DOT__rdata_r3)) 
                                          << 0x18U) 
                                         | (0xff0000U 
                                            & (((IData)(vlSelfRef.axi4ram__DOT__rdata_REG)
                                                 ? 
                                                ((IData)(vlSelfRef.axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                  ? 
                                                 (vlSelfRef.axi4ram__DOT__mem_ext__DOT__Memory
                                                  [vlSelfRef.axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                  >> 0x10U)
                                                  : 0U)
                                                 : (IData)(vlSelfRef.axi4ram__DOT__rdata_r2)) 
                                               << 0x10U))) 
                                        | ((0xff00U 
                                            & (((IData)(vlSelfRef.axi4ram__DOT__rdata_REG)
                                                 ? 
                                                ((IData)(vlSelfRef.axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                  ? 
                                                 (vlSelfRef.axi4ram__DOT__mem_ext__DOT__Memory
                                                  [vlSelfRef.axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                  >> 8U)
                                                  : 0U)
                                                 : (IData)(vlSelfRef.axi4ram__DOT__rdata_r1)) 
                                               << 8U)) 
                                           | (0xffU 
                                              & ((IData)(vlSelfRef.axi4ram__DOT__rdata_REG)
                                                  ? 
                                                 ((IData)(vlSelfRef.axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                   ? 
                                                  vlSelfRef.axi4ram__DOT__mem_ext__DOT__Memory
                                                  [vlSelfRef.axi4ram__DOT__mem_ext__DOT___R0_addr_d0]
                                                   : 0U)
                                                  : (IData)(vlSelfRef.axi4ram__DOT__rdata_r0)))));
    vlSelfRef.axi4yank__DOT____VdfgRegularize_h60d1478f_2_0 
        = (1U & ((IData)(vlSelfRef.axi4yank__DOT___GEN) 
                 >> (IData)(vlSelfRef._axi4frag_auto_out_arid)));
    if (((vlSelfRef.lspi__DOT__mspi__DOT__in_paddr_r 
          == vlSelfRef._apbxbar_auto_anon_out_5_paddr) 
         & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__xip_done))) {
        vlSelfRef.lspi__DOT__mspi__DOT__xip = 0U;
    } else if ((vlSelfRef.lspi__DOT__mspi__DOT__in_paddr_r 
                != vlSelfRef._apbxbar_auto_anon_out_5_paddr)) {
        vlSelfRef.lspi__DOT__mspi__DOT__xip = 1U;
    }
    vlSelfRef.axi4yank__DOT____VdfgRegularize_h60d1478f_0_0 
        = (1U & ((IData)(vlSelfRef.axi4yank__DOT___GEN_3) 
                 >> (IData)(vlSelfRef._axi4frag_auto_out_awid)));
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__io_enq_bits_id 
        = vlSelfRef.axi4buf__DOT__auto_out_bid;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_id 
        = vlSelfRef.axi4buf__DOT__auto_out_rid;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_arburst 
        = vlSelfRef._axi4yank_auto_out_arburst;
    vlSelfRef.axi4yank__DOT__auto_out_arburst = vlSelfRef._axi4yank_auto_out_arburst;
    vlSelfRef.axi4yank__DOT__auto_in_arburst = vlSelfRef._axi4frag_auto_out_arburst;
    vlSelfRef.axi4frag__DOT__auto_out_arburst = vlSelfRef._axi4frag_auto_out_arburst;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_arburst 
        = vlSelfRef._axi4xbar_1_auto_anon_out_0_arburst;
    vlSelfRef.axi4buf__DOT__auto_in_arburst = vlSelfRef._axi4xbar_1_auto_anon_out_0_arburst;
    vlSelfRef._axi4frag_auto_out_arecho_real_last = 
        (1U & (~ (0U != (IData)(vlSelfRef.axi4frag__DOT__len))));
    vlSelfRef.axi4frag__DOT__deq_q__DOT__io_deq_bits_id 
        = vlSelfRef.axi4frag__DOT__auto_out_arid;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_arid = vlSelfRef._axi4yank_auto_out_arid;
    vlSelfRef.axi4yank__DOT__auto_out_arid = vlSelfRef._axi4yank_auto_out_arid;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_arid 
        = vlSelfRef._axi4xbar_1_auto_anon_out_2_arid;
    vlSelfRef.axi4ram__DOT__auto_in_arid = vlSelfRef._axi4xbar_1_auto_anon_out_2_arid;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_1_arid 
        = vlSelfRef._axi4xbar_1_auto_anon_out_1_arid;
    vlSelfRef.lmrom__DOT__auto_in_arid = vlSelfRef._axi4xbar_1_auto_anon_out_1_arid;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_arid 
        = vlSelfRef._axi4xbar_1_auto_anon_out_0_arid;
    vlSelfRef.axi4buf__DOT__auto_in_arid = vlSelfRef._axi4xbar_1_auto_anon_out_0_arid;
    vlSelfRef.axi4yank__DOT___arsel_T_1 = vlSelfRef.axi4xbar_1__DOT__arSel;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_arsize 
        = vlSelfRef._axi4yank_auto_out_arsize;
    vlSelfRef.axi4yank__DOT__auto_out_arsize = vlSelfRef._axi4yank_auto_out_arsize;
    vlSelfRef.axi4yank__DOT__auto_in_arsize = vlSelfRef._axi4frag_auto_out_arsize;
    vlSelfRef.axi4frag__DOT__auto_out_arsize = vlSelfRef._axi4frag_auto_out_arsize;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_arsize 
        = vlSelfRef._axi4xbar_1_auto_anon_out_0_arsize;
    vlSelfRef.axi4buf__DOT__auto_in_arsize = vlSelfRef._axi4xbar_1_auto_anon_out_0_arsize;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_awburst 
        = vlSelfRef._axi4yank_auto_out_awburst;
    vlSelfRef.axi4yank__DOT__auto_out_awburst = vlSelfRef._axi4yank_auto_out_awburst;
    vlSelfRef.axi4yank__DOT__auto_in_awburst = vlSelfRef._axi4frag_auto_out_awburst;
    vlSelfRef.axi4frag__DOT__auto_out_awburst = vlSelfRef._axi4frag_auto_out_awburst;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_awburst 
        = vlSelfRef._axi4xbar_1_auto_anon_out_0_awburst;
    vlSelfRef.axi4buf__DOT__auto_in_awburst = vlSelfRef._axi4xbar_1_auto_anon_out_0_awburst;
    vlSelfRef._axi4frag_auto_out_awecho_real_last = 
        (1U & (~ (0U != (IData)(vlSelfRef.axi4frag__DOT__len_1))));
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_deq_bits_id 
        = vlSelfRef.axi4frag__DOT__auto_out_awid;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_awid = vlSelfRef._axi4yank_auto_out_awid;
    vlSelfRef.axi4yank__DOT__auto_out_awid = vlSelfRef._axi4yank_auto_out_awid;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_awid 
        = vlSelfRef._axi4xbar_1_auto_anon_out_2_awid;
    vlSelfRef.axi4ram__DOT__auto_in_awid = vlSelfRef._axi4xbar_1_auto_anon_out_2_awid;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_awid 
        = vlSelfRef._axi4xbar_1_auto_anon_out_0_awid;
    vlSelfRef.axi4buf__DOT__auto_in_awid = vlSelfRef._axi4xbar_1_auto_anon_out_0_awid;
    vlSelfRef.axi4yank__DOT___awsel_T_1 = vlSelfRef.axi4xbar_1__DOT__awSel;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_awsize 
        = vlSelfRef._axi4yank_auto_out_awsize;
    vlSelfRef.axi4yank__DOT__auto_out_awsize = vlSelfRef._axi4yank_auto_out_awsize;
    vlSelfRef.axi4yank__DOT__auto_in_awsize = vlSelfRef._axi4frag_auto_out_awsize;
    vlSelfRef.axi4frag__DOT__auto_out_awsize = vlSelfRef._axi4frag_auto_out_awsize;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_awsize 
        = vlSelfRef._axi4xbar_1_auto_anon_out_0_awsize;
    vlSelfRef.axi4buf__DOT__auto_in_awsize = vlSelfRef._axi4xbar_1_auto_anon_out_0_awsize;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__io_deq_bits_id 
        = vlSelfRef.axi4buf__DOT__auto_out_awid;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__io_deq_bits_len 
        = vlSelfRef.axi4buf__DOT__auto_out_awlen;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__io_deq_bits_size 
        = vlSelfRef.axi4buf__DOT__auto_out_awsize;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__io_deq_bits_addr 
        = vlSelfRef.axi4buf__DOT__auto_out_awaddr;
    vlSelfRef._axi4buf_auto_in_awready = (1U & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__full)));
    vlSelfRef._axi4buf_auto_out_awvalid = (1U & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)));
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__io_deq_bits_id 
        = vlSelfRef.axi4buf__DOT__auto_out_arid;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__io_deq_bits_len 
        = vlSelfRef.axi4buf__DOT__auto_out_arlen;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__io_deq_bits_size 
        = vlSelfRef.axi4buf__DOT__auto_out_arsize;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__io_deq_bits_addr 
        = vlSelfRef.axi4buf__DOT__auto_out_araddr;
    vlSelfRef._axi4buf_auto_in_arready = (1U & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__full)));
    vlSelfRef._axi4buf_auto_out_arvalid = (1U & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)));
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb 
        = vlSelfRef.axi4buf__DOT__auto_out_wstrb;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data 
        = vlSelfRef.axi4buf__DOT__auto_out_wdata;
    vlSelfRef._axi4buf_auto_in_wready = (1U & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__full)));
    vlSelfRef._axi4buf_auto_out_wvalid = (1U & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)));
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_resp 
        = vlSelfRef.axi4buf__DOT__auto_in_rresp;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_data 
        = vlSelfRef.axi4buf__DOT__auto_in_rdata;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_last 
        = vlSelfRef.axi4buf__DOT__auto_in_rlast;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id 
        = vlSelfRef.axi4buf__DOT__auto_in_rid;
    vlSelfRef._axi4buf_auto_out_rready = (1U & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__full)));
    vlSelfRef._axi4buf_auto_in_rvalid = (1U & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)));
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_bits_resp 
        = vlSelfRef.axi4buf__DOT__auto_in_bresp;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_bits_id 
        = vlSelfRef.axi4buf__DOT__auto_in_bid;
    vlSelfRef._axi4buf_auto_out_bready = (1U & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__full)));
    vlSelfRef._axi4buf_auto_in_bvalid = (1U & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__dat_o 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__in_prdata;
    vlSelfRef.lgpio__DOT__mgpio__DOT__gpio_seg_0 = vlSelfRef.lgpio__DOT__gpio_bundle_seg_0;
    vlSelfRef.lgpio__DOT__mgpio__DOT__gpio_seg_1 = vlSelfRef.lgpio__DOT__gpio_bundle_seg_1;
    vlSelfRef.lgpio__DOT__mgpio__DOT__gpio_seg_2 = vlSelfRef.lgpio__DOT__gpio_bundle_seg_2;
    vlSelfRef.lgpio__DOT__mgpio__DOT__gpio_seg_3 = vlSelfRef.lgpio__DOT__gpio_bundle_seg_3;
    vlSelfRef.lgpio__DOT__mgpio__DOT__gpio_seg_4 = vlSelfRef.lgpio__DOT__gpio_bundle_seg_4;
    vlSelfRef.lgpio__DOT__mgpio__DOT__gpio_seg_5 = vlSelfRef.lgpio__DOT__gpio_bundle_seg_5;
    vlSelfRef.lgpio__DOT__mgpio__DOT__gpio_seg_6 = vlSelfRef.lgpio__DOT__gpio_bundle_seg_6;
    vlSelfRef.lgpio__DOT__mgpio__DOT__gpio_seg_7 = vlSelfRef.lgpio__DOT__gpio_bundle_seg_7;
    lvga__DOT__mvga__DOT____VdfgRegularize_hae95e661_1_1 
        = ((0x4afffU >= lvga__DOT__mvga__DOT____VdfgRegularize_hae95e661_1_0)
            ? vlSelfRef.lvga__DOT__mvga__DOT__mem[lvga__DOT__mvga__DOT____VdfgRegularize_hae95e661_1_0]
            : 0U);
    if (vlSelfRef.vga_valid) {
        vlSelfRef.vga_r = (0xffU & (lvga__DOT__mvga__DOT____VdfgRegularize_hae95e661_1_1 
                                    >> 0x10U));
        vlSelfRef.vga_g = (0xffU & (lvga__DOT__mvga__DOT____VdfgRegularize_hae95e661_1_1 
                                    >> 8U));
        vlSelfRef.vga_b = (0xffU & lvga__DOT__mvga__DOT____VdfgRegularize_hae95e661_1_1);
    } else {
        vlSelfRef.vga_r = 0U;
        vlSelfRef.vga_g = 0U;
        vlSelfRef.vga_b = 0U;
    }
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__io_enq_ready 
        = vlSelfRef.axi4xbar_1__DOT___awIn_0_io_enq_ready;
    vlSelfRef.axi4xbar_1__DOT___anonIn_awready_T = 
        ((IData)(vlSelfRef.axi4xbar_1__DOT___awIn_0_io_enq_ready) 
         | (IData)(vlSelfRef.axi4xbar_1__DOT__latched));
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_rdata 
        = vlSelfRef._axi4ram_auto_in_rdata;
    vlSelfRef.axi4ram__DOT__auto_in_rdata = vlSelfRef._axi4ram_auto_in_rdata;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__io_enq_bits_burst 
        = vlSelfRef.axi4buf__DOT__auto_in_arburst;
    vlSelfRef.axi4frag__DOT__auto_out_arecho_real_last 
        = vlSelfRef._axi4frag_auto_out_arecho_real_last;
    vlSelfRef.axi4yank__DOT__auto_in_arecho_real_last 
        = vlSelfRef._axi4frag_auto_out_arecho_real_last;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__io_enq_bits_id 
        = vlSelfRef.axi4buf__DOT__auto_in_arid;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__io_enq_bits_size 
        = vlSelfRef.axi4buf__DOT__auto_in_arsize;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__io_enq_bits_burst 
        = vlSelfRef.axi4buf__DOT__auto_in_awburst;
    vlSelfRef.axi4frag__DOT__auto_out_awecho_real_last 
        = vlSelfRef._axi4frag_auto_out_awecho_real_last;
    vlSelfRef.axi4yank__DOT__auto_in_awecho_real_last 
        = vlSelfRef._axi4frag_auto_out_awecho_real_last;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__io_enq_bits_id 
        = vlSelfRef.axi4buf__DOT__auto_in_awid;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__io_enq_bits_size 
        = vlSelfRef.axi4buf__DOT__auto_in_awsize;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_awready 
        = vlSelfRef._axi4buf_auto_in_awready;
    vlSelfRef.axi4buf__DOT__auto_in_awready = vlSelfRef._axi4buf_auto_in_awready;
    vlSelfRef.axi42apb__DOT__auto_in_awvalid = vlSelfRef._axi4buf_auto_out_awvalid;
    vlSelfRef.axi4buf__DOT__auto_out_awvalid = vlSelfRef._axi4buf_auto_out_awvalid;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_arready 
        = vlSelfRef._axi4buf_auto_in_arready;
    vlSelfRef.axi4buf__DOT__auto_in_arready = vlSelfRef._axi4buf_auto_in_arready;
    vlSelfRef.axi42apb__DOT__auto_in_arvalid = vlSelfRef._axi4buf_auto_out_arvalid;
    vlSelfRef.axi4buf__DOT__auto_out_arvalid = vlSelfRef._axi4buf_auto_out_arvalid;
    vlSelfRef.axi42apb__DOT__accept_read = ((IData)(vlSelfRef._axi4buf_auto_out_arvalid) 
                                            & (IData)(vlSelfRef.axi42apb__DOT___is_write_T));
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_wready 
        = vlSelfRef._axi4buf_auto_in_wready;
    vlSelfRef.axi4buf__DOT__auto_in_wready = vlSelfRef._axi4buf_auto_in_wready;
    vlSelfRef.axi42apb__DOT__auto_in_wvalid = vlSelfRef._axi4buf_auto_out_wvalid;
    vlSelfRef.axi4buf__DOT__auto_out_wvalid = vlSelfRef._axi4buf_auto_out_wvalid;
    vlSelfRef.axi42apb__DOT__auto_in_rready = vlSelfRef._axi4buf_auto_out_rready;
    vlSelfRef.axi4buf__DOT__auto_out_rready = vlSelfRef._axi4buf_auto_out_rready;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_rvalid 
        = vlSelfRef._axi4buf_auto_in_rvalid;
    vlSelfRef.axi4buf__DOT__auto_in_rvalid = vlSelfRef._axi4buf_auto_in_rvalid;
    vlSelfRef.axi4xbar_1__DOT__anyValid = ((IData)(vlSelfRef._axi4buf_auto_in_rvalid) 
                                           | ((IData)(vlSelfRef.axi4ram__DOT__r_full) 
                                              | (IData)(vlSelfRef.lmrom__DOT__state)));
    vlSelfRef.axi4xbar_1__DOT__readys_valid = (((IData)(vlSelfRef.axi4ram__DOT__r_full) 
                                                << 2U) 
                                               | (((IData)(vlSelfRef.lmrom__DOT__state) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef._axi4buf_auto_in_rvalid)));
    vlSelfRef.axi42apb__DOT__auto_in_bready = vlSelfRef._axi4buf_auto_out_bready;
    vlSelfRef.axi4buf__DOT__auto_out_bready = vlSelfRef._axi4buf_auto_out_bready;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_bvalid 
        = vlSelfRef._axi4buf_auto_in_bvalid;
    vlSelfRef.axi4buf__DOT__auto_in_bvalid = vlSelfRef._axi4buf_auto_in_bvalid;
    vlSelfRef.axi4xbar_1__DOT__anyValid_1 = ((IData)(vlSelfRef._axi4buf_auto_in_bvalid) 
                                             | (IData)(vlSelfRef.axi4ram__DOT__w_full));
    vlSelfRef.axi4xbar_1__DOT__readys_valid_1 = (((IData)(vlSelfRef.axi4ram__DOT__w_full) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef._axi4buf_auto_in_bvalid));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__line 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__dat_o;
    vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__sync_3 
        = vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__sync_4;
    vlSelfRef.lspi__DOT__mspi__DOT__in_paddr_r = vlSelfRef._apbxbar_auto_anon_out_5_paddr;
    vlSelfRef.lspi__DOT__mspi__DOT__xip_done = ((6U 
                                                 == (IData)(vlSelfRef.lspi__DOT__mspi__DOT__state)) 
                                                & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__flash_pready));
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__io_enq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__io_enq_ready 
        = vlSelfRef.axi4buf__DOT__auto_in_awready;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__io_deq_valid 
        = vlSelfRef.axi4buf__DOT__auto_out_awvalid;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__io_enq_ready 
        = vlSelfRef.axi4buf__DOT__auto_in_arready;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__io_deq_valid 
        = vlSelfRef.axi4buf__DOT__auto_out_arvalid;
    vlSelfRef._axi42apb_auto_in_arready = vlSelfRef.axi42apb__DOT__accept_read;
    vlSelfRef.axi42apb__DOT__accept_write = ((~ (IData)(vlSelfRef.axi42apb__DOT__accept_read)) 
                                             & ((IData)(vlSelfRef.axi42apb__DOT___is_write_T) 
                                                & ((IData)(vlSelfRef._axi4buf_auto_out_awvalid) 
                                                   & (IData)(vlSelfRef._axi4buf_auto_out_wvalid))));
    vlSelfRef._axi42apb_auto_out_pwrite = ((IData)(vlSelfRef.axi42apb__DOT___is_write_T)
                                            ? (IData)(vlSelfRef.axi42apb__DOT__accept_write)
                                            : (IData)(vlSelfRef.axi42apb__DOT__is_write_r));
    vlSelfRef.__VdfgRegularize_hc2da4b9d_1_65 = ((IData)(vlSelfRef.axi42apb__DOT__accept_write)
                                                  ? (IData)(vlSelfRef._axi4buf_auto_out_wstrb)
                                                  : (IData)(vlSelfRef.axi42apb__DOT__wstrb_reg_r));
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__io_enq_ready 
        = vlSelfRef.axi4buf__DOT__auto_in_wready;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__io_deq_valid 
        = vlSelfRef.axi4buf__DOT__auto_out_wvalid;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__io_enq_ready 
        = vlSelfRef.axi4buf__DOT__auto_out_rready;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__io_deq_valid 
        = vlSelfRef.axi4buf__DOT__auto_in_rvalid;
    vlSelfRef.axi4xbar_1__DOT___readys_filter_T_1 = 
        ((~ (IData)(vlSelfRef.axi4xbar_1__DOT__readys_mask)) 
         & (IData)(vlSelfRef.axi4xbar_1__DOT__readys_valid));
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__io_enq_ready 
        = vlSelfRef.axi4buf__DOT__auto_out_bready;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_valid 
        = vlSelfRef.axi4buf__DOT__auto_in_bvalid;
    vlSelfRef.axi4xbar_1__DOT___readys_filter_T_3 = 
        ((~ (IData)(vlSelfRef.axi4xbar_1__DOT__readys_mask_1)) 
         & (IData)(vlSelfRef.axi4xbar_1__DOT__readys_valid_1));
    vlSelfRef.lvga__DOT__vga_bundle_r = vlSelfRef.vga_r;
    vlSelfRef.lvga__DOT__vga_bundle_g = vlSelfRef.vga_g;
    vlSelfRef.lvga__DOT__vga_bundle_b = vlSelfRef.vga_b;
    vlSelfRef.lspi__DOT__mspi__DOT__state = __Vdly__lspi__DOT__mspi__DOT__state;
    vlSelfRef.axi42apb__DOT__auto_in_arready = vlSelfRef._axi42apb_auto_in_arready;
    vlSelfRef.axi4buf__DOT__auto_out_arready = vlSelfRef._axi42apb_auto_in_arready;
    vlSelfRef._axi42apb_auto_in_awready = vlSelfRef.axi42apb__DOT__accept_write;
    vlSelfRef._axi42apb_auto_in_wready = vlSelfRef.axi42apb__DOT__accept_write;
    vlSelfRef.axi4xbar_1__DOT__in_0_rvalid = ((IData)(vlSelfRef.axi4xbar_1__DOT__idle_3)
                                               ? (IData)(vlSelfRef.axi4xbar_1__DOT__anyValid)
                                               : (((IData)(vlSelfRef._axi4buf_auto_in_rvalid) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT__state_3_0)) 
                                                  | (((IData)(vlSelfRef.axi4xbar_1__DOT__state_3_1) 
                                                      & (IData)(vlSelfRef.lmrom__DOT__state)) 
                                                     | ((IData)(vlSelfRef.axi4ram__DOT__r_full) 
                                                        & (IData)(vlSelfRef.axi4xbar_1__DOT__state_3_2)))));
    vlSelfRef._axi4frag_auto_in_rvalid = vlSelfRef.axi4xbar_1__DOT__in_0_rvalid;
    vlSelfRef._axi4xbar_1_auto_anon_in_rvalid = vlSelfRef.axi4xbar_1__DOT__in_0_rvalid;
    vlSelfRef._axi4yank_auto_in_rvalid = vlSelfRef.axi4xbar_1__DOT__in_0_rvalid;
    vlSelfRef._axi4xbar_auto_anon_in_rvalid = vlSelfRef.axi4xbar_1__DOT__in_0_rvalid;
    vlSelfRef.axi4xbar_1__DOT___GEN_1 = (((0xcU & ((IData)(vlSelfRef.axi4xbar_1__DOT___readys_filter_T_1) 
                                                   << 2U)) 
                                          | (((IData)(vlSelfRef.axi4ram__DOT__r_full) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.lmrom__DOT__state))) 
                                         | (((IData)(vlSelfRef.axi4xbar_1__DOT___readys_filter_T_1) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.axi4ram__DOT__r_full)));
    vlSelfRef.axi4xbar_1__DOT__in_0_bvalid = ((IData)(vlSelfRef.axi4xbar_1__DOT__idle_4)
                                               ? (IData)(vlSelfRef.axi4xbar_1__DOT__anyValid_1)
                                               : (((IData)(vlSelfRef._axi4buf_auto_in_bvalid) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT__state_4_0)) 
                                                  | ((IData)(vlSelfRef.axi4ram__DOT__w_full) 
                                                     & (IData)(vlSelfRef.axi4xbar_1__DOT__state_4_2))));
    vlSelfRef._axi4xbar_1_auto_anon_in_bvalid = vlSelfRef.axi4xbar_1__DOT__in_0_bvalid;
    vlSelfRef._axi4yank_auto_in_bvalid = vlSelfRef.axi4xbar_1__DOT__in_0_bvalid;
    vlSelfRef.axi4xbar_1__DOT___GEN_2 = (((0xcU & ((IData)(vlSelfRef.axi4xbar_1__DOT___readys_filter_T_3) 
                                                   << 2U)) 
                                          | ((IData)(vlSelfRef.axi4ram__DOT__w_full) 
                                             << 1U)) 
                                         | (((IData)(vlSelfRef.axi4xbar_1__DOT___readys_filter_T_3) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.axi4ram__DOT__w_full)));
    vlSelfRef.lvga__DOT__mvga__DOT__vga_r = vlSelfRef.lvga__DOT__vga_bundle_r;
    vlSelfRef.lvga__DOT__mvga__DOT__vga_g = vlSelfRef.lvga__DOT__vga_bundle_g;
    vlSelfRef.lvga__DOT__mvga__DOT__vga_b = vlSelfRef.lvga__DOT__vga_bundle_b;
    vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__sync_4 
        = vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__sync_5;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__io_deq_ready 
        = vlSelfRef.axi4buf__DOT__auto_out_arready;
    vlSelfRef.axi42apb__DOT__auto_in_awready = vlSelfRef._axi42apb_auto_in_awready;
    vlSelfRef.axi4buf__DOT__auto_out_awready = vlSelfRef._axi42apb_auto_in_awready;
    vlSelfRef.axi42apb__DOT__auto_in_wready = vlSelfRef._axi42apb_auto_in_wready;
    vlSelfRef.axi4buf__DOT__auto_out_wready = vlSelfRef._axi42apb_auto_in_wready;
    if (vlSelfRef._axi42apb_auto_out_pwrite) {
        vlSelfRef.apbdelay_delayer__DOT__in_pwrite = 1U;
        vlSelfRef.axi42apb__DOT__auto_out_pwrite = 1U;
        vlSelfRef.axi42apb__DOT__is_write = 1U;
        vlSelfRef._apbdelay_delayer_out_pwrite = 1U;
        vlSelfRef._apbxbar_auto_anon_out_6_pwrite = 1U;
        vlSelfRef._apbxbar_auto_anon_out_5_pwrite = 1U;
        vlSelfRef._apbxbar_auto_anon_out_4_pwrite = 1U;
        vlSelfRef._apbxbar_auto_anon_out_3_pwrite = 1U;
        vlSelfRef._apbxbar_auto_anon_out_1_pwrite = 1U;
        vlSelfRef._apbxbar_auto_anon_out_0_pwrite = 1U;
        vlSelfRef._apbxbar_auto_anon_out_2_pwrite = 1U;
        vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_4 
            = (1U & ((IData)(vlSelfRef.__VdfgRegularize_hc2da4b9d_1_65) 
                     >> 2U));
        vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_1 
            = (1U & ((IData)(vlSelfRef.__VdfgRegularize_hc2da4b9d_1_65) 
                     >> 1U));
        vlSelfRef._axi42apb_auto_out_pstrb = vlSelfRef.__VdfgRegularize_hc2da4b9d_1_65;
    } else {
        vlSelfRef.apbdelay_delayer__DOT__in_pwrite = 0U;
        vlSelfRef.axi42apb__DOT__auto_out_pwrite = 0U;
        vlSelfRef.axi42apb__DOT__is_write = 0U;
        vlSelfRef._apbdelay_delayer_out_pwrite = 0U;
        vlSelfRef._apbxbar_auto_anon_out_6_pwrite = 0U;
        vlSelfRef._apbxbar_auto_anon_out_5_pwrite = 0U;
        vlSelfRef._apbxbar_auto_anon_out_4_pwrite = 0U;
        vlSelfRef._apbxbar_auto_anon_out_3_pwrite = 0U;
        vlSelfRef._apbxbar_auto_anon_out_1_pwrite = 0U;
        vlSelfRef._apbxbar_auto_anon_out_0_pwrite = 0U;
        vlSelfRef._apbxbar_auto_anon_out_2_pwrite = 0U;
        vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_4 = 0U;
        vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_1 = 0U;
        vlSelfRef._axi42apb_auto_out_pstrb = 0U;
    }
    vlSelfRef.axi4xbar__DOT__auto_anon_out_rvalid = vlSelfRef._axi4frag_auto_in_rvalid;
    vlSelfRef.axi4frag__DOT__auto_in_rvalid = vlSelfRef._axi4frag_auto_in_rvalid;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_rvalid 
        = vlSelfRef._axi4xbar_1_auto_anon_in_rvalid;
    vlSelfRef.axi4yank__DOT__auto_out_rvalid = vlSelfRef._axi4xbar_1_auto_anon_in_rvalid;
    vlSelfRef.axi4yank__DOT__auto_in_rvalid = vlSelfRef._axi4yank_auto_in_rvalid;
    vlSelfRef.axi4frag__DOT__auto_out_rvalid = vlSelfRef._axi4yank_auto_in_rvalid;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_rvalid = vlSelfRef._axi4xbar_auto_anon_in_rvalid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_rvalid 
        = vlSelfRef._axi4xbar_auto_anon_in_rvalid;
    vlSelfRef.axi4xbar_1__DOT__readys_unready = (((0x10U 
                                                   & ((IData)(vlSelfRef.axi4xbar_1__DOT___readys_filter_T_1) 
                                                      << 2U)) 
                                                  | ((8U 
                                                      & (IData)(vlSelfRef.axi4xbar_1__DOT___GEN_1)) 
                                                     | (7U 
                                                        & ((IData)(vlSelfRef.axi4xbar_1__DOT___GEN_1) 
                                                           | ((4U 
                                                               & (IData)(vlSelfRef.axi4xbar_1__DOT___readys_filter_T_1)) 
                                                              | (3U 
                                                                 & ((IData)(vlSelfRef.axi4xbar_1__DOT___GEN_1) 
                                                                    >> 2U))))))) 
                                                 | ((IData)(vlSelfRef.axi4xbar_1__DOT__readys_mask) 
                                                    << 3U));
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_bvalid 
        = vlSelfRef._axi4xbar_1_auto_anon_in_bvalid;
    vlSelfRef.axi4yank__DOT__auto_out_bvalid = vlSelfRef._axi4xbar_1_auto_anon_in_bvalid;
    vlSelfRef.axi4yank__DOT__auto_in_bvalid = vlSelfRef._axi4yank_auto_in_bvalid;
    vlSelfRef.axi4frag__DOT__auto_out_bvalid = vlSelfRef._axi4yank_auto_in_bvalid;
    vlSelfRef.axi4xbar_1__DOT__readys_unready_1 = (
                                                   ((0x10U 
                                                     & ((IData)(vlSelfRef.axi4xbar_1__DOT___readys_filter_T_3) 
                                                        << 2U)) 
                                                    | ((8U 
                                                        & (IData)(vlSelfRef.axi4xbar_1__DOT___GEN_2)) 
                                                       | (7U 
                                                          & ((IData)(vlSelfRef.axi4xbar_1__DOT___GEN_2) 
                                                             | ((4U 
                                                                 & (IData)(vlSelfRef.axi4xbar_1__DOT___readys_filter_T_3)) 
                                                                | (3U 
                                                                   & ((IData)(vlSelfRef.axi4xbar_1__DOT___GEN_2) 
                                                                      >> 2U))))))) 
                                                   | ((IData)(vlSelfRef.axi4xbar_1__DOT__readys_mask_1) 
                                                      << 3U));
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__io_deq_ready 
        = vlSelfRef.axi4buf__DOT__auto_out_awready;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__io_deq_ready 
        = vlSelfRef.axi4buf__DOT__auto_out_wready;
    vlSelfRef.apbxbar__DOT__auto_anon_in_pwrite = vlSelfRef._apbdelay_delayer_out_pwrite;
    vlSelfRef.apbdelay_delayer__DOT__out_pwrite = vlSelfRef._apbdelay_delayer_out_pwrite;
    vlSelfRef.apbxbar__DOT__auto_anon_out_6_pwrite 
        = vlSelfRef._apbxbar_auto_anon_out_6_pwrite;
    vlSelfRef.lsdram_apb__DOT__auto_in_pwrite = vlSelfRef._apbxbar_auto_anon_out_6_pwrite;
    vlSelfRef.apbxbar__DOT__auto_anon_out_5_pwrite 
        = vlSelfRef._apbxbar_auto_anon_out_5_pwrite;
    vlSelfRef.lvga__DOT__auto_in_pwrite = vlSelfRef._apbxbar_auto_anon_out_5_pwrite;
    vlSelfRef.apbxbar__DOT__auto_anon_out_4_pwrite 
        = vlSelfRef._apbxbar_auto_anon_out_4_pwrite;
    vlSelfRef.lkeyboard__DOT__auto_in_pwrite = vlSelfRef._apbxbar_auto_anon_out_4_pwrite;
    vlSelfRef.apbxbar__DOT__auto_anon_out_3_pwrite 
        = vlSelfRef._apbxbar_auto_anon_out_3_pwrite;
    vlSelfRef.lgpio__DOT__auto_in_pwrite = vlSelfRef._apbxbar_auto_anon_out_3_pwrite;
    vlSelfRef.apbxbar__DOT__auto_anon_out_1_pwrite 
        = vlSelfRef._apbxbar_auto_anon_out_1_pwrite;
    vlSelfRef.luart__DOT__auto_in_pwrite = vlSelfRef._apbxbar_auto_anon_out_1_pwrite;
    vlSelfRef.apbxbar__DOT__auto_anon_out_0_pwrite 
        = vlSelfRef._apbxbar_auto_anon_out_0_pwrite;
    vlSelfRef.lspi__DOT__auto_in_pwrite = vlSelfRef._apbxbar_auto_anon_out_0_pwrite;
    vlSelfRef.apbxbar__DOT__auto_anon_out_2_pwrite 
        = vlSelfRef._apbxbar_auto_anon_out_2_pwrite;
    vlSelfRef.lpsram__DOT__auto_in_pwrite = vlSelfRef._apbxbar_auto_anon_out_2_pwrite;
    vlSelfRef.apbdelay_delayer__DOT__in_pstrb = vlSelfRef._axi42apb_auto_out_pstrb;
    vlSelfRef.axi42apb__DOT__auto_out_pstrb = vlSelfRef._axi42apb_auto_out_pstrb;
    vlSelfRef._apbdelay_delayer_out_pstrb = vlSelfRef._axi42apb_auto_out_pstrb;
    vlSelfRef._apbxbar_auto_anon_out_6_pstrb = vlSelfRef._axi42apb_auto_out_pstrb;
    vlSelfRef._apbxbar_auto_anon_out_5_pstrb = vlSelfRef._axi42apb_auto_out_pstrb;
    vlSelfRef._apbxbar_auto_anon_out_4_pstrb = vlSelfRef._axi42apb_auto_out_pstrb;
    vlSelfRef._apbxbar_auto_anon_out_3_pstrb = vlSelfRef._axi42apb_auto_out_pstrb;
    vlSelfRef._apbxbar_auto_anon_out_1_pstrb = vlSelfRef._axi42apb_auto_out_pstrb;
    vlSelfRef._apbxbar_auto_anon_out_0_pstrb = vlSelfRef._axi42apb_auto_out_pstrb;
    vlSelfRef._apbxbar_auto_anon_out_2_pstrb = vlSelfRef._axi42apb_auto_out_pstrb;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__size 
        = ((1U == (IData)(vlSelfRef._axi42apb_auto_out_pstrb))
            ? 1U : ((2U == (IData)(vlSelfRef._axi42apb_auto_out_pstrb))
                     ? 1U : ((4U == (IData)(vlSelfRef._axi42apb_auto_out_pstrb))
                              ? 1U : ((8U == (IData)(vlSelfRef._axi42apb_auto_out_pstrb))
                                       ? 1U : ((3U 
                                                == (IData)(vlSelfRef._axi42apb_auto_out_pstrb))
                                                ? 2U
                                                : (
                                                   (0xcU 
                                                    == (IData)(vlSelfRef._axi42apb_auto_out_pstrb))
                                                    ? 2U
                                                    : 4U))))));
    vlSelfRef.axi4xbar_1__DOT__readys_readys = (7U 
                                                & (~ 
                                                   (((IData)(vlSelfRef.axi4xbar_1__DOT__readys_unready) 
                                                     >> 3U) 
                                                    & (IData)(vlSelfRef.axi4xbar_1__DOT__readys_unready))));
    vlSelfRef.axi4xbar_1__DOT__readys_readys_1 = (7U 
                                                  & (~ 
                                                     (((IData)(vlSelfRef.axi4xbar_1__DOT__readys_unready_1) 
                                                       >> 3U) 
                                                      & (IData)(vlSelfRef.axi4xbar_1__DOT__readys_unready_1))));
    vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__sync_5 
        = vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__sync_6;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__in_pwrite 
        = vlSelfRef.lsdram_apb__DOT__auto_in_pwrite;
    vlSelfRef.lvga__DOT__mvga__DOT__in_pwrite = vlSelfRef.lvga__DOT__auto_in_pwrite;
    vlSelfRef.lkeyboard__DOT__mps2__DOT__in_pwrite 
        = vlSelfRef.lkeyboard__DOT__auto_in_pwrite;
    vlSelfRef.lgpio__DOT__mgpio__DOT__in_pwrite = vlSelfRef.lgpio__DOT__auto_in_pwrite;
    vlSelfRef.luart__DOT__muart__DOT__in_pwrite = vlSelfRef.luart__DOT__auto_in_pwrite;
    vlSelfRef.lspi__DOT__mspi__DOT__in_pwrite = vlSelfRef.lspi__DOT__auto_in_pwrite;
    vlSelfRef.lpsram__DOT__mpsram__DOT__in_pwrite = vlSelfRef.lpsram__DOT__auto_in_pwrite;
    vlSelfRef.apbxbar__DOT__auto_anon_in_pstrb = vlSelfRef._apbdelay_delayer_out_pstrb;
    vlSelfRef.apbdelay_delayer__DOT__out_pstrb = vlSelfRef._apbdelay_delayer_out_pstrb;
    vlSelfRef.apbxbar__DOT__auto_anon_out_6_pstrb = vlSelfRef._apbxbar_auto_anon_out_6_pstrb;
    vlSelfRef.lsdram_apb__DOT__auto_in_pstrb = vlSelfRef._apbxbar_auto_anon_out_6_pstrb;
    vlSelfRef.apbxbar__DOT__auto_anon_out_5_pstrb = vlSelfRef._apbxbar_auto_anon_out_5_pstrb;
    vlSelfRef.lvga__DOT__auto_in_pstrb = vlSelfRef._apbxbar_auto_anon_out_5_pstrb;
    vlSelfRef.apbxbar__DOT__auto_anon_out_4_pstrb = vlSelfRef._apbxbar_auto_anon_out_4_pstrb;
    vlSelfRef.lkeyboard__DOT__auto_in_pstrb = vlSelfRef._apbxbar_auto_anon_out_4_pstrb;
    vlSelfRef.apbxbar__DOT__auto_anon_out_3_pstrb = vlSelfRef._apbxbar_auto_anon_out_3_pstrb;
    vlSelfRef.lgpio__DOT__auto_in_pstrb = vlSelfRef._apbxbar_auto_anon_out_3_pstrb;
    vlSelfRef.apbxbar__DOT__auto_anon_out_1_pstrb = vlSelfRef._apbxbar_auto_anon_out_1_pstrb;
    vlSelfRef.luart__DOT__auto_in_pstrb = vlSelfRef._apbxbar_auto_anon_out_1_pstrb;
    vlSelfRef.apbxbar__DOT__auto_anon_out_0_pstrb = vlSelfRef._apbxbar_auto_anon_out_0_pstrb;
    vlSelfRef.lspi__DOT__auto_in_pstrb = vlSelfRef._apbxbar_auto_anon_out_0_pstrb;
    vlSelfRef.apbxbar__DOT__auto_anon_out_2_pstrb = vlSelfRef._apbxbar_auto_anon_out_2_pstrb;
    vlSelfRef.lpsram__DOT__auto_in_pstrb = vlSelfRef._apbxbar_auto_anon_out_2_pstrb;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__size 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__size;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT 
        = (0xffU & ((IData)(0xdU) + VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U)));
    vlSelfRef.axi4xbar_1__DOT__winner_3_1 = (((IData)(vlSelfRef.axi4xbar_1__DOT__readys_readys) 
                                              >> 1U) 
                                             & (IData)(vlSelfRef.lmrom__DOT__state));
    vlSelfRef.axi4xbar_1__DOT__prefixOR_1 = ((IData)(vlSelfRef._axi4buf_auto_in_rvalid) 
                                             & (IData)(vlSelfRef.axi4xbar_1__DOT__readys_readys));
    vlSelfRef.axi4xbar_1__DOT__winner_3_2 = (((IData)(vlSelfRef.axi4xbar_1__DOT__readys_readys) 
                                              >> 2U) 
                                             & (IData)(vlSelfRef.axi4ram__DOT__r_full));
    if (vlSelfRef.axi4xbar_1__DOT__idle_3) {
        vlSelfRef.axi4xbar_1__DOT__muxState_3_1 = vlSelfRef.axi4xbar_1__DOT__winner_3_1;
        vlSelfRef.axi4xbar_1__DOT__muxState_3_0 = vlSelfRef.axi4xbar_1__DOT__prefixOR_1;
        vlSelfRef.axi4xbar_1__DOT__muxState_3_2 = vlSelfRef.axi4xbar_1__DOT__winner_3_2;
    } else {
        vlSelfRef.axi4xbar_1__DOT__muxState_3_1 = vlSelfRef.axi4xbar_1__DOT__state_3_1;
        vlSelfRef.axi4xbar_1__DOT__muxState_3_0 = vlSelfRef.axi4xbar_1__DOT__state_3_0;
        vlSelfRef.axi4xbar_1__DOT__muxState_3_2 = vlSelfRef.axi4xbar_1__DOT__state_3_2;
    }
    vlSelfRef.axi4xbar_1__DOT__winner_4_0 = ((IData)(vlSelfRef._axi4buf_auto_in_bvalid) 
                                             & (IData)(vlSelfRef.axi4xbar_1__DOT__readys_readys_1));
    vlSelfRef.axi4xbar_1__DOT__winner_4_2 = (((IData)(vlSelfRef.axi4xbar_1__DOT__readys_readys_1) 
                                              >> 2U) 
                                             & (IData)(vlSelfRef.axi4ram__DOT__w_full));
    if (vlSelfRef.axi4xbar_1__DOT__idle_4) {
        vlSelfRef.axi4xbar_1__DOT__muxState_4_0 = vlSelfRef.axi4xbar_1__DOT__winner_4_0;
        vlSelfRef.axi4xbar_1__DOT__muxState_4_2 = vlSelfRef.axi4xbar_1__DOT__winner_4_2;
    } else {
        vlSelfRef.axi4xbar_1__DOT__muxState_4_0 = vlSelfRef.axi4xbar_1__DOT__state_4_0;
        vlSelfRef.axi4xbar_1__DOT__muxState_4_2 = vlSelfRef.axi4xbar_1__DOT__state_4_2;
    }
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__we_i 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__in_pwrite;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__in_pstrb 
        = vlSelfRef.lsdram_apb__DOT__auto_in_pstrb;
    vlSelfRef.lvga__DOT__mvga__DOT__in_pstrb = vlSelfRef.lvga__DOT__auto_in_pstrb;
    vlSelfRef.lkeyboard__DOT__mps2__DOT__in_pstrb = vlSelfRef.lkeyboard__DOT__auto_in_pstrb;
    vlSelfRef.lgpio__DOT__mgpio__DOT__in_pstrb = vlSelfRef.lgpio__DOT__auto_in_pstrb;
    vlSelfRef.luart__DOT__muart__DOT__in_pstrb = vlSelfRef.luart__DOT__auto_in_pstrb;
    vlSelfRef.lspi__DOT__mspi__DOT__in_pstrb = vlSelfRef.lspi__DOT__auto_in_pstrb;
    vlSelfRef.lpsram__DOT__mpsram__DOT__in_pstrb = vlSelfRef.lpsram__DOT__auto_in_pstrb;
    vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__sync_6 
        = vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__sync_7;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__sel_i 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__in_pstrb;
    vlSelfRef._axi4frag_auto_in_rresp = (((IData)(vlSelfRef.axi4xbar_1__DOT__muxState_3_0)
                                           ? (IData)(vlSelfRef._axi4buf_auto_in_rresp)
                                           : 0U) | 
                                         ((IData)(vlSelfRef.axi4xbar_1__DOT__muxState_3_2)
                                           ? (IData)(vlSelfRef._axi4ram_auto_in_rresp)
                                           : 0U));
    vlSelfRef._axi4frag_auto_in_rdata = (((IData)(vlSelfRef.axi4xbar_1__DOT__muxState_3_0)
                                           ? vlSelfRef._axi4buf_auto_in_rdata
                                           : 0U) | 
                                         (((IData)(vlSelfRef.axi4xbar_1__DOT__muxState_3_1)
                                            ? vlSelfRef.lmrom__DOT__nodeIn_rdata_r
                                            : 0U) | 
                                          ((IData)(vlSelfRef.axi4xbar_1__DOT__muxState_3_2)
                                            ? vlSelfRef._axi4ram_auto_in_rdata
                                            : 0U)));
    vlSelfRef._axi4yank_auto_in_rlast = (((IData)(vlSelfRef.axi4xbar_1__DOT__muxState_3_0) 
                                          & (IData)(vlSelfRef._axi4buf_auto_in_rlast)) 
                                         | ((IData)(vlSelfRef.axi4xbar_1__DOT__muxState_3_1) 
                                            | (IData)(vlSelfRef.axi4xbar_1__DOT__muxState_3_2)));
    vlSelfRef._axi4frag_auto_in_rid = (((IData)(vlSelfRef.axi4xbar_1__DOT__muxState_3_0)
                                         ? (IData)(vlSelfRef._axi4buf_auto_in_rid)
                                         : 0U) | (((IData)(vlSelfRef.axi4xbar_1__DOT__muxState_3_1)
                                                    ? (IData)(vlSelfRef.lmrom__DOT__nodeIn_rid_r)
                                                    : 0U) 
                                                  | ((IData)(vlSelfRef.axi4xbar_1__DOT__muxState_3_2)
                                                      ? (IData)(vlSelfRef.axi4ram__DOT__r_id)
                                                      : 0U)));
    vlSelfRef._axi4yank_auto_in_bresp = (((IData)(vlSelfRef.axi4xbar_1__DOT__muxState_4_0)
                                           ? (IData)(vlSelfRef._axi4buf_auto_in_bresp)
                                           : 0U) | 
                                         ((IData)(vlSelfRef.axi4xbar_1__DOT__muxState_4_2)
                                           ? (IData)(vlSelfRef._axi4ram_auto_in_bresp)
                                           : 0U));
    vlSelfRef._axi4frag_auto_in_bid = (((IData)(vlSelfRef.axi4xbar_1__DOT__muxState_4_0)
                                         ? (IData)(vlSelfRef._axi4buf_auto_in_bid)
                                         : 0U) | ((IData)(vlSelfRef.axi4xbar_1__DOT__muxState_4_2)
                                                   ? (IData)(vlSelfRef.axi4ram__DOT__w_id)
                                                   : 0U));
    vlSelfRef.axi4xbar__DOT__auto_anon_out_rresp = vlSelfRef._axi4frag_auto_in_rresp;
    vlSelfRef.axi4frag__DOT__auto_in_rresp = vlSelfRef._axi4frag_auto_in_rresp;
    vlSelfRef._axi4xbar_1_auto_anon_in_rresp = vlSelfRef._axi4frag_auto_in_rresp;
    vlSelfRef._axi4yank_auto_in_rresp = vlSelfRef._axi4frag_auto_in_rresp;
    vlSelfRef._axi4xbar_auto_anon_in_rresp = vlSelfRef._axi4frag_auto_in_rresp;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_rdata = vlSelfRef._axi4frag_auto_in_rdata;
    vlSelfRef.axi4frag__DOT__auto_in_rdata = vlSelfRef._axi4frag_auto_in_rdata;
    vlSelfRef._axi4xbar_1_auto_anon_in_rdata = vlSelfRef._axi4frag_auto_in_rdata;
    vlSelfRef._axi4yank_auto_in_rdata = vlSelfRef._axi4frag_auto_in_rdata;
    vlSelfRef._axi4xbar_auto_anon_in_rdata = vlSelfRef._axi4frag_auto_in_rdata;
    vlSelfRef.axi4yank__DOT__auto_in_rlast = vlSelfRef._axi4yank_auto_in_rlast;
    vlSelfRef.axi4frag__DOT__auto_out_rlast = vlSelfRef._axi4yank_auto_in_rlast;
    vlSelfRef.axi4xbar_1__DOT___in_0_rT_5 = vlSelfRef._axi4yank_auto_in_rlast;
    vlSelfRef._axi4xbar_1_auto_anon_in_rlast = vlSelfRef._axi4yank_auto_in_rlast;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_rid = vlSelfRef._axi4frag_auto_in_rid;
    vlSelfRef.axi4frag__DOT__auto_in_rid = vlSelfRef._axi4frag_auto_in_rid;
    vlSelfRef.axi4xbar_1__DOT___in_0_rT_20 = vlSelfRef._axi4frag_auto_in_rid;
    vlSelfRef._axi4xbar_1_auto_anon_in_rid = vlSelfRef._axi4frag_auto_in_rid;
    vlSelfRef._axi4yank_auto_in_rid = vlSelfRef._axi4frag_auto_in_rid;
    vlSelfRef._axi4xbar_auto_anon_in_rid = vlSelfRef._axi4frag_auto_in_rid;
    vlSelfRef._axi4yank_auto_in_recho_real_last = (1U 
                                                   & ((IData)(vlSelfRef.axi4yank__DOT___GEN_0) 
                                                      >> (IData)(vlSelfRef._axi4frag_auto_in_rid)));
    vlSelfRef.axi4xbar_1__DOT__rSel = (0xffffU & ((IData)(1U) 
                                                  << (IData)(vlSelfRef._axi4frag_auto_in_rid)));
    vlSelfRef.axi4yank__DOT__auto_in_bresp = vlSelfRef._axi4yank_auto_in_bresp;
    vlSelfRef.axi4frag__DOT__auto_out_bresp = vlSelfRef._axi4yank_auto_in_bresp;
    vlSelfRef._axi4xbar_1_auto_anon_in_bresp = vlSelfRef._axi4yank_auto_in_bresp;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_bid = vlSelfRef._axi4frag_auto_in_bid;
    vlSelfRef.axi4frag__DOT__auto_in_bid = vlSelfRef._axi4frag_auto_in_bid;
    vlSelfRef.axi4xbar_1__DOT___in_0_bT_9 = vlSelfRef._axi4frag_auto_in_bid;
    vlSelfRef._axi4xbar_1_auto_anon_in_bid = vlSelfRef._axi4frag_auto_in_bid;
    vlSelfRef._axi4yank_auto_in_bid = vlSelfRef._axi4frag_auto_in_bid;
    vlSelfRef._axi4xbar_auto_anon_in_bid = vlSelfRef._axi4frag_auto_in_bid;
    vlSelfRef._axi4frag_auto_in_bresp = (3U & ((IData)(vlSelfRef._axi4yank_auto_in_bresp) 
                                               | (vlSelfRef.axi4frag__DOT___GEN 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef._axi4frag_auto_in_bid), 1U)))));
    vlSelfRef.axi4xbar_1__DOT__bSel = (0xffffU & ((IData)(1U) 
                                                  << (IData)(vlSelfRef._axi4frag_auto_in_bid)));
    vlSelfRef._axi4yank_auto_in_becho_real_last = (1U 
                                                   & ((IData)(vlSelfRef.axi4yank__DOT___GEN_6) 
                                                      >> (IData)(vlSelfRef._axi4frag_auto_in_bid)));
    vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__sync_7 
        = vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__sync_8;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_rresp = vlSelfRef._axi4xbar_1_auto_anon_in_rresp;
    vlSelfRef.axi4yank__DOT__auto_out_rresp = vlSelfRef._axi4xbar_1_auto_anon_in_rresp;
    vlSelfRef.axi4yank__DOT__auto_in_rresp = vlSelfRef._axi4yank_auto_in_rresp;
    vlSelfRef.axi4frag__DOT__auto_out_rresp = vlSelfRef._axi4yank_auto_in_rresp;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_rresp = vlSelfRef._axi4xbar_auto_anon_in_rresp;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_rresp 
        = vlSelfRef._axi4xbar_auto_anon_in_rresp;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_rdata = vlSelfRef._axi4xbar_1_auto_anon_in_rdata;
    vlSelfRef.axi4yank__DOT__auto_out_rdata = vlSelfRef._axi4xbar_1_auto_anon_in_rdata;
    vlSelfRef.axi4yank__DOT__auto_in_rdata = vlSelfRef._axi4yank_auto_in_rdata;
    vlSelfRef.axi4frag__DOT__auto_out_rdata = vlSelfRef._axi4yank_auto_in_rdata;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_rdata = vlSelfRef._axi4xbar_auto_anon_in_rdata;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_rdata 
        = vlSelfRef._axi4xbar_auto_anon_in_rdata;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_rlast = vlSelfRef._axi4xbar_1_auto_anon_in_rlast;
    vlSelfRef.axi4yank__DOT__auto_out_rlast = vlSelfRef._axi4xbar_1_auto_anon_in_rlast;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_rid = vlSelfRef._axi4xbar_1_auto_anon_in_rid;
    vlSelfRef.axi4yank__DOT__auto_out_rid = vlSelfRef._axi4xbar_1_auto_anon_in_rid;
    vlSelfRef.axi4yank__DOT__auto_in_rid = vlSelfRef._axi4yank_auto_in_rid;
    vlSelfRef.axi4frag__DOT__auto_out_rid = vlSelfRef._axi4yank_auto_in_rid;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_rid = vlSelfRef._axi4xbar_auto_anon_in_rid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_rid 
        = vlSelfRef._axi4xbar_auto_anon_in_rid;
    vlSelfRef.axi4yank__DOT__auto_in_recho_real_last 
        = vlSelfRef._axi4yank_auto_in_recho_real_last;
    vlSelfRef.axi4frag__DOT__auto_out_recho_real_last 
        = vlSelfRef._axi4yank_auto_in_recho_real_last;
    vlSelfRef._axi4frag_auto_in_rlast = ((IData)(vlSelfRef._axi4yank_auto_in_recho_real_last) 
                                         & (IData)(vlSelfRef._axi4yank_auto_in_rlast));
    vlSelfRef.axi4yank__DOT___rsel_T_1 = vlSelfRef.axi4xbar_1__DOT__rSel;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_bresp = vlSelfRef._axi4xbar_1_auto_anon_in_bresp;
    vlSelfRef.axi4yank__DOT__auto_out_bresp = vlSelfRef._axi4xbar_1_auto_anon_in_bresp;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_bid = vlSelfRef._axi4xbar_1_auto_anon_in_bid;
    vlSelfRef.axi4yank__DOT__auto_out_bid = vlSelfRef._axi4xbar_1_auto_anon_in_bid;
    vlSelfRef.axi4yank__DOT__auto_in_bid = vlSelfRef._axi4yank_auto_in_bid;
    vlSelfRef.axi4frag__DOT__auto_out_bid = vlSelfRef._axi4yank_auto_in_bid;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_bid = vlSelfRef._axi4xbar_auto_anon_in_bid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_bid 
        = vlSelfRef._axi4xbar_auto_anon_in_bid;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_bresp = vlSelfRef._axi4frag_auto_in_bresp;
    vlSelfRef.axi4frag__DOT__auto_in_bresp = vlSelfRef._axi4frag_auto_in_bresp;
    vlSelfRef._axi4xbar_auto_anon_in_bresp = vlSelfRef._axi4frag_auto_in_bresp;
    vlSelfRef.axi4yank__DOT___bsel_T_1 = vlSelfRef.axi4xbar_1__DOT__bSel;
    vlSelfRef.axi4yank__DOT__auto_in_becho_real_last 
        = vlSelfRef._axi4yank_auto_in_becho_real_last;
    vlSelfRef.axi4frag__DOT__auto_out_becho_real_last 
        = vlSelfRef._axi4yank_auto_in_becho_real_last;
    vlSelfRef._axi4frag_auto_in_bvalid = ((IData)(vlSelfRef._axi4yank_auto_in_becho_real_last) 
                                          & (IData)(vlSelfRef.axi4xbar_1__DOT__in_0_bvalid));
    vlSelfRef.axi4xbar__DOT__auto_anon_out_rlast = vlSelfRef._axi4frag_auto_in_rlast;
    vlSelfRef.axi4frag__DOT__auto_in_rlast = vlSelfRef._axi4frag_auto_in_rlast;
    vlSelfRef._axi4xbar_auto_anon_in_rlast = vlSelfRef._axi4frag_auto_in_rlast;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_bresp = vlSelfRef._axi4xbar_auto_anon_in_bresp;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_bresp 
        = vlSelfRef._axi4xbar_auto_anon_in_bresp;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_bvalid = vlSelfRef._axi4frag_auto_in_bvalid;
    vlSelfRef.axi4frag__DOT__auto_in_bvalid = vlSelfRef._axi4frag_auto_in_bvalid;
    vlSelfRef._axi4xbar_auto_anon_in_bvalid = vlSelfRef._axi4frag_auto_in_bvalid;
    vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__sync_8 
        = vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__sync_9;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_rlast = vlSelfRef._axi4xbar_auto_anon_in_rlast;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_rlast 
        = vlSelfRef._axi4xbar_auto_anon_in_rlast;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_bvalid = vlSelfRef._axi4xbar_auto_anon_in_bvalid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_bvalid 
        = vlSelfRef._axi4xbar_auto_anon_in_bvalid;
    vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__sync_9 
        = vlSelfRef.reset;
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef._cpu_auto_master_out_rready = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_rready;
    vlSelfRef._cpu_auto_master_out_bready = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_bready;
    vlSelfRef._cpu_auto_master_out_wdata = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_wdata;
    vlSelfRef._cpu_auto_master_out_wstrb = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_wstrb;
    vlSelfRef._cpu_auto_master_out_wvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_wvalid;
    vlSelfRef._cpu_auto_master_out_awvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_awvalid;
    vlSelfRef._cpu_auto_master_out_awaddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_awaddr;
    vlSelfRef._cpu_auto_master_out_arvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_arvalid;
    vlSelfRef._cpu_auto_master_out_araddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_araddr;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_rready = vlSelfRef._cpu_auto_master_out_rready;
    vlSelfRef._axi4xbar_auto_anon_out_rready = vlSelfRef._cpu_auto_master_out_rready;
    vlSelfRef._axi4yank_auto_out_rready = vlSelfRef._cpu_auto_master_out_rready;
    vlSelfRef._axi4frag_auto_out_rready = vlSelfRef._cpu_auto_master_out_rready;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_bready = vlSelfRef._cpu_auto_master_out_bready;
    vlSelfRef._axi4xbar_auto_anon_out_bready = vlSelfRef._cpu_auto_master_out_bready;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_wdata = vlSelfRef._cpu_auto_master_out_wdata;
    vlSelfRef._axi4xbar_auto_anon_out_wdata = vlSelfRef._cpu_auto_master_out_wdata;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_wstrb = vlSelfRef._cpu_auto_master_out_wstrb;
    vlSelfRef._axi4xbar_auto_anon_out_wstrb = vlSelfRef._cpu_auto_master_out_wstrb;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_wvalid = vlSelfRef._cpu_auto_master_out_wvalid;
    vlSelfRef._axi4xbar_auto_anon_out_wvalid = vlSelfRef._cpu_auto_master_out_wvalid;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_awvalid = vlSelfRef._cpu_auto_master_out_awvalid;
    vlSelfRef._axi4xbar_auto_anon_out_awvalid = vlSelfRef._cpu_auto_master_out_awvalid;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_awaddr = vlSelfRef._cpu_auto_master_out_awaddr;
    vlSelfRef._axi4xbar_auto_anon_out_awaddr = vlSelfRef._cpu_auto_master_out_awaddr;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_arvalid = vlSelfRef._cpu_auto_master_out_arvalid;
    vlSelfRef._axi4xbar_auto_anon_out_arvalid = vlSelfRef._cpu_auto_master_out_arvalid;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_araddr = vlSelfRef._cpu_auto_master_out_araddr;
    vlSelfRef._axi4xbar_auto_anon_out_araddr = vlSelfRef._cpu_auto_master_out_araddr;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_rready = vlSelfRef._axi4xbar_auto_anon_out_rready;
    vlSelfRef.axi4frag__DOT__auto_in_rready = vlSelfRef._axi4xbar_auto_anon_out_rready;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_rready 
        = vlSelfRef._axi4yank_auto_out_rready;
    vlSelfRef.axi4yank__DOT__auto_out_rready = vlSelfRef._axi4yank_auto_out_rready;
    vlSelfRef.axi4yank__DOT__auto_in_rready = vlSelfRef._axi4frag_auto_out_rready;
    vlSelfRef.axi4frag__DOT__auto_out_rready = vlSelfRef._axi4frag_auto_out_rready;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_bready = vlSelfRef._axi4xbar_auto_anon_out_bready;
    vlSelfRef.axi4frag__DOT__auto_in_bready = vlSelfRef._axi4xbar_auto_anon_out_bready;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_wdata = vlSelfRef._axi4xbar_auto_anon_out_wdata;
    vlSelfRef.axi4frag__DOT__auto_in_wdata = vlSelfRef._axi4xbar_auto_anon_out_wdata;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_wstrb = vlSelfRef._axi4xbar_auto_anon_out_wstrb;
    vlSelfRef.axi4frag__DOT__auto_in_wstrb = vlSelfRef._axi4xbar_auto_anon_out_wstrb;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_wvalid = vlSelfRef._axi4xbar_auto_anon_out_wvalid;
    vlSelfRef.axi4frag__DOT__auto_in_wvalid = vlSelfRef._axi4xbar_auto_anon_out_wvalid;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_awvalid 
        = vlSelfRef._axi4xbar_auto_anon_out_awvalid;
    vlSelfRef.axi4frag__DOT__auto_in_awvalid = vlSelfRef._axi4xbar_auto_anon_out_awvalid;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_awaddr = vlSelfRef._axi4xbar_auto_anon_out_awaddr;
    vlSelfRef.axi4frag__DOT__auto_in_awaddr = vlSelfRef._axi4xbar_auto_anon_out_awaddr;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_arvalid 
        = vlSelfRef._axi4xbar_auto_anon_out_arvalid;
    vlSelfRef.axi4frag__DOT__auto_in_arvalid = vlSelfRef._axi4xbar_auto_anon_out_arvalid;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_araddr = vlSelfRef._axi4xbar_auto_anon_out_araddr;
    vlSelfRef.axi4frag__DOT__auto_in_araddr = vlSelfRef._axi4xbar_auto_anon_out_araddr;
    vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_data 
        = vlSelfRef.axi4frag__DOT__auto_in_wdata;
    vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_strb 
        = vlSelfRef.axi4frag__DOT__auto_in_wstrb;
    vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__io_enq_valid 
        = vlSelfRef.axi4frag__DOT__auto_in_wvalid;
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_enq_valid 
        = vlSelfRef.axi4frag__DOT__auto_in_awvalid;
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_enq_bits_addr 
        = vlSelfRef.axi4frag__DOT__auto_in_awaddr;
    vlSelfRef.axi4frag__DOT__deq_q__DOT__io_enq_valid 
        = vlSelfRef.axi4frag__DOT__auto_in_arvalid;
    vlSelfRef.axi4frag__DOT__deq_q__DOT__io_enq_bits_addr 
        = vlSelfRef.axi4frag__DOT__auto_in_araddr;
}
