// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyxSoCASIC.h"

extern const VlUnpacked<CData/*7:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hd6c89ed8_0;
extern const VlUnpacked<VlWide<3>/*79:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h46f0894a_0;
extern const VlUnpacked<SData/*9:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hcd3a1bf9_0;
extern const VlUnpacked<CData/*3:0*/, 4> VysyxSoCFull__ConstPool__TABLE_hd83ecffd_0;

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_1_0;
    luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_1_0 = 0;
    IData/*18:0*/ lvga__DOT__mvga__DOT____VdfgRegularize_hae95e661_1_0;
    lvga__DOT__mvga__DOT____VdfgRegularize_hae95e661_1_0 = 0;
    IData/*23:0*/ lvga__DOT__mvga__DOT____VdfgRegularize_hae95e661_1_1;
    lvga__DOT__mvga__DOT____VdfgRegularize_hae95e661_1_1 = 0;
    CData/*4:0*/ lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_adr_i;
    lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_adr_i = 0;
    CData/*0:0*/ lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0;
    lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0 = 0;
    CData/*7:0*/ lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_hfdaa4487_0_0;
    lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_hfdaa4487_0_0 = 0;
    CData/*0:0*/ lsdram_apb__DOT__msdram__DOT____VdfgRegularize_hc85f9e4c_0_0;
    lsdram_apb__DOT__msdram__DOT____VdfgRegularize_hc85f9e4c_0_0 = 0;
    CData/*0:0*/ axi42apb__DOT____VdfgRegularize_h456d727f_0_0;
    axi42apb__DOT____VdfgRegularize_h456d727f_0_0 = 0;
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__R0_addr 
        = vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_addr 
        = vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__wrap;
    vlSelfRef.apbxbar__DOT__auto_anon_in_pprot = vlSelfRef._apbdelay_delayer_out_pprot;
    vlSelfRef.apbxbar__DOT__auto_anon_out_6_pprot = vlSelfRef._apbxbar_auto_anon_out_6_pprot;
    vlSelfRef.apbxbar__DOT__auto_anon_out_6_pslverr 
        = vlSelfRef._lsdram_apb_auto_in_pslverr;
    vlSelfRef.apbxbar__DOT__auto_anon_out_5_pprot = vlSelfRef._apbxbar_auto_anon_out_5_pprot;
    vlSelfRef.apbxbar__DOT__auto_anon_out_5_pslverr 
        = vlSelfRef._lvga_auto_in_pslverr;
    vlSelfRef.apbxbar__DOT__auto_anon_out_5_prdata 
        = vlSelfRef._lvga_auto_in_prdata;
    vlSelfRef.apbxbar__DOT__auto_anon_out_4_pprot = vlSelfRef._apbxbar_auto_anon_out_4_pprot;
    vlSelfRef.apbxbar__DOT__auto_anon_out_4_pslverr 
        = vlSelfRef._lkeyboard_auto_in_pslverr;
    vlSelfRef.apbxbar__DOT__auto_anon_out_3_pprot = vlSelfRef._apbxbar_auto_anon_out_3_pprot;
    vlSelfRef.apbxbar__DOT__auto_anon_out_3_pslverr 
        = vlSelfRef._lgpio_auto_in_pslverr;
    vlSelfRef.apbxbar__DOT__auto_anon_out_2_pprot = vlSelfRef._apbxbar_auto_anon_out_2_pprot;
    vlSelfRef.apbxbar__DOT__auto_anon_out_2_pslverr 
        = vlSelfRef._lpsram_auto_in_pslverr;
    vlSelfRef.apbxbar__DOT__auto_anon_out_1_pprot = vlSelfRef._apbxbar_auto_anon_out_1_pprot;
    vlSelfRef.apbxbar__DOT__auto_anon_out_1_pslverr 
        = vlSelfRef._luart_auto_in_pslverr;
    vlSelfRef.apbxbar__DOT__auto_anon_out_0_pprot = vlSelfRef._apbxbar_auto_anon_out_0_pprot;
    vlSelfRef.apbxbar__DOT__auto_anon_out_0_pslverr 
        = vlSelfRef._lspi_auto_in_pslverr;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__int_o 
        = vlSelfRef.luart__DOT__muart__DOT__interrupt;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__lcr 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__enable 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__enable;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tstate;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__pop 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__overrun 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__a 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpra 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__sync_dat_o 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__srx_pad;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lcr 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__enable 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__enable;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rstate;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data_in 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__a 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__dpra 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__di 
        = (0xffU & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                    >> 3U));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat_o 
        = vlSelfRef.lspi__DOT__mspi__DOT____Vcellout__u0_spi_top__wb_dat_o;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_ack_o 
        = vlSelfRef.lspi__DOT__mspi__DOT____Vcellout__u0_spi_top__wb_ack_o;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_int_o 
        = vlSelfRef.lspi__DOT__mspi__DOT__spi_irq_out;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__enable 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__divider 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__pos_edge 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__neg_edge 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__pos_edge 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__neg_edge 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__ce_n 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__ce_n 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__sck 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__ce_n 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n;
    vlSelfRef.apbdelay_delayer__DOT__out_pprot = vlSelfRef._apbdelay_delayer_out_pprot;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_addr 
        = vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_addr 
        = vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_addr 
        = vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_addr 
        = vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_addr 
        = vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_addr 
        = vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_addr 
        = vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_addr 
        = vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_addr 
        = vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_addr 
        = vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dcd 
        = (1U & (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__dcd_pad_i)));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ri 
        = (1U & (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__ri_pad_i)));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dsr 
        = (1U & (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__dsr_pad_i)));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__cts 
        = vlSelfRef.luart__DOT__muart__DOT__ctsn;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dsr_pad_i 
        = vlSelfRef.luart__DOT__muart__DOT__dsr_pad_i;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ri_pad_i 
        = vlSelfRef.luart__DOT__muart__DOT__ri_pad_i;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dcd_pad_i 
        = vlSelfRef.luart__DOT__muart__DOT__dcd_pad_i;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__byte_index 
        = (3U & (((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                  >> 1U) - (IData)(3U)));
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_ack_w 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ie 
        = (1U & ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                 >> 0xcU));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr1 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_overrun;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word0 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [0U];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word1 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [1U];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word2 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [2U];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word3 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [3U];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word4 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [4U];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word5 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [5U];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word6 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [6U];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word7 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [7U];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word8 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [8U];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word9 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [9U];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word10 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [0xaU];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word11 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [0xbU];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word12 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [0xcU];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word13 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [0xdU];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word14 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [0xeU];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word15 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [0xfU];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_1 
        = (1U == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__break_error 
        = (0U == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelfRef.lkeyboard__DOT__mps2__DOT__ps2_clk_sync 
        = (IData)((4U == (6U & (IData)(vlSelfRef.lkeyboard__DOT__mps2__DOT__ps2_sync))));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_one 
        = (1U == (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr2 
        = (1U & (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                 [vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                 >> 1U));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr3 
        = (1U & vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
           [vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]);
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr4 
        = (1U & (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                 [vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                 >> 2U));
    vlSelfRef.luart__DOT__auto_in_pprot = vlSelfRef._apbxbar_auto_anon_out_1_pprot;
    vlSelfRef.luart__DOT__auto_in_pslverr = vlSelfRef._luart_auto_in_pslverr;
    __Vtableidx2 = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__block_value 
        = VysyxSoCFull__ConstPool__TABLE_hd6c89ed8_0
        [__Vtableidx2];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_count 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tx_reset 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tx_reset;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_pop 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_count 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_overrun 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_overrun;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rx_reset 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rx_reset;
    vlSelfRef.lgpio__DOT__auto_in_pprot = vlSelfRef._apbxbar_auto_anon_out_3_pprot;
    vlSelfRef.lgpio__DOT__auto_in_pslverr = vlSelfRef._lgpio_auto_in_pslverr;
    vlSelfRef.lkeyboard__DOT__auto_in_pprot = vlSelfRef._apbxbar_auto_anon_out_4_pprot;
    vlSelfRef.lkeyboard__DOT__auto_in_pslverr = vlSelfRef._lkeyboard_auto_in_pslverr;
    vlSelfRef.lvga__DOT__auto_in_pprot = vlSelfRef._apbxbar_auto_anon_out_5_pprot;
    vlSelfRef.lvga__DOT__auto_in_pslverr = vlSelfRef._lvga_auto_in_pslverr;
    vlSelfRef.lvga__DOT__auto_in_prdata = vlSelfRef._lvga_auto_in_prdata;
    vlSelfRef.lspi__DOT__auto_in_pprot = vlSelfRef._apbxbar_auto_anon_out_0_pprot;
    vlSelfRef.lpsram__DOT__auto_in_pprot = vlSelfRef._apbxbar_auto_anon_out_2_pprot;
    vlSelfRef.lpsram__DOT__auto_in_pslverr = vlSelfRef._lpsram_auto_in_pslverr;
    vlSelfRef.lsdram_apb__DOT__auto_in_pprot = vlSelfRef._apbxbar_auto_anon_out_6_pprot;
    __Vtableidx7 = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state[0U] 
        = VysyxSoCFull__ConstPool__TABLE_h46f0894a_0
        [__Vtableidx7][0U];
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state[1U] 
        = VysyxSoCFull__ConstPool__TABLE_h46f0894a_0
        [__Vtableidx7][1U];
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state[2U] 
        = VysyxSoCFull__ConstPool__TABLE_h46f0894a_0
        [__Vtableidx7][2U];
    vlSelfRef.luart__DOT__muart__DOT__dtr_pad_o = (1U 
                                                   & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__mcr));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_en 
        = (1U & (~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_15_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_14_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_13_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_12_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_11_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_10_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_9_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_8_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_7_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_6_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_5_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_4_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_3_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_2_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_1_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_31_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_30_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_29_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_28_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_27_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_26_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_25_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_24_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_23_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_22_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_21_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_20_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_19_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_18_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_17_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_16_io_deq_valid 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_31_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_30_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_29_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_28_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_27_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_26_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_25_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_24_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_23_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_22_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_21_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_20_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_19_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_18_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_17_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_16_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_15_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_14_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_13_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_12_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_11_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_10_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_9_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_8_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_7_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_6_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_5_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_4_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_3_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_2_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_1_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last;
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_dout_en 
        = (1U & (~ (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)));
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_dout 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q;
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT___ram_ext_R0_data 
        = vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
        [vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__wrap_1];
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_done 
        = ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter) 
           == ((IData)(1U) + (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__FINAL_COUNT)));
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
        = vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1];
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
        = vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1];
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data 
        = vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1];
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
        = vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1];
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
        = vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
        [vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelfRef.axi4ram__DOT___mem_ext_R0_data = ((IData)(vlSelfRef.axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                 ? 
                                                vlSelfRef.axi4ram__DOT__mem_ext__DOT__Memory
                                                [vlSelfRef.axi4ram__DOT__mem_ext__DOT___R0_addr_d0]
                                                 : 0U);
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 1U) & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_push 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tf_push;
    __Vtableidx5 = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = VysyxSoCFull__ConstPool__TABLE_hcd3a1bf9_0
        [__Vtableidx5];
    vlSelfRef.lspi__DOT__auto_in_pslverr = vlSelfRef._lspi_auto_in_pslverr;
    vlSelfRef.lsdram_apb__DOT__auto_in_pslverr = vlSelfRef._lsdram_apb_auto_in_pslverr;
    vlSelfRef._cpu_reset_chain_io_q = vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__sync_0;
    vlSelfRef._axi4ram_auto_in_bvalid = vlSelfRef.axi4ram__DOT__w_full;
    vlSelfRef._axi4ram_auto_in_bid = vlSelfRef.axi4ram__DOT__w_id;
    vlSelfRef._axi4ram_auto_in_rvalid = vlSelfRef.axi4ram__DOT__r_full;
    vlSelfRef._axi4ram_auto_in_rid = vlSelfRef.axi4ram__DOT__r_id;
    vlSelfRef._lmrom_auto_in_rvalid = vlSelfRef.lmrom__DOT__state;
    vlSelfRef._lmrom_auto_in_rid = vlSelfRef.lmrom__DOT__nodeIn_rid_r;
    vlSelfRef._lmrom_auto_in_rdata = vlSelfRef.lmrom__DOT__nodeIn_rdata_r;
    vlSelfRef.luart__DOT__muart__DOT__rts_internal 
        = (1U & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                 >> 1U));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__last_bit 
        = (1U & (~ (0U != (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__go 
        = (1U & ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                 >> 8U));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_count))));
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__req_accept 
        = ((4U == (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
           | (6U == (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                      | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                         | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                            | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr4r)))));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__thre_set_en 
        = (1U & (~ (0U != (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__block_cnt))));
    vlSelfRef.lspi__DOT__spi_bundle_mosi = vlSelfRef.spi_mosi;
    vlSelfRef._axi42apb_auto_in_bid = vlSelfRef.axi42apb__DOT__bid_reg;
    vlSelfRef._axi42apb_auto_in_rid = vlSelfRef.axi42apb__DOT__rid_reg;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tx_negedge 
        = (1U & ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                 >> 0xaU));
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
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_error_bit 
        = (0U != (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                  [0U] | (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                          [1U] | (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [2U] | (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                          [3U] | (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                  [4U] 
                                                  | (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                     [5U] 
                                                     | (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                        [6U] 
                                                        | (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                           [7U] 
                                                           | (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                              [8U] 
                                                              | (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                 [9U] 
                                                                 | (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                    [0xaU] 
                                                                    | (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                       [0xbU] 
                                                                       | (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                          [0xcU] 
                                                                          | (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                             [0xdU] 
                                                                             | (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU]))))))))))))))));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[0U] 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[1U] 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[2U] 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[3U] 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    __Vtableidx1 = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__fcr;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = VysyxSoCFull__ConstPool__TABLE_hd83ecffd_0
        [__Vtableidx1];
    vlSelfRef.lspi__DOT__spi_bundle_sck = vlSelfRef.spi_sck;
    vlSelfRef._lsdram_apb_auto_in_pready = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q;
    vlSelfRef.gpio_out = vlSelfRef.lgpio__DOT__mgpio__DOT__led_reg;
    vlSelfRef.vga_hsync = (0x5fU < (IData)(vlSelfRef.lvga__DOT__mvga__DOT__hcount));
    vlSelfRef.vga_vsync = (1U < (IData)(vlSelfRef.lvga__DOT__mvga__DOT__vcount));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__lsb 
        = (1U & ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                 >> 0xbU));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelfRef.sdram_cke = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q;
    vlSelfRef.sdram_a = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q;
    vlSelfRef.sdram_ba = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx_negedge 
        = (1U & ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                 >> 9U));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__char_len 
        = (0x7fU & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__cts_pad_i 
        = (1U & (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__ctsn)));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__serial_out 
        = ((~ ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelfRef.sdram_we = (1U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__loopback 
        = (1U & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                 >> 4U));
    vlSelfRef._axi4frag_auto_in_awready = (1U & (~ (IData)(vlSelfRef.axi4frag__DOT__deq_q_1__DOT__full)));
    vlSelfRef._axi4frag_auto_in_wready = (1U & (~ (IData)(vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__full)));
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
    vlSelfRef.sdram_cas = (1U & ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                 >> 1U));
    vlSelfRef.axi42apb__DOT___nodeIn_bvalid_T_2 = (2U 
                                                   == (IData)(vlSelfRef.axi42apb__DOT__state));
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
    vlSelfRef.sdram_ras = (1U & ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                 >> 2U));
    vlSelfRef._axi4frag_auto_in_arready = (1U & (~ (IData)(vlSelfRef.axi4frag__DOT__deq_q__DOT__full)));
    vlSelfRef.sdram_cs = (1U & ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                >> 3U));
    vlSelfRef._axi4ram_auto_in_bresp = ((IData)(vlSelfRef.axi4ram__DOT__w_sel1)
                                         ? 0U : 3U);
    vlSelfRef._lpsram_auto_in_prdata = (((vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                          [3U] << 0x18U) 
                                         | (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                            [2U] << 0x10U)) 
                                        | ((vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                            [1U] << 8U) 
                                           | vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                           [0U]));
    vlSelfRef._axi4buf_auto_in_bresp = (3U & vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
                                        [vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1]);
    vlSelfRef._lsdram_apb_auto_in_prdata = (((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                             << 0x10U) 
                                            | (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q));
    vlSelfRef.sdram_dqm = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q;
    vlSelfRef._axi4ram_auto_in_rresp = ((IData)(vlSelfRef.axi4ram__DOT__r_sel1)
                                         ? 0U : 3U);
    vlSelfRef._axi4buf_auto_in_rresp = (3U & (IData)(
                                                     (vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
                                                      [vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1] 
                                                      >> 1U)));
    vlSelfRef._axi4buf_auto_in_rdata = (IData)((vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
                                                [vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1] 
                                                >> 3U));
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
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr 
        = (((((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
              << 7U) | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                        << 6U)) | (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                    << 5U) | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                              << 4U))) 
           | ((((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                << 3U) | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                          << 2U)) | (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                      << 1U) | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr0r))));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_data_out 
        = ((vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
            [vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
            << 3U) | vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
           [vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]);
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ass 
        = (1U & ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                 >> 0xdU));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_dout 
        = (0xfU & ((2U > (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                    ? ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__CMD_EBH) 
                       >> (7U & (((IData)(7U) - VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter), 2U)) 
                                 - (IData)(3U)))) : 
                   ((2U == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                     ? (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                        >> 0x14U) : ((3U == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                      ? (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                         >> 0x10U) : 
                                     ((4U == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                       ? (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                          >> 0xcU) : 
                                      ((5U == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                        ? (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                           >> 8U) : 
                                       ((6U == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                         ? (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                            >> 4U) : 
                                        ((7U == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                          ? vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                          : 0U))))))));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_done 
        = (0x16U == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
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
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dlab 
        = (1U & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                 >> 7U));
    vlSelfRef.vga_valid = ((0x90U <= (IData)(vlSelfRef.lvga__DOT__mvga__DOT__hcount)) 
                           & ((0x30fU >= (IData)(vlSelfRef.lvga__DOT__mvga__DOT__hcount)) 
                              & ((0x23U <= (IData)(vlSelfRef.lvga__DOT__mvga__DOT__vcount)) 
                                 & (0x202U >= (IData)(vlSelfRef.lvga__DOT__mvga__DOT__vcount)))));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_doe 
        = (1U & (~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_doe 
        = (8U > (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_15_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_14_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_13_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_12_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_11_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_10_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_9_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_8_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_7_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_6_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_5_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_4_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_3_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_2_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_1_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__full)));
    (vlSelfRef.lspi__DOT__mspi__DOT__is_flash ? vlSelfRef.lspi__DOT__mspi__DOT__flash_prdata
      : vlSelfRef.lspi__DOT__mspi__DOT__prdata) = vlSelfRef.lspi__DOT__mspi__DOT____Vcellout__u0_spi_top__wb_dat_o;
    vlSelfRef._lmrom_auto_in_arready = (1U & (~ (IData)(vlSelfRef.lmrom__DOT__state)));
    (vlSelfRef.lspi__DOT__mspi__DOT__is_flash ? vlSelfRef.lspi__DOT__mspi__DOT__flash_pready
      : vlSelfRef.lspi__DOT__mspi__DOT__pready) = vlSelfRef.lspi__DOT__mspi__DOT____Vcellout__u0_spi_top__wb_ack_o;
    vlSelfRef._axi4buf_auto_in_rlast = (1U & (IData)(
                                                     vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
                                                     [vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1]));
    vlSelfRef._axi4buf_auto_in_rid = (0xfU & (IData)(
                                                     (vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
                                                      [vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1] 
                                                      >> 0x23U)));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_doe 
        = (8U > (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_31_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_30_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_29_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_28_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_27_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_26_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_25_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_24_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_23_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_22_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_21_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_20_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_19_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_18_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_17_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__full)));
    vlSelfRef.axi4yank__DOT___Queue1_BundleMap_16_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__full)));
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
    vlSelfRef._axi4buf_auto_in_bid = (0xfU & (vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
                                              [vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1] 
                                              >> 2U));
    vlSelfRef._axi4buf_auto_out_wdata = (IData)((vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory
                                                 [vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1] 
                                                 >> 4U));
    vlSelfRef._axi4buf_auto_out_wstrb = (0xfU & (IData)(
                                                        vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory
                                                        [vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1]));
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    vlSelfRef.axi4frag__DOT__w_idle = (0U == (IData)(vlSelfRef.axi4frag__DOT__w_counter));
    vlSelfRef.axi42apb__DOT__nodeOut_penable = (1U 
                                                == (IData)(vlSelfRef.axi42apb__DOT__state));
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    vlSelfRef._axi4buf_auto_out_awaddr = (IData)((vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory
                                                  [vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1] 
                                                  >> 0xbU));
    vlSelfRef._axi4buf_auto_out_araddr = (IData)((vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory
                                                  [vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1] 
                                                  >> 0xbU));
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    vlSelfRef.axi42apb__DOT___is_write_T = (0U == (IData)(vlSelfRef.axi42apb__DOT__state));
    vlSelfRef.luart__DOT__muart__DOT__in_pprot = vlSelfRef.luart__DOT__auto_in_pprot;
    vlSelfRef.luart__DOT__muart__DOT__in_pslverr = vlSelfRef.luart__DOT__auto_in_pslverr;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_count;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__fifo_reset 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tx_reset;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__pop 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_pop;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_count;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__overrun 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_overrun;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo_reset 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rx_reset;
    vlSelfRef.lgpio__DOT__mgpio__DOT__in_pprot = vlSelfRef.lgpio__DOT__auto_in_pprot;
    vlSelfRef.lgpio__DOT__mgpio__DOT__in_pslverr = vlSelfRef.lgpio__DOT__auto_in_pslverr;
    vlSelfRef.lkeyboard__DOT__mps2__DOT__in_pprot = vlSelfRef.lkeyboard__DOT__auto_in_pprot;
    vlSelfRef.lkeyboard__DOT__mps2__DOT__in_pslverr 
        = vlSelfRef.lkeyboard__DOT__auto_in_pslverr;
    vlSelfRef.lvga__DOT__mvga__DOT__in_pprot = vlSelfRef.lvga__DOT__auto_in_pprot;
    vlSelfRef.lvga__DOT__mvga__DOT__in_pslverr = vlSelfRef.lvga__DOT__auto_in_pslverr;
    vlSelfRef.lvga__DOT__mvga__DOT__in_prdata = vlSelfRef.lvga__DOT__auto_in_prdata;
    vlSelfRef.lspi__DOT__mspi__DOT__in_pprot = vlSelfRef.lspi__DOT__auto_in_pprot;
    vlSelfRef.lpsram__DOT__mpsram__DOT__in_pprot = vlSelfRef.lpsram__DOT__auto_in_pprot;
    vlSelfRef.lpsram__DOT__mpsram__DOT__in_pslverr 
        = vlSelfRef.lpsram__DOT__auto_in_pslverr;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__in_pprot 
        = vlSelfRef.lsdram_apb__DOT__auto_in_pprot;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dtr_pad_o 
        = vlSelfRef.luart__DOT__muart__DOT__dtr_pad_o;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__en 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_en;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_15_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_14_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_13_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_12_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_11_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_10_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_9_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_8_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_7_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_6_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_5_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_4_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_3_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_2_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_1_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_31_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_30_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_29_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_28_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_27_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_26_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_25_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_24_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_23_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_22_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_21_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_20_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_19_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_18_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_17_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__io_deq_valid 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_16_io_deq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_31_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_30_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_29_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_28_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_27_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_26_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_25_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_24_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_23_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_22_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_21_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_20_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_19_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_18_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_17_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_16_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_15_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_14_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_13_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_12_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_11_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_10_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_9_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_8_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_7_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_6_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_5_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_4_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_3_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_2_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_1_io_deq_bits_real_last;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__io_deq_bits_real_last 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_io_deq_bits_real_last;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_out_en_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_dout_en;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_output_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_dout;
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT___ram_ext_R0_data;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__done 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_done;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__dpo 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out;
    vlSelfRef.axi4ram__DOT__mem_ext__DOT__R0_data = vlSelfRef.axi4ram__DOT___mem_ext_R0_data;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__thre_int_rise 
        = ((~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
           & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ms_int_rise 
        = ((~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
           & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__push 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_push;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__brc_value 
        = (0xffU & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                    >> 2U));
    vlSelfRef.lspi__DOT__mspi__DOT__in_pslverr = vlSelfRef.lspi__DOT__auto_in_pslverr;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__in_pslverr 
        = vlSelfRef.lsdram_apb__DOT__auto_in_pslverr;
    vlSelfRef.cpu_reset_chain__DOT__io_q = vlSelfRef._cpu_reset_chain_io_q;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_bvalid 
        = vlSelfRef._axi4ram_auto_in_bvalid;
    vlSelfRef.axi4ram__DOT__auto_in_bvalid = vlSelfRef._axi4ram_auto_in_bvalid;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_bid 
        = vlSelfRef._axi4ram_auto_in_bid;
    vlSelfRef.axi4ram__DOT__auto_in_bid = vlSelfRef._axi4ram_auto_in_bid;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_rvalid 
        = vlSelfRef._axi4ram_auto_in_rvalid;
    vlSelfRef.axi4ram__DOT__auto_in_rvalid = vlSelfRef._axi4ram_auto_in_rvalid;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_rid 
        = vlSelfRef._axi4ram_auto_in_rid;
    vlSelfRef.axi4ram__DOT__auto_in_rid = vlSelfRef._axi4ram_auto_in_rid;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_1_rvalid 
        = vlSelfRef._lmrom_auto_in_rvalid;
    vlSelfRef.lmrom__DOT__auto_in_rvalid = vlSelfRef._lmrom_auto_in_rvalid;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_1_rid 
        = vlSelfRef._lmrom_auto_in_rid;
    vlSelfRef.lmrom__DOT__auto_in_rid = vlSelfRef._lmrom_auto_in_rid;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_1_rdata 
        = vlSelfRef._lmrom_auto_in_rdata;
    vlSelfRef.lmrom__DOT__auto_in_rdata = vlSelfRef._lmrom_auto_in_rdata;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rts_pad_o 
        = vlSelfRef.luart__DOT__muart__DOT__rts_internal;
    vlSelfRef.luart__DOT__muart__DOT__rtsn = (1U & 
                                              (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__rts_internal)));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__last_clk 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__last_bit;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__last 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__last_bit;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__go 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__go;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__go 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__go;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ti_int_rise 
        = ((~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
           & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_accept_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__req_accept;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_accept_w 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__req_accept;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rls_int_rise 
        = ((~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
           & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__thre_set_en) 
           & (0U == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
    vlSelfRef.lspi__DOT__mspi__DOT__spi_mosi = vlSelfRef.lspi__DOT__spi_bundle_mosi;
    vlSelfRef.axi42apb__DOT__auto_in_bid = vlSelfRef._axi42apb_auto_in_bid;
    vlSelfRef.axi4buf__DOT__auto_out_bid = vlSelfRef._axi42apb_auto_in_bid;
    vlSelfRef.axi42apb__DOT__auto_in_rid = vlSelfRef._axi42apb_auto_in_rid;
    vlSelfRef.axi4buf__DOT__auto_out_rid = vlSelfRef._axi42apb_auto_in_rid;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_negedge 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tx_negedge;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk 
        = ((0U != (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
           & ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tx_negedge)
               ? (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
               : (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)));
    vlSelfRef.axi42apb__DOT__auto_in_awid = vlSelfRef._axi4buf_auto_out_awid;
    vlSelfRef.axi4buf__DOT__auto_out_awid = vlSelfRef._axi4buf_auto_out_awid;
    vlSelfRef.axi42apb__DOT__auto_in_awlen = vlSelfRef._axi4buf_auto_out_awlen;
    vlSelfRef.axi4buf__DOT__auto_out_awlen = vlSelfRef._axi4buf_auto_out_awlen;
    vlSelfRef.axi42apb__DOT__auto_in_awsize = vlSelfRef._axi4buf_auto_out_awsize;
    vlSelfRef.axi4buf__DOT__auto_out_awsize = vlSelfRef._axi4buf_auto_out_awsize;
    vlSelfRef.axi42apb__DOT__auto_in_arid = vlSelfRef._axi4buf_auto_out_arid;
    vlSelfRef.axi4buf__DOT__auto_out_arid = vlSelfRef._axi4buf_auto_out_arid;
    vlSelfRef.axi42apb__DOT__auto_in_arlen = vlSelfRef._axi4buf_auto_out_arlen;
    vlSelfRef.axi4buf__DOT__auto_out_arlen = vlSelfRef._axi4buf_auto_out_arlen;
    vlSelfRef.axi42apb__DOT__auto_in_arsize = vlSelfRef._axi4buf_auto_out_arsize;
    vlSelfRef.axi4buf__DOT__auto_out_arsize = vlSelfRef._axi4buf_auto_out_arsize;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr7 
        = ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_error_bit) 
           | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_error_bit 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_error_bit;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_out[0U] 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[0U];
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_out[1U] 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[1U];
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_out[2U] 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[2U];
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_out[3U] 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[3U];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelfRef.lspi__DOT__mspi__DOT__spi_sck = vlSelfRef.lspi__DOT__spi_bundle_sck;
    vlSelfRef.apbxbar__DOT__auto_anon_out_6_pready 
        = vlSelfRef._lsdram_apb_auto_in_pready;
    vlSelfRef.lsdram_apb__DOT__auto_in_pready = vlSelfRef._lsdram_apb_auto_in_pready;
    vlSelfRef.lgpio__DOT__gpio_bundle_out = vlSelfRef.gpio_out;
    vlSelfRef.lvga__DOT__vga_bundle_hsync = vlSelfRef.vga_hsync;
    vlSelfRef.lvga__DOT__vga_bundle_vsync = vlSelfRef.vga_vsync;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__lsb 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__lsb;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse;
    vlSelfRef.lsdram_apb__DOT__sdram_bundle_cke = vlSelfRef.sdram_cke;
    vlSelfRef.lsdram_apb__DOT__sdram_bundle_a = vlSelfRef.sdram_a;
    vlSelfRef.lsdram_apb__DOT__sdram_bundle_ba = vlSelfRef.sdram_ba;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_negedge 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx_negedge;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk 
        = (((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx_negedge)
             ? (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
             : (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
           & ((0U != (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
              | (IData)(vlSelfRef.spi_sck)));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__len 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__char_len;
    lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_hfdaa4487_0_0 
        = ((0x80U & ((~ (0U != (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__char_len))) 
                     << 7U)) | (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__char_len));
    vlSelfRef.luart__DOT__muart__DOT____Vcellinp__Uregs__modem_inputs 
        = ((((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__cts_pad_i) 
             << 3U) | ((IData)(vlSelfRef.luart__DOT__muart__DOT__dsr_pad_i) 
                       << 2U)) | (((IData)(vlSelfRef.luart__DOT__muart__DOT__ri_pad_i) 
                                   << 1U) | (IData)(vlSelfRef.luart__DOT__muart__DOT__dcd_pad_i)));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_pad_o 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__serial_out;
    vlSelfRef.lsdram_apb__DOT__sdram_bundle_we = vlSelfRef.sdram_we;
    if (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__loopback) {
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__serial_in 
            = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__serial_out;
        luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_1_0 
            = ((0xcU & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                        << 2U)) | ((2U & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                          >> 1U)) | 
                                   (1U & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                          >> 3U))));
    } else {
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__serial_in 
            = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__srx_pad;
        luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_1_0 
            = vlSelfRef.luart__DOT__muart__DOT____Vcellinp__Uregs__modem_inputs;
    }
    vlSelfRef.uart_tx = ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__loopback) 
                         | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    vlSelfRef.axi4xbar__DOT__auto_anon_out_awready 
        = vlSelfRef._axi4frag_auto_in_awready;
    vlSelfRef.axi4frag__DOT__auto_in_awready = vlSelfRef._axi4frag_auto_in_awready;
    vlSelfRef._axi4xbar_auto_anon_in_awready = vlSelfRef._axi4frag_auto_in_awready;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_wready = vlSelfRef._axi4frag_auto_in_wready;
    vlSelfRef.axi4frag__DOT__auto_in_wready = vlSelfRef._axi4frag_auto_in_wready;
    vlSelfRef._axi4xbar_auto_anon_in_wready = vlSelfRef._axi4frag_auto_in_wready;
    vlSelfRef.lsdram_apb__DOT__sdram_bundle_cas = vlSelfRef.sdram_cas;
    vlSelfRef.lsdram_apb__DOT__sdram_bundle_ras = vlSelfRef.sdram_ras;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_arready 
        = vlSelfRef._axi4frag_auto_in_arready;
    vlSelfRef.axi4frag__DOT__auto_in_arready = vlSelfRef._axi4frag_auto_in_arready;
    vlSelfRef._axi4xbar_auto_anon_in_arready = vlSelfRef._axi4frag_auto_in_arready;
    vlSelfRef.lsdram_apb__DOT__sdram_bundle_cs = vlSelfRef.sdram_cs;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_bresp 
        = vlSelfRef._axi4ram_auto_in_bresp;
    vlSelfRef.axi4ram__DOT__auto_in_bresp = vlSelfRef._axi4ram_auto_in_bresp;
    vlSelfRef.apbxbar__DOT__auto_anon_out_2_prdata 
        = vlSelfRef._lpsram_auto_in_prdata;
    vlSelfRef.lpsram__DOT__auto_in_prdata = vlSelfRef._lpsram_auto_in_prdata;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_bresp 
        = vlSelfRef._axi4buf_auto_in_bresp;
    vlSelfRef.axi4buf__DOT__auto_in_bresp = vlSelfRef._axi4buf_auto_in_bresp;
    vlSelfRef.apbxbar__DOT__auto_anon_out_6_prdata 
        = vlSelfRef._lsdram_apb_auto_in_prdata;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_read_data_w 
        = vlSelfRef._lsdram_apb_auto_in_prdata;
    vlSelfRef.lsdram_apb__DOT__auto_in_prdata = vlSelfRef._lsdram_apb_auto_in_prdata;
    vlSelfRef.lsdram_apb__DOT__sdram_bundle_dqm = vlSelfRef.sdram_dqm;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_rresp 
        = vlSelfRef._axi4ram_auto_in_rresp;
    vlSelfRef.axi4ram__DOT__auto_in_rresp = vlSelfRef._axi4ram_auto_in_rresp;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_rresp 
        = vlSelfRef._axi4buf_auto_in_rresp;
    vlSelfRef.axi4buf__DOT__auto_in_rresp = vlSelfRef._axi4buf_auto_in_rresp;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_rdata 
        = vlSelfRef._axi4buf_auto_in_rdata;
    vlSelfRef.axi4buf__DOT__auto_in_rdata = vlSelfRef._axi4buf_auto_in_rdata;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_rdata 
        = vlSelfRef._axi4ram_auto_in_rdata;
    vlSelfRef.axi4ram__DOT__auto_in_rdata = vlSelfRef._axi4ram_auto_in_rdata;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_out 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_data_out;
    vlSelfRef.spi_ss = (0xffU & (~ ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss) 
                                    & ((- (IData)(((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                   & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ass)))) 
                                       | (- (IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ass)))))))));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__dout 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_dout;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__done 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_done;
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
    vlSelfRef.lvga__DOT__vga_bundle_valid = vlSelfRef.vga_valid;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__douten 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_doe;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__douten 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_doe;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_15_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_14_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_13_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_12_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_11_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_10_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_9_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_8_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_7_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_6_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_5_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_4_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_3_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_2_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_1_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_io_enq_ready;
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
    vlSelfRef._lspi_auto_in_prdata = ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__xip_done)
                                       ? (((vlSelfRef.lspi__DOT__mspi__DOT__flash_prdata_r 
                                            << 0x18U) 
                                           | (0xff0000U 
                                              & (vlSelfRef.lspi__DOT__mspi__DOT__flash_prdata_r 
                                                 << 8U))) 
                                          | ((0xff00U 
                                              & (vlSelfRef.lspi__DOT__mspi__DOT__flash_prdata_r 
                                                 >> 8U)) 
                                             | (vlSelfRef.lspi__DOT__mspi__DOT__flash_prdata_r 
                                                >> 0x18U)))
                                       : vlSelfRef.lspi__DOT__mspi__DOT__prdata);
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_1_arready 
        = vlSelfRef._lmrom_auto_in_arready;
    vlSelfRef.lmrom__DOT__auto_in_arready = vlSelfRef._lmrom_auto_in_arready;
    vlSelfRef._lspi_auto_in_pready = ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__pready) 
                                      | (IData)(vlSelfRef.lspi__DOT__mspi__DOT__xip_done));
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_rlast 
        = vlSelfRef._axi4buf_auto_in_rlast;
    vlSelfRef.axi4buf__DOT__auto_in_rlast = vlSelfRef._axi4buf_auto_in_rlast;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_rid 
        = vlSelfRef._axi4buf_auto_in_rid;
    vlSelfRef.axi4buf__DOT__auto_in_rid = vlSelfRef._axi4buf_auto_in_rid;
    if (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_doe) {
        vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__douten = 1U;
        vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout 
            = (1U & ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__CMD_35H) 
                     >> (7U & ((IData)(7U) - (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter)))));
    } else {
        vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__douten = 0U;
        vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout = 0U;
    }
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_31_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_30_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_29_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_28_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_27_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_26_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_25_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_24_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_23_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_22_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_21_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_20_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_19_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_18_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_17_io_enq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__io_enq_ready 
        = vlSelfRef.axi4yank__DOT___Queue1_BundleMap_16_io_enq_ready;
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
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_bid 
        = vlSelfRef._axi4buf_auto_in_bid;
    vlSelfRef.axi4buf__DOT__auto_in_bid = vlSelfRef._axi4buf_auto_in_bid;
    vlSelfRef.axi42apb__DOT__auto_in_wdata = vlSelfRef._axi4buf_auto_out_wdata;
    vlSelfRef.axi4buf__DOT__auto_out_wdata = vlSelfRef._axi4buf_auto_out_wdata;
    vlSelfRef.axi42apb__DOT__auto_in_wstrb = vlSelfRef._axi4buf_auto_out_wstrb;
    vlSelfRef.axi4buf__DOT__auto_out_wstrb = vlSelfRef._axi4buf_auto_out_wstrb;
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__full = 
        ((IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__ptr_match) 
         & (IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__empty = 
        ((~ (IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__maybe_full)) 
         & (IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    vlSelfRef.axi4frag__DOT___in_awready_T = ((IData)(vlSelfRef.axi4frag__DOT__w_idle) 
                                              | (IData)(vlSelfRef.axi4frag__DOT__wbeats_latched));
    vlSelfRef._apbdelay_delayer_out_penable = vlSelfRef.axi42apb__DOT__nodeOut_penable;
    vlSelfRef._axi42apb_auto_out_penable = vlSelfRef.axi42apb__DOT__nodeOut_penable;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__full 
        = ((IData)(vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    vlSelfRef.axi42apb__DOT__auto_in_awaddr = vlSelfRef._axi4buf_auto_out_awaddr;
    vlSelfRef.axi4buf__DOT__auto_out_awaddr = vlSelfRef._axi4buf_auto_out_awaddr;
    vlSelfRef.axi42apb__DOT__auto_in_araddr = vlSelfRef._axi4buf_auto_out_araddr;
    vlSelfRef.axi4buf__DOT__auto_out_araddr = vlSelfRef._axi4buf_auto_out_araddr;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__full 
        = ((IData)(vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__full 
        = ((IData)(vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__full 
        = ((IData)(vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__full 
        = ((IData)(vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__we 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__push;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_err_o 
        = vlSelfRef.lspi__DOT__mspi__DOT__in_pslverr;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_error_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__in_pslverr;
    vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__io_q 
        = vlSelfRef.cpu_reset_chain__DOT__io_q;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpo 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
           & (0U == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tstate)));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__mosi_pad_o 
        = vlSelfRef.lspi__DOT__mspi__DOT__spi_mosi;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__io_enq_bits_id 
        = vlSelfRef.axi4buf__DOT__auto_out_bid;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_id 
        = vlSelfRef.axi4buf__DOT__auto_out_rid;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__io_deq_bits_id 
        = vlSelfRef.axi4buf__DOT__auto_out_awid;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__io_deq_bits_len 
        = vlSelfRef.axi4buf__DOT__auto_out_awlen;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__io_deq_bits_size 
        = vlSelfRef.axi4buf__DOT__auto_out_awsize;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__io_deq_bits_id 
        = vlSelfRef.axi4buf__DOT__auto_out_arid;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__io_deq_bits_len 
        = vlSelfRef.axi4buf__DOT__auto_out_arlen;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__io_deq_bits_size 
        = vlSelfRef.axi4buf__DOT__auto_out_arsize;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__error_bit 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_error_bit;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rda_int_rise 
        = ((~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
           & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__sclk_pad_o 
        = vlSelfRef.lspi__DOT__mspi__DOT__spi_sck;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__in_pready 
        = vlSelfRef.lsdram_apb__DOT__auto_in_pready;
    vlSelfRef.lgpio__DOT__mgpio__DOT__gpio_out = vlSelfRef.lgpio__DOT__gpio_bundle_out;
    vlSelfRef.lvga__DOT__mvga__DOT__vga_hsync = vlSelfRef.lvga__DOT__vga_bundle_hsync;
    vlSelfRef.lvga__DOT__mvga__DOT__vga_vsync = vlSelfRef.lvga__DOT__vga_bundle_vsync;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__push 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_cke 
        = vlSelfRef.lsdram_apb__DOT__sdram_bundle_cke;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_a 
        = vlSelfRef.lsdram_apb__DOT__sdram_bundle_a;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_ba 
        = vlSelfRef.lsdram_apb__DOT__sdram_bundle_ba;
    if (vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__lsb) {
        vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_bit_pos 
            = (0xffU & ((IData)(lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_hfdaa4487_0_0) 
                        - (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)));
        vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
            = (0xffU & ((IData)(lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_hfdaa4487_0_0) 
                        - ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                           + (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx_negedge))));
    } else {
        vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_bit_pos 
            = (0xffU & ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                        - (IData)(1U)));
        vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
            = (0xffU & ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx_negedge)
                         ? (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)
                         : ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                            - (IData)(1U))));
    }
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__modem_inputs 
        = vlSelfRef.luart__DOT__muart__DOT____Vcellinp__Uregs__modem_inputs;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_we 
        = vlSelfRef.lsdram_apb__DOT__sdram_bundle_we;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__serial_in;
    vlSelfRef.luart__DOT__uart_tx = vlSelfRef.uart_tx;
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_enq_ready 
        = vlSelfRef.axi4frag__DOT__auto_in_awready;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_awready = vlSelfRef._axi4xbar_auto_anon_in_awready;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_awready 
        = vlSelfRef._axi4xbar_auto_anon_in_awready;
    vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__io_enq_ready 
        = vlSelfRef.axi4frag__DOT__auto_in_wready;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_wready = vlSelfRef._axi4xbar_auto_anon_in_wready;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_wready 
        = vlSelfRef._axi4xbar_auto_anon_in_wready;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_cas 
        = vlSelfRef.lsdram_apb__DOT__sdram_bundle_cas;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_ras 
        = vlSelfRef.lsdram_apb__DOT__sdram_bundle_ras;
    vlSelfRef.axi4frag__DOT__deq_q__DOT__io_enq_ready 
        = vlSelfRef.axi4frag__DOT__auto_in_arready;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_arready = vlSelfRef._axi4xbar_auto_anon_in_arready;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_arready 
        = vlSelfRef._axi4xbar_auto_anon_in_arready;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_cs 
        = vlSelfRef.lsdram_apb__DOT__sdram_bundle_cs;
    vlSelfRef.lpsram__DOT__mpsram__DOT__in_prdata = vlSelfRef.lpsram__DOT__auto_in_prdata;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_bits_resp 
        = vlSelfRef.axi4buf__DOT__auto_in_bresp;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__in_prdata 
        = vlSelfRef.lsdram_apb__DOT__auto_in_prdata;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_dqm 
        = vlSelfRef.lsdram_apb__DOT__sdram_bundle_dqm;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_resp 
        = vlSelfRef.axi4buf__DOT__auto_in_rresp;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_data 
        = vlSelfRef.axi4buf__DOT__auto_in_rdata;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data_out 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_out;
    vlSelfRef.lspi__DOT__spi_bundle_ss = vlSelfRef.spi_ss;
    vlSelfRef.lgpio__DOT__gpio_bundle_seg_0 = vlSelfRef.gpio_seg_0;
    vlSelfRef.lgpio__DOT__gpio_bundle_seg_1 = vlSelfRef.gpio_seg_1;
    vlSelfRef.lgpio__DOT__gpio_bundle_seg_2 = vlSelfRef.gpio_seg_2;
    vlSelfRef.lgpio__DOT__gpio_bundle_seg_3 = vlSelfRef.gpio_seg_3;
    vlSelfRef.lgpio__DOT__gpio_bundle_seg_4 = vlSelfRef.gpio_seg_4;
    vlSelfRef.lgpio__DOT__gpio_bundle_seg_5 = vlSelfRef.gpio_seg_5;
    vlSelfRef.lgpio__DOT__gpio_bundle_seg_6 = vlSelfRef.gpio_seg_6;
    vlSelfRef.lgpio__DOT__gpio_bundle_seg_7 = vlSelfRef.gpio_seg_7;
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
    vlSelfRef.apbxbar__DOT__auto_anon_out_0_prdata 
        = vlSelfRef._lspi_auto_in_prdata;
    vlSelfRef.lspi__DOT__auto_in_prdata = vlSelfRef._lspi_auto_in_prdata;
    vlSelfRef.apbxbar__DOT__auto_anon_out_0_pready 
        = vlSelfRef._lspi_auto_in_pready;
    vlSelfRef.lspi__DOT__auto_in_pready = vlSelfRef._lspi_auto_in_pready;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_last 
        = vlSelfRef.axi4buf__DOT__auto_in_rlast;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id 
        = vlSelfRef.axi4buf__DOT__auto_in_rid;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__dout 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_bits_id 
        = vlSelfRef.axi4buf__DOT__auto_in_bid;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data 
        = vlSelfRef.axi4buf__DOT__auto_out_wdata;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb 
        = vlSelfRef.axi4buf__DOT__auto_out_wstrb;
    vlSelfRef.axi4xbar_1__DOT___awIn_0_io_enq_ready 
        = (1U & (~ (IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__full)));
    vlSelfRef.apbxbar__DOT__auto_anon_in_penable = vlSelfRef._apbdelay_delayer_out_penable;
    vlSelfRef.apbdelay_delayer__DOT__out_penable = vlSelfRef._apbdelay_delayer_out_penable;
    vlSelfRef.apbdelay_delayer__DOT__in_penable = vlSelfRef._axi42apb_auto_out_penable;
    vlSelfRef.axi42apb__DOT__auto_out_penable = vlSelfRef._axi42apb_auto_out_penable;
    vlSelfRef._axi4buf_auto_out_rready = (1U & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__full)));
    vlSelfRef._axi4buf_auto_in_rvalid = (1U & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)));
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__io_deq_bits_addr 
        = vlSelfRef.axi4buf__DOT__auto_out_awaddr;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__io_deq_bits_addr 
        = vlSelfRef.axi4buf__DOT__auto_out_araddr;
    vlSelfRef._axi4buf_auto_out_bready = (1U & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__full)));
    vlSelfRef._axi4buf_auto_in_bvalid = (1U & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)));
    vlSelfRef._axi4buf_auto_in_wready = (1U & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__full)));
    vlSelfRef._axi4buf_auto_out_wvalid = (1U & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)));
    vlSelfRef._axi4buf_auto_in_awready = (1U & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__full)));
    vlSelfRef._axi4buf_auto_out_awvalid = (1U & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)));
    vlSelfRef._axi4buf_auto_in_arready = (1U & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__full)));
    vlSelfRef._axi4buf_auto_out_arvalid = (1U & (~ (IData)(vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__s_out 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__mosi_pad_o;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__sclk_pad_o;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__s_clk 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__sclk_pad_o;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_ack_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__in_pready;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__push;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_cke_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_cke;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_addr_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_a;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_ba_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_ba;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dcd_c 
        = (1U & (IData)(luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_1_0));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ri_c 
        = (1U & ((IData)(luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_1_0) 
                 >> 1U));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dsr_c 
        = (1U & ((IData)(luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_1_0) 
                 >> 2U));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__cts_c 
        = (1U & ((IData)(luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_1_0) 
                 >> 3U));
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_we_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_we;
    vlSelfRef.luart__DOT__muart__DOT__uart_tx = vlSelfRef.luart__DOT__uart_tx;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_cas_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_cas;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_ras_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_ras;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_cs_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_cs;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__dat_o 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__in_prdata;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_read_data_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__in_prdata;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_dqm_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_dqm;
    vlSelfRef.lspi__DOT__mspi__DOT__spi_ss = vlSelfRef.lspi__DOT__spi_bundle_ss;
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
    vlSelfRef.lspi__DOT__mspi__DOT__in_prdata = vlSelfRef.lspi__DOT__auto_in_prdata;
    vlSelfRef.lspi__DOT__mspi__DOT__in_pready = vlSelfRef.lspi__DOT__auto_in_pready;
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__io_enq_ready 
        = vlSelfRef.axi4xbar_1__DOT___awIn_0_io_enq_ready;
    vlSelfRef.axi4xbar_1__DOT___anonIn_awready_T = 
        ((IData)(vlSelfRef.axi4xbar_1__DOT___awIn_0_io_enq_ready) 
         | (IData)(vlSelfRef.axi4xbar_1__DOT__latched));
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
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_wready 
        = vlSelfRef._axi4buf_auto_in_wready;
    vlSelfRef.axi4buf__DOT__auto_in_wready = vlSelfRef._axi4buf_auto_in_wready;
    vlSelfRef.axi42apb__DOT__auto_in_wvalid = vlSelfRef._axi4buf_auto_out_wvalid;
    vlSelfRef.axi4buf__DOT__auto_out_wvalid = vlSelfRef._axi4buf_auto_out_wvalid;
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
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__stx_pad_o 
        = vlSelfRef.luart__DOT__muart__DOT__uart_tx;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__line 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__dat_o;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss_pad_o 
        = vlSelfRef.lspi__DOT__mspi__DOT__spi_ss;
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
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__io_enq_ready 
        = vlSelfRef.axi4buf__DOT__auto_in_wready;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__io_deq_valid 
        = vlSelfRef.axi4buf__DOT__auto_out_wvalid;
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
    vlSelfRef.lvga__DOT__vga_bundle_r = vlSelfRef.vga_r;
    vlSelfRef.lvga__DOT__vga_bundle_g = vlSelfRef.vga_g;
    vlSelfRef.lvga__DOT__vga_bundle_b = vlSelfRef.vga_b;
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
    vlSelfRef.axi42apb__DOT__auto_in_arready = vlSelfRef._axi42apb_auto_in_arready;
    vlSelfRef.axi4buf__DOT__auto_out_arready = vlSelfRef._axi42apb_auto_in_arready;
    if (vlSelfRef.axi42apb__DOT__accept_write) {
        vlSelfRef._axi42apb_auto_in_awready = 1U;
        vlSelfRef._axi42apb_auto_in_wready = 1U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
            = vlSelfRef._axi4buf_auto_out_wdata;
        vlSelfRef.__VdfgRegularize_hc2da4b9d_1_65 = vlSelfRef._axi4buf_auto_out_wstrb;
    } else {
        vlSelfRef._axi42apb_auto_in_awready = 0U;
        vlSelfRef._axi42apb_auto_in_wready = 0U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
            = vlSelfRef.axi42apb__DOT__wdata_reg_r;
        vlSelfRef.__VdfgRegularize_hc2da4b9d_1_65 = vlSelfRef.axi42apb__DOT__wstrb_reg_r;
    }
    vlSelfRef._axi42apb_auto_out_psel = ((IData)(vlSelfRef.axi42apb__DOT__accept_read) 
                                         | ((IData)(vlSelfRef.axi42apb__DOT__accept_write) 
                                            | (IData)(vlSelfRef.axi42apb__DOT__nodeOut_penable)));
    vlSelfRef._axi42apb_auto_out_pwrite = ((IData)(vlSelfRef.axi42apb__DOT___is_write_T)
                                            ? (IData)(vlSelfRef.axi42apb__DOT__accept_write)
                                            : (IData)(vlSelfRef.axi42apb__DOT__is_write_r));
    vlSelfRef.lvga__DOT__mvga__DOT__vga_r = vlSelfRef.lvga__DOT__vga_bundle_r;
    vlSelfRef.lvga__DOT__mvga__DOT__vga_g = vlSelfRef.lvga__DOT__vga_bundle_g;
    vlSelfRef.lvga__DOT__mvga__DOT__vga_b = vlSelfRef.lvga__DOT__vga_bundle_b;
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
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__io_deq_ready 
        = vlSelfRef.axi4buf__DOT__auto_out_arready;
    vlSelfRef.axi42apb__DOT__auto_in_awready = vlSelfRef._axi42apb_auto_in_awready;
    vlSelfRef.axi4buf__DOT__auto_out_awready = vlSelfRef._axi42apb_auto_in_awready;
    vlSelfRef.axi42apb__DOT__auto_in_wready = vlSelfRef._axi42apb_auto_in_wready;
    vlSelfRef.axi4buf__DOT__auto_out_wready = vlSelfRef._axi42apb_auto_in_wready;
    vlSelfRef._apbdelay_delayer_out_pwdata = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w;
    vlSelfRef._axi42apb_auto_out_pwdata = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w;
    vlSelfRef._apbxbar_auto_anon_out_5_pwdata = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w;
    vlSelfRef._apbxbar_auto_anon_out_4_pwdata = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w;
    vlSelfRef._apbxbar_auto_anon_out_3_pwdata = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w;
    vlSelfRef._apbxbar_auto_anon_out_0_pwdata = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w;
    vlSelfRef._apbxbar_auto_anon_out_6_pwdata = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w;
    vlSelfRef._apbxbar_auto_anon_out_2_pwdata = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w;
    vlSelfRef._apbxbar_auto_anon_out_1_pwdata = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__byte2 
        = (0xffU & (vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                    >> 0x10U));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__byte3 
        = (vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
           >> 0x18U);
    vlSelfRef.apbdelay_delayer__DOT__in_psel = vlSelfRef._axi42apb_auto_out_psel;
    vlSelfRef.axi42apb__DOT__auto_out_psel = vlSelfRef._axi42apb_auto_out_psel;
    vlSelfRef._apbdelay_delayer_out_psel = vlSelfRef._axi42apb_auto_out_psel;
    vlSelfRef.apbdelay_delayer__DOT__in_pwrite = vlSelfRef._axi42apb_auto_out_pwrite;
    vlSelfRef.axi42apb__DOT__auto_out_pwrite = vlSelfRef._axi42apb_auto_out_pwrite;
    vlSelfRef.axi42apb__DOT__is_write = vlSelfRef._axi42apb_auto_out_pwrite;
    vlSelfRef._apbdelay_delayer_out_pwrite = vlSelfRef._axi42apb_auto_out_pwrite;
    vlSelfRef._apbxbar_auto_anon_out_6_pwrite = vlSelfRef._axi42apb_auto_out_pwrite;
    vlSelfRef._apbxbar_auto_anon_out_5_pwrite = vlSelfRef._axi42apb_auto_out_pwrite;
    vlSelfRef._apbxbar_auto_anon_out_4_pwrite = vlSelfRef._axi42apb_auto_out_pwrite;
    vlSelfRef._apbxbar_auto_anon_out_3_pwrite = vlSelfRef._axi42apb_auto_out_pwrite;
    vlSelfRef._apbxbar_auto_anon_out_1_pwrite = vlSelfRef._axi42apb_auto_out_pwrite;
    vlSelfRef._apbxbar_auto_anon_out_0_pwrite = vlSelfRef._axi42apb_auto_out_pwrite;
    vlSelfRef._apbxbar_auto_anon_out_2_pwrite = vlSelfRef._axi42apb_auto_out_pwrite;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_4 
        = ((IData)(vlSelfRef._axi42apb_auto_out_pwrite) 
           & ((IData)(vlSelfRef.__VdfgRegularize_hc2da4b9d_1_65) 
              >> 2U));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_1 
        = ((IData)(vlSelfRef._axi42apb_auto_out_pwrite) 
           & ((IData)(vlSelfRef.__VdfgRegularize_hc2da4b9d_1_65) 
              >> 1U));
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
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__io_deq_ready 
        = vlSelfRef.axi4buf__DOT__auto_out_awready;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__io_deq_ready 
        = vlSelfRef.axi4buf__DOT__auto_out_wready;
    vlSelfRef.apbxbar__DOT__auto_anon_in_pwdata = vlSelfRef._apbdelay_delayer_out_pwdata;
    vlSelfRef.apbdelay_delayer__DOT__out_pwdata = vlSelfRef._apbdelay_delayer_out_pwdata;
    vlSelfRef.apbdelay_delayer__DOT__in_pwdata = vlSelfRef._axi42apb_auto_out_pwdata;
    vlSelfRef.axi42apb__DOT__auto_out_pwdata = vlSelfRef._axi42apb_auto_out_pwdata;
    vlSelfRef.apbxbar__DOT__auto_anon_out_5_pwdata 
        = vlSelfRef._apbxbar_auto_anon_out_5_pwdata;
    vlSelfRef.lvga__DOT__auto_in_pwdata = vlSelfRef._apbxbar_auto_anon_out_5_pwdata;
    vlSelfRef.apbxbar__DOT__auto_anon_out_4_pwdata 
        = vlSelfRef._apbxbar_auto_anon_out_4_pwdata;
    vlSelfRef.lkeyboard__DOT__auto_in_pwdata = vlSelfRef._apbxbar_auto_anon_out_4_pwdata;
    vlSelfRef.apbxbar__DOT__auto_anon_out_3_pwdata 
        = vlSelfRef._apbxbar_auto_anon_out_3_pwdata;
    vlSelfRef.lgpio__DOT__auto_in_pwdata = vlSelfRef._apbxbar_auto_anon_out_3_pwdata;
    vlSelfRef.apbxbar__DOT__auto_anon_out_0_pwdata 
        = vlSelfRef._apbxbar_auto_anon_out_0_pwdata;
    vlSelfRef.lspi__DOT__auto_in_pwdata = vlSelfRef._apbxbar_auto_anon_out_0_pwdata;
    vlSelfRef.apbxbar__DOT__auto_anon_out_6_pwdata 
        = vlSelfRef._apbxbar_auto_anon_out_6_pwdata;
    vlSelfRef.lsdram_apb__DOT__auto_in_pwdata = vlSelfRef._apbxbar_auto_anon_out_6_pwdata;
    vlSelfRef.apbxbar__DOT__auto_anon_out_2_pwdata 
        = vlSelfRef._apbxbar_auto_anon_out_2_pwdata;
    vlSelfRef.lpsram__DOT__auto_in_pwdata = vlSelfRef._apbxbar_auto_anon_out_2_pwdata;
    vlSelfRef.apbxbar__DOT__auto_anon_out_1_pwdata 
        = vlSelfRef._apbxbar_auto_anon_out_1_pwdata;
    vlSelfRef.luart__DOT__auto_in_pwdata = vlSelfRef._apbxbar_auto_anon_out_1_pwdata;
    vlSelfRef.apbxbar__DOT__auto_anon_in_psel = vlSelfRef._apbdelay_delayer_out_psel;
    vlSelfRef.apbdelay_delayer__DOT__out_psel = vlSelfRef._apbdelay_delayer_out_psel;
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
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__byte1 
        = (0xffU & ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_1)
                     ? (vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                        >> 8U) : (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__byte3)));
    vlSelfRef._axi42apb_auto_out_pstrb = ((IData)(vlSelfRef._axi42apb_auto_out_pwrite)
                                           ? (IData)(vlSelfRef.__VdfgRegularize_hc2da4b9d_1_65)
                                           : 0U);
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
    vlSelfRef._axi42apb_auto_out_paddr = ((IData)(vlSelfRef._axi42apb_auto_out_pwrite)
                                           ? ((IData)(vlSelfRef.axi42apb__DOT__accept_write)
                                               ? vlSelfRef._axi4buf_auto_out_awaddr
                                               : vlSelfRef.axi42apb__DOT__awaddr_reg_r)
                                           : ((IData)(vlSelfRef.axi42apb__DOT__accept_read)
                                               ? vlSelfRef._axi4buf_auto_out_araddr
                                               : vlSelfRef.axi42apb__DOT__araddr_reg_r));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr 
        = (((0x3fffffU & (vlSelfRef._axi42apb_auto_out_paddr 
                          >> 2U)) << 2U) | 0U);
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr 
        = (0xffffffU & (vlSelfRef._axi42apb_auto_out_paddr 
                        >> 0U));
    vlSelfRef.apbdelay_delayer__DOT__in_paddr = vlSelfRef._axi42apb_auto_out_paddr;
    vlSelfRef.axi42apb__DOT__auto_out_paddr = vlSelfRef._axi42apb_auto_out_paddr;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_col_w 
        = (0x1feU & (vlSelfRef._axi42apb_auto_out_paddr 
                     >> 1U));
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
        = vlSelfRef._axi42apb_auto_out_paddr;
    vlSelfRef._apbdelay_delayer_out_paddr = vlSelfRef._axi42apb_auto_out_paddr;
    vlSelfRef._apbxbar_auto_anon_out_6_paddr = vlSelfRef._axi42apb_auto_out_paddr;
    vlSelfRef._apbxbar_auto_anon_out_2_paddr = vlSelfRef._axi42apb_auto_out_paddr;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w 
        = (3U & (vlSelfRef._axi42apb_auto_out_paddr 
                 >> 0xaU));
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_row_w 
        = (0x1fffU & (vlSelfRef._axi42apb_auto_out_paddr 
                      >> 0xcU));
    vlSelfRef.luart__DOT__muart__DOT__reg_adr = (7U 
                                                 & vlSelfRef._axi42apb_auto_out_paddr);
    vlSelfRef._apbxbar_auto_anon_out_5_paddr = (0x3fffffffU 
                                                & vlSelfRef._axi42apb_auto_out_paddr);
    vlSelfRef._apbxbar_auto_anon_out_4_paddr = (0x1fffffffU 
                                                & vlSelfRef._axi42apb_auto_out_paddr);
    vlSelfRef.apbxbar__DOT___GEN = (0x1ffffU & (0x10001U 
                                                ^ (vlSelfRef._axi42apb_auto_out_paddr 
                                                   >> 0xcU)));
    vlSelfRef.apbxbar__DOT__sel_5 = (0U == ((4U & (vlSelfRef._axi42apb_auto_out_paddr 
                                                   >> 0x1dU)) 
                                            | (3U & 
                                               (2U 
                                                ^ (vlSelfRef._axi42apb_auto_out_paddr 
                                                   >> 0x1cU)))));
    vlSelfRef.apbxbar__DOT___GEN_0 = (0x1ffffU & (0x10002U 
                                                  ^ 
                                                  (vlSelfRef._axi42apb_auto_out_paddr 
                                                   >> 0xcU)));
    vlSelfRef.apbxbar__DOT___sel_T_36 = (0xfU & (0xaU 
                                                 ^ 
                                                 (vlSelfRef._axi42apb_auto_out_paddr 
                                                  >> 0x1cU)));
    vlSelfRef.apbxbar__DOT___GEN_1 = (0x1ffffU & (0x10011U 
                                                  ^ 
                                                  (vlSelfRef._axi42apb_auto_out_paddr 
                                                   >> 0xcU)));
    vlSelfRef.apbxbar__DOT__sel_1 = (0U == (((0x20U 
                                              & (vlSelfRef._axi42apb_auto_out_paddr 
                                                 >> 0x1aU)) 
                                             | ((0x10U 
                                                 & (vlSelfRef._axi42apb_auto_out_paddr 
                                                    >> 0x19U)) 
                                                | (8U 
                                                   & ((~ 
                                                       (vlSelfRef._axi42apb_auto_out_paddr 
                                                        >> 0x1cU)) 
                                                      << 3U)))) 
                                            | ((4U 
                                                & (vlSelfRef._axi42apb_auto_out_paddr 
                                                   >> 0xeU)) 
                                               | (3U 
                                                  & (vlSelfRef._axi42apb_auto_out_paddr 
                                                     >> 0xcU)))));
    vlSelfRef.apbxbar__DOT__sel_2 = (0U == ((4U & (
                                                   (~ 
                                                    (vlSelfRef._axi42apb_auto_out_paddr 
                                                     >> 0x1fU)) 
                                                   << 2U)) 
                                            | (3U & 
                                               (vlSelfRef._axi42apb_auto_out_paddr 
                                                >> 0x1cU))));
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
    vlSelfRef.lvga__DOT__mvga__DOT__in_pwdata = vlSelfRef.lvga__DOT__auto_in_pwdata;
    vlSelfRef.lkeyboard__DOT__mps2__DOT__in_pwdata 
        = vlSelfRef.lkeyboard__DOT__auto_in_pwdata;
    vlSelfRef.lgpio__DOT__mgpio__DOT__in_pwdata = vlSelfRef.lgpio__DOT__auto_in_pwdata;
    vlSelfRef.lspi__DOT__mspi__DOT__in_pwdata = vlSelfRef.lspi__DOT__auto_in_pwdata;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__in_pwdata 
        = vlSelfRef.lsdram_apb__DOT__auto_in_pwdata;
    vlSelfRef.lpsram__DOT__mpsram__DOT__in_pwdata = vlSelfRef.lpsram__DOT__auto_in_pwdata;
    vlSelfRef.luart__DOT__muart__DOT__in_pwdata = vlSelfRef.luart__DOT__auto_in_pwdata;
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
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__byte0 
        = (0xffU & (((IData)(vlSelfRef._axi42apb_auto_out_pwrite) 
                     & (IData)(vlSelfRef.__VdfgRegularize_hc2da4b9d_1_65))
                     ? vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w
                     : (((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_1) 
                         & (1U == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                         ? (vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                            >> 8U) : (((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_4) 
                                       & (1U == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                       ? (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__byte2)
                                       : (((IData)(vlSelfRef._axi42apb_auto_out_pwrite) 
                                           & (((IData)(vlSelfRef.__VdfgRegularize_hc2da4b9d_1_65) 
                                               >> 3U) 
                                              & (1U 
                                                 == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__size))))
                                           ? (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__byte3)
                                           : (((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_4) 
                                               & (2U 
                                                  == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                               ? (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__byte2)
                                               : vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w))))));
    vlSelfRef.apbxbar__DOT__auto_anon_in_paddr = vlSelfRef._apbdelay_delayer_out_paddr;
    vlSelfRef.apbdelay_delayer__DOT__out_paddr = vlSelfRef._apbdelay_delayer_out_paddr;
    vlSelfRef.apbxbar__DOT__auto_anon_out_6_paddr = vlSelfRef._apbxbar_auto_anon_out_6_paddr;
    vlSelfRef.lsdram_apb__DOT__auto_in_paddr = vlSelfRef._apbxbar_auto_anon_out_6_paddr;
    vlSelfRef.apbxbar__DOT__auto_anon_out_2_paddr = vlSelfRef._apbxbar_auto_anon_out_2_paddr;
    vlSelfRef.lpsram__DOT__auto_in_paddr = vlSelfRef._apbxbar_auto_anon_out_2_paddr;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__wb_addr_i 
        = vlSelfRef.luart__DOT__muart__DOT__reg_adr;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_0_1 
        = ((~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dlab)) 
           & (0U == (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_adr)));
    vlSelfRef.luart__DOT__muart__DOT__reg_dat8_r = 
        (0xffU & ((4U & (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_adr))
                   ? ((2U & (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_adr))
                       ? ((1U & (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_adr))
                           ? (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__scratch)
                           : (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__msr))
                       : ((1U & (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_adr))
                           ? (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr)
                           : 0U)) : ((2U & (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_adr))
                                      ? ((1U & (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_adr))
                                          ? (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                          : (0xc0U 
                                             | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                      : ((1U & (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_adr))
                                          ? ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dlab)
                                              ? ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                 >> 8U)
                                              : (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ier))
                                          : ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dlab)
                                              ? (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dl)
                                              : ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                 >> 3U))))));
    vlSelfRef.apbxbar__DOT__auto_anon_out_5_paddr = vlSelfRef._apbxbar_auto_anon_out_5_paddr;
    vlSelfRef.lvga__DOT__auto_in_paddr = vlSelfRef._apbxbar_auto_anon_out_5_paddr;
    vlSelfRef.lvga__DOT__mvga__DOT__in_paddr = vlSelfRef._apbxbar_auto_anon_out_5_paddr;
    vlSelfRef.lspi__DOT__mspi__DOT__in_paddr = vlSelfRef._apbxbar_auto_anon_out_5_paddr;
    vlSelfRef._apbxbar_auto_anon_out_0_paddr = vlSelfRef._apbxbar_auto_anon_out_5_paddr;
    vlSelfRef.lspi__DOT__mspi__DOT__is_flash = (0x30000000U 
                                                <= vlSelfRef._apbxbar_auto_anon_out_5_paddr);
    vlSelfRef.apbxbar__DOT__auto_anon_out_4_paddr = vlSelfRef._apbxbar_auto_anon_out_4_paddr;
    vlSelfRef.luart__DOT__muart__DOT__in_paddr = vlSelfRef._apbxbar_auto_anon_out_4_paddr;
    vlSelfRef.lgpio__DOT__mgpio__DOT__in_paddr = vlSelfRef._apbxbar_auto_anon_out_4_paddr;
    vlSelfRef.lkeyboard__DOT__auto_in_paddr = vlSelfRef._apbxbar_auto_anon_out_4_paddr;
    vlSelfRef.lkeyboard__DOT__mps2__DOT__in_paddr = vlSelfRef._apbxbar_auto_anon_out_4_paddr;
    vlSelfRef._apbxbar_auto_anon_out_3_paddr = vlSelfRef._apbxbar_auto_anon_out_4_paddr;
    vlSelfRef._apbxbar_auto_anon_out_1_paddr = vlSelfRef._apbxbar_auto_anon_out_4_paddr;
    vlSelfRef.luart__DOT__muart__DOT__reg_dat8_w = 
        (0xffU & ((2U & vlSelfRef._apbxbar_auto_anon_out_4_paddr)
                   ? ((1U & vlSelfRef._apbxbar_auto_anon_out_4_paddr)
                       ? (vlSelfRef._apbxbar_auto_anon_out_1_pwdata 
                          >> 0x18U) : (vlSelfRef._apbxbar_auto_anon_out_1_pwdata 
                                       >> 0x10U)) : 
                  ((1U & vlSelfRef._apbxbar_auto_anon_out_4_paddr)
                    ? (vlSelfRef._apbxbar_auto_anon_out_1_pwdata 
                       >> 8U) : vlSelfRef._apbxbar_auto_anon_out_1_pwdata)));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in 
        = ((IData)(vlSelfRef._axi42apb_auto_out_pwrite)
            ? (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_dat8_w)
            : (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_dat8_w_reg));
    vlSelfRef.apbxbar__DOT__sel_0 = ((0U == (((0x20U 
                                               & (vlSelfRef._axi42apb_auto_out_paddr 
                                                  >> 0x1aU)) 
                                              | ((0x10U 
                                                  & (vlSelfRef._axi42apb_auto_out_paddr 
                                                     >> 0x19U)) 
                                                 | (8U 
                                                    & (vlSelfRef.apbxbar__DOT___GEN 
                                                       >> 0xdU)))) 
                                             | ((4U 
                                                 & (vlSelfRef._axi42apb_auto_out_paddr 
                                                    >> 0xeU)) 
                                                | (3U 
                                                   & vlSelfRef.apbxbar__DOT___GEN)))) 
                                     | (0U == ((4U 
                                                & (vlSelfRef._axi42apb_auto_out_paddr 
                                                   >> 0x1dU)) 
                                               | (3U 
                                                  & (~ 
                                                     (vlSelfRef._axi42apb_auto_out_paddr 
                                                      >> 0x1cU))))));
    vlSelfRef._apbxbar_auto_anon_out_5_psel = ((IData)(vlSelfRef.apbxbar__DOT__sel_5) 
                                               & (IData)(vlSelfRef._axi42apb_auto_out_psel));
    vlSelfRef._apbxbar_auto_anon_out_5_penable = ((IData)(vlSelfRef.apbxbar__DOT__sel_5) 
                                                  & (IData)(vlSelfRef.axi42apb__DOT__nodeOut_penable));
    vlSelfRef.apbxbar__DOT__sel_3 = (0U == (((0x20U 
                                              & (vlSelfRef._axi42apb_auto_out_paddr 
                                                 >> 0x1aU)) 
                                             | ((0x10U 
                                                 & (vlSelfRef._axi42apb_auto_out_paddr 
                                                    >> 0x19U)) 
                                                | (8U 
                                                   & (vlSelfRef.apbxbar__DOT___GEN_0 
                                                      >> 0xdU)))) 
                                            | ((4U 
                                                & (vlSelfRef._axi42apb_auto_out_paddr 
                                                   >> 0xeU)) 
                                               | (3U 
                                                  & vlSelfRef.apbxbar__DOT___GEN_0))));
    vlSelfRef.apbxbar__DOT__sel_6 = (0U == ((4U & ((IData)(vlSelfRef.apbxbar__DOT___sel_T_36) 
                                                   >> 1U)) 
                                            | (3U & (IData)(vlSelfRef.apbxbar__DOT___sel_T_36))));
    vlSelfRef.apbxbar__DOT__sel_4 = (0U == (((0x20U 
                                              & (vlSelfRef._axi42apb_auto_out_paddr 
                                                 >> 0x1aU)) 
                                             | ((0x10U 
                                                 & (vlSelfRef._axi42apb_auto_out_paddr 
                                                    >> 0x19U)) 
                                                | (8U 
                                                   & (vlSelfRef.apbxbar__DOT___GEN_1 
                                                      >> 0xdU)))) 
                                            | ((4U 
                                                & (vlSelfRef.apbxbar__DOT___GEN_1 
                                                   >> 2U)) 
                                               | (3U 
                                                  & vlSelfRef.apbxbar__DOT___GEN_1))));
    vlSelfRef._apbxbar_auto_anon_out_1_penable = ((IData)(vlSelfRef.apbxbar__DOT__sel_1) 
                                                  & (IData)(vlSelfRef.axi42apb__DOT__nodeOut_penable));
    vlSelfRef._apbxbar_auto_anon_out_1_psel = ((IData)(vlSelfRef.apbxbar__DOT__sel_1) 
                                               & (IData)(vlSelfRef._axi42apb_auto_out_psel));
    vlSelfRef._apbxbar_auto_anon_out_2_penable = ((IData)(vlSelfRef.apbxbar__DOT__sel_2) 
                                                  & (IData)(vlSelfRef.axi42apb__DOT__nodeOut_penable));
    vlSelfRef._apbxbar_auto_anon_out_2_psel = ((IData)(vlSelfRef.apbxbar__DOT__sel_2) 
                                               & (IData)(vlSelfRef._axi42apb_auto_out_psel));
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_write_data_i 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__in_pwdata;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__in_pwdata;
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
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_done 
        = ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT) 
                              - (IData)(6U))));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__wdata 
        = ((0xffff0000U & vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
           | (((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
               << 8U) | (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__byte0)));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout 
        = (0xfU & ((2U > (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                    ? ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__CMD_38H) 
                       >> (7U & (((IData)(7U) - VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter), 2U)) 
                                 - (IData)(3U)))) : 
                   ((2U == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                     ? (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                        >> 0x14U) : ((3U == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                      ? (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                         >> 0x10U) : 
                                     ((4U == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                       ? (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                          >> 0xcU) : 
                                      ((5U == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                        ? (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                           >> 8U) : 
                                       ((6U == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                         ? (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                            >> 4U) : 
                                        ((7U == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                          ? vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                          : ((8U == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                              ? ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__byte0) 
                                                 >> 4U)
                                              : ((9U 
                                                  == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                  ? (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__byte0)
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                   ? 
                                                  ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                                   >> 4U)
                                                   : 
                                                  ((0xbU 
                                                    == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                    ? (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__byte1)
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                     ? 
                                                    (vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                                     >> 0x14U)
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                      ? 
                                                     (vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                                      >> 0x10U)
                                                      : 
                                                     ((0xeU 
                                                       == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                       ? 
                                                      (vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                                       >> 0x1cU)
                                                       : 
                                                      (vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                                       >> 0x18U))))))))))))))));
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__in_paddr 
        = vlSelfRef.lsdram_apb__DOT__auto_in_paddr;
    vlSelfRef.lpsram__DOT__mpsram__DOT__in_paddr = vlSelfRef.lpsram__DOT__auto_in_paddr;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__wb_dat_o 
        = vlSelfRef.luart__DOT__muart__DOT__reg_dat8_r;
    vlSelfRef.apbxbar__DOT__auto_anon_out_0_paddr = vlSelfRef._apbxbar_auto_anon_out_0_paddr;
    vlSelfRef.lspi__DOT__auto_in_paddr = vlSelfRef._apbxbar_auto_anon_out_0_paddr;
    vlSelfRef.apbxbar__DOT__auto_anon_out_3_paddr = vlSelfRef._apbxbar_auto_anon_out_3_paddr;
    vlSelfRef.lgpio__DOT__auto_in_paddr = vlSelfRef._apbxbar_auto_anon_out_3_paddr;
    vlSelfRef.apbxbar__DOT__auto_anon_out_1_paddr = vlSelfRef._apbxbar_auto_anon_out_1_paddr;
    vlSelfRef.luart__DOT__auto_in_paddr = vlSelfRef._apbxbar_auto_anon_out_1_paddr;
    vlSelfRef._apbxbar_auto_anon_out_0_psel = ((IData)(vlSelfRef.apbxbar__DOT__sel_0) 
                                               & (IData)(vlSelfRef._axi42apb_auto_out_psel));
    vlSelfRef._apbxbar_auto_anon_out_0_penable = ((IData)(vlSelfRef.apbxbar__DOT__sel_0) 
                                                  & (IData)(vlSelfRef.axi42apb__DOT__nodeOut_penable));
    if (vlSelfRef.lspi__DOT__mspi__DOT__is_flash) {
        vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_dat_i 
            = vlSelfRef.lspi__DOT__mspi__DOT__flash_pwdata;
        vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_sel_i 
            = vlSelfRef.lspi__DOT__mspi__DOT__flash_pstrb;
        vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_we_i 
            = vlSelfRef.lspi__DOT__mspi__DOT__flash_pwrite;
        lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_adr_i 
            = (0x1fU & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__flash_paddr));
        vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_stb_i 
            = vlSelfRef.lspi__DOT__mspi__DOT__flash_psel;
        vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_cyc_i 
            = vlSelfRef.lspi__DOT__mspi__DOT__flash_penable;
    } else {
        vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_dat_i 
            = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w;
        vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_sel_i 
            = vlSelfRef._axi42apb_auto_out_pstrb;
        vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_we_i 
            = vlSelfRef._axi42apb_auto_out_pwrite;
        lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_adr_i 
            = (0x1fU & vlSelfRef._axi42apb_auto_out_paddr);
        vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_stb_i 
            = vlSelfRef._apbxbar_auto_anon_out_0_psel;
        vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_cyc_i 
            = vlSelfRef._apbxbar_auto_anon_out_0_penable;
    }
    vlSelfRef.apbxbar__DOT__auto_anon_out_5_psel = vlSelfRef._apbxbar_auto_anon_out_5_psel;
    vlSelfRef.lvga__DOT__auto_in_psel = vlSelfRef._apbxbar_auto_anon_out_5_psel;
    vlSelfRef.apbxbar__DOT__auto_anon_out_5_penable 
        = vlSelfRef._apbxbar_auto_anon_out_5_penable;
    vlSelfRef.lvga__DOT__auto_in_penable = vlSelfRef._apbxbar_auto_anon_out_5_penable;
    vlSelfRef._lvga_auto_in_pready = ((IData)(vlSelfRef._apbxbar_auto_anon_out_5_penable) 
                                      & (IData)(vlSelfRef._apbxbar_auto_anon_out_5_psel));
    vlSelfRef._apbxbar_auto_anon_out_3_psel = ((IData)(vlSelfRef.apbxbar__DOT__sel_3) 
                                               & (IData)(vlSelfRef._axi42apb_auto_out_psel));
    vlSelfRef._apbxbar_auto_anon_out_3_penable = ((IData)(vlSelfRef.apbxbar__DOT__sel_3) 
                                                  & (IData)(vlSelfRef.axi42apb__DOT__nodeOut_penable));
    vlSelfRef._apbxbar_auto_anon_out_6_psel = ((IData)(vlSelfRef.apbxbar__DOT__sel_6) 
                                               & (IData)(vlSelfRef._axi42apb_auto_out_psel));
    vlSelfRef._apbxbar_auto_anon_out_6_penable = ((IData)(vlSelfRef.apbxbar__DOT__sel_6) 
                                                  & (IData)(vlSelfRef.axi42apb__DOT__nodeOut_penable));
    vlSelfRef._apbdelay_delayer_in_pslverr = (((IData)(vlSelfRef.apbxbar__DOT__sel_0) 
                                               & (IData)(vlSelfRef._lspi_auto_in_pslverr)) 
                                              | (((IData)(vlSelfRef.apbxbar__DOT__sel_1) 
                                                  & (IData)(vlSelfRef._luart_auto_in_pslverr)) 
                                                 | (((IData)(vlSelfRef.apbxbar__DOT__sel_2) 
                                                     & (IData)(vlSelfRef._lpsram_auto_in_pslverr)) 
                                                    | (((IData)(vlSelfRef.apbxbar__DOT__sel_3) 
                                                        & (IData)(vlSelfRef._lgpio_auto_in_pslverr)) 
                                                       | (((IData)(vlSelfRef.apbxbar__DOT__sel_4) 
                                                           & (IData)(vlSelfRef._lkeyboard_auto_in_pslverr)) 
                                                          | (((IData)(vlSelfRef.apbxbar__DOT__sel_5) 
                                                              & (IData)(vlSelfRef._lvga_auto_in_pslverr)) 
                                                             | ((IData)(vlSelfRef.apbxbar__DOT__sel_6) 
                                                                & (IData)(vlSelfRef._lsdram_apb_auto_in_pslverr))))))));
    vlSelfRef._apbxbar_auto_anon_out_4_psel = ((IData)(vlSelfRef.apbxbar__DOT__sel_4) 
                                               & (IData)(vlSelfRef._axi42apb_auto_out_psel));
    vlSelfRef._apbxbar_auto_anon_out_4_penable = ((IData)(vlSelfRef.apbxbar__DOT__sel_4) 
                                                  & (IData)(vlSelfRef.axi42apb__DOT__nodeOut_penable));
    vlSelfRef.apbxbar__DOT__auto_anon_out_1_penable 
        = vlSelfRef._apbxbar_auto_anon_out_1_penable;
    vlSelfRef.luart__DOT__auto_in_penable = vlSelfRef._apbxbar_auto_anon_out_1_penable;
    if (vlSelfRef._apbxbar_auto_anon_out_1_psel) {
        vlSelfRef.apbxbar__DOT__auto_anon_out_1_psel = 1U;
        vlSelfRef.luart__DOT__auto_in_psel = 1U;
        vlSelfRef._luart_auto_in_prdata = (((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_dat8_r) 
                                            << 0x18U) 
                                           | (((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_dat8_r) 
                                               << 0x10U) 
                                              | (((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 8U) 
                                                 | (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_dat8_r))));
        vlSelfRef._luart_auto_in_pready = vlSelfRef._apbxbar_auto_anon_out_1_penable;
    } else {
        vlSelfRef.apbxbar__DOT__auto_anon_out_1_psel = 0U;
        vlSelfRef.luart__DOT__auto_in_psel = 0U;
        vlSelfRef._luart_auto_in_prdata = 0U;
        vlSelfRef._luart_auto_in_pready = 0U;
    }
    vlSelfRef.apbxbar__DOT__auto_anon_out_2_penable 
        = vlSelfRef._apbxbar_auto_anon_out_2_penable;
    vlSelfRef.lpsram__DOT__auto_in_penable = vlSelfRef._apbxbar_auto_anon_out_2_penable;
    vlSelfRef.apbxbar__DOT__auto_anon_out_2_psel = vlSelfRef._apbxbar_auto_anon_out_2_psel;
    vlSelfRef.lpsram__DOT__auto_in_psel = vlSelfRef._apbxbar_auto_anon_out_2_psel;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__wb_valid 
        = vlSelfRef._apbxbar_auto_anon_out_2_psel;
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
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__sel_i 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__in_pstrb;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_done;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__line 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__wdata;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dout 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_addr_i 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__in_paddr;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__in_paddr;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat_i 
        = vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_dat_i;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_sel_i 
        = vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_sel_i;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_we_i 
        = vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_we_i;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i 
        = lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_adr_i;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat 
        = ((0U == (7U & ((IData)(lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_adr_i) 
                         >> 2U))) ? vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[0U]
            : ((1U == (7U & ((IData)(lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_adr_i) 
                             >> 2U))) ? vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[1U]
                : ((2U == (7U & ((IData)(lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_adr_i) 
                                 >> 2U))) ? vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[2U]
                    : ((3U == (7U & ((IData)(lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_adr_i) 
                                     >> 2U))) ? vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[3U]
                        : ((4U == (7U & ((IData)(lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_adr_i) 
                                         >> 2U))) ? (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                            : ((5U == (7U & ((IData)(lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_adr_i) 
                                             >> 2U)))
                                ? (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                                : ((6U == (7U & ((IData)(lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_adr_i) 
                                                 >> 2U)))
                                    ? (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss)
                                    : 0U)))))));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__wb_dat_i 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
    vlSelfRef.apbxbar__DOT__auto_anon_out_0_psel = vlSelfRef._apbxbar_auto_anon_out_0_psel;
    vlSelfRef.lspi__DOT__auto_in_psel = vlSelfRef._apbxbar_auto_anon_out_0_psel;
    vlSelfRef.apbxbar__DOT__auto_anon_out_0_penable 
        = vlSelfRef._apbxbar_auto_anon_out_0_penable;
    vlSelfRef.lspi__DOT__auto_in_penable = vlSelfRef._apbxbar_auto_anon_out_0_penable;
    vlSelfRef.lvga__DOT__mvga__DOT__in_psel = vlSelfRef.lvga__DOT__auto_in_psel;
    vlSelfRef.lvga__DOT__mvga__DOT__in_penable = vlSelfRef.lvga__DOT__auto_in_penable;
    vlSelfRef.apbxbar__DOT__auto_anon_out_5_pready 
        = vlSelfRef._lvga_auto_in_pready;
    vlSelfRef.lvga__DOT__auto_in_pready = vlSelfRef._lvga_auto_in_pready;
    vlSelfRef.apbxbar__DOT__auto_anon_out_3_psel = vlSelfRef._apbxbar_auto_anon_out_3_psel;
    vlSelfRef.lgpio__DOT__auto_in_psel = vlSelfRef._apbxbar_auto_anon_out_3_psel;
    vlSelfRef.apbxbar__DOT__auto_anon_out_3_penable 
        = vlSelfRef._apbxbar_auto_anon_out_3_penable;
    vlSelfRef.lgpio__DOT__auto_in_penable = vlSelfRef._apbxbar_auto_anon_out_3_penable;
    vlSelfRef._lgpio_auto_in_pready = ((IData)(vlSelfRef._apbxbar_auto_anon_out_3_penable) 
                                       & (IData)(vlSelfRef._apbxbar_auto_anon_out_3_psel));
    vlSelfRef.apbxbar__DOT__auto_anon_out_6_psel = vlSelfRef._apbxbar_auto_anon_out_6_psel;
    vlSelfRef.lsdram_apb__DOT__auto_in_psel = vlSelfRef._apbxbar_auto_anon_out_6_psel;
    vlSelfRef.apbxbar__DOT__auto_anon_out_6_penable 
        = vlSelfRef._apbxbar_auto_anon_out_6_penable;
    vlSelfRef.lsdram_apb__DOT__auto_in_penable = vlSelfRef._apbxbar_auto_anon_out_6_penable;
    lsdram_apb__DOT__msdram__DOT____VdfgRegularize_hc85f9e4c_0_0 
        = (((~ (IData)(vlSelfRef._apbxbar_auto_anon_out_6_penable)) 
            & (IData)(vlSelfRef._apbxbar_auto_anon_out_6_psel)) 
           | (1U == (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__state)));
    vlSelfRef.apbdelay_delayer__DOT__in_pslverr = vlSelfRef._apbdelay_delayer_in_pslverr;
    vlSelfRef.axi42apb__DOT__auto_out_pslverr = vlSelfRef._apbdelay_delayer_in_pslverr;
    vlSelfRef._apbxbar_auto_anon_in_pslverr = vlSelfRef._apbdelay_delayer_in_pslverr;
    vlSelfRef.axi42apb__DOT__resp = ((IData)(vlSelfRef._apbdelay_delayer_in_pslverr) 
                                     << 1U);
    vlSelfRef.apbxbar__DOT__auto_anon_out_4_psel = vlSelfRef._apbxbar_auto_anon_out_4_psel;
    vlSelfRef.lkeyboard__DOT__auto_in_psel = vlSelfRef._apbxbar_auto_anon_out_4_psel;
    vlSelfRef.apbxbar__DOT__auto_anon_out_4_penable 
        = vlSelfRef._apbxbar_auto_anon_out_4_penable;
    vlSelfRef.lkeyboard__DOT__auto_in_penable = vlSelfRef._apbxbar_auto_anon_out_4_penable;
    vlSelfRef._lkeyboard_auto_in_pready = ((0x10011000U 
                                            == vlSelfRef._apbxbar_auto_anon_out_4_paddr) 
                                           & ((IData)(vlSelfRef._apbxbar_auto_anon_out_4_penable) 
                                              & (IData)(vlSelfRef._apbxbar_auto_anon_out_4_psel)));
    vlSelfRef.luart__DOT__muart__DOT__in_penable = vlSelfRef.luart__DOT__auto_in_penable;
    vlSelfRef.luart__DOT__muart__DOT__in_psel = vlSelfRef.luart__DOT__auto_in_psel;
    vlSelfRef.apbxbar__DOT__auto_anon_out_1_prdata 
        = vlSelfRef._luart_auto_in_prdata;
    vlSelfRef.luart__DOT__auto_in_prdata = vlSelfRef._luart_auto_in_prdata;
    vlSelfRef.apbxbar__DOT__auto_anon_out_1_pready 
        = vlSelfRef._luart_auto_in_pready;
    vlSelfRef.luart__DOT__auto_in_pready = vlSelfRef._luart_auto_in_pready;
    vlSelfRef.lpsram__DOT__mpsram__DOT__in_penable 
        = vlSelfRef.lpsram__DOT__auto_in_penable;
    vlSelfRef.lpsram__DOT__mpsram__DOT__in_psel = vlSelfRef.lpsram__DOT__auto_in_psel;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__wb_re 
        = ((~ (IData)(vlSelfRef._axi42apb_auto_out_pwrite)) 
           & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__wb_valid));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__wb_we 
        = ((IData)(vlSelfRef._axi42apb_auto_out_pwrite) 
           & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__wb_valid));
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
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat_i;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_sel_i;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__wb_dat_i 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__wb_dat_i;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__di 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in;
    vlSelfRef.lspi__DOT__mspi__DOT__in_psel = vlSelfRef.lspi__DOT__auto_in_psel;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_stb_i 
        = vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_stb_i;
    vlSelfRef.lspi__DOT__mspi__DOT__in_penable = vlSelfRef.lspi__DOT__auto_in_penable;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_cyc_i 
        = vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_cyc_i;
    lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0 
        = ((IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_cyc_i) 
           & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_stb_i));
    vlSelfRef.lvga__DOT__mvga__DOT__in_pready = vlSelfRef.lvga__DOT__auto_in_pready;
    vlSelfRef.lgpio__DOT__mgpio__DOT__in_psel = vlSelfRef.lgpio__DOT__auto_in_psel;
    vlSelfRef.lgpio__DOT__mgpio__DOT__in_penable = vlSelfRef.lgpio__DOT__auto_in_penable;
    vlSelfRef.apbxbar__DOT__auto_anon_out_3_pready 
        = vlSelfRef._lgpio_auto_in_pready;
    vlSelfRef.lgpio__DOT__auto_in_pready = vlSelfRef._lgpio_auto_in_pready;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__in_psel 
        = vlSelfRef.lsdram_apb__DOT__auto_in_psel;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__in_penable 
        = vlSelfRef.lsdram_apb__DOT__auto_in_penable;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__is_write 
        = ((IData)(lsdram_apb__DOT__msdram__DOT____VdfgRegularize_hc85f9e4c_0_0) 
           & (IData)(vlSelfRef._axi42apb_auto_out_pwrite));
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__is_read 
        = ((~ (IData)(vlSelfRef._axi42apb_auto_out_pwrite)) 
           & (IData)(lsdram_apb__DOT__msdram__DOT____VdfgRegularize_hc85f9e4c_0_0));
    vlSelfRef.apbxbar__DOT__auto_anon_in_pslverr = vlSelfRef._apbxbar_auto_anon_in_pslverr;
    vlSelfRef.apbdelay_delayer__DOT__out_pslverr = vlSelfRef._apbxbar_auto_anon_in_pslverr;
    vlSelfRef._axi42apb_auto_in_bresp = ((IData)(vlSelfRef.axi42apb__DOT__nodeOut_penable)
                                          ? (IData)(vlSelfRef.axi42apb__DOT__resp)
                                          : (IData)(vlSelfRef.axi42apb__DOT__resp_hold_r));
    vlSelfRef.lkeyboard__DOT__mps2__DOT__in_psel = vlSelfRef.lkeyboard__DOT__auto_in_psel;
    vlSelfRef.lkeyboard__DOT__mps2__DOT__in_penable 
        = vlSelfRef.lkeyboard__DOT__auto_in_penable;
    if (vlSelfRef._lkeyboard_auto_in_pready) {
        vlSelfRef.apbxbar__DOT__auto_anon_out_4_pready = 1U;
        vlSelfRef.lkeyboard__DOT__auto_in_pready = 1U;
        vlSelfRef._lkeyboard_auto_in_prdata = vlSelfRef.lkeyboard__DOT__mps2__DOT__fifo
            [vlSelfRef.lkeyboard__DOT__mps2__DOT__r_ptr];
    } else {
        vlSelfRef.apbxbar__DOT__auto_anon_out_4_pready = 0U;
        vlSelfRef.lkeyboard__DOT__auto_in_pready = 0U;
        vlSelfRef._lkeyboard_auto_in_prdata = 0U;
    }
    vlSelfRef.luart__DOT__muart__DOT__in_prdata = vlSelfRef.luart__DOT__auto_in_prdata;
    vlSelfRef.luart__DOT__muart__DOT__in_pready = vlSelfRef.luart__DOT__auto_in_pready;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__in_psel;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__stb_i 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__in_psel;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd 
        = ((~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    if (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__state) {
        if (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__state) {
            vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__nstate 
                = (1U & (~ (((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_done) 
                             & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)) 
                            | ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_done) 
                               & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__wb_re)))));
        }
    } else {
        vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__nstate 
            = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__wb_valid;
    }
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr 
        = ((~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    if (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n) {
        if (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) {
            vlSelfRef.psram_ce_n = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n;
            vlSelfRef.psram_sck = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
            vlSelfRef.lpsram__DOT__mpsram__DOT__dout 
                = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout;
            vlSelfRef.lpsram__DOT__mpsram__DOT__douten 
                = (0xfU & (- (IData)((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_doe))));
        } else {
            vlSelfRef.psram_ce_n = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n;
            vlSelfRef.psram_sck = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
            vlSelfRef.lpsram__DOT__mpsram__DOT__dout 
                = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_dout;
            vlSelfRef.lpsram__DOT__mpsram__DOT__douten 
                = (0xfU & (- (IData)((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_doe))));
        }
    } else {
        vlSelfRef.psram_ce_n = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n;
        vlSelfRef.psram_sck = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck;
        vlSelfRef.lpsram__DOT__mpsram__DOT__dout = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout;
        vlSelfRef.lpsram__DOT__mpsram__DOT__douten 
            = (0xfU & (- (IData)((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_doe))));
    }
    vlSelfRef.lpsram__DOT__mpsram__DOT__ack = ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                                ? (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                                : (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_done));
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
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_divider_sel 
        = ((IData)(lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
           & (0x14U == (0x1cU & (IData)(lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_adr_i))));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_ctrl_sel 
        = ((IData)(lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
           & (0x10U == (0x1cU & (IData)(lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_adr_i))));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_ss_sel 
        = ((IData)(lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
           & (0x18U == (0x1cU & (IData)(lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_adr_i))));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel 
        = (((((IData)(lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
              & (0xcU == (0x1cU & (IData)(lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_adr_i)))) 
             << 3U) | (((IData)(lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                        & (8U == (0x1cU & (IData)(lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_adr_i)))) 
                       << 2U)) | ((((IData)(lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                    & (4U == (0x1cU 
                                              & (IData)(lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_adr_i)))) 
                                   << 1U) | ((IData)(lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                             & (0U 
                                                == 
                                                (0x1cU 
                                                 & (IData)(lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_adr_i))))));
    vlSelfRef.lgpio__DOT__mgpio__DOT__in_pready = vlSelfRef.lgpio__DOT__auto_in_pready;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_wr_w 
        = ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__is_write)
            ? (IData)(vlSelfRef._axi42apb_auto_out_pstrb)
            : 0U);
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_rd_i 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__is_read;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_rd_w 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__is_read;
    vlSelfRef.axi42apb__DOT__auto_in_bresp = vlSelfRef._axi42apb_auto_in_bresp;
    vlSelfRef.axi42apb__DOT__resp_hold = vlSelfRef._axi42apb_auto_in_bresp;
    vlSelfRef.axi4buf__DOT__auto_out_bresp = vlSelfRef._axi42apb_auto_in_bresp;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT____Vcellinp__ram_ext__W0_data 
        = (((IData)(vlSelfRef.axi42apb__DOT__bid_reg) 
            << 2U) | (IData)(vlSelfRef._axi42apb_auto_in_bresp));
    vlSelfRef._axi42apb_auto_in_rresp = vlSelfRef._axi42apb_auto_in_bresp;
    vlSelfRef.lkeyboard__DOT__mps2__DOT__in_pready 
        = vlSelfRef.lkeyboard__DOT__auto_in_pready;
    vlSelfRef.apbxbar__DOT__auto_anon_out_4_prdata 
        = vlSelfRef._lkeyboard_auto_in_prdata;
    vlSelfRef.lkeyboard__DOT__auto_in_prdata = vlSelfRef._lkeyboard_auto_in_prdata;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd;
    if (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state) {
        if (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state) {
            vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
                = (1U & (~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)));
        }
    } else {
        vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
            = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd;
    }
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr;
    if (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
        if (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
            vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
                = (1U & (~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)));
        }
    } else {
        vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
            = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr;
    }
    vlSelfRef.lpsram__DOT__qspi_bundle_ce_n = vlSelfRef.psram_ce_n;
    vlSelfRef.lpsram__DOT__qspi_bundle_sck = vlSelfRef.psram_sck;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__dout 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__dout;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__ack_o 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__ack;
    vlSelfRef._lpsram_auto_in_pready = ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__ack) 
                                        & (IData)(vlSelfRef._apbxbar_auto_anon_out_2_psel));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__douten 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__douten;
    vlSelfRef.psram_dio__en = (0xfU & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__douten));
    vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0 
        = ((0xcU & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0)) 
           | (3U & ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__douten) 
                    & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__dout))));
    vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1 
        = ((3U & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1)) 
           | (0xcU & ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__douten) 
                      & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__dout))));
    vlSelfRef.axi4xbar__DOT__auto_anon_out_rlast = vlSelfRef._axi4frag_auto_in_rlast;
    vlSelfRef.axi4frag__DOT__auto_in_rlast = vlSelfRef._axi4frag_auto_in_rlast;
    vlSelfRef._axi4xbar_auto_anon_in_rlast = vlSelfRef._axi4frag_auto_in_rlast;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_bresp = vlSelfRef._axi4xbar_auto_anon_in_bresp;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_bresp 
        = vlSelfRef._axi4xbar_auto_anon_in_bresp;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_bvalid = vlSelfRef._axi4frag_auto_in_bvalid;
    vlSelfRef.axi4frag__DOT__auto_in_bvalid = vlSelfRef._axi4frag_auto_in_bvalid;
    vlSelfRef._axi4xbar_auto_anon_in_bvalid = vlSelfRef._axi4frag_auto_in_bvalid;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch 
        = ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel) 
           & (- (IData)((IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_we_i))));
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_wr_i 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_wr_w;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w 
        = ((0U != (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_wr_w)) 
           | (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__is_read));
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__io_enq_bits_resp 
        = vlSelfRef.axi4buf__DOT__auto_out_bresp;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_data 
        = vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT____Vcellinp__ram_ext__W0_data;
    vlSelfRef.axi42apb__DOT__auto_in_rresp = vlSelfRef._axi42apb_auto_in_rresp;
    vlSelfRef.axi4buf__DOT__auto_out_rresp = vlSelfRef._axi42apb_auto_in_rresp;
    vlSelfRef.lkeyboard__DOT__mps2__DOT__in_prdata 
        = vlSelfRef.lkeyboard__DOT__auto_in_prdata;
    vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_ce_n = vlSelfRef.lpsram__DOT__qspi_bundle_ce_n;
    vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_sck = vlSelfRef.lpsram__DOT__qspi_bundle_sck;
    vlSelfRef.apbxbar__DOT__auto_anon_out_2_pready 
        = vlSelfRef._lpsram_auto_in_pready;
    vlSelfRef.lpsram__DOT__auto_in_pready = vlSelfRef._lpsram_auto_in_pready;
    vlSelfRef._apbdelay_delayer_in_pready = (1U & (~ 
                                                   (((~ (IData)(vlSelfRef._lspi_auto_in_pready)) 
                                                     & (IData)(vlSelfRef.apbxbar__DOT__sel_0)) 
                                                    | (((~ (IData)(vlSelfRef._luart_auto_in_pready)) 
                                                        & (IData)(vlSelfRef.apbxbar__DOT__sel_1)) 
                                                       | (((~ (IData)(vlSelfRef._lpsram_auto_in_pready)) 
                                                           & (IData)(vlSelfRef.apbxbar__DOT__sel_2)) 
                                                          | (((~ (IData)(vlSelfRef._lgpio_auto_in_pready)) 
                                                              & (IData)(vlSelfRef.apbxbar__DOT__sel_3)) 
                                                             | (((~ (IData)(vlSelfRef._lkeyboard_auto_in_pready)) 
                                                                 & (IData)(vlSelfRef.apbxbar__DOT__sel_4)) 
                                                                | (((~ (IData)(vlSelfRef._lvga_auto_in_pready)) 
                                                                    & (IData)(vlSelfRef.apbxbar__DOT__sel_5)) 
                                                                   | ((~ (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q)) 
                                                                      & (IData)(vlSelfRef.apbxbar__DOT__sel_6))))))))));
    vlSelfRef.axi4xbar__DOT__auto_anon_in_rlast = vlSelfRef._axi4xbar_auto_anon_in_rlast;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_rlast 
        = vlSelfRef._axi4xbar_auto_anon_in_rlast;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_bvalid = vlSelfRef._axi4xbar_auto_anon_in_bvalid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_bvalid 
        = vlSelfRef._axi4xbar_auto_anon_in_bvalid;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q;
    if ((8U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
            = ((4U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                ? 0U : ((2U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                         ? 0U : ((1U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                                  ? 6U : 2U)));
        if ((1U & (~ ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 1U)))) {
                vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                    = ((1U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                        ? 2U : ((9U == (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r))
                                 ? 9U : 3U));
            }
        }
    } else if ((4U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 0U;
            if ((1U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
                if ((((~ (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q)) 
                      & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w)) 
                     & (0U != (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_wr_w)))) {
                    if ((((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                          >> (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w)) 
                         & ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_row_w) 
                            == vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q
                            [vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w]))) {
                        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 6U;
                    }
                }
            } else {
                vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 7U;
            }
        } else if ((1U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 2U;
            vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
            if ((((~ (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q)) 
                  & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w)) 
                 & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_rd_w))) {
                if ((((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                      >> (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w)) 
                     & ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_row_w) 
                        == vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q
                        [vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w]))) {
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 0U;
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 4U;
                }
            }
        } else {
            vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 0U;
            vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
                = (0xfU & 2U);
            vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r;
        } else {
            vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
                = (0xfU & 0U);
            if (vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q) {
                vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                    = ((0U != (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q))
                        ? 8U : 9U);
                vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r = 9U;
            } else if (vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w) {
                if ((((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                      >> (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w)) 
                     & ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_row_w) 
                        == vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q
                        [vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w]))) {
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                        = ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__is_read)
                            ? 4U : 6U);
                } else if ((1U & ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                                  >> (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w)))) {
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 8U;
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r 
                        = ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__is_read)
                            ? 4U : 6U);
                } else {
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 3U;
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r 
                        = ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__is_read)
                            ? 4U : 6U);
                }
            }
        }
    } else if ((1U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
            = (0xfU & ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q) 
                       - (IData)(1U)));
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
            = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q;
    } else {
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
            = (0xfU & 0U);
        if (vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q) {
            vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
        }
    }
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_resp 
        = vlSelfRef.axi4buf__DOT__auto_out_rresp;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__ce_n 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_ce_n;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__sck 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_sck;
    vlSelfRef.lpsram__DOT__mpsram__DOT__in_pready = vlSelfRef.lpsram__DOT__auto_in_pready;
    vlSelfRef.apbdelay_delayer__DOT__in_pready = vlSelfRef._apbdelay_delayer_in_pready;
    vlSelfRef.axi42apb__DOT__auto_out_pready = vlSelfRef._apbdelay_delayer_in_pready;
    vlSelfRef._apbxbar_auto_anon_in_pready = vlSelfRef._apbdelay_delayer_in_pready;
    axi42apb__DOT____VdfgRegularize_h456d727f_0_0 = 
        (((IData)(vlSelfRef._apbdelay_delayer_in_pready) 
          & (IData)(vlSelfRef.axi42apb__DOT__nodeOut_penable)) 
         | (IData)(vlSelfRef.axi42apb__DOT___nodeIn_bvalid_T_2));
    vlSelfRef.apbxbar__DOT__auto_anon_in_pready = vlSelfRef._apbxbar_auto_anon_in_pready;
    vlSelfRef.apbdelay_delayer__DOT__out_pready = vlSelfRef._apbxbar_auto_anon_in_pready;
    vlSelfRef.axi42apb__DOT__nodeIn_rvalid = ((~ (IData)(vlSelfRef._axi42apb_auto_out_pwrite)) 
                                              & (IData)(axi42apb__DOT____VdfgRegularize_h456d727f_0_0));
    vlSelfRef.axi42apb__DOT__nodeIn_bvalid = ((IData)(vlSelfRef._axi42apb_auto_out_pwrite) 
                                              & (IData)(axi42apb__DOT____VdfgRegularize_h456d727f_0_0));
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq 
        = ((IData)(vlSelfRef._axi4buf_auto_out_rready) 
           & (IData)(vlSelfRef.axi42apb__DOT__nodeIn_rvalid));
    vlSelfRef._axi42apb_auto_in_rvalid = vlSelfRef.axi42apb__DOT__nodeIn_rvalid;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq 
        = ((IData)(vlSelfRef._axi4buf_auto_out_bready) 
           & (IData)(vlSelfRef.axi42apb__DOT__nodeIn_bvalid));
    vlSelfRef._axi42apb_auto_in_bvalid = vlSelfRef.axi42apb__DOT__nodeIn_bvalid;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en 
        = vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq;
    vlSelfRef.axi42apb__DOT__auto_in_rvalid = vlSelfRef._axi42apb_auto_in_rvalid;
    vlSelfRef.axi4buf__DOT__auto_out_rvalid = vlSelfRef._axi42apb_auto_in_rvalid;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en 
        = vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq;
    vlSelfRef.axi42apb__DOT__auto_in_bvalid = vlSelfRef._axi42apb_auto_in_bvalid;
    vlSelfRef.axi4buf__DOT__auto_out_bvalid = vlSelfRef._axi42apb_auto_in_bvalid;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__io_enq_valid 
        = vlSelfRef.axi4buf__DOT__auto_out_rvalid;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__io_enq_valid 
        = vlSelfRef.axi4buf__DOT__auto_out_bvalid;
}

void VysyxSoCFull_ysyxSoCASIC____Vdpiimwrap_lmrom__DOT__mrom__DOT__mrom_read_TOP__ysyxSoCFull__asic(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef._cpu_auto_master_out_wlast = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_wlast;
    vlSelfRef._cpu_auto_master_out_arburst = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_arburst;
    vlSelfRef._cpu_auto_master_out_awburst = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_awburst;
    vlSelfRef._cpu_auto_master_out_arlen = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_arlen;
    vlSelfRef._cpu_auto_master_out_awlen = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_awlen;
    vlSelfRef._cpu_auto_master_out_arid = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_arid;
    vlSelfRef._cpu_auto_master_out_awid = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_awid;
    vlSelfRef._cpu_auto_master_out_arsize = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_arsize;
    vlSelfRef._cpu_auto_master_out_awsize = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_awsize;
    vlSelfRef._cpu_auto_master_out_rready = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_rready;
    vlSelfRef._cpu_auto_master_out_bready = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_bready;
    vlSelfRef._cpu_auto_master_out_wdata = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_wdata;
    vlSelfRef._cpu_auto_master_out_wstrb = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_wstrb;
    vlSelfRef._cpu_auto_master_out_wvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_wvalid;
    vlSelfRef._cpu_auto_master_out_awvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_awvalid;
    vlSelfRef._cpu_auto_master_out_awaddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_awaddr;
    vlSelfRef._cpu_auto_master_out_arvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_arvalid;
    vlSelfRef._cpu_auto_master_out_araddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu.auto_master_out_araddr;
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
    vlSelfRef.lmrom__DOT__reset = vlSelfRef.reset;
    vlSelfRef.axi4ram__DOT__reset = vlSelfRef.reset;
    vlSelfRef.apbdelay_delayer__DOT__reset = vlSelfRef.reset;
    vlSelfRef.axi42apb__DOT__reset = vlSelfRef.reset;
    vlSelfRef.axi4xbar_1__DOT__reset = vlSelfRef.reset;
    vlSelfRef.lgpio__DOT__reset = vlSelfRef.reset;
    vlSelfRef.lkeyboard__DOT__reset = vlSelfRef.reset;
    vlSelfRef.lvga__DOT__reset = vlSelfRef.reset;
    vlSelfRef.cpu_reset_chain__DOT__io_d = vlSelfRef.reset;
    vlSelfRef.lpsram__DOT__reset = vlSelfRef.reset;
    vlSelfRef.lsdram_apb__DOT__reset = vlSelfRef.reset;
    vlSelfRef.axi4frag__DOT__reset = vlSelfRef.reset;
    vlSelfRef.lspi__DOT__reset = vlSelfRef.reset;
    vlSelfRef.axi4buf__DOT__reset = vlSelfRef.reset;
    vlSelfRef.luart__DOT__reset = vlSelfRef.reset;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu.reset = ((IData)(vlSelfRef.cpu_reset_chain__DOT__output_chain__DOT__sync_0) 
                                                  | (IData)(vlSelfRef.reset));
    vlSelfRef.axi4yank__DOT__reset = vlSelfRef.reset;
    vlSelfRef.luart__DOT__muart__DOT____VdfgRegularize_hc00137df_0_0 
        = ((~ (IData)(vlSelfRef.reset)) & ((~ (IData)(vlSelfRef._apbxbar_auto_anon_out_1_penable)) 
                                           & (IData)(vlSelfRef._apbxbar_auto_anon_out_1_psel)));
    vlSelfRef.lgpio__DOT__mgpio__DOT__state = ((IData)(vlSelfRef.reset)
                                                ? 0U
                                                : (
                                                   ((IData)(vlSelfRef._apbxbar_auto_anon_out_3_psel) 
                                                    & (~ (IData)(vlSelfRef._apbxbar_auto_anon_out_3_penable)))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelfRef._apbxbar_auto_anon_out_3_penable)
                                                     ? 2U
                                                     : 0U)));
    vlSelfRef.lpsram__DOT__qspi_bundle_dio = vlSelfRef.psram_dio;
    vlSelfRef.lpsram__DOT__mpsram__DOT__din = vlSelfRef.psram_dio;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_din 
        = vlSelfRef.psram_dio;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_din 
        = vlSelfRef.psram_dio;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
        = vlSelfRef.sdram_dq;
    vlSelfRef.lsdram_apb__DOT__sdram_bundle_dq = vlSelfRef.sdram_dq;
    vlSelfRef.lspi__DOT__spi_bundle_miso = vlSelfRef.spi_miso;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_wlast = vlSelfRef._cpu_auto_master_out_wlast;
    if (vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__full) {
        vlSelfRef.axi4frag__DOT___in_wdeq_q_io_deq_bits_last 
            = (1U & (IData)(vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__ram));
        vlSelfRef._axi4frag_auto_out_wdata = (IData)(
                                                     (vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                      >> 5U));
        vlSelfRef._axi4frag_auto_out_wstrb = (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                         >> 1U)));
    } else {
        vlSelfRef.axi4frag__DOT___in_wdeq_q_io_deq_bits_last 
            = (1U & (IData)(vlSelfRef._cpu_auto_master_out_wlast));
        vlSelfRef._axi4frag_auto_out_wdata = vlSelfRef._cpu_auto_master_out_wdata;
        vlSelfRef._axi4frag_auto_out_wstrb = (0xfU 
                                              & (IData)(vlSelfRef._cpu_auto_master_out_wstrb));
    }
    vlSelfRef._axi4xbar_auto_anon_out_wlast = vlSelfRef._cpu_auto_master_out_wlast;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_arburst = vlSelfRef._cpu_auto_master_out_arburst;
    vlSelfRef._axi4xbar_auto_anon_out_arburst = vlSelfRef._cpu_auto_master_out_arburst;
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
        vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_addr 
            = (IData)((vlSelfRef.axi4frag__DOT__deq_q__DOT__ram 
                       >> 0xdU));
    } else {
        vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_burst 
            = (3U & (IData)(vlSelfRef._cpu_auto_master_out_arburst));
        vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_len 
            = (0xffU & (IData)(vlSelfRef._cpu_auto_master_out_arlen));
        vlSelfRef._axi4frag_auto_out_arid = (0xfU & (IData)(vlSelfRef._cpu_auto_master_out_arid));
        vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_size 
            = (7U & (IData)(vlSelfRef._cpu_auto_master_out_arsize));
        vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_addr 
            = vlSelfRef._cpu_auto_master_out_araddr;
    }
    vlSelfRef.axi4xbar__DOT__auto_anon_in_awburst = vlSelfRef._cpu_auto_master_out_awburst;
    vlSelfRef._axi4xbar_auto_anon_out_awburst = vlSelfRef._cpu_auto_master_out_awburst;
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
        vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_addr 
            = (IData)((vlSelfRef.axi4frag__DOT__deq_q_1__DOT__ram 
                       >> 0xdU));
    } else {
        vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_burst 
            = (3U & (IData)(vlSelfRef._cpu_auto_master_out_awburst));
        vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_len 
            = (0xffU & (IData)(vlSelfRef._cpu_auto_master_out_awlen));
        vlSelfRef._axi4frag_auto_out_awid = (0xfU & (IData)(vlSelfRef._cpu_auto_master_out_awid));
        vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_size 
            = (7U & (IData)(vlSelfRef._cpu_auto_master_out_awsize));
        vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_addr 
            = vlSelfRef._cpu_auto_master_out_awaddr;
    }
    vlSelfRef.axi4xbar__DOT__auto_anon_in_arlen = vlSelfRef._cpu_auto_master_out_arlen;
    vlSelfRef._axi4xbar_auto_anon_out_arlen = vlSelfRef._cpu_auto_master_out_arlen;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_awlen = vlSelfRef._cpu_auto_master_out_awlen;
    vlSelfRef._axi4xbar_auto_anon_out_awlen = vlSelfRef._cpu_auto_master_out_awlen;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_arid = vlSelfRef._cpu_auto_master_out_arid;
    vlSelfRef._axi4xbar_auto_anon_out_arid = vlSelfRef._cpu_auto_master_out_arid;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_awid = vlSelfRef._cpu_auto_master_out_awid;
    vlSelfRef._axi4xbar_auto_anon_out_awid = vlSelfRef._cpu_auto_master_out_awid;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_arsize = vlSelfRef._cpu_auto_master_out_arsize;
    vlSelfRef._axi4xbar_auto_anon_out_arsize = vlSelfRef._cpu_auto_master_out_arsize;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_awsize = vlSelfRef._cpu_auto_master_out_awsize;
    vlSelfRef._axi4xbar_auto_anon_out_awsize = vlSelfRef._cpu_auto_master_out_awsize;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_rready = vlSelfRef._cpu_auto_master_out_rready;
    vlSelfRef._axi4xbar_auto_anon_out_rready = vlSelfRef._cpu_auto_master_out_rready;
    vlSelfRef._axi4yank_auto_out_rready = vlSelfRef._cpu_auto_master_out_rready;
    vlSelfRef._axi4frag_auto_out_rready = vlSelfRef._cpu_auto_master_out_rready;
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_4 = 
        ((IData)(vlSelfRef._cpu_auto_master_out_rready) 
         & (IData)(vlSelfRef.axi4xbar_1__DOT__in_0_rvalid));
    vlSelfRef._axi4xbar_1_auto_anon_out_1_rready = 
        ((IData)(vlSelfRef._cpu_auto_master_out_rready) 
         & ((IData)(vlSelfRef.axi4xbar_1__DOT__idle_3)
             ? ((IData)(vlSelfRef.axi4xbar_1__DOT__readys_readys) 
                >> 1U) : (IData)(vlSelfRef.axi4xbar_1__DOT__state_3_1)));
    vlSelfRef._axi4xbar_1_auto_anon_out_0_rready = 
        ((IData)(vlSelfRef._cpu_auto_master_out_rready) 
         & ((IData)(vlSelfRef.axi4xbar_1__DOT__idle_3)
             ? (IData)(vlSelfRef.axi4xbar_1__DOT__readys_readys)
             : (IData)(vlSelfRef.axi4xbar_1__DOT__state_3_0)));
    vlSelfRef._axi4xbar_1_auto_anon_out_2_rready = 
        ((IData)(vlSelfRef._cpu_auto_master_out_rready) 
         & ((IData)(vlSelfRef.axi4xbar_1__DOT__idle_3)
             ? ((IData)(vlSelfRef.axi4xbar_1__DOT__readys_readys) 
                >> 2U) : (IData)(vlSelfRef.axi4xbar_1__DOT__state_3_2)));
    vlSelfRef.axi4xbar__DOT__auto_anon_in_bready = vlSelfRef._cpu_auto_master_out_bready;
    vlSelfRef._axi4xbar_auto_anon_out_bready = vlSelfRef._cpu_auto_master_out_bready;
    vlSelfRef.axi4frag__DOT__nodeOut_bready = (1U & 
                                               ((~ (IData)(vlSelfRef._axi4yank_auto_in_becho_real_last)) 
                                                | (IData)(vlSelfRef._cpu_auto_master_out_bready)));
    vlSelfRef.axi4xbar__DOT__auto_anon_in_wdata = vlSelfRef._cpu_auto_master_out_wdata;
    vlSelfRef._axi4xbar_auto_anon_out_wdata = vlSelfRef._cpu_auto_master_out_wdata;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_wstrb = vlSelfRef._cpu_auto_master_out_wstrb;
    vlSelfRef._axi4xbar_auto_anon_out_wstrb = vlSelfRef._cpu_auto_master_out_wstrb;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_wvalid = vlSelfRef._cpu_auto_master_out_wvalid;
    vlSelfRef._axi4xbar_auto_anon_out_wvalid = vlSelfRef._cpu_auto_master_out_wvalid;
    vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef._cpu_auto_master_out_wvalid) 
           | (IData)(vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__full));
    vlSelfRef.axi4xbar__DOT__auto_anon_in_awvalid = vlSelfRef._cpu_auto_master_out_awvalid;
    vlSelfRef._axi4xbar_auto_anon_out_awvalid = vlSelfRef._cpu_auto_master_out_awvalid;
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef._cpu_auto_master_out_awvalid) 
           | (IData)(vlSelfRef.axi4frag__DOT__deq_q_1__DOT__full));
    vlSelfRef.axi4xbar__DOT__auto_anon_in_awaddr = vlSelfRef._cpu_auto_master_out_awaddr;
    vlSelfRef._axi4xbar_auto_anon_out_awaddr = vlSelfRef._cpu_auto_master_out_awaddr;
    vlSelfRef.axi4xbar__DOT__auto_anon_in_arvalid = vlSelfRef._cpu_auto_master_out_arvalid;
    vlSelfRef._axi4xbar_auto_anon_out_arvalid = vlSelfRef._cpu_auto_master_out_arvalid;
    vlSelfRef.axi4frag__DOT__deq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef._cpu_auto_master_out_arvalid) 
           | (IData)(vlSelfRef.axi4frag__DOT__deq_q__DOT__full));
    vlSelfRef.axi4xbar__DOT__auto_anon_in_araddr = vlSelfRef._cpu_auto_master_out_araddr;
    vlSelfRef._axi4xbar_auto_anon_out_araddr = vlSelfRef._cpu_auto_master_out_araddr;
    vlSelfRef.lkeyboard__DOT__mps2__DOT__ps2_data = vlSelfRef.lkeyboard__DOT__ps2_bundle_data;
    vlSelfRef.lkeyboard__DOT__mps2__DOT__ps2_clk = vlSelfRef.lkeyboard__DOT__ps2_bundle_clk;
    vlSelfRef.luart__DOT__muart__DOT__uart_rx = vlSelfRef.luart__DOT__uart_rx;
    vlSelfRef.lgpio__DOT__mgpio__DOT__gpio_in = vlSelfRef.lgpio__DOT__gpio_bundle_in;
    vlSelfRef.apbxbar__DOT__auto_anon_out_3_prdata 
        = vlSelfRef._lgpio_auto_in_prdata;
    vlSelfRef.lgpio__DOT__auto_in_prdata = vlSelfRef._lgpio_auto_in_prdata;
    vlSelfRef._apbdelay_delayer_in_prdata = (((IData)(vlSelfRef.apbxbar__DOT__sel_0)
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
                                                                ? vlSelfRef._lsdram_apb_auto_in_prdata
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
    vlSelfRef.luart__DOT__muart__DOT__reg_we = ((IData)(vlSelfRef.luart__DOT__muart__DOT____VdfgRegularize_hc00137df_0_0) 
                                                & (IData)(vlSelfRef._axi42apb_auto_out_pwrite));
    vlSelfRef.luart__DOT__muart__DOT__reg_re = ((~ (IData)(vlSelfRef._axi42apb_auto_out_pwrite)) 
                                                & (IData)(vlSelfRef.luart__DOT__muart__DOT____VdfgRegularize_hc00137df_0_0));
    vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio = vlSelfRef.lpsram__DOT__qspi_bundle_dio;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__din 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__din;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_din;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__din 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_din;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_dq 
        = vlSelfRef.lsdram_apb__DOT__sdram_bundle_dq;
    vlSelfRef.lspi__DOT__mspi__DOT__spi_miso = vlSelfRef.lspi__DOT__spi_bundle_miso;
    vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_last 
        = vlSelfRef.axi4frag__DOT___in_wdeq_q_io_deq_bits_last;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_wlast = vlSelfRef._axi4xbar_auto_anon_out_wlast;
    vlSelfRef.axi4frag__DOT__auto_in_wlast = vlSelfRef._axi4xbar_auto_anon_out_wlast;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_arburst 
        = vlSelfRef._axi4xbar_auto_anon_out_arburst;
    vlSelfRef.axi4frag__DOT__auto_in_arburst = vlSelfRef._axi4xbar_auto_anon_out_arburst;
    vlSelfRef.axi4frag__DOT__deq_q__DOT__io_deq_bits_burst 
        = vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_burst;
    vlSelfRef._axi4yank_auto_out_arburst = vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_burst;
    vlSelfRef._axi4frag_auto_out_arburst = vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_burst;
    vlSelfRef._axi4xbar_1_auto_anon_out_0_arburst = vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_burst;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_awburst 
        = vlSelfRef._axi4xbar_auto_anon_out_awburst;
    vlSelfRef.axi4frag__DOT__auto_in_awburst = vlSelfRef._axi4xbar_auto_anon_out_awburst;
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_deq_bits_burst 
        = vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_burst;
    vlSelfRef._axi4yank_auto_out_awburst = vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_burst;
    vlSelfRef._axi4frag_auto_out_awburst = vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_burst;
    vlSelfRef._axi4xbar_1_auto_anon_out_0_awburst = vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_burst;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_arlen = vlSelfRef._axi4xbar_auto_anon_out_arlen;
    vlSelfRef.axi4frag__DOT__auto_in_arlen = vlSelfRef._axi4xbar_auto_anon_out_arlen;
    vlSelfRef.axi4frag__DOT__deq_q__DOT__io_deq_bits_len 
        = vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_len;
    if (vlSelfRef.axi4frag__DOT__busy) {
        vlSelfRef.axi4frag__DOT__len = vlSelfRef.axi4frag__DOT__r_len;
        vlSelfRef.axi4frag__DOT__addr = vlSelfRef.axi4frag__DOT__r_addr;
    } else {
        vlSelfRef.axi4frag__DOT__len = vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_len;
        vlSelfRef.axi4frag__DOT__addr = vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_addr;
    }
    vlSelfRef.axi4xbar__DOT__auto_anon_out_awlen = vlSelfRef._axi4xbar_auto_anon_out_awlen;
    vlSelfRef.axi4frag__DOT__auto_in_awlen = vlSelfRef._axi4xbar_auto_anon_out_awlen;
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len 
        = vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_len;
    if (vlSelfRef.axi4frag__DOT__busy_1) {
        vlSelfRef.axi4frag__DOT__len_1 = vlSelfRef.axi4frag__DOT__r_len_1;
        vlSelfRef.axi4frag__DOT__addr_1 = vlSelfRef.axi4frag__DOT__r_addr_1;
    } else {
        vlSelfRef.axi4frag__DOT__len_1 = vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_len;
        vlSelfRef.axi4frag__DOT__addr_1 = vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_addr;
    }
    vlSelfRef.axi4xbar__DOT__auto_anon_out_arid = vlSelfRef._axi4xbar_auto_anon_out_arid;
    vlSelfRef.axi4frag__DOT__auto_in_arid = vlSelfRef._axi4xbar_auto_anon_out_arid;
    vlSelfRef.axi4yank__DOT__auto_in_arid = vlSelfRef._axi4frag_auto_out_arid;
    vlSelfRef.axi4frag__DOT__auto_out_arid = vlSelfRef._axi4frag_auto_out_arid;
    vlSelfRef._axi4yank_auto_out_arid = vlSelfRef._axi4frag_auto_out_arid;
    vlSelfRef._axi4xbar_1_auto_anon_out_2_arid = vlSelfRef._axi4frag_auto_out_arid;
    vlSelfRef._axi4xbar_1_auto_anon_out_1_arid = vlSelfRef._axi4frag_auto_out_arid;
    vlSelfRef._axi4xbar_1_auto_anon_out_0_arid = vlSelfRef._axi4frag_auto_out_arid;
    vlSelfRef.axi4yank__DOT____VdfgRegularize_h60d1478f_2_0 
        = (1U & ((IData)(vlSelfRef.axi4yank__DOT___GEN) 
                 >> (IData)(vlSelfRef._axi4frag_auto_out_arid)));
    vlSelfRef.axi4xbar_1__DOT__arSel = (0xffffU & ((IData)(1U) 
                                                   << (IData)(vlSelfRef._axi4frag_auto_out_arid)));
    vlSelfRef.axi4xbar__DOT__auto_anon_out_awid = vlSelfRef._axi4xbar_auto_anon_out_awid;
    vlSelfRef.axi4frag__DOT__auto_in_awid = vlSelfRef._axi4xbar_auto_anon_out_awid;
    vlSelfRef.axi4yank__DOT__auto_in_awid = vlSelfRef._axi4frag_auto_out_awid;
    vlSelfRef.axi4frag__DOT__auto_out_awid = vlSelfRef._axi4frag_auto_out_awid;
    vlSelfRef._axi4yank_auto_out_awid = vlSelfRef._axi4frag_auto_out_awid;
    vlSelfRef._axi4xbar_1_auto_anon_out_2_awid = vlSelfRef._axi4frag_auto_out_awid;
    vlSelfRef._axi4xbar_1_auto_anon_out_0_awid = vlSelfRef._axi4frag_auto_out_awid;
    vlSelfRef.axi4xbar_1__DOT__awSel = (0xffffU & ((IData)(1U) 
                                                   << (IData)(vlSelfRef._axi4frag_auto_out_awid)));
    vlSelfRef.axi4yank__DOT____VdfgRegularize_h60d1478f_0_0 
        = (1U & ((IData)(vlSelfRef.axi4yank__DOT___GEN_3) 
                 >> (IData)(vlSelfRef._axi4frag_auto_out_awid)));
    vlSelfRef.axi4xbar__DOT__auto_anon_out_arsize = vlSelfRef._axi4xbar_auto_anon_out_arsize;
    vlSelfRef.axi4frag__DOT__auto_in_arsize = vlSelfRef._axi4xbar_auto_anon_out_arsize;
    vlSelfRef.axi4frag__DOT__deq_q__DOT__io_deq_bits_size 
        = vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_size;
    vlSelfRef.axi4frag__DOT___out_bits_addr_T_1 = (0x1ffU 
                                                   & ((IData)(3U) 
                                                      << (IData)(vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_size)));
    vlSelfRef._axi4yank_auto_out_arsize = vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_size;
    vlSelfRef._axi4frag_auto_out_arsize = vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_size;
    vlSelfRef._axi4xbar_1_auto_anon_out_0_arsize = vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_size;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_awsize = vlSelfRef._axi4xbar_auto_anon_out_awsize;
    vlSelfRef.axi4frag__DOT__auto_in_awsize = vlSelfRef._axi4xbar_auto_anon_out_awsize;
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_deq_bits_size 
        = vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_size;
    vlSelfRef.axi4frag__DOT___out_bits_addr_T_7 = (0x1ffU 
                                                   & ((IData)(3U) 
                                                      << (IData)(vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_size)));
    vlSelfRef._axi4yank_auto_out_awsize = vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_size;
    vlSelfRef._axi4frag_auto_out_awsize = vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_size;
    vlSelfRef._axi4xbar_1_auto_anon_out_0_awsize = vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_size;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_rready = vlSelfRef._axi4xbar_auto_anon_out_rready;
    vlSelfRef.axi4frag__DOT__auto_in_rready = vlSelfRef._axi4xbar_auto_anon_out_rready;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_rready 
        = vlSelfRef._axi4yank_auto_out_rready;
    vlSelfRef.axi4yank__DOT__auto_out_rready = vlSelfRef._axi4yank_auto_out_rready;
    vlSelfRef.axi4yank__DOT__auto_in_rready = vlSelfRef._axi4frag_auto_out_rready;
    vlSelfRef.axi4frag__DOT__auto_out_rready = vlSelfRef._axi4frag_auto_out_rready;
    vlSelfRef.axi4yank__DOT___GEN_1 = vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_4;
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (((IData)(1U) << (IData)(vlSelfRef._axi4frag_auto_in_rid)) 
              & (IData)(vlSelfRef._axi4yank_auto_in_rlast)));
    vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelfRef._axi4yank_auto_in_rlast));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_1__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
               >> 1U) & (IData)(vlSelfRef._axi4yank_auto_in_rlast)));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_2__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
               >> 2U) & (IData)(vlSelfRef._axi4yank_auto_in_rlast)));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_3__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
               >> 3U) & (IData)(vlSelfRef._axi4yank_auto_in_rlast)));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_4__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
               >> 4U) & (IData)(vlSelfRef._axi4yank_auto_in_rlast)));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_5__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
               >> 5U) & (IData)(vlSelfRef._axi4yank_auto_in_rlast)));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_6__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
               >> 6U) & (IData)(vlSelfRef._axi4yank_auto_in_rlast)));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_7__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
               >> 7U) & (IData)(vlSelfRef._axi4yank_auto_in_rlast)));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_8__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
               >> 8U) & (IData)(vlSelfRef._axi4yank_auto_in_rlast)));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_9__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
               >> 9U) & (IData)(vlSelfRef._axi4yank_auto_in_rlast)));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_10__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
               >> 0xaU) & (IData)(vlSelfRef._axi4yank_auto_in_rlast)));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_11__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
               >> 0xbU) & (IData)(vlSelfRef._axi4yank_auto_in_rlast)));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_12__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
               >> 0xcU) & (IData)(vlSelfRef._axi4yank_auto_in_rlast)));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_13__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
               >> 0xdU) & (IData)(vlSelfRef._axi4yank_auto_in_rlast)));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_14__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
               >> 0xeU) & (IData)(vlSelfRef._axi4yank_auto_in_rlast)));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_15__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
               >> 0xfU) & (IData)(vlSelfRef._axi4yank_auto_in_rlast)));
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_1_rready 
        = vlSelfRef._axi4xbar_1_auto_anon_out_1_rready;
    vlSelfRef.lmrom__DOT__auto_in_rready = vlSelfRef._axi4xbar_1_auto_anon_out_1_rready;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_rready 
        = vlSelfRef._axi4xbar_1_auto_anon_out_0_rready;
    vlSelfRef.axi4buf__DOT__auto_in_rready = vlSelfRef._axi4xbar_1_auto_anon_out_0_rready;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_rready 
        = vlSelfRef._axi4xbar_1_auto_anon_out_2_rready;
    vlSelfRef.axi4ram__DOT__auto_in_rready = vlSelfRef._axi4xbar_1_auto_anon_out_2_rready;
    vlSelfRef._axi4ram_auto_in_arready = (1U & ((~ (IData)(vlSelfRef.axi4ram__DOT__r_full)) 
                                                | (IData)(vlSelfRef._axi4xbar_1_auto_anon_out_2_rready)));
    vlSelfRef.axi4xbar__DOT__auto_anon_out_bready = vlSelfRef._axi4xbar_auto_anon_out_bready;
    vlSelfRef.axi4frag__DOT__auto_in_bready = vlSelfRef._axi4xbar_auto_anon_out_bready;
    vlSelfRef._axi4yank_auto_out_bready = vlSelfRef.axi4frag__DOT__nodeOut_bready;
    vlSelfRef._axi4frag_auto_out_bready = vlSelfRef.axi4frag__DOT__nodeOut_bready;
    vlSelfRef._axi4xbar_1_auto_anon_out_0_bready = 
        ((IData)(vlSelfRef.axi4frag__DOT__nodeOut_bready) 
         & ((IData)(vlSelfRef.axi4xbar_1__DOT__idle_4)
             ? (IData)(vlSelfRef.axi4xbar_1__DOT__readys_readys_1)
             : (IData)(vlSelfRef.axi4xbar_1__DOT__state_4_0)));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4 = 
        ((IData)(vlSelfRef.axi4frag__DOT__nodeOut_bready) 
         & (IData)(vlSelfRef.axi4xbar_1__DOT__in_0_bvalid));
    vlSelfRef._axi4xbar_1_auto_anon_out_2_bready = 
        ((IData)(vlSelfRef.axi4frag__DOT__nodeOut_bready) 
         & ((IData)(vlSelfRef.axi4xbar_1__DOT__idle_4)
             ? ((IData)(vlSelfRef.axi4xbar_1__DOT__readys_readys_1) 
                >> 2U) : (IData)(vlSelfRef.axi4xbar_1__DOT__state_4_2)));
    vlSelfRef.axi4xbar__DOT__auto_anon_out_wdata = vlSelfRef._axi4xbar_auto_anon_out_wdata;
    vlSelfRef.axi4frag__DOT__auto_in_wdata = vlSelfRef._axi4xbar_auto_anon_out_wdata;
    vlSelfRef.axi4yank__DOT__auto_in_wdata = vlSelfRef._axi4frag_auto_out_wdata;
    vlSelfRef.axi4frag__DOT__auto_out_wdata = vlSelfRef._axi4frag_auto_out_wdata;
    vlSelfRef._axi4yank_auto_out_wdata = vlSelfRef._axi4frag_auto_out_wdata;
    vlSelfRef._axi4xbar_1_auto_anon_out_2_wdata = vlSelfRef._axi4frag_auto_out_wdata;
    vlSelfRef._axi4xbar_1_auto_anon_out_0_wdata = vlSelfRef._axi4frag_auto_out_wdata;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_wstrb = vlSelfRef._axi4xbar_auto_anon_out_wstrb;
    vlSelfRef.axi4frag__DOT__auto_in_wstrb = vlSelfRef._axi4xbar_auto_anon_out_wstrb;
    vlSelfRef.axi4yank__DOT__auto_in_wstrb = vlSelfRef._axi4frag_auto_out_wstrb;
    vlSelfRef.axi4frag__DOT__auto_out_wstrb = vlSelfRef._axi4frag_auto_out_wstrb;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT____Vcellinp__ram_ext__W0_data 
        = (((QData)((IData)(vlSelfRef._axi4frag_auto_out_wdata)) 
            << 4U) | (QData)((IData)(vlSelfRef._axi4frag_auto_out_wstrb)));
    vlSelfRef._axi4yank_auto_out_wstrb = vlSelfRef._axi4frag_auto_out_wstrb;
    vlSelfRef._axi4xbar_1_auto_anon_out_2_wstrb = vlSelfRef._axi4frag_auto_out_wstrb;
    vlSelfRef._axi4xbar_1_auto_anon_out_0_wstrb = vlSelfRef._axi4frag_auto_out_wstrb;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_wvalid = vlSelfRef._axi4xbar_auto_anon_out_wvalid;
    vlSelfRef.axi4frag__DOT__auto_in_wvalid = vlSelfRef._axi4xbar_auto_anon_out_wvalid;
    vlSelfRef.axi4frag__DOT___in_wdeq_q_io_deq_valid 
        = vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_awvalid 
        = vlSelfRef._axi4xbar_auto_anon_out_awvalid;
    vlSelfRef.axi4frag__DOT__auto_in_awvalid = vlSelfRef._axi4xbar_auto_anon_out_awvalid;
    vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_valid 
        = vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0;
    vlSelfRef.axi4frag__DOT__wbeats_valid = ((~ (IData)(vlSelfRef.axi4frag__DOT__wbeats_latched)) 
                                             & (IData)(vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    vlSelfRef.axi4frag__DOT__nodeOut_awvalid = ((IData)(vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0) 
                                                & (IData)(vlSelfRef.axi4frag__DOT___in_awready_T));
    vlSelfRef.axi4xbar__DOT__auto_anon_out_awaddr = vlSelfRef._axi4xbar_auto_anon_out_awaddr;
    vlSelfRef.axi4frag__DOT__auto_in_awaddr = vlSelfRef._axi4xbar_auto_anon_out_awaddr;
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr 
        = vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_addr;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_arvalid 
        = vlSelfRef._axi4xbar_auto_anon_out_arvalid;
    vlSelfRef.axi4frag__DOT__auto_in_arvalid = vlSelfRef._axi4xbar_auto_anon_out_arvalid;
    vlSelfRef.axi4frag__DOT___deq_q_io_deq_valid = vlSelfRef.axi4frag__DOT__deq_q__DOT__io_deq_valid_0;
    vlSelfRef._axi4frag_auto_out_arvalid = vlSelfRef.axi4frag__DOT__deq_q__DOT__io_deq_valid_0;
    vlSelfRef.axi4xbar__DOT__auto_anon_out_araddr = vlSelfRef._axi4xbar_auto_anon_out_araddr;
    vlSelfRef.axi4frag__DOT__auto_in_araddr = vlSelfRef._axi4xbar_auto_anon_out_araddr;
    vlSelfRef.axi4frag__DOT__deq_q__DOT__io_deq_bits_addr 
        = vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_addr;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__srx_pad_i 
        = vlSelfRef.luart__DOT__muart__DOT__uart_rx;
    vlSelfRef.lgpio__DOT__mgpio__DOT__in_prdata = vlSelfRef.lgpio__DOT__auto_in_prdata;
    vlSelfRef.apbdelay_delayer__DOT__in_prdata = vlSelfRef._apbdelay_delayer_in_prdata;
    vlSelfRef.axi42apb__DOT__auto_out_prdata = vlSelfRef._apbdelay_delayer_in_prdata;
    vlSelfRef._apbxbar_auto_anon_in_prdata = vlSelfRef._apbdelay_delayer_in_prdata;
    vlSelfRef._axi42apb_auto_in_rdata = ((IData)(vlSelfRef.axi42apb__DOT__nodeOut_penable)
                                          ? vlSelfRef._apbdelay_delayer_in_prdata
                                          : vlSelfRef.axi42apb__DOT__nodeIn_rdata_r);
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
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_input_i 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_dq;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__miso_pad_i 
        = vlSelfRef.lspi__DOT__mspi__DOT__spi_miso;
    vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_last 
        = vlSelfRef.axi4frag__DOT__auto_in_wlast;
    vlSelfRef.axi4frag__DOT__deq_q__DOT__io_enq_bits_burst 
        = vlSelfRef.axi4frag__DOT__auto_in_arburst;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_arburst 
        = vlSelfRef._axi4yank_auto_out_arburst;
    vlSelfRef.axi4yank__DOT__auto_out_arburst = vlSelfRef._axi4yank_auto_out_arburst;
    vlSelfRef.axi4yank__DOT__auto_in_arburst = vlSelfRef._axi4frag_auto_out_arburst;
    vlSelfRef.axi4frag__DOT__auto_out_arburst = vlSelfRef._axi4frag_auto_out_arburst;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_arburst 
        = vlSelfRef._axi4xbar_1_auto_anon_out_0_arburst;
    vlSelfRef.axi4buf__DOT__auto_in_arburst = vlSelfRef._axi4xbar_1_auto_anon_out_0_arburst;
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_enq_bits_burst 
        = vlSelfRef.axi4frag__DOT__auto_in_awburst;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_awburst 
        = vlSelfRef._axi4yank_auto_out_awburst;
    vlSelfRef.axi4yank__DOT__auto_out_awburst = vlSelfRef._axi4yank_auto_out_awburst;
    vlSelfRef.axi4yank__DOT__auto_in_awburst = vlSelfRef._axi4frag_auto_out_awburst;
    vlSelfRef.axi4frag__DOT__auto_out_awburst = vlSelfRef._axi4frag_auto_out_awburst;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_awburst 
        = vlSelfRef._axi4xbar_1_auto_anon_out_0_awburst;
    vlSelfRef.axi4buf__DOT__auto_in_awburst = vlSelfRef._axi4xbar_1_auto_anon_out_0_awburst;
    vlSelfRef.axi4frag__DOT__deq_q__DOT__io_enq_bits_len 
        = vlSelfRef.axi4frag__DOT__auto_in_arlen;
    vlSelfRef._axi4frag_auto_out_arecho_real_last = 
        (1U & (~ (0U != (IData)(vlSelfRef.axi4frag__DOT__len))));
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_enq_bits_len 
        = vlSelfRef.axi4frag__DOT__auto_in_awlen;
    vlSelfRef._axi4frag_auto_out_awecho_real_last = 
        (1U & (~ (0U != (IData)(vlSelfRef.axi4frag__DOT__len_1))));
    vlSelfRef.axi4frag__DOT__deq_q__DOT__io_enq_bits_id 
        = vlSelfRef.axi4frag__DOT__auto_in_arid;
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
    vlSelfRef._axi4yank_auto_out_arvalid = ((IData)(vlSelfRef.axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
                                            & (IData)(vlSelfRef.axi4yank__DOT____VdfgRegularize_h60d1478f_2_0));
    vlSelfRef.axi4yank__DOT___arsel_T_1 = vlSelfRef.axi4xbar_1__DOT__arSel;
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_enq_bits_id 
        = vlSelfRef.axi4frag__DOT__auto_in_awid;
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
    vlSelfRef.axi4frag__DOT__deq_q__DOT__io_enq_bits_size 
        = vlSelfRef.axi4frag__DOT__auto_in_arsize;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_arsize 
        = vlSelfRef._axi4yank_auto_out_arsize;
    vlSelfRef.axi4yank__DOT__auto_out_arsize = vlSelfRef._axi4yank_auto_out_arsize;
    vlSelfRef.axi4yank__DOT__auto_in_arsize = vlSelfRef._axi4frag_auto_out_arsize;
    vlSelfRef.axi4frag__DOT__auto_out_arsize = vlSelfRef._axi4frag_auto_out_arsize;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_arsize 
        = vlSelfRef._axi4xbar_1_auto_anon_out_0_arsize;
    vlSelfRef.axi4buf__DOT__auto_in_arsize = vlSelfRef._axi4xbar_1_auto_anon_out_0_arsize;
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_enq_bits_size 
        = vlSelfRef.axi4frag__DOT__auto_in_awsize;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_awsize 
        = vlSelfRef._axi4yank_auto_out_awsize;
    vlSelfRef.axi4yank__DOT__auto_out_awsize = vlSelfRef._axi4yank_auto_out_awsize;
    vlSelfRef.axi4yank__DOT__auto_in_awsize = vlSelfRef._axi4frag_auto_out_awsize;
    vlSelfRef.axi4frag__DOT__auto_out_awsize = vlSelfRef._axi4frag_auto_out_awsize;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_awsize 
        = vlSelfRef._axi4xbar_1_auto_anon_out_0_awsize;
    vlSelfRef.axi4buf__DOT__auto_in_awsize = vlSelfRef._axi4xbar_1_auto_anon_out_0_awsize;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap__io_deq_ready;
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_0_T_6 = (
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelfRef._axi4frag_auto_in_rid)) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_1_T_6 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
                                                    >> 1U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_2_T_6 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
                                                    >> 2U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_3_T_6 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
                                                    >> 3U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_4_T_6 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
                                                    >> 4U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_5_T_6 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
                                                    >> 5U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_6_T_6 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
                                                    >> 6U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_7_T_6 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
                                                    >> 7U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_8_T_6 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
                                                    >> 8U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_9_T_6 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
                                                    >> 9U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_10_T_6 = 
        (((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
          >> 0xaU) & (IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_11_T_6 = 
        (((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
          >> 0xbU) & (IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_12_T_6 = 
        (((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
          >> 0xcU) & (IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_13_T_6 = 
        (((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
          >> 0xdU) & (IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_14_T_6 = 
        (((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
          >> 0xeU) & (IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_6 = 
        (((IData)(vlSelfRef.axi4xbar_1__DOT__rSel) 
          >> 0xfU) & (IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_1__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_2__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_3__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_4__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_5__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_6__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_7__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_8__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_9__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_10__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_11__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_12__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_13__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_14__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_15__io_deq_ready;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__io_deq_ready 
        = vlSelfRef.axi4buf__DOT__auto_in_rready;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_arready 
        = vlSelfRef._axi4ram_auto_in_arready;
    vlSelfRef.axi4ram__DOT__auto_in_arready = vlSelfRef._axi4ram_auto_in_arready;
    vlSelfRef.axi4ram__DOT__nodeIn_arready = vlSelfRef._axi4ram_auto_in_arready;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_bready 
        = vlSelfRef._axi4yank_auto_out_bready;
    vlSelfRef.axi4yank__DOT__auto_out_bready = vlSelfRef._axi4yank_auto_out_bready;
    vlSelfRef.axi4yank__DOT__auto_in_bready = vlSelfRef._axi4frag_auto_out_bready;
    vlSelfRef.axi4frag__DOT__auto_out_bready = vlSelfRef._axi4frag_auto_out_bready;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_bready 
        = vlSelfRef._axi4xbar_1_auto_anon_out_0_bready;
    vlSelfRef.axi4buf__DOT__auto_in_bready = vlSelfRef._axi4xbar_1_auto_anon_out_0_bready;
    vlSelfRef.axi4yank__DOT___GEN_7 = vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4;
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_0_T_5 = (
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelfRef._axi4frag_auto_in_bid)) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_1_T_5 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
                                                    >> 1U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_2_T_5 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
                                                    >> 2U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_3_T_5 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
                                                    >> 3U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_4_T_5 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
                                                    >> 4U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_5_T_5 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
                                                    >> 5U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_6_T_5 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
                                                    >> 6U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_7_T_5 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
                                                    >> 7U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_8_T_5 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
                                                    >> 8U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_9_T_5 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
                                                    >> 9U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_10_T_5 = 
        (((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
          >> 0xaU) & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_11_T_5 = 
        (((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
          >> 0xbU) & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_12_T_5 = 
        (((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
          >> 0xcU) & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_13_T_5 = 
        (((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
          >> 0xdU) & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_14_T_5 = 
        (((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
          >> 0xeU) & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_5 = 
        (((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
          >> 0xfU) & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_16__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & ((IData)(1U) << (IData)(vlSelfRef._axi4frag_auto_in_bid)));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_17__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
              >> 1U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_18__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
              >> 2U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_19__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
              >> 3U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_20__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
              >> 4U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_21__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
              >> 5U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_22__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
              >> 6U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_23__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
              >> 7U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_24__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
              >> 8U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_25__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
              >> 9U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_26__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
              >> 0xaU));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_27__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
              >> 0xbU));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_28__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
              >> 0xcU));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_29__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
              >> 0xdU));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_30__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
              >> 0xeU));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_31__io_deq_ready 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__bSel) 
              >> 0xfU));
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_bready 
        = vlSelfRef._axi4xbar_1_auto_anon_out_2_bready;
    vlSelfRef.axi4ram__DOT__auto_in_bready = vlSelfRef._axi4xbar_1_auto_anon_out_2_bready;
    vlSelfRef.axi4ram__DOT____VdfgRegularize_h66ac2f4c_0_0 
        = (1U & ((~ (IData)(vlSelfRef.axi4ram__DOT__w_full)) 
                 | (IData)(vlSelfRef._axi4xbar_1_auto_anon_out_2_bready)));
    vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_data 
        = vlSelfRef.axi4frag__DOT__auto_in_wdata;
    vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_data 
        = vlSelfRef.axi4frag__DOT__auto_out_wdata;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_wdata = vlSelfRef._axi4yank_auto_out_wdata;
    vlSelfRef.axi4yank__DOT__auto_out_wdata = vlSelfRef._axi4yank_auto_out_wdata;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_wdata 
        = vlSelfRef._axi4xbar_1_auto_anon_out_2_wdata;
    vlSelfRef.axi4ram__DOT__auto_in_wdata = vlSelfRef._axi4xbar_1_auto_anon_out_2_wdata;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_wdata 
        = vlSelfRef._axi4xbar_1_auto_anon_out_0_wdata;
    vlSelfRef.axi4buf__DOT__auto_in_wdata = vlSelfRef._axi4xbar_1_auto_anon_out_0_wdata;
    vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_strb 
        = vlSelfRef.axi4frag__DOT__auto_in_wstrb;
    vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_strb 
        = vlSelfRef.axi4frag__DOT__auto_out_wstrb;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_data 
        = vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT____Vcellinp__ram_ext__W0_data;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_wstrb = vlSelfRef._axi4yank_auto_out_wstrb;
    vlSelfRef.axi4yank__DOT__auto_out_wstrb = vlSelfRef._axi4yank_auto_out_wstrb;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_wstrb 
        = vlSelfRef._axi4xbar_1_auto_anon_out_2_wstrb;
    vlSelfRef.axi4ram__DOT__auto_in_wstrb = vlSelfRef._axi4xbar_1_auto_anon_out_2_wstrb;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_wstrb 
        = vlSelfRef._axi4xbar_1_auto_anon_out_0_wstrb;
    vlSelfRef.axi4buf__DOT__auto_in_wstrb = vlSelfRef._axi4xbar_1_auto_anon_out_0_wstrb;
    vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__io_enq_valid 
        = vlSelfRef.axi4frag__DOT__auto_in_wvalid;
    vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid 
        = vlSelfRef.axi4frag__DOT___in_wdeq_q_io_deq_valid;
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_enq_valid 
        = vlSelfRef.axi4frag__DOT__auto_in_awvalid;
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_deq_valid 
        = vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_valid;
    vlSelfRef.axi4frag__DOT__w_todo = ((IData)(vlSelfRef.axi4frag__DOT__w_idle)
                                        ? (IData)(vlSelfRef.axi4frag__DOT__wbeats_valid)
                                        : (IData)(vlSelfRef.axi4frag__DOT__w_counter));
    vlSelfRef.axi4frag__DOT____VdfgRegularize_h84ce0f54_3_0 
        = (1U & ((~ (IData)(vlSelfRef.axi4frag__DOT__w_idle)) 
                 | (IData)(vlSelfRef.axi4frag__DOT__wbeats_valid)));
    vlSelfRef._axi4frag_auto_out_awvalid = vlSelfRef.axi4frag__DOT__nodeOut_awvalid;
    vlSelfRef._axi4yank_auto_out_awvalid = ((IData)(vlSelfRef.axi4frag__DOT__nodeOut_awvalid) 
                                            & (IData)(vlSelfRef.axi4yank__DOT____VdfgRegularize_h60d1478f_0_0));
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_enq_bits_addr 
        = vlSelfRef.axi4frag__DOT__auto_in_awaddr;
    vlSelfRef.axi4frag__DOT___out_bits_addr_T_6 = (~ vlSelfRef.axi4frag__DOT__addr_1);
    vlSelfRef.axi4frag__DOT__deq_q__DOT__io_enq_valid 
        = vlSelfRef.axi4frag__DOT__auto_in_arvalid;
    vlSelfRef.axi4frag__DOT__deq_q__DOT__io_deq_valid 
        = vlSelfRef.axi4frag__DOT___deq_q_io_deq_valid;
    vlSelfRef.axi4yank__DOT__auto_in_arvalid = vlSelfRef._axi4frag_auto_out_arvalid;
    vlSelfRef.axi4frag__DOT__auto_out_arvalid = vlSelfRef._axi4frag_auto_out_arvalid;
    vlSelfRef.axi4frag__DOT__deq_q__DOT__io_enq_bits_addr 
        = vlSelfRef.axi4frag__DOT__auto_in_araddr;
    vlSelfRef.axi4frag__DOT___out_bits_addr_T = (~ vlSelfRef.axi4frag__DOT__addr);
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__async_dat_i 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__srx_pad_i;
    vlSelfRef.apbxbar__DOT__auto_anon_in_prdata = vlSelfRef._apbxbar_auto_anon_in_prdata;
    vlSelfRef.apbdelay_delayer__DOT__out_prdata = vlSelfRef._apbxbar_auto_anon_in_prdata;
    vlSelfRef.axi42apb__DOT__auto_in_rdata = vlSelfRef._axi42apb_auto_in_rdata;
    vlSelfRef.axi4buf__DOT__auto_out_rdata = vlSelfRef._axi42apb_auto_in_rdata;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT____Vcellinp__ram_ext__W0_data 
        = (((QData)((IData)(vlSelfRef.axi42apb__DOT__rid_reg)) 
            << 0x23U) | (((QData)((IData)(vlSelfRef._axi42apb_auto_in_rdata)) 
                          << 3U) | (QData)((IData)(
                                                   (1U 
                                                    | ((IData)(vlSelfRef._axi42apb_auto_in_bresp) 
                                                       << 1U))))));
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
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__s_in 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__miso_pad_i;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__io_enq_bits_burst 
        = vlSelfRef.axi4buf__DOT__auto_in_arburst;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__io_enq_bits_burst 
        = vlSelfRef.axi4buf__DOT__auto_in_awburst;
    vlSelfRef.axi4frag__DOT__auto_out_arecho_real_last 
        = vlSelfRef._axi4frag_auto_out_arecho_real_last;
    vlSelfRef.axi4yank__DOT__auto_in_arecho_real_last 
        = vlSelfRef._axi4frag_auto_out_arecho_real_last;
    vlSelfRef.axi4frag__DOT__auto_out_awecho_real_last 
        = vlSelfRef._axi4frag_auto_out_awecho_real_last;
    vlSelfRef.axi4yank__DOT__auto_in_awecho_real_last 
        = vlSelfRef._axi4frag_auto_out_awecho_real_last;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__io_enq_bits_id 
        = vlSelfRef.axi4buf__DOT__auto_in_arid;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_arvalid 
        = vlSelfRef._axi4yank_auto_out_arvalid;
    vlSelfRef.axi4yank__DOT__auto_out_arvalid = vlSelfRef._axi4yank_auto_out_arvalid;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__io_enq_bits_id 
        = vlSelfRef.axi4buf__DOT__auto_in_awid;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__io_enq_bits_size 
        = vlSelfRef.axi4buf__DOT__auto_in_arsize;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__io_enq_bits_size 
        = vlSelfRef.axi4buf__DOT__auto_in_awsize;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_ready 
        = vlSelfRef.axi4buf__DOT__auto_in_bready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_16__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_17__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_18__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_19__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_20__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_21__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_22__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_23__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_24__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_25__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_26__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_27__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_28__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_29__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_30__io_deq_ready;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__io_deq_ready 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_31__io_deq_ready;
    vlSelfRef.axi4ram__DOT__mem_ext__DOT__W0_data = vlSelfRef.axi4ram__DOT__auto_in_wdata;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_data 
        = vlSelfRef.axi4buf__DOT__auto_in_wdata;
    vlSelfRef.axi4ram__DOT__mem_ext__DOT__W0_mask = vlSelfRef.axi4ram__DOT__auto_in_wstrb;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_strb 
        = vlSelfRef.axi4buf__DOT__auto_in_wstrb;
    vlSelfRef.axi4frag__DOT__w_last = (1U == (IData)(vlSelfRef.axi4frag__DOT__w_todo));
    vlSelfRef.axi4frag__DOT__nodeOut_wvalid = ((IData)(vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0) 
                                               & (IData)(vlSelfRef.axi4frag__DOT____VdfgRegularize_h84ce0f54_3_0));
    vlSelfRef.axi4yank__DOT__auto_in_awvalid = vlSelfRef._axi4frag_auto_out_awvalid;
    vlSelfRef.axi4frag__DOT__auto_out_awvalid = vlSelfRef._axi4frag_auto_out_awvalid;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_awvalid 
        = vlSelfRef._axi4yank_auto_out_awvalid;
    vlSelfRef.axi4yank__DOT__auto_out_awvalid = vlSelfRef._axi4yank_auto_out_awvalid;
    vlSelfRef.axi4xbar_1__DOT__in_0_awvalid = ((IData)(vlSelfRef._axi4yank_auto_out_awvalid) 
                                               & (IData)(vlSelfRef.axi4xbar_1__DOT___anonIn_awready_T));
    vlSelfRef.axi4xbar_1__DOT__awIn_0_io_enq_valid 
        = ((~ (IData)(vlSelfRef.axi4xbar_1__DOT__latched)) 
           & (IData)(vlSelfRef._axi4yank_auto_out_awvalid));
    vlSelfRef._axi4frag_auto_out_awaddr = (~ ((0xfffffffcU 
                                               & vlSelfRef.axi4frag__DOT___out_bits_addr_T_6) 
                                              | (3U 
                                                 & ((~ 
                                                     ((IData)(3U) 
                                                      << (IData)(vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_size))) 
                                                    | vlSelfRef.axi4frag__DOT___out_bits_addr_T_6))));
    vlSelfRef._axi4frag_auto_out_araddr = (~ ((0xfffffffcU 
                                               & vlSelfRef.axi4frag__DOT___out_bits_addr_T) 
                                              | (3U 
                                                 & ((~ 
                                                     ((IData)(3U) 
                                                      << (IData)(vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_size))) 
                                                    | vlSelfRef.axi4frag__DOT___out_bits_addr_T))));
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_data 
        = vlSelfRef.axi4buf__DOT__auto_out_rdata;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_data 
        = vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT____Vcellinp__ram_ext__W0_data;
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
    vlSelfRef._axi4yank_auto_out_wlast = vlSelfRef.axi4frag__DOT__w_last;
    vlSelfRef._axi4frag_auto_out_wlast = vlSelfRef.axi4frag__DOT__w_last;
    vlSelfRef._axi4xbar_1_auto_anon_out_0_wlast = vlSelfRef.axi4frag__DOT__w_last;
    vlSelfRef._axi4yank_auto_out_wvalid = vlSelfRef.axi4frag__DOT__nodeOut_wvalid;
    vlSelfRef._axi4frag_auto_out_wvalid = vlSelfRef.axi4frag__DOT__nodeOut_wvalid;
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid 
        = vlSelfRef.axi4xbar_1__DOT__awIn_0_io_enq_valid;
    vlSelfRef.axi4xbar_1__DOT___awIn_0_io_deq_valid 
        = (1U & ((~ (IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelfRef.axi4ram__DOT__mem_ext__DOT__W0_addr = 
        (0x7ffU & (vlSelfRef._axi4frag_auto_out_awaddr 
                   >> 2U));
    vlSelfRef.axi4yank__DOT__auto_in_awaddr = vlSelfRef._axi4frag_auto_out_awaddr;
    vlSelfRef.axi4frag__DOT__auto_out_awaddr = vlSelfRef._axi4frag_auto_out_awaddr;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT____Vcellinp__ram_ext__W0_data 
        = (((QData)((IData)(vlSelfRef._axi4frag_auto_out_awid)) 
            << 0x2bU) | (((QData)((IData)(vlSelfRef._axi4frag_auto_out_awaddr)) 
                          << 0xbU) | (QData)((IData)(vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_size))));
    vlSelfRef._axi4yank_auto_out_awaddr = vlSelfRef._axi4frag_auto_out_awaddr;
    vlSelfRef._axi4xbar_1_auto_anon_out_2_awaddr = 
        (0xfffffffU & vlSelfRef._axi4frag_auto_out_awaddr);
    vlSelfRef.axi4ram__DOT__w_sel0 = (0x7800U == (0x7fffU 
                                                  & (vlSelfRef._axi4frag_auto_out_awaddr 
                                                     >> 0xdU)));
    vlSelfRef._axi4xbar_1_auto_anon_out_0_awaddr = vlSelfRef._axi4frag_auto_out_awaddr;
    vlSelfRef.axi4xbar_1__DOT__requestAWIO_0_1 = (0U 
                                                  == 
                                                  (((0x10U 
                                                     & (vlSelfRef._axi4frag_auto_out_awaddr 
                                                        >> 0x1bU)) 
                                                    | (0xcU 
                                                       & (8U 
                                                          ^ 
                                                          (0x3cU 
                                                           & (vlSelfRef._axi4frag_auto_out_awaddr 
                                                              >> 0x1aU))))) 
                                                   | ((2U 
                                                       & (vlSelfRef._axi4frag_auto_out_awaddr 
                                                          >> 0x17U)) 
                                                      | (1U 
                                                         & (vlSelfRef._axi4frag_auto_out_awaddr 
                                                            >> 0xcU)))));
    vlSelfRef.axi4xbar_1__DOT___GEN_0 = (0x3fU & (0x21U 
                                                  ^ 
                                                  (vlSelfRef._axi4frag_auto_out_awaddr 
                                                   >> 0x18U)));
    vlSelfRef.axi4xbar_1__DOT___requestAWIO_T_20 = 
        (0xfU & (0xaU ^ (vlSelfRef._axi4frag_auto_out_awaddr 
                         >> 0x1cU)));
    vlSelfRef.axi4xbar_1__DOT__requestAWIO_0_2 = (0U 
                                                  == 
                                                  ((8U 
                                                    & (vlSelfRef._axi4frag_auto_out_awaddr 
                                                       >> 0x1cU)) 
                                                   | ((6U 
                                                       & (vlSelfRef._axi4frag_auto_out_awaddr 
                                                          >> 0x1bU)) 
                                                      | (1U 
                                                         & (~ 
                                                            (vlSelfRef._axi4frag_auto_out_awaddr 
                                                             >> 0x18U))))));
    vlSelfRef.axi4ram__DOT__mem_ext__DOT__R0_addr = 
        (0x7ffU & (vlSelfRef._axi4frag_auto_out_araddr 
                   >> 2U));
    vlSelfRef.axi4yank__DOT__auto_in_araddr = vlSelfRef._axi4frag_auto_out_araddr;
    vlSelfRef.axi4frag__DOT__auto_out_araddr = vlSelfRef._axi4frag_auto_out_araddr;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT____Vcellinp__ram_ext__W0_data 
        = (((QData)((IData)(vlSelfRef._axi4frag_auto_out_arid)) 
            << 0x2bU) | (((QData)((IData)(vlSelfRef._axi4frag_auto_out_araddr)) 
                          << 0xbU) | (QData)((IData)(vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_size))));
    vlSelfRef._axi4yank_auto_out_araddr = vlSelfRef._axi4frag_auto_out_araddr;
    vlSelfRef._axi4xbar_1_auto_anon_out_2_araddr = 
        (0xfffffffU & vlSelfRef._axi4frag_auto_out_araddr);
    vlSelfRef._axi4xbar_1_auto_anon_out_0_araddr = vlSelfRef._axi4frag_auto_out_araddr;
    vlSelfRef._axi4xbar_1_auto_anon_out_1_araddr = 
        (0x3fffffffU & vlSelfRef._axi4frag_auto_out_araddr);
    vlSelfRef.axi4xbar_1__DOT__requestARIO_0_2 = (0U 
                                                  == 
                                                  ((8U 
                                                    & (vlSelfRef._axi4frag_auto_out_araddr 
                                                       >> 0x1cU)) 
                                                   | ((6U 
                                                       & (vlSelfRef._axi4frag_auto_out_araddr 
                                                          >> 0x1bU)) 
                                                      | (1U 
                                                         & (~ 
                                                            (vlSelfRef._axi4frag_auto_out_araddr 
                                                             >> 0x18U))))));
    vlSelfRef.axi4xbar_1__DOT___GEN = (0x3fU & (0x21U 
                                                ^ (vlSelfRef._axi4frag_auto_out_araddr 
                                                   >> 0x18U)));
    vlSelfRef.axi4xbar_1__DOT___requestARIO_T_20 = 
        (0xfU & (0xaU ^ (vlSelfRef._axi4frag_auto_out_araddr 
                         >> 0x1cU)));
    vlSelfRef.axi4xbar_1__DOT__requestARIO_0_1 = (0U 
                                                  == 
                                                  (((0x10U 
                                                     & (vlSelfRef._axi4frag_auto_out_araddr 
                                                        >> 0x1bU)) 
                                                    | (0xcU 
                                                       & (8U 
                                                          ^ 
                                                          (0x3cU 
                                                           & (vlSelfRef._axi4frag_auto_out_araddr 
                                                              >> 0x1aU))))) 
                                                   | ((2U 
                                                       & (vlSelfRef._axi4frag_auto_out_araddr 
                                                          >> 0x17U)) 
                                                      | (1U 
                                                         & (vlSelfRef._axi4frag_auto_out_araddr 
                                                            >> 0xcU)))));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__clk 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__clk;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__clk 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__clk;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__reset_status 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__lsr_mask;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__reset_status 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_wlast = vlSelfRef._axi4yank_auto_out_wlast;
    vlSelfRef.axi4yank__DOT__auto_out_wlast = vlSelfRef._axi4yank_auto_out_wlast;
    vlSelfRef.axi4yank__DOT__auto_in_wlast = vlSelfRef._axi4frag_auto_out_wlast;
    vlSelfRef.axi4frag__DOT__auto_out_wlast = vlSelfRef._axi4frag_auto_out_wlast;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_wlast 
        = vlSelfRef._axi4xbar_1_auto_anon_out_0_wlast;
    vlSelfRef.axi4buf__DOT__auto_in_wlast = vlSelfRef._axi4xbar_1_auto_anon_out_0_wlast;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_wvalid 
        = vlSelfRef._axi4yank_auto_out_wvalid;
    vlSelfRef.axi4yank__DOT__auto_out_wvalid = vlSelfRef._axi4yank_auto_out_wvalid;
    vlSelfRef.axi4yank__DOT__auto_in_wvalid = vlSelfRef._axi4frag_auto_out_wvalid;
    vlSelfRef.axi4frag__DOT__auto_out_wvalid = vlSelfRef._axi4frag_auto_out_wvalid;
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid 
        = vlSelfRef.axi4xbar_1__DOT___awIn_0_io_deq_valid;
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0 
        = vlSelfRef.axi4xbar_1__DOT___awIn_0_io_deq_valid;
    vlSelfRef.axi4xbar_1__DOT__in_0_wvalid = ((IData)(vlSelfRef.axi4xbar_1__DOT___awIn_0_io_deq_valid) 
                                              & (IData)(vlSelfRef.axi4frag__DOT__nodeOut_wvalid));
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_data 
        = vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT____Vcellinp__ram_ext__W0_data;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_awaddr 
        = vlSelfRef._axi4yank_auto_out_awaddr;
    vlSelfRef.axi4yank__DOT__auto_out_awaddr = vlSelfRef._axi4yank_auto_out_awaddr;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_awaddr 
        = vlSelfRef._axi4xbar_1_auto_anon_out_2_awaddr;
    vlSelfRef.axi4ram__DOT__auto_in_awaddr = vlSelfRef._axi4xbar_1_auto_anon_out_2_awaddr;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_awaddr 
        = vlSelfRef._axi4xbar_1_auto_anon_out_0_awaddr;
    vlSelfRef.axi4buf__DOT__auto_in_awaddr = vlSelfRef._axi4xbar_1_auto_anon_out_0_awaddr;
    vlSelfRef._axi4xbar_1_auto_anon_out_1_awvalid = 
        ((IData)(vlSelfRef.axi4xbar_1__DOT__in_0_awvalid) 
         & (IData)(vlSelfRef.axi4xbar_1__DOT__requestAWIO_0_1));
    vlSelfRef.axi4xbar_1__DOT__requestAWIO_0_0 = ((0U 
                                                   == 
                                                   (((8U 
                                                      & (vlSelfRef._axi4frag_auto_out_awaddr 
                                                         >> 0x1cU)) 
                                                     | (4U 
                                                        & (vlSelfRef._axi4frag_auto_out_awaddr 
                                                           >> 0x1bU))) 
                                                    | ((2U 
                                                        & ((~ 
                                                            (vlSelfRef._axi4frag_auto_out_awaddr 
                                                             >> 0x1cU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef._axi4frag_auto_out_awaddr 
                                                             >> 0x18U))))) 
                                                  | ((0U 
                                                      == 
                                                      ((8U 
                                                        & (vlSelfRef._axi4frag_auto_out_awaddr 
                                                           >> 0x1cU)) 
                                                       | ((6U 
                                                           & ((IData)(vlSelfRef.axi4xbar_1__DOT___GEN_0) 
                                                              >> 3U)) 
                                                          | (1U 
                                                             & (IData)(vlSelfRef.axi4xbar_1__DOT___GEN_0))))) 
                                                     | ((0U 
                                                         == 
                                                         ((4U 
                                                           & (vlSelfRef._axi4frag_auto_out_awaddr 
                                                              >> 0x1dU)) 
                                                          | (3U 
                                                             & (~ 
                                                                (vlSelfRef._axi4frag_auto_out_awaddr 
                                                                 >> 0x1cU))))) 
                                                        | ((0U 
                                                            == 
                                                            ((8U 
                                                              & ((~ 
                                                                  (vlSelfRef._axi4frag_auto_out_awaddr 
                                                                   >> 0x1fU)) 
                                                                 << 3U)) 
                                                             | ((6U 
                                                                 & (vlSelfRef._axi4frag_auto_out_awaddr 
                                                                    >> 0x1bU)) 
                                                                | (1U 
                                                                   & (vlSelfRef._axi4frag_auto_out_awaddr 
                                                                      >> 0x18U))))) 
                                                           | (0U 
                                                              == 
                                                              ((4U 
                                                                & ((IData)(vlSelfRef.axi4xbar_1__DOT___requestAWIO_T_20) 
                                                                   >> 1U)) 
                                                               | (3U 
                                                                  & (IData)(vlSelfRef.axi4xbar_1__DOT___requestAWIO_T_20))))))));
    vlSelfRef._axi4xbar_1_auto_anon_out_2_awvalid = 
        ((IData)(vlSelfRef.axi4xbar_1__DOT__in_0_awvalid) 
         & (IData)(vlSelfRef.axi4xbar_1__DOT__requestAWIO_0_2));
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_data 
        = vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT____Vcellinp__ram_ext__W0_data;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_araddr 
        = vlSelfRef._axi4yank_auto_out_araddr;
    vlSelfRef.axi4yank__DOT__auto_out_araddr = vlSelfRef._axi4yank_auto_out_araddr;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_araddr 
        = vlSelfRef._axi4xbar_1_auto_anon_out_2_araddr;
    vlSelfRef.axi4ram__DOT__auto_in_araddr = vlSelfRef._axi4xbar_1_auto_anon_out_2_araddr;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_araddr 
        = vlSelfRef._axi4xbar_1_auto_anon_out_0_araddr;
    vlSelfRef.axi4buf__DOT__auto_in_araddr = vlSelfRef._axi4xbar_1_auto_anon_out_0_araddr;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_1_araddr 
        = vlSelfRef._axi4xbar_1_auto_anon_out_1_araddr;
    vlSelfRef.lmrom__DOT__auto_in_araddr = vlSelfRef._axi4xbar_1_auto_anon_out_1_araddr;
    vlSelfRef.lmrom__DOT__mrom__DOT__raddr = vlSelfRef._axi4xbar_1_auto_anon_out_1_araddr;
    vlSelfRef._axi4xbar_1_auto_anon_out_2_arvalid = 
        ((IData)(vlSelfRef._axi4yank_auto_out_arvalid) 
         & (IData)(vlSelfRef.axi4xbar_1__DOT__requestARIO_0_2));
    vlSelfRef.axi4xbar_1__DOT__requestARIO_0_0 = ((0U 
                                                   == 
                                                   (((8U 
                                                      & (vlSelfRef._axi4frag_auto_out_araddr 
                                                         >> 0x1cU)) 
                                                     | (4U 
                                                        & (vlSelfRef._axi4frag_auto_out_araddr 
                                                           >> 0x1bU))) 
                                                    | ((2U 
                                                        & ((~ 
                                                            (vlSelfRef._axi4frag_auto_out_araddr 
                                                             >> 0x1cU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef._axi4frag_auto_out_araddr 
                                                             >> 0x18U))))) 
                                                  | ((0U 
                                                      == 
                                                      ((8U 
                                                        & (vlSelfRef._axi4frag_auto_out_araddr 
                                                           >> 0x1cU)) 
                                                       | ((6U 
                                                           & ((IData)(vlSelfRef.axi4xbar_1__DOT___GEN) 
                                                              >> 3U)) 
                                                          | (1U 
                                                             & (IData)(vlSelfRef.axi4xbar_1__DOT___GEN))))) 
                                                     | ((0U 
                                                         == 
                                                         ((4U 
                                                           & (vlSelfRef._axi4frag_auto_out_araddr 
                                                              >> 0x1dU)) 
                                                          | (3U 
                                                             & (~ 
                                                                (vlSelfRef._axi4frag_auto_out_araddr 
                                                                 >> 0x1cU))))) 
                                                        | ((0U 
                                                            == 
                                                            ((8U 
                                                              & ((~ 
                                                                  (vlSelfRef._axi4frag_auto_out_araddr 
                                                                   >> 0x1fU)) 
                                                                 << 3U)) 
                                                             | ((6U 
                                                                 & (vlSelfRef._axi4frag_auto_out_araddr 
                                                                    >> 0x1bU)) 
                                                                | (1U 
                                                                   & (vlSelfRef._axi4frag_auto_out_araddr 
                                                                      >> 0x18U))))) 
                                                           | (0U 
                                                              == 
                                                              ((4U 
                                                                & ((IData)(vlSelfRef.axi4xbar_1__DOT___requestARIO_T_20) 
                                                                   >> 1U)) 
                                                               | (3U 
                                                                  & (IData)(vlSelfRef.axi4xbar_1__DOT___requestARIO_T_20))))))));
    vlSelfRef._axi4xbar_1_auto_anon_out_1_arvalid = 
        ((IData)(vlSelfRef._axi4yank_auto_out_arvalid) 
         & (IData)(vlSelfRef.axi4xbar_1__DOT__requestARIO_0_1));
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_last 
        = vlSelfRef.axi4buf__DOT__auto_in_wlast;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__io_enq_bits_addr 
        = vlSelfRef.axi4buf__DOT__auto_in_awaddr;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_1_awvalid 
        = vlSelfRef._axi4xbar_1_auto_anon_out_1_awvalid;
    vlSelfRef.lmrom__DOT__auto_in_awvalid = vlSelfRef._axi4xbar_1_auto_anon_out_1_awvalid;
    vlSelfRef._axi4xbar_1_auto_anon_out_0_awvalid = 
        ((IData)(vlSelfRef.axi4xbar_1__DOT__in_0_awvalid) 
         & (IData)(vlSelfRef.axi4xbar_1__DOT__requestAWIO_0_0));
    vlSelfRef.axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits 
        = (((IData)(vlSelfRef.axi4xbar_1__DOT__requestAWIO_0_2) 
            << 2U) | (((IData)(vlSelfRef.axi4xbar_1__DOT__requestAWIO_0_1) 
                       << 1U) | (IData)(vlSelfRef.axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_awvalid 
        = vlSelfRef._axi4xbar_1_auto_anon_out_2_awvalid;
    vlSelfRef.axi4ram__DOT__auto_in_awvalid = vlSelfRef._axi4xbar_1_auto_anon_out_2_awvalid;
    vlSelfRef._axi4ram_auto_in_wready = ((IData)(vlSelfRef._axi4xbar_1_auto_anon_out_2_awvalid) 
                                         & (IData)(vlSelfRef.axi4ram__DOT____VdfgRegularize_h66ac2f4c_0_0));
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__io_enq_bits_addr 
        = vlSelfRef.axi4buf__DOT__auto_in_araddr;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_arvalid 
        = vlSelfRef._axi4xbar_1_auto_anon_out_2_arvalid;
    vlSelfRef.axi4ram__DOT__auto_in_arvalid = vlSelfRef._axi4xbar_1_auto_anon_out_2_arvalid;
    vlSelfRef.axi4ram__DOT__ren = ((IData)(vlSelfRef._axi4ram_auto_in_arready) 
                                   & (IData)(vlSelfRef._axi4xbar_1_auto_anon_out_2_arvalid));
    vlSelfRef._axi4xbar_1_auto_anon_out_0_arvalid = 
        ((IData)(vlSelfRef._axi4yank_auto_out_arvalid) 
         & (IData)(vlSelfRef.axi4xbar_1__DOT__requestARIO_0_0));
    vlSelfRef._axi4xbar_1_auto_anon_in_arready = (((IData)(vlSelfRef._axi4buf_auto_in_arready) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT__requestARIO_0_0)) 
                                                  | (((IData)(vlSelfRef._lmrom_auto_in_arready) 
                                                      & (IData)(vlSelfRef.axi4xbar_1__DOT__requestARIO_0_1)) 
                                                     | ((IData)(vlSelfRef.axi4xbar_1__DOT__requestARIO_0_2) 
                                                        & (IData)(vlSelfRef._axi4ram_auto_in_arready))));
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_1_arvalid 
        = vlSelfRef._axi4xbar_1_auto_anon_out_1_arvalid;
    vlSelfRef.lmrom__DOT__auto_in_arvalid = vlSelfRef._axi4xbar_1_auto_anon_out_1_arvalid;
    vlSelfRef.lmrom__DOT___nodeIn_rid_T = ((IData)(vlSelfRef._lmrom_auto_in_arready) 
                                           & (IData)(vlSelfRef._axi4xbar_1_auto_anon_out_1_arvalid));
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_awvalid 
        = vlSelfRef._axi4xbar_1_auto_anon_out_0_awvalid;
    vlSelfRef.axi4buf__DOT__auto_in_awvalid = vlSelfRef._axi4xbar_1_auto_anon_out_0_awvalid;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq 
        = ((IData)(vlSelfRef._axi4buf_auto_in_awready) 
           & (IData)(vlSelfRef._axi4xbar_1_auto_anon_out_0_awvalid));
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__io_enq_bits 
        = vlSelfRef.axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits;
    vlSelfRef.axi4xbar_1__DOT___awIn_0_io_deq_bits 
        = ((IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelfRef.axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits)
            : vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__wrap_1]);
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_wready 
        = vlSelfRef._axi4ram_auto_in_wready;
    vlSelfRef.axi4ram__DOT__auto_in_wready = vlSelfRef._axi4ram_auto_in_wready;
    vlSelfRef.axi4ram__DOT__mem_ext__DOT__R0_en = vlSelfRef.axi4ram__DOT__ren;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_arvalid 
        = vlSelfRef._axi4xbar_1_auto_anon_out_0_arvalid;
    vlSelfRef.axi4buf__DOT__auto_in_arvalid = vlSelfRef._axi4xbar_1_auto_anon_out_0_arvalid;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq 
        = ((IData)(vlSelfRef._axi4buf_auto_in_arready) 
           & (IData)(vlSelfRef._axi4xbar_1_auto_anon_out_0_arvalid));
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_arready 
        = vlSelfRef._axi4xbar_1_auto_anon_in_arready;
    vlSelfRef.axi4yank__DOT__auto_out_arready = vlSelfRef._axi4xbar_1_auto_anon_in_arready;
    vlSelfRef.axi4xbar_1__DOT__in_0_arready = vlSelfRef._axi4xbar_1_auto_anon_in_arready;
    vlSelfRef._axi4yank_auto_in_arready = ((IData)(vlSelfRef._axi4xbar_1_auto_anon_in_arready) 
                                           & (IData)(vlSelfRef.axi4yank__DOT____VdfgRegularize_h60d1478f_2_0));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_1 = 
        ((IData)(vlSelfRef._axi4xbar_1_auto_anon_in_arready) 
         & (IData)(vlSelfRef._axi4yank_auto_out_arvalid));
    vlSelfRef.axi4yank__DOT___GEN_2 = ((IData)(vlSelfRef.axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
                                       & (IData)(vlSelfRef._axi4xbar_1_auto_anon_in_arready));
    vlSelfRef.lmrom__DOT__mrom__DOT__ren = vlSelfRef.lmrom__DOT___nodeIn_rid_T;
    if (vlSelfRef.lmrom__DOT___nodeIn_rid_T) {
        VysyxSoCFull_ysyxSoCASIC____Vdpiimwrap_lmrom__DOT__mrom__DOT__mrom_read_TOP__ysyxSoCFull__asic(vlSelfRef._axi4xbar_1_auto_anon_out_1_araddr, vlSelfRef.__Vtask_lmrom__DOT__mrom__DOT__mrom_read__0__rdata);
        vlSelfRef.lmrom__DOT___mrom_rdata = vlSelfRef.__Vtask_lmrom__DOT__mrom__DOT__mrom_read__0__rdata;
    } else {
        vlSelfRef.lmrom__DOT___mrom_rdata = 0U;
    }
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__io_enq_valid 
        = vlSelfRef.axi4buf__DOT__auto_in_awvalid;
    vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en 
        = vlSelfRef.axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq;
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data 
        = vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__io_enq_bits;
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits 
        = vlSelfRef.axi4xbar_1__DOT___awIn_0_io_deq_bits;
    vlSelfRef._axi4xbar_1_auto_anon_out_1_wvalid = 
        ((IData)(vlSelfRef.axi4xbar_1__DOT__in_0_wvalid) 
         & ((IData)(vlSelfRef.axi4xbar_1__DOT___awIn_0_io_deq_bits) 
            >> 1U));
    vlSelfRef._axi4xbar_1_auto_anon_out_0_wvalid = 
        ((IData)(vlSelfRef.axi4xbar_1__DOT__in_0_wvalid) 
         & (IData)(vlSelfRef.axi4xbar_1__DOT___awIn_0_io_deq_bits));
    vlSelfRef._axi4xbar_1_auto_anon_out_2_wvalid = 
        ((IData)(vlSelfRef.axi4xbar_1__DOT__in_0_wvalid) 
         & ((IData)(vlSelfRef.axi4xbar_1__DOT___awIn_0_io_deq_bits) 
            >> 2U));
    vlSelfRef.axi4xbar_1__DOT__in_0_wready = (((IData)(vlSelfRef._axi4buf_auto_in_wready) 
                                               & (IData)(vlSelfRef.axi4xbar_1__DOT___awIn_0_io_deq_bits)) 
                                              | (((IData)(vlSelfRef.axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                                  >> 2U) 
                                                 & (IData)(vlSelfRef._axi4ram_auto_in_wready)));
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__io_enq_valid 
        = vlSelfRef.axi4buf__DOT__auto_in_arvalid;
    vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en 
        = vlSelfRef.axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq;
    vlSelfRef.axi4yank__DOT__auto_in_arready = vlSelfRef._axi4yank_auto_in_arready;
    vlSelfRef.axi4frag__DOT__auto_out_arready = vlSelfRef._axi4yank_auto_in_arready;
    vlSelfRef.axi4frag__DOT____Vcellinp__deq_q__io_deq_ready 
        = ((IData)(vlSelfRef._axi4frag_auto_out_arecho_real_last) 
           & (IData)(vlSelfRef._axi4yank_auto_in_arready));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_0_T_2 = (
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelfRef._axi4frag_auto_out_arid)) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_1_T_2 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
                                                    >> 1U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_2_T_2 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
                                                    >> 2U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_3_T_2 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
                                                    >> 3U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_4_T_2 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
                                                    >> 4U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_5_T_2 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
                                                    >> 5U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_6_T_2 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
                                                    >> 6U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_7_T_2 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
                                                    >> 7U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_8_T_2 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
                                                    >> 8U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_9_T_2 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
                                                    >> 9U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_10_T_2 = 
        (((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
          >> 0xaU) & (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_11_T_2 = 
        (((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
          >> 0xbU) & (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_12_T_2 = 
        (((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
          >> 0xcU) & (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_13_T_2 = 
        (((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
          >> 0xdU) & (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_14_T_2 = 
        (((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
          >> 0xeU) & (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_2 = 
        (((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
          >> 0xfU) & (IData)(vlSelfRef.axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_2) 
           & ((IData)(1U) << (IData)(vlSelfRef._axi4frag_auto_out_arid)));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_1__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_2) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
              >> 1U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_2__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_2) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
              >> 2U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_3__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_2) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
              >> 3U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_4__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_2) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
              >> 4U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_5__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_2) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
              >> 5U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_6__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_2) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
              >> 6U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_7__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_2) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
              >> 7U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_8__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_2) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
              >> 8U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_9__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_2) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
              >> 9U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_10__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_2) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
              >> 0xaU));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_11__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_2) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
              >> 0xbU));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_12__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_2) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
              >> 0xcU));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_13__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_2) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
              >> 0xdU));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_14__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_2) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
              >> 0xeU));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_15__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_2) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__arSel) 
              >> 0xfU));
    vlSelfRef.lmrom__DOT__mrom__DOT__rdata = vlSelfRef.lmrom__DOT___mrom_rdata;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_1_wvalid 
        = vlSelfRef._axi4xbar_1_auto_anon_out_1_wvalid;
    vlSelfRef.lmrom__DOT__auto_in_wvalid = vlSelfRef._axi4xbar_1_auto_anon_out_1_wvalid;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_0_wvalid 
        = vlSelfRef._axi4xbar_1_auto_anon_out_0_wvalid;
    vlSelfRef.axi4buf__DOT__auto_in_wvalid = vlSelfRef._axi4xbar_1_auto_anon_out_0_wvalid;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq 
        = ((IData)(vlSelfRef._axi4buf_auto_in_wready) 
           & (IData)(vlSelfRef._axi4xbar_1_auto_anon_out_0_wvalid));
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_wvalid 
        = vlSelfRef._axi4xbar_1_auto_anon_out_2_wvalid;
    vlSelfRef.axi4ram__DOT__auto_in_wvalid = vlSelfRef._axi4xbar_1_auto_anon_out_2_wvalid;
    vlSelfRef._axi4ram_auto_in_awready = ((IData)(vlSelfRef._axi4xbar_1_auto_anon_out_2_wvalid) 
                                          & (IData)(vlSelfRef.axi4ram__DOT____VdfgRegularize_h66ac2f4c_0_0));
    vlSelfRef.axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready 
        = ((IData)(vlSelfRef.axi4frag__DOT__nodeOut_wvalid) 
           & ((IData)(vlSelfRef.axi4frag__DOT__w_last) 
              & (IData)(vlSelfRef.axi4xbar_1__DOT__in_0_wready)));
    vlSelfRef._axi4yank_auto_in_wready = ((IData)(vlSelfRef.axi4xbar_1__DOT__in_0_wready) 
                                          & (IData)(vlSelfRef.axi4xbar_1__DOT___awIn_0_io_deq_valid));
    vlSelfRef.axi4frag__DOT__deq_q__DOT__io_deq_ready 
        = vlSelfRef.axi4frag__DOT____Vcellinp__deq_q__io_deq_ready;
    vlSelfRef.axi4frag__DOT__deq_q__DOT__do_enq = (
                                                   (~ 
                                                    ((IData)(vlSelfRef._axi4frag_auto_in_arready) 
                                                     & (IData)(vlSelfRef.axi4frag__DOT____Vcellinp__deq_q__io_deq_ready))) 
                                                   & ((IData)(vlSelfRef._axi4frag_auto_in_arready) 
                                                      & (IData)(vlSelfRef._cpu_auto_master_out_arvalid)));
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_1__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_1__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_2__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_2__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_3__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_3__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_4__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_4__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_5__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_5__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_6__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_6__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_7__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_7__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_8__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_8__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_9__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_9__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_10__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_10__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_11__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_11__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_12__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_12__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_13__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_13__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_14__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_14__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_15__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_15__io_enq_valid;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__io_enq_valid 
        = vlSelfRef.axi4buf__DOT__auto_in_wvalid;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en 
        = vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_out_2_awready 
        = vlSelfRef._axi4ram_auto_in_awready;
    vlSelfRef.axi4ram__DOT__auto_in_awready = vlSelfRef._axi4ram_auto_in_awready;
    vlSelfRef.axi4ram__DOT__nodeIn_awready = vlSelfRef._axi4ram_auto_in_awready;
    vlSelfRef.axi4ram__DOT___GEN = ((IData)(vlSelfRef._axi4ram_auto_in_awready) 
                                    & (IData)(vlSelfRef._axi4xbar_1_auto_anon_out_2_awvalid));
    vlSelfRef.axi4xbar_1__DOT__in_0_awready = (((IData)(vlSelfRef._axi4buf_auto_in_awready) 
                                                & (IData)(vlSelfRef.axi4xbar_1__DOT__requestAWIO_0_0)) 
                                               | ((IData)(vlSelfRef.axi4xbar_1__DOT__requestAWIO_0_2) 
                                                  & (IData)(vlSelfRef._axi4ram_auto_in_awready)));
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready 
        = vlSelfRef.axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready;
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready) 
              & (IData)(vlSelfRef.axi4xbar_1__DOT___awIn_0_io_deq_valid)));
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__do_enq 
        = ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelfRef.axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready))) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT___awIn_0_io_enq_ready) 
              & (IData)(vlSelfRef.axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelfRef.axi4yank__DOT__auto_in_wready = vlSelfRef._axi4yank_auto_in_wready;
    vlSelfRef.axi4frag__DOT__auto_out_wready = vlSelfRef._axi4yank_auto_in_wready;
    vlSelfRef.axi4frag__DOT___wcounter_T = ((IData)(vlSelfRef._axi4yank_auto_in_wready) 
                                            & (IData)(vlSelfRef.axi4frag__DOT__nodeOut_wvalid));
    vlSelfRef._axi4xbar_1_auto_anon_in_wready = vlSelfRef._axi4yank_auto_in_wready;
    vlSelfRef.axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready 
        = ((IData)(vlSelfRef._axi4yank_auto_in_wready) 
           & (IData)(vlSelfRef.axi4frag__DOT____VdfgRegularize_h84ce0f54_3_0));
    vlSelfRef.axi4ram__DOT____Vcellinp__mem_ext__W0_en 
        = ((IData)(vlSelfRef.axi4ram__DOT___GEN) & (IData)(vlSelfRef.axi4ram__DOT__w_sel0));
    vlSelfRef._axi4xbar_1_auto_anon_in_awready = ((IData)(vlSelfRef.axi4xbar_1__DOT__in_0_awready) 
                                                  & (IData)(vlSelfRef.axi4xbar_1__DOT___anonIn_awready_T));
    vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en 
        = vlSelfRef.axi4xbar_1__DOT__awIn_0__DOT__do_enq;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_wready 
        = vlSelfRef._axi4xbar_1_auto_anon_in_wready;
    vlSelfRef.axi4yank__DOT__auto_out_wready = vlSelfRef._axi4xbar_1_auto_anon_in_wready;
    vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready 
        = vlSelfRef.axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready;
    vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = ((~ ((IData)(vlSelfRef._axi4frag_auto_in_wready) 
               & (IData)(vlSelfRef.axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready))) 
           & ((IData)(vlSelfRef._axi4frag_auto_in_wready) 
              & (IData)(vlSelfRef._cpu_auto_master_out_wvalid)));
    vlSelfRef.axi4ram__DOT__mem_ext__DOT__W0_en = vlSelfRef.axi4ram__DOT____Vcellinp__mem_ext__W0_en;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_awready 
        = vlSelfRef._axi4xbar_1_auto_anon_in_awready;
    vlSelfRef.axi4yank__DOT__auto_out_awready = vlSelfRef._axi4xbar_1_auto_anon_in_awready;
    vlSelfRef.axi4xbar_1__DOT__anonIn_awready = vlSelfRef._axi4xbar_1_auto_anon_in_awready;
    vlSelfRef._axi4yank_auto_in_awready = ((IData)(vlSelfRef._axi4xbar_1_auto_anon_in_awready) 
                                           & (IData)(vlSelfRef.axi4yank__DOT____VdfgRegularize_h60d1478f_0_0));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_1 = 
        ((IData)(vlSelfRef._axi4xbar_1_auto_anon_in_awready) 
         & (IData)(vlSelfRef._axi4yank_auto_out_awvalid));
    vlSelfRef.axi4yank__DOT___GEN_8 = ((IData)(vlSelfRef.axi4frag__DOT__nodeOut_awvalid) 
                                       & (IData)(vlSelfRef._axi4xbar_1_auto_anon_in_awready));
    vlSelfRef.axi4yank__DOT__auto_in_awready = vlSelfRef._axi4yank_auto_in_awready;
    vlSelfRef.axi4frag__DOT__auto_out_awready = vlSelfRef._axi4yank_auto_in_awready;
    vlSelfRef.axi4frag__DOT__in_awready = ((IData)(vlSelfRef._axi4yank_auto_in_awready) 
                                           & (IData)(vlSelfRef.axi4frag__DOT___in_awready_T));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_0_T_2 = (
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelfRef._axi4frag_auto_out_awid)) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_1_T_2 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
                                                    >> 1U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_2_T_2 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
                                                    >> 2U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_3_T_2 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
                                                    >> 3U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_4_T_2 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
                                                    >> 4U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_5_T_2 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
                                                    >> 5U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_6_T_2 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
                                                    >> 6U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_7_T_2 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
                                                    >> 7U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_8_T_2 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
                                                    >> 8U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_9_T_2 = (
                                                   ((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
                                                    >> 9U) 
                                                   & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_10_T_2 = 
        (((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
          >> 0xaU) & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_11_T_2 = 
        (((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
          >> 0xbU) & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_12_T_2 = 
        (((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
          >> 0xcU) & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_13_T_2 = 
        (((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
          >> 0xdU) & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_14_T_2 = 
        (((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
          >> 0xeU) & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_2 = 
        (((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
          >> 0xfU) & (IData)(vlSelfRef.axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_16__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_8) 
           & ((IData)(1U) << (IData)(vlSelfRef._axi4frag_auto_out_awid)));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_17__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_8) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
              >> 1U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_18__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_8) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
              >> 2U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_19__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_8) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
              >> 3U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_20__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_8) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
              >> 4U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_21__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_8) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
              >> 5U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_22__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_8) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
              >> 6U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_23__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_8) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
              >> 7U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_24__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_8) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
              >> 8U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_25__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_8) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
              >> 9U));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_26__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_8) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
              >> 0xaU));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_27__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_8) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
              >> 0xbU));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_28__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_8) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
              >> 0xcU));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_29__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_8) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
              >> 0xdU));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_30__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_8) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
              >> 0xeU));
    vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_31__io_enq_valid 
        = ((IData)(vlSelfRef.axi4yank__DOT___GEN_8) 
           & ((IData)(vlSelfRef.axi4xbar_1__DOT__awSel) 
              >> 0xfU));
    vlSelfRef.axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready 
        = ((IData)(vlSelfRef._axi4frag_auto_out_awecho_real_last) 
           & (IData)(vlSelfRef.axi4frag__DOT__in_awready));
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_16__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_16__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_17__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_17__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_18__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_18__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_19__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_19__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_20__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_20__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_21__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_21__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_22__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_22__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_23__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_23__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_24__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_24__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_25__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_25__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_26__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_26__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_27__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_27__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_28__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_28__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_29__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_29__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_30__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_30__io_enq_valid;
    vlSelfRef.axi4yank__DOT__Queue1_BundleMap_31__DOT__io_enq_valid 
        = vlSelfRef.axi4yank__DOT____Vcellinp__Queue1_BundleMap_31__io_enq_valid;
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_deq_ready 
        = vlSelfRef.axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready;
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__do_enq = 
        ((~ ((IData)(vlSelfRef._axi4frag_auto_in_awready) 
             & (IData)(vlSelfRef.axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready))) 
         & ((IData)(vlSelfRef._axi4frag_auto_in_awready) 
            & (IData)(vlSelfRef._cpu_auto_master_out_awvalid)));
}
