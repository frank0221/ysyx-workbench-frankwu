// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_ysyxSoCASIC.h"

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lkeyboard__DOT__mps2__DOT__ps2_sync = 
        ((6U & ((IData)(vlSelfRef.lkeyboard__DOT__mps2__DOT__ps2_sync) 
                << 1U)) | (IData)(vlSelfRef.ps2_clk));
}

extern const VlUnpacked<CData/*0:0*/, 2048> VysyxSoCFull__ConstPool__TABLE_h6e463ae8_0;
extern const VlUnpacked<CData/*3:0*/, 64> VysyxSoCFull__ConstPool__TABLE_h2811464f_0;
extern const VlUnpacked<CData/*3:0*/, 4> VysyxSoCFull__ConstPool__TABLE_hd83ecffd_0;
extern const VlUnpacked<VlWide<3>/*79:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h46f0894a_0;
extern const VlUnpacked<CData/*7:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hd6c89ed8_0;
extern const VlUnpacked<SData/*9:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hcd3a1bf9_0;

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_1_0;
    luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_1_0 = 0;
    CData/*7:0*/ lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_hfdaa4487_0_0;
    lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_hfdaa4487_0_0 = 0;
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*10:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0;
    CData/*7:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__lsr5r = 0;
    SData/*15:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0;
    CData/*7:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd = 0;
    CData/*2:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0;
    CData/*4:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0;
    CData/*6:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0;
    CData/*2:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0;
    CData/*3:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0;
    CData/*3:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0;
    CData/*2:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0;
    CData/*7:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0;
    CData/*7:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0;
    SData/*9:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__counter_t = 0;
    CData/*3:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0;
    CData/*3:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0;
    CData/*0:0*/ __Vdly__lspi__DOT__mspi__DOT____Vcellout__u0_spi_top__wb_ack_o;
    __Vdly__lspi__DOT__mspi__DOT____Vcellout__u0_spi_top__wb_ack_o = 0;
    SData/*13:0*/ __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0;
    CData/*0:0*/ __Vdly__spi_sck;
    __Vdly__spi_sck = 0;
    CData/*0:0*/ __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0;
    VlWide<4>/*127:0*/ __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data;
    VL_ZERO_W(128, __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data);
    IData/*16:0*/ __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q;
    __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q = 0;
    CData/*3:0*/ __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q;
    __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q = 0;
    CData/*0:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0;
    CData/*7:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0;
    CData/*0:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0;
    CData/*7:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0;
    CData/*0:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck = 0;
    CData/*7:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter = 0;
    CData/*0:0*/ __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*2:0*/ __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*3:0*/ __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*0:0*/ __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*3:0*/ __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*0:0*/ __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*2:0*/ __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*3:0*/ __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*0:0*/ __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*0:0*/ __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0;
    __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0 = 0;
    SData/*12:0*/ __VdlyVal__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4;
    __VdlyVal__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 = 0;
    CData/*1:0*/ __VdlyDim0__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4;
    __VdlyDim0__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 = 0;
    CData/*0:0*/ __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4;
    __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 = 0;
    // Body
    __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    __Vdly__spi_sck = vlSelfRef.spi_sck;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__lspi__DOT__mspi__DOT____Vcellout__u0_spi_top__wb_ack_o 
        = vlSelfRef.lspi__DOT__mspi__DOT____Vcellout__u0_spi_top__wb_ack_o;
    __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0 = 0U;
    __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 = 0U;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tstate;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rstate;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0U;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0U;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0U;
    vlSelfRef.spi_mosi = (1U & ((~ (IData)(vlSelfRef.reset)) 
                                & ((1U & ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk) 
                                          | (~ (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))
                                    ? (vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                       (3U & ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_bit_pos) 
                                              >> 5U))] 
                                       >> (0x1fU & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_bit_pos)))
                                    : (IData)(vlSelfRef.spi_mosi))));
    __Vdly__spi_sck = (1U & ((~ (IData)(vlSelfRef.reset)) 
                             & ((((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                  & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero)) 
                                 & ((~ (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__last_bit)) 
                                    | (IData)(vlSelfRef.spi_sck)))
                                 ? (~ (IData)(vlSelfRef.spi_sck))
                                 : (IData)(vlSelfRef.spi_sck))));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr6r 
        = (1U & ((IData)(vlSelfRef.reset) | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                              ? 0U : 
                                             ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                              | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr6) 
                                                 & (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr6_d)))))));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr7r 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                  | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr7) 
                                                     & (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr7_d)))))));
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = (1U & ((IData)(vlSelfRef.reset) | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                              ? 0U : 
                                             ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                              | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
                                                 & (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr5_d)))))));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr1r 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                  | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr1) 
                                                     & (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr1_d)))))));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr2r 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                  | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr2) 
                                                     & (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr2_d)))))));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr3r 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                  | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr3) 
                                                     & (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr3_d)))))));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr4r 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                  | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr4) 
                                                     & (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr4_d)))))));
    __Vdly__lspi__DOT__mspi__DOT____Vcellout__u0_spi_top__wb_ack_o 
        = ((~ (IData)(vlSelfRef.reset)) & (((IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_cyc_i) 
                                            & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_stb_i)) 
                                           & (~ (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellout__u0_spi_top__wb_ack_o))));
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__fifo_read)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ti_int_rise)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                                   & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__msr_read)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ms_int_rise)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                                   & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                      >> 3U))))));
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rls_int_rise)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                                   & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                      >> 2U))))));
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                                   == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__trigger_level)) 
                                                  & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__fifo_read))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rda_int_rise)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                                   & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr0r 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (((
                                                   ((1U 
                                                     == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
                                                    & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
                                                   & (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse))) 
                                                  | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rx_reset))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr0r) 
                                                  | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr0) 
                                                     & (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr0_d)))))));
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                                                  | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                                     & (2U 
                                                        == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__iir))))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__thre_int_rise)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                                   & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                      >> 1U))))));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__thre_int_d 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ms_int_d 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ti_int_d 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rls_int_d 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rda_int_d 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__state 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    __Vtableidx3 = (((((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__msr_read) 
                       << 0xaU) | (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                    << 9U) | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                              << 8U))) 
                     | (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                         << 7U) | (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                    << 6U) | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__fifo_read) 
                                              << 5U)))) 
                    | ((((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                         << 4U) | (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                    << 3U) | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr_mask) 
                                              << 2U))) 
                       | (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                           << 1U) | (IData)(vlSelfRef.reset))));
    vlSelfRef.luart__DOT__muart__DOT__interrupt = VysyxSoCFull__ConstPool__TABLE_h6e463ae8_0
        [__Vtableidx3];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__srx_pad 
        = ((IData)(vlSelfRef.reset) || (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(
                                                          (((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q) 
                                                            >> 3U) 
                                                           | (7U 
                                                              == (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                     & (IData)(vlSelfRef.spi_sck)) 
                                                    & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_one)) 
                                                   | (((~ 
                                                        (0U 
                                                         != (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider))) 
                                                       & (~ (IData)(vlSelfRef.spi_sck))) 
                                                      & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    if (vlSelfRef.reset) {
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx = 1U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx = 2U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx = 3U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx = 4U;
        __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q = 0x2774U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr = 0U;
        vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0xffffU;
        __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0 = 1U;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter = 0U;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck = 0U;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
        vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
        __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0x9fU;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__counter_t = 0x27fU;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
        __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in = 0U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q = 0U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q = 2U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__fcr = 3U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__mcr = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__scratch = 0U;
        vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss = 0U;
        vlSelfRef.lspi__DOT__mspi__DOT____Vcellout__u0_spi_top__wb_dat_o = 0U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q = 0U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q = 2U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = 0U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
        vlSelfRef.lspi__DOT__mspi__DOT__spi_irq_out = 0U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q = 0U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q = 0U;
        vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr = 0U;
        vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr = 0U;
    } else {
        if ((0U == vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
            __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q = 0x30cU;
            vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = 1U;
        } else {
            __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
                = (0x1ffffU & (vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
                               - (IData)(1U)));
            if ((9U == (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q = 0U;
            }
        }
        if (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__msi_reset) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0U;
        } else if (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__msr_read) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        }
        if ((1U & ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                   & (~ (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff000000U & vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_dat_i));
            }
            if ((4U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xff00ffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff0000U & vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_dat_i));
            }
            if ((2U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffff00ffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff00U & vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_dat_i));
            }
            if ((1U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffff00U & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xffU & vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_dat_i));
            }
        } else if ((1U & (((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 1U) & (~ (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff000000U & vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_dat_i));
            }
            if ((4U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xff00ffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff0000U & vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_dat_i));
            }
            if ((2U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffff00ffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff00U & vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_dat_i));
            }
            if ((1U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffff00U & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xffU & vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_dat_i));
            }
        } else if ((1U & (((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 2U) & (~ (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff000000U & vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_dat_i));
            }
            if ((4U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xff00ffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff0000U & vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_dat_i));
            }
            if ((2U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffff00ffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff00U & vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_dat_i));
            }
            if ((1U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffff00U & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xffU & vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_dat_i));
            }
        } else if ((IData)((((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                             >> 3U) & (~ (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff000000U & vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_dat_i));
            }
            if ((4U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xff00ffffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff0000U & vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_dat_i));
            }
            if ((2U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffff00ffU & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff00U & vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_dat_i));
            }
            if ((1U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffff00U & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xffU & vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_dat_i));
            }
        } else {
            __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[(3U 
                                                                             & ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos)))) 
                    & __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                    (3U & ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                           >> 5U))]) | ((1U & ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk)
                                                ? (IData)(vlSelfRef.spi_miso)
                                                : (
                                                   vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                                   (3U 
                                                    & ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))))) 
                                        << (0x1fU & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))));
        }
        if (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_pop) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        } else if ((((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_re) 
                     & (0U == (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_adr))) 
                    & (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dlab)))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 1U;
        }
        __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q 
            = ((0xeU & ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q) 
                        << 1U)) | (4U == (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)));
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xf0U & (IData)(__Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__msi_reset)
                   ? 0U : (0xfU & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__msr) 
                                   | (((((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dcd) 
                                         << 3U) | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ri) 
                                                   << 2U)) 
                                       | (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dsr) 
                                           << 1U) | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__cts))) 
                                      ^ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals))))));
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xfU & (IData)(__Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | ((((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dcd_c) 
                    << 7U) | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ri_c) 
                              << 6U)) | (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dsr_c) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__cts_c) 
                                          << 4U))));
        vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
            = (0xffffU & ((1U & ((~ (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
                                 | (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero)))
                           ? (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                           : ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt) 
                              - (IData)(1U))));
        if ((1U & (~ ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                        __VdlyVal__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 
                            = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_row_w;
                        __VdlyDim0__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 
                            = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w;
                        __VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4 = 1U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        if ((0x32U == vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                            vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q = 1U;
                        }
                    }
                }
            }
            if ((4U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q 
                            = (3U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q));
                        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q 
                            = (0xffffU & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q));
                    } else {
                        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q 
                            = (3U & (~ (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_wr_w)));
                        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q 
                            = (0xffffU & vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w);
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q = 0U;
                }
            }
        }
        if (((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck) 
             & (~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_done)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter)));
        }
        if (((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck) 
             & (~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck 
                = (1U & (~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck)));
        }
        if (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n) {
            if ((1U & (~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
                __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
            }
        } else {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
                = (1U & (~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck)));
        }
        vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
            = (0xffU & ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)
                         ? ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)
                             ? ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                - (IData)(1U)) : (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                         : ((0U != (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__char_len))
                             ? (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__char_len)
                             : 0x80U)));
        if (((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__go) 
             & (~ (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 1U;
        } else if ((((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__last_bit)) 
                    & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        }
        if (((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck) 
             & (~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        }
        if (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n) {
            if ((1U & (~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
                __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
            }
        } else {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
                = (1U & (~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)));
        }
        if ((((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_ctrl_sel) 
              & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_we_i)) 
             & (~ (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0x3f00U & (IData)(__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0xffU & (vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_dat_i 
                                   | (1U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))));
            }
            if ((2U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_sel_i))) {
                __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0xffU & (IData)(__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0x3f00U & vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_dat_i));
            }
        } else if ((((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__last_bit)) 
                    & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                = (0x3effU & (IData)(__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl));
        }
        if (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__serial_in) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__brc_value;
        } else if (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b) 
                            - (IData)(1U)));
        }
        if ((((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
              | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
             | (0U == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
                = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value;
        } else if (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__counter_t)))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
                = (0x3ffU & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__counter_t) 
                             - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
             & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__fifo_write))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__block_value;
        } else if (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = (0xffU & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__block_cnt) 
                            - (IData)(1U)));
        }
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__dlc 
            = (0xffffU & ((1U & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__start_dlc) 
                                 | (~ (0U != (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dlc)))))
                           ? ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dl) 
                              - (IData)(1U)) : ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dlc) 
                                                - (IData)(1U))));
        if (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rx_reset) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
            __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
        } else if ((2U == (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0x10U > (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_count)));
                __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = (7U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
                __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
                __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 1U;
                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                    = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0U < (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x1fU & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                - (IData)(1U)));
                __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 
                    = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
                __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 1U;
                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            }
        } else if ((3U == (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = (7U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
            __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
            __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 1U;
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        }
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q 
            = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q 
            = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r;
        if (((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_we) 
             & (2U == (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_adr)))) {
            vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__fcr 
                = (3U & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                         >> 6U));
        }
        if (((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_we) 
             & (4U == (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_adr)))) {
            vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__mcr 
                = (0x1fU & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in));
        }
        if (((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_we) 
             & (7U == (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_adr)))) {
            vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__scratch 
                = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
        }
        if ((((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_ss_sel) 
              & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_we_i)) 
             & (~ (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_sel_i))) {
                vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss 
                    = (0xffU & vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_dat_i);
            }
        }
        vlSelfRef.lspi__DOT__mspi__DOT____Vcellout__u0_spi_top__wb_dat_o 
            = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat;
        if ((8U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
                vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
                vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
            } else if ((2U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
                vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
                vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
            } else if ((1U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
                vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 1U;
            } else {
                if ((9U != (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r))) {
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w;
                }
                vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                    = ((0x1bffU & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q)) 
                       | ((9U == (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r)) 
                          << 0xaU));
                vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 2U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        if ((9U == (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r))) {
                            vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q = 0U;
                        } else {
                            vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q 
                                = ((~ ((IData)(1U) 
                                       << (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w))) 
                                   & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q));
                        }
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 0U;
                        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                            = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w;
                    }
                    if ((1U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                            = (0x1bffU & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                    } else {
                        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                            = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_col_w;
                        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                            = (0x1bffU & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 4U;
                    }
                } else if ((1U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                } else {
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w;
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_col_w;
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = (0x1bffU & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 5U;
                }
            } else if ((2U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
                }
                if ((1U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q 
                        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w;
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_row_w;
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 3U;
                } else {
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
                }
            } else if ((1U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q = 1U;
                vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q = 0U;
                vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 7U;
            } else if ((0x32U != vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                if ((0x28U != vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                    if ((1U & (~ ((0x14U == vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q) 
                                  | (0x1eU == vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q))))) {
                        if ((0xaU != vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                            vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q = 0U;
                        }
                    }
                }
                if ((0x28U == vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)) {
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                        = (0x400U | (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q = 2U;
                } else {
                    if ((1U & (~ ((0x14U == vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q) 
                                  | (0x1eU == vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q))))) {
                        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q 
                            = ((0xaU == vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)
                                ? 0x21U : 0U);
                    }
                    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q 
                        = (((0x14U == vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q) 
                            | (0x1eU == vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q))
                            ? 1U : ((0xaU == vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q)
                                     ? 0U : 7U));
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q 
                            = ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                               | (0xfU & ((IData)(1U) 
                                          << (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w))));
                    }
                }
            }
        }
        if (((1U != (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
             & (0U != (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r)))) {
            vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q 
                = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r;
        }
        if (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rx_reset) 
             | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        } else if ((((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                     & (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_pop))) 
                    & (0x10U == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 1U;
        }
        if (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tx_reset) 
             | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
        } else if (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                    & (0x10U == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
            vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 1U;
        }
        if (((((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ie) 
               & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
              & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__last_bit)) 
             & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            vlSelfRef.lspi__DOT__mspi__DOT__spi_irq_out = 1U;
        } else if (vlSelfRef.lspi__DOT__mspi__DOT____Vcellout__u0_spi_top__wb_ack_o) {
            vlSelfRef.lspi__DOT__mspi__DOT__spi_irq_out = 0U;
        }
        if (((~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
             & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd))) {
            vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                = (0xfffffcU & vlSelfRef._axi42apb_auto_out_paddr);
        }
        if (((~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)) 
             & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr))) {
            vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                = (0xffffffU & vlSelfRef._axi42apb_auto_out_paddr);
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    } else if (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tx_reset) {
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    } else if ((2U == (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if (VL_UNLIKELY(((0x10U > (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tf_count))))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
            VL_WRITEF_NX("%c",0,8,vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in);
            Verilated::runFlushCallbacks();
            vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
        }
    } else if ((1U == (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if ((0U < (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tf_count))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
                = (0x1fU & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tf_count) 
                            - (IData)(1U)));
        }
    } else if (VL_UNLIKELY(((3U == (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                                     << 1U) | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))))) {
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
        VL_WRITEF_NX("%c",0,8,vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in);
        Verilated::runFlushCallbacks();
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
            = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
    }
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__msr 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr;
    if (__VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v0) {
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0U] = 0U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1U] = 0U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2U] = 0U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3U] = 0U;
    }
    if (__VdlySet__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4) {
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[__VdlyDim0__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4] 
            = __VdlyVal__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q__v4;
    }
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter 
        = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck 
        = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    if (__VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16) {
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32) {
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32] 
            = __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    }
    if (__VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33) {
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33] = 0U;
    }
    if (__VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34) {
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34] 
            = __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    }
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q 
        = __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q;
    vlSelfRef.lspi__DOT__mspi__DOT____Vcellout__u0_spi_top__wb_ack_o 
        = __Vdly__lspi__DOT__mspi__DOT____Vcellout__u0_spi_top__wb_ack_o;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[0U] 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[1U] 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[2U] 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[3U] 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    vlSelfRef.lspi__DOT__spi_bundle_mosi = vlSelfRef.spi_mosi;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr6_d 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr7_d 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr5_d 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr1_d 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr1));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr2_d 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr2));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr3_d 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr3));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr4_d 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr4));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_doe 
        = (8U > (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr0_d 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__sck 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_done));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n 
        = (1U & ((IData)(vlSelfRef.reset) | (~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__last_bit 
        = (1U & (~ (0U != (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__byte_index 
        = (3U & (((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                  >> 1U) - (IData)(3U)));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_done 
        = (0x16U == (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_doe 
        = (8U > (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
    __Vtableidx4 = ((((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                      << 5U) | (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                 << 4U) | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rda_int) 
                        << 2U) | (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                   << 1U) | (IData)(vlSelfRef.reset))));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__iir 
        = VysyxSoCFull__ConstPool__TABLE_h2811464f_0
        [__Vtableidx4];
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n 
        = (1U & ((IData)(vlSelfRef.reset) | (~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ie 
        = (1U & ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                 >> 0xcU));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tx_negedge 
        = (1U & ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                 >> 0xaU));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__lsb 
        = (1U & ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                 >> 0xbU));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx_negedge 
        = (1U & ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                 >> 9U));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__char_len 
        = (0x7fU & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ass 
        = (1U & ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                 >> 0xdU));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__thre_set_en 
        = (1U & (~ (0U != (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__block_cnt))));
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
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__start_dlc 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_we) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_adr))) 
                                                   && (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dlab)));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__a 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__dpra 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
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
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__int_o 
        = vlSelfRef.luart__DOT__muart__DOT__interrupt;
    __Vtableidx1 = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__fcr;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = VysyxSoCFull__ConstPool__TABLE_hd83ecffd_0
        [__Vtableidx1];
    vlSelfRef.luart__DOT__muart__DOT__dtr_pad_o = (1U 
                                                   & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__mcr));
    vlSelfRef.luart__DOT__muart__DOT__rts_internal 
        = (1U & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                 >> 1U));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__loopback 
        = (1U & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                 >> 4U));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat_o 
        = vlSelfRef.lspi__DOT__mspi__DOT____Vcellout__u0_spi_top__wb_dat_o;
    (vlSelfRef.lspi__DOT__mspi__DOT__is_flash ? vlSelfRef.lspi__DOT__mspi__DOT__flash_prdata
      : vlSelfRef.lspi__DOT__mspi__DOT__prdata) = vlSelfRef.lspi__DOT__mspi__DOT____Vcellout__u0_spi_top__wb_dat_o;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__sync_dat_o 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__srx_pad;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.uart_rx));
    vlSelfRef.sdram_cke = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_dout_en 
        = (1U & (~ (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)));
    vlSelfRef.sdram_ba = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q;
    vlSelfRef.sdram_a = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_pop 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_overrun 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_overrun;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_count 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rx_reset 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_we) 
                                                    & (2U 
                                                       == (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_adr))) 
                                                   && (1U 
                                                       & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                                                          >> 1U))));
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_ack_w 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q;
    vlSelfRef._lsdram_apb_auto_in_pready = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__neg_edge 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__neg_edge 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge;
    vlSelfRef.sdram_we = (1U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q));
    vlSelfRef.sdram_cas = (1U & ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                 >> 1U));
    vlSelfRef.sdram_ras = (1U & ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                 >> 2U));
    vlSelfRef.sdram_cs = (1U & ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                >> 3U));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__overrun 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_int_o 
        = vlSelfRef.lspi__DOT__mspi__DOT__spi_irq_out;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_ack_o 
        = vlSelfRef.lspi__DOT__mspi__DOT____Vcellout__u0_spi_top__wb_ack_o;
    (vlSelfRef.lspi__DOT__mspi__DOT__is_flash ? vlSelfRef.lspi__DOT__mspi__DOT__flash_pready
      : vlSelfRef.lspi__DOT__mspi__DOT__pready) = vlSelfRef.lspi__DOT__mspi__DOT____Vcellout__u0_spi_top__wb_ack_o;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                      & (~ (IData)(vlSelfRef.spi_sck))) 
                                                     & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_one)) 
                                                    | ((~ 
                                                        (0U 
                                                         != (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider))) 
                                                       & (IData)(vlSelfRef.spi_sck))) 
                                                   | (((~ 
                                                        (0U 
                                                         != (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider))) 
                                                       & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__go)) 
                                                      & (~ (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))));
    vlSelfRef.sdram_dqm = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_dout 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q;
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
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__a 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpra 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tx_reset 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_we) 
                                                    & (2U 
                                                       == (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_adr))) 
                                                   && (1U 
                                                       & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                                                          >> 2U))));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tf_push 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_we) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_adr))) 
                                                   && (1U 
                                                       & (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dlab)))));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_out[0U] 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[0U];
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_out[1U] 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[1U];
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_out[2U] 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[2U];
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_out[3U] 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[3U];
    vlSelfRef.lspi__DOT__mspi__DOT__spi_mosi = vlSelfRef.lspi__DOT__spi_bundle_mosi;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr1 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_overrun;
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
    if (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_doe) {
        vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__douten = 1U;
        vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout 
            = (1U & ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__CMD_35H) 
                     >> (7U & ((IData)(7U) - (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter)))));
    } else {
        vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__douten = 0U;
        vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout = 0U;
    }
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_done 
        = ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter) 
           == ((IData)(1U) + (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__FINAL_COUNT)));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__last_clk 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__last_bit;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__last 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__last_bit;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__done 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_done;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__douten 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_doe;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_negedge 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tx_negedge;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__lsb 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__lsb;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_negedge 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx_negedge;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__len 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__char_len;
    lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_hfdaa4487_0_0 
        = ((0x80U & ((~ (0U != (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__char_len))) 
                     << 7U)) | (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__char_len));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr7 
        = ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_error_bit) 
           | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_error_bit 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_error_bit;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dtr_pad_o 
        = vlSelfRef.luart__DOT__muart__DOT__dtr_pad_o;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rts_pad_o 
        = vlSelfRef.luart__DOT__muart__DOT__rts_internal;
    vlSelfRef.luart__DOT__muart__DOT__rtsn = (1U & 
                                              (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__rts_internal)));
    vlSelfRef.lsdram_apb__DOT__sdram_bundle_cke = vlSelfRef.sdram_cke;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_out_en_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_dout_en;
    vlSelfRef.lsdram_apb__DOT__sdram_bundle_ba = vlSelfRef.sdram_ba;
    vlSelfRef.lsdram_apb__DOT__sdram_bundle_a = vlSelfRef.sdram_a;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__pop 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_pop;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__overrun 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_overrun;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_count;
    vlSelfRef.apbxbar__DOT__auto_anon_out_6_pready 
        = vlSelfRef._lsdram_apb_auto_in_pready;
    vlSelfRef.lsdram_apb__DOT__auto_in_pready = vlSelfRef._lsdram_apb_auto_in_pready;
    vlSelfRef.lsdram_apb__DOT__sdram_bundle_we = vlSelfRef.sdram_we;
    vlSelfRef.lsdram_apb__DOT__sdram_bundle_cas = vlSelfRef.sdram_cas;
    vlSelfRef.lsdram_apb__DOT__sdram_bundle_ras = vlSelfRef.sdram_ras;
    vlSelfRef.lsdram_apb__DOT__sdram_bundle_cs = vlSelfRef.sdram_cs;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_one 
        = (1U == (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__go 
        = (1U & ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                 >> 8U));
    vlSelfRef.spi_sck = __Vdly__spi_sck;
    vlSelfRef.lsdram_apb__DOT__sdram_bundle_dqm = vlSelfRef.sdram_dqm;
    if (vlSelfRef.reset) {
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ier = 0U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
    } else {
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals 
            = ((((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dcd) 
                 << 3U) | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ri) 
                           << 2U)) | (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dsr) 
                                       << 1U) | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__cts)));
        if (((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_we) 
             & (1U == (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_adr)))) {
            if ((1U & (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dlab)))) {
                vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ier 
                    = (0xfU & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in));
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))) {
                        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q 
                            = (3U & (~ ((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_wr_w) 
                                        >> 2U)));
                    }
                }
            }
        }
        if (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__enable) {
            if ((8U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((4U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                } else if ((2U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                    } else if (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__break_error))) {
                        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__break_error)
                                ? 4U : (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                         << 3U) | (
                                                   ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error))));
                        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                    } else if ((1U & (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)))) {
                        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                << 3U) | (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                           << 1U) | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)));
                        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                    }
                } else if ((1U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else {
                    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
                        = (1U & (VL_REDXOR_8(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                 ^ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)));
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 5U;
                }
            } else if ((4U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((2U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                        if ((0U == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter))) {
                            if ((8U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 3U;
                            } else {
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
                            }
                        } else {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                                = (7U & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter) 
                                         - (IData)(1U)));
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                        }
                        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                            = ((2U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                ? ((1U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? 7U : 6U) : ((1U 
                                                   & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                   ? 5U
                                                   : 4U));
                        if (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                            vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
                        } else {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 6U;
                        }
                        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else if ((1U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
                        = (1U & ((0x10U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                  ? ((0x20U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)
                                      : (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor))
                                  : ((0x20U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity))
                                      : (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor)))));
                    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 9U;
                } else {
                    if (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
                            = (1U & (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__serial_in)));
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0xaU;
                    }
                    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((2U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((1U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
                            = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__serial_in;
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 8U;
                    }
                    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                } else {
                    if (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        if ((2U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            if ((1U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                        << 7U) | (0x7fU 
                                                  & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                     >> 1U)));
                            } else {
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = ((0x80U & (IData)(__Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 6U) | 
                                          (0x3fU & 
                                           ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                            >> 1U))));
                            }
                        } else {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                = ((1U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? ((0xc0U & (IData)(__Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 5U) | 
                                          (0x1fU & 
                                           ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                            >> 1U))))
                                    : ((0xe0U & (IData)(__Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 4U) | 
                                          (0xfU & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                   >> 1U)))));
                        }
                    }
                    if (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 7U;
                    }
                    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((1U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                if (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate 
                        = ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__serial_in)
                            ? 0U : 6U);
                }
                vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
            } else {
                vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
                vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                if ((1U & ((~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__serial_in)) 
                           & (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__break_error))))) {
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                }
            }
        }
    }
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__break_error 
        = (0U == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rstate 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_output_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_dout;
    if (vlSelfRef.reset) {
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q = 0U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q 
            = __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q;
        vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__dout 
            = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_dout;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0U;
    } else {
        if ((6U == (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q 
                = (vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                   >> 0x10U);
        } else if ((8U & (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q))) {
            vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q 
                = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q;
        }
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q 
            = __Vdly__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q;
        vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__dout 
            = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_dout;
        if (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__enable) {
            if ((4U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((2U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                } else if ((1U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 1U;
                    if ((2U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        if ((1U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 7U;
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_8(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out));
                        } else {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 6U;
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x7fU 
                                                      & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                        }
                    } else if ((1U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 5U;
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x3fU 
                                                  & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                    } else {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 4U;
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x1fU 
                                                  & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                    }
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                        = (0x7fU & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out) 
                                    >> 1U));
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                        = (1U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out));
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 1U;
                } else {
                    if ((0U != (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                        } else {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = ((0U == (4U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                ? 0xdU : ((4U == (7U 
                                                  & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                           ? 0x15U : 0x1dU));
                    }
                    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((1U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    if ((0U != (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                        } else {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                } else {
                    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                    if ((0U != (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            if ((0U < (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter))) {
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
                                    = (7U & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter) 
                                             - (IData)(1U)));
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                                    = ((0x40U & (IData)(__Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out)) 
                                       | (0x3fU & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out) 
                                                   >> 1U)));
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = (1U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out));
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                            } else if ((8U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = ((0x10U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                        ? ((1U & (~ 
                                                  ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                   >> 5U))) 
                                           && (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor))
                                        : ((1U & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                  >> 5U)) 
                                           || (1U & 
                                               (~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor)))));
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 3U;
                            } else {
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                            }
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        } else {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                if ((0U != (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                    } else {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = (0x1fU & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                        - (IData)(1U)));
                    }
                } else {
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                }
                vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 0U;
            } else if ((0U != (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tf_count))) {
                vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 5U;
            } else {
                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
            }
        } else {
            vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        }
    }
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__mosi_pad_o 
        = vlSelfRef.lspi__DOT__mspi__DOT__spi_mosi;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__dout 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__done 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_done;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__ce_n 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_en 
        = (1U & (~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n)));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__ce_n 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 1U) & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_count))));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                      | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                         | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                            | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr4r)))));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__ce_n 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_doe 
        = (1U & (~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
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
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__error_bit 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_error_bit;
    luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_1_0 
        = ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__loopback)
            ? ((0xcU & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                        << 2U)) | ((2U & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                          >> 1U)) | 
                                   (1U & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                          >> 3U))))
            : (IData)(vlSelfRef.luart__DOT__muart__DOT____Vcellinp__Uregs__modem_inputs));
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
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_cke 
        = vlSelfRef.lsdram_apb__DOT__sdram_bundle_cke;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_ba 
        = vlSelfRef.lsdram_apb__DOT__sdram_bundle_ba;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_a 
        = vlSelfRef.lsdram_apb__DOT__sdram_bundle_a;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rx_reset 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rx_reset;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__in_pready 
        = vlSelfRef.lsdram_apb__DOT__auto_in_pready;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_we 
        = vlSelfRef.lsdram_apb__DOT__sdram_bundle_we;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_cas 
        = vlSelfRef.lsdram_apb__DOT__sdram_bundle_cas;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_ras 
        = vlSelfRef.lsdram_apb__DOT__sdram_bundle_ras;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_cs 
        = vlSelfRef.lsdram_apb__DOT__sdram_bundle_cs;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__go 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__go;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__go 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__go;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__pos_edge 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__pos_edge 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk 
        = ((0U != (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
           & ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tx_negedge)
               ? (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
               : (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk 
        = (((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx_negedge)
             ? (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
             : (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
           & ((0U != (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
              | (IData)(vlSelfRef.spi_sck)));
    vlSelfRef.lspi__DOT__spi_bundle_sck = vlSelfRef.spi_sck;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_dqm 
        = vlSelfRef.lsdram_apb__DOT__sdram_bundle_dqm;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rstate;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data_in 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__di 
        = (0xffU & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                    >> 3U));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_1 
        = (1U == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tx_reset 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tx_reset;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_push 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tf_push;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__pop 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tstate;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_count 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__thre_set_en) 
           & (0U == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__enable 
        = ((~ (IData)(vlSelfRef.reset)) & ((0U != (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                                           & (~ (0U 
                                                 != (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dlc)))));
    if (vlSelfRef.reset) {
        vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider = 0U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q = 0U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr = 3U;
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q = 0U;
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xffU & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xff00U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dl));
    } else {
        if ((((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_divider_sel) 
              & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_we_i)) 
             & (~ (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_sel_i))) {
                vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xff00U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0xffU & vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_dat_i));
            }
            if ((2U & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_sel_i))) {
                vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xffU & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0xff00U & vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_dat_i));
            }
        }
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q 
            = ((0U != (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r))
                ? 1U : (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r));
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q 
            = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q;
        if (((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_we) 
             & (3U == (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_adr)))) {
            vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr 
                = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
        }
        vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q 
            = vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w;
        if (((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_we) 
             & (1U == (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_adr)))) {
            if (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dlab) {
                vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xffU & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                          << 8U));
            }
        }
        if (((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_we) 
             & (0U == (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_adr)))) {
            if (vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dlab) {
                vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xff00U & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in));
            }
        }
    }
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__s_out 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__mosi_pad_o;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__en 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_en;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__thre_int_rise 
        = ((~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
           & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ms_int_rise 
        = ((~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
           & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rda_int_rise 
        = ((~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
           & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ti_int_rise 
        = ((~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
           & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rls_int_rise 
        = ((~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
           & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__douten 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_doe;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_cke_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_cke;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_ba_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_ba;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_addr_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_a;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo_reset 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rx_reset;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_ack_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__in_pready;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_we_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_we;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_cas_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_cas;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_ras_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_ras;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_cs_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_cs;
    vlSelfRef.lspi__DOT__mspi__DOT__spi_sck = vlSelfRef.lspi__DOT__spi_bundle_sck;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = __Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_dqm_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_dqm;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__fifo_reset 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tx_reset;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__push 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_push;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_count;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
           & (0U == (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__tstate)));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__sclk_pad_o 
        = vlSelfRef.lspi__DOT__mspi__DOT__spi_sck;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__divider 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__enable 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    vlSelfRef.spi_ss = (0xffU & (~ ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss) 
                                    & ((- (IData)(((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                   & (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ass)))) 
                                       | (- (IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ass)))))))));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__push 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse;
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
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__req_accept 
        = ((4U == (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
           | (6U == (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)));
    vlSelfRef._lsdram_apb_auto_in_prdata = (((IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                             << 0x10U) 
                                            | (IData)(vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__we 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__push;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__lcr 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lcr 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr;
    __Vtableidx2 = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__block_value 
        = VysyxSoCFull__ConstPool__TABLE_hd6c89ed8_0
        [__Vtableidx2];
    __Vtableidx5 = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = VysyxSoCFull__ConstPool__TABLE_hcd3a1bf9_0
        [__Vtableidx5];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__serial_out 
        = ((~ ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__serial_in 
        = ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__loopback)
            ? (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__serial_out)
            : (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__enable 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__enable;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__enable 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__enable;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__sclk_pad_o;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__s_clk 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__sclk_pad_o;
    vlSelfRef.lspi__DOT__spi_bundle_ss = vlSelfRef.spi_ss;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__push;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_accept_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__req_accept;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_accept_w 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__req_accept;
    vlSelfRef.apbxbar__DOT__auto_anon_out_6_prdata 
        = vlSelfRef._lsdram_apb_auto_in_prdata;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_read_data_w 
        = vlSelfRef._lsdram_apb_auto_in_prdata;
    vlSelfRef.lsdram_apb__DOT__auto_in_prdata = vlSelfRef._lsdram_apb_auto_in_prdata;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__brc_value 
        = (0xffU & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                    >> 2U));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_pad_o 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__serial_out;
    vlSelfRef.uart_tx = ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__loopback) 
                         | (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dlab 
        = (1U & ((IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                 >> 7U));
    vlSelfRef.lspi__DOT__mspi__DOT__spi_ss = vlSelfRef.lspi__DOT__spi_bundle_ss;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__in_prdata 
        = vlSelfRef.lsdram_apb__DOT__auto_in_prdata;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__serial_in;
    vlSelfRef.luart__DOT__uart_tx = vlSelfRef.uart_tx;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss_pad_o 
        = vlSelfRef.lspi__DOT__mspi__DOT__spi_ss;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_read_data_o 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__in_prdata;
    vlSelfRef.luart__DOT__muart__DOT__uart_tx = vlSelfRef.luart__DOT__uart_tx;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__stx_pad_o 
        = vlSelfRef.luart__DOT__muart__DOT__uart_tx;
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__3(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lkeyboard__DOT__mps2__DOT__ps2_clk_sync 
        = (IData)((4U == (6U & (IData)(vlSelfRef.lkeyboard__DOT__mps2__DOT__ps2_sync))));
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__4(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ lsdram_apb__DOT__msdram__DOT____VdfgRegularize_hc85f9e4c_0_0;
    lsdram_apb__DOT__msdram__DOT____VdfgRegularize_hc85f9e4c_0_0 = 0;
    // Body
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
        = ((IData)(vlSelfRef.axi42apb__DOT__accept_write)
            ? vlSelfRef._axi4buf_auto_out_wdata : vlSelfRef.axi42apb__DOT__wdata_reg_r);
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
    vlSelfRef.apbxbar__DOT__auto_anon_in_paddr = vlSelfRef._apbdelay_delayer_out_paddr;
    vlSelfRef.apbdelay_delayer__DOT__out_paddr = vlSelfRef._apbdelay_delayer_out_paddr;
    vlSelfRef.apbxbar__DOT__auto_anon_out_6_paddr = vlSelfRef._apbxbar_auto_anon_out_6_paddr;
    vlSelfRef.lsdram_apb__DOT__auto_in_paddr = vlSelfRef._apbxbar_auto_anon_out_6_paddr;
    vlSelfRef.apbxbar__DOT__auto_anon_out_2_paddr = vlSelfRef._apbxbar_auto_anon_out_2_paddr;
    vlSelfRef.lpsram__DOT__auto_in_paddr = vlSelfRef._apbxbar_auto_anon_out_2_paddr;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__wb_addr_i 
        = vlSelfRef.luart__DOT__muart__DOT__reg_adr;
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
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__byte1 
        = (0xffU & ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_1)
                     ? (vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                        >> 8U) : (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__byte3)));
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
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__in_paddr 
        = vlSelfRef.lsdram_apb__DOT__auto_in_paddr;
    vlSelfRef.lpsram__DOT__mpsram__DOT__in_paddr = vlSelfRef.lpsram__DOT__auto_in_paddr;
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
    vlSelfRef.apbxbar__DOT__auto_anon_out_1_psel = vlSelfRef._apbxbar_auto_anon_out_1_psel;
    vlSelfRef.luart__DOT__auto_in_psel = vlSelfRef._apbxbar_auto_anon_out_1_psel;
    vlSelfRef.luart__DOT__muart__DOT____VdfgRegularize_hc00137df_0_0 
        = ((~ (IData)(vlSelfRef.reset)) & ((~ (IData)(vlSelfRef._apbxbar_auto_anon_out_1_penable)) 
                                           & (IData)(vlSelfRef._apbxbar_auto_anon_out_1_psel)));
    vlSelfRef._luart_auto_in_pready = ((IData)(vlSelfRef._apbxbar_auto_anon_out_1_penable) 
                                       & (IData)(vlSelfRef._apbxbar_auto_anon_out_1_psel));
    vlSelfRef.apbxbar__DOT__auto_anon_out_2_penable 
        = vlSelfRef._apbxbar_auto_anon_out_2_penable;
    vlSelfRef.lpsram__DOT__auto_in_penable = vlSelfRef._apbxbar_auto_anon_out_2_penable;
    vlSelfRef.apbxbar__DOT__auto_anon_out_2_psel = vlSelfRef._apbxbar_auto_anon_out_2_psel;
    vlSelfRef.lpsram__DOT__auto_in_psel = vlSelfRef._apbxbar_auto_anon_out_2_psel;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__wb_valid 
        = vlSelfRef._apbxbar_auto_anon_out_2_psel;
    vlSelfRef.lvga__DOT__mvga__DOT__in_pwdata = vlSelfRef.lvga__DOT__auto_in_pwdata;
    vlSelfRef.lkeyboard__DOT__mps2__DOT__in_pwdata 
        = vlSelfRef.lkeyboard__DOT__auto_in_pwdata;
    vlSelfRef.lgpio__DOT__mgpio__DOT__in_pwdata = vlSelfRef.lgpio__DOT__auto_in_pwdata;
    vlSelfRef.lspi__DOT__mspi__DOT__in_pwdata = vlSelfRef.lspi__DOT__auto_in_pwdata;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__in_pwdata 
        = vlSelfRef.lsdram_apb__DOT__auto_in_pwdata;
    vlSelfRef.lpsram__DOT__mpsram__DOT__in_pwdata = vlSelfRef.lpsram__DOT__auto_in_pwdata;
    vlSelfRef.luart__DOT__muart__DOT__in_pwdata = vlSelfRef.luart__DOT__auto_in_pwdata;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__wdata 
        = ((0xffff0000U & vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
           | (((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
               << 8U) | (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__byte0)));
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_addr_i 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__in_paddr;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__in_paddr;
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
    vlSelfRef.lgpio__DOT__auto_in_penable = vlSelfRef._apbxbar_auto_anon_out_3_penable;
    vlSelfRef._lgpio_auto_in_prdata = (((IData)(vlSelfRef._apbxbar_auto_anon_out_3_penable) 
                                        & (0U == (3U 
                                                  & vlSelfRef.lgpio__DOT__mgpio__DOT__addr)))
                                        ? (IData)(vlSelfRef.gpio_in)
                                        : 0U);
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
    vlSelfRef.luart__DOT__muart__DOT__reg_we = ((IData)(vlSelfRef.luart__DOT__muart__DOT____VdfgRegularize_hc00137df_0_0) 
                                                & (IData)(vlSelfRef._axi42apb_auto_out_pwrite));
    vlSelfRef.luart__DOT__muart__DOT__reg_re = ((~ (IData)(vlSelfRef._axi42apb_auto_out_pwrite)) 
                                                & (IData)(vlSelfRef.luart__DOT__muart__DOT____VdfgRegularize_hc00137df_0_0));
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
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_write_data_i 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__in_pwdata;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__in_pwdata;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__wb_dat_i 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__line 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__wdata;
    vlSelfRef.lspi__DOT__mspi__DOT__in_psel = vlSelfRef.lspi__DOT__auto_in_psel;
    vlSelfRef.lspi__DOT__mspi__DOT__in_penable = vlSelfRef.lspi__DOT__auto_in_penable;
    vlSelfRef.lvga__DOT__mvga__DOT__in_pready = vlSelfRef.lvga__DOT__auto_in_pready;
    vlSelfRef.lgpio__DOT__mgpio__DOT__in_psel = vlSelfRef.lgpio__DOT__auto_in_psel;
    vlSelfRef.lgpio__DOT__mgpio__DOT__in_penable = vlSelfRef.lgpio__DOT__auto_in_penable;
    vlSelfRef.apbxbar__DOT__auto_anon_out_3_prdata 
        = vlSelfRef._lgpio_auto_in_prdata;
    vlSelfRef.lgpio__DOT__auto_in_prdata = vlSelfRef._lgpio_auto_in_prdata;
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
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__wb_we_i 
        = vlSelfRef.luart__DOT__muart__DOT__reg_we;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__wb_re_i 
        = vlSelfRef.luart__DOT__muart__DOT__reg_re;
    vlSelfRef.luart__DOT__muart__DOT__in_pready = vlSelfRef.luart__DOT__auto_in_pready;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__in_psel;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__stb_i 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__in_psel;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__wb_dat_i 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__wb_dat_i;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__di 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in;
    vlSelfRef.lgpio__DOT__mgpio__DOT__in_prdata = vlSelfRef.lgpio__DOT__auto_in_prdata;
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
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_resp 
        = vlSelfRef.axi4buf__DOT__auto_out_rresp;
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_adr_i;
    lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_adr_i = 0;
    CData/*0:0*/ lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0;
    lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0 = 0;
    CData/*0:0*/ axi42apb__DOT____VdfgRegularize_h456d727f_0_0;
    axi42apb__DOT____VdfgRegularize_h456d727f_0_0 = 0;
    // Body
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_done 
        = ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT) 
                              - (IData)(6U))));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
        [vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_data_out 
        = ((vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
            [vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
            << 3U) | vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
           [vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]);
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
    vlSelfRef._lspi_auto_in_pready = ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__pready) 
                                      | (IData)(vlSelfRef.lspi__DOT__mspi__DOT__xip_done));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_0_1 
        = ((~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__dlab)) 
           & (0U == (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_adr)));
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
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd 
        = ((~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr 
        = ((~ (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    if (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n) {
        if (vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) {
            vlSelfRef.psram_ce_n = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n;
            vlSelfRef.psram_sck = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
            vlSelfRef.lpsram__DOT__mpsram__DOT__douten 
                = (0xfU & (- (IData)((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_doe))));
            vlSelfRef.lpsram__DOT__mpsram__DOT__dout 
                = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout;
        } else {
            vlSelfRef.psram_ce_n = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n;
            vlSelfRef.psram_sck = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
            vlSelfRef.lpsram__DOT__mpsram__DOT__douten 
                = (0xfU & (- (IData)((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_doe))));
            vlSelfRef.lpsram__DOT__mpsram__DOT__dout 
                = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_dout;
        }
    } else {
        vlSelfRef.psram_ce_n = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n;
        vlSelfRef.psram_sck = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck;
        vlSelfRef.lpsram__DOT__mpsram__DOT__douten 
            = (0xfU & (- (IData)((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_doe))));
        vlSelfRef.lpsram__DOT__mpsram__DOT__dout = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__qpi_dout;
    }
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
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_done;
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
    vlSelfRef.lpsram__DOT__mpsram__DOT__ack = ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                                ? (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                                : (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_done));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__dpo 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_out 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__rf_data_out;
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
    vlSelfRef.apbxbar__DOT__auto_anon_out_0_prdata 
        = vlSelfRef._lspi_auto_in_prdata;
    vlSelfRef.lspi__DOT__auto_in_prdata = vlSelfRef._lspi_auto_in_prdata;
    vlSelfRef.apbxbar__DOT__auto_anon_out_0_pready 
        = vlSelfRef._lspi_auto_in_pready;
    vlSelfRef.lspi__DOT__auto_in_pready = vlSelfRef._lspi_auto_in_pready;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_0_1));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_0_1));
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
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dout 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_stb_i 
        = vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_stb_i;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_cyc_i 
        = vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_cyc_i;
    lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0 
        = ((IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_cyc_i) 
           & (IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_stb_i));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
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
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__douten 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__douten;
    vlSelfRef.psram_dio__en = (0xfU & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__douten));
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__ack_o 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__ack;
    vlSelfRef._lpsram_auto_in_pready = ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__ack) 
                                        & (IData)(vlSelfRef._apbxbar_auto_anon_out_2_psel));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data_out 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_out;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__wb_dat_o 
        = vlSelfRef.luart__DOT__muart__DOT__reg_dat8_r;
    vlSelfRef._luart_auto_in_prdata = ((IData)(vlSelfRef._apbxbar_auto_anon_out_1_psel)
                                        ? (((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_dat8_r) 
                                            << 0x18U) 
                                           | (((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_dat8_r) 
                                               << 0x10U) 
                                              | (((IData)(vlSelfRef.luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 8U) 
                                                 | (IData)(vlSelfRef.luart__DOT__muart__DOT__reg_dat8_r))))
                                        : 0U);
    vlSelfRef.lspi__DOT__mspi__DOT__in_prdata = vlSelfRef.lspi__DOT__auto_in_prdata;
    vlSelfRef.lspi__DOT__mspi__DOT__in_pready = vlSelfRef.lspi__DOT__auto_in_pready;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpo 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat_i;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_sel_i;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__dout 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__dout;
    vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0 
        = ((0xcU & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0)) 
           | (3U & ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__douten) 
                    & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__dout))));
    vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1 
        = ((3U & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1)) 
           | (0xcU & ((IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__douten) 
                      & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__dout))));
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
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__lsr_mask 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr_mask;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__lsr_mask;
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
    vlSelfRef.apbxbar__DOT__auto_anon_out_1_prdata 
        = vlSelfRef._luart_auto_in_prdata;
    vlSelfRef.luart__DOT__auto_in_prdata = vlSelfRef._luart_auto_in_prdata;
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
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch 
        = ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel) 
           & (- (IData)((IData)(vlSelfRef.lspi__DOT__mspi__DOT____Vcellinp__u0_spi_top__wb_we_i))));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__reset_status 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__lsr_mask;
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__reset_status 
        = vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask;
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
    vlSelfRef.luart__DOT__muart__DOT__in_prdata = vlSelfRef.luart__DOT__auto_in_prdata;
    vlSelfRef.apbdelay_delayer__DOT__in_prdata = vlSelfRef._apbdelay_delayer_in_prdata;
    vlSelfRef.axi42apb__DOT__auto_out_prdata = vlSelfRef._apbdelay_delayer_in_prdata;
    vlSelfRef._apbxbar_auto_anon_in_prdata = vlSelfRef._apbdelay_delayer_in_prdata;
    vlSelfRef._axi42apb_auto_in_rdata = ((IData)(vlSelfRef.axi42apb__DOT__nodeOut_penable)
                                          ? vlSelfRef._apbdelay_delayer_in_prdata
                                          : vlSelfRef.axi42apb__DOT__nodeIn_rdata_r);
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch;
    vlSelfRef.apbxbar__DOT__auto_anon_in_pready = vlSelfRef._apbxbar_auto_anon_in_pready;
    vlSelfRef.apbdelay_delayer__DOT__out_pready = vlSelfRef._apbxbar_auto_anon_in_pready;
    vlSelfRef.axi42apb__DOT__nodeIn_rvalid = ((~ (IData)(vlSelfRef._axi42apb_auto_out_pwrite)) 
                                              & (IData)(axi42apb__DOT____VdfgRegularize_h456d727f_0_0));
    vlSelfRef.axi42apb__DOT__nodeIn_bvalid = ((IData)(vlSelfRef._axi42apb_auto_out_pwrite) 
                                              & (IData)(axi42apb__DOT____VdfgRegularize_h456d727f_0_0));
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
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq 
        = ((IData)(vlSelfRef._axi4buf_auto_out_rready) 
           & (IData)(vlSelfRef.axi42apb__DOT__nodeIn_rvalid));
    vlSelfRef._axi42apb_auto_in_rvalid = vlSelfRef.axi42apb__DOT__nodeIn_rvalid;
    vlSelfRef.axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq 
        = ((IData)(vlSelfRef._axi4buf_auto_out_bready) 
           & (IData)(vlSelfRef.axi42apb__DOT__nodeIn_bvalid));
    vlSelfRef._axi42apb_auto_in_bvalid = vlSelfRef.axi42apb__DOT__nodeIn_bvalid;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_data 
        = vlSelfRef.axi4buf__DOT__auto_out_rdata;
    vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_data 
        = vlSelfRef.axi4buf__DOT__nodeIn_rdeq_q__DOT____Vcellinp__ram_ext__W0_data;
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

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.axi4frag__DOT__nodeOut_bready = (1U & 
                                               ((~ (IData)(vlSelfRef._axi4yank_auto_in_becho_real_last)) 
                                                | (IData)(vlSelfRef._cpu_auto_master_out_bready)));
    if (vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__full) {
        vlSelfRef._axi4frag_auto_out_wdata = (IData)(
                                                     (vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                      >> 5U));
        vlSelfRef._axi4frag_auto_out_wstrb = (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                         >> 1U)));
    } else {
        vlSelfRef._axi4frag_auto_out_wdata = vlSelfRef._cpu_auto_master_out_wdata;
        vlSelfRef._axi4frag_auto_out_wstrb = (0xfU 
                                              & (IData)(vlSelfRef._cpu_auto_master_out_wstrb));
    }
    vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef._cpu_auto_master_out_wvalid) 
           | (IData)(vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__full));
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef._cpu_auto_master_out_awvalid) 
           | (IData)(vlSelfRef.axi4frag__DOT__deq_q_1__DOT__full));
    vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_addr 
        = ((IData)(vlSelfRef.axi4frag__DOT__deq_q_1__DOT__full)
            ? (IData)((vlSelfRef.axi4frag__DOT__deq_q_1__DOT__ram 
                       >> 0xdU)) : vlSelfRef._cpu_auto_master_out_awaddr);
    vlSelfRef.axi4frag__DOT__deq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef._cpu_auto_master_out_arvalid) 
           | (IData)(vlSelfRef.axi4frag__DOT__deq_q__DOT__full));
    vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_addr 
        = ((IData)(vlSelfRef.axi4frag__DOT__deq_q__DOT__full)
            ? (IData)((vlSelfRef.axi4frag__DOT__deq_q__DOT__ram 
                       >> 0xdU)) : vlSelfRef._cpu_auto_master_out_araddr);
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
    vlSelfRef.axi4yank__DOT__auto_in_wdata = vlSelfRef._axi4frag_auto_out_wdata;
    vlSelfRef.axi4frag__DOT__auto_out_wdata = vlSelfRef._axi4frag_auto_out_wdata;
    vlSelfRef._axi4yank_auto_out_wdata = vlSelfRef._axi4frag_auto_out_wdata;
    vlSelfRef._axi4xbar_1_auto_anon_out_2_wdata = vlSelfRef._axi4frag_auto_out_wdata;
    vlSelfRef._axi4xbar_1_auto_anon_out_0_wdata = vlSelfRef._axi4frag_auto_out_wdata;
    vlSelfRef.axi4yank__DOT__auto_in_wstrb = vlSelfRef._axi4frag_auto_out_wstrb;
    vlSelfRef.axi4frag__DOT__auto_out_wstrb = vlSelfRef._axi4frag_auto_out_wstrb;
    vlSelfRef.axi4buf__DOT__nodeOut_wdeq_q__DOT____Vcellinp__ram_ext__W0_data 
        = (((QData)((IData)(vlSelfRef._axi4frag_auto_out_wdata)) 
            << 4U) | (QData)((IData)(vlSelfRef._axi4frag_auto_out_wstrb)));
    vlSelfRef._axi4yank_auto_out_wstrb = vlSelfRef._axi4frag_auto_out_wstrb;
    vlSelfRef._axi4xbar_1_auto_anon_out_2_wstrb = vlSelfRef._axi4frag_auto_out_wstrb;
    vlSelfRef._axi4xbar_1_auto_anon_out_0_wstrb = vlSelfRef._axi4frag_auto_out_wstrb;
    vlSelfRef.axi4frag__DOT___in_wdeq_q_io_deq_valid 
        = vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0;
    vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_valid 
        = vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0;
    vlSelfRef.axi4frag__DOT__wbeats_valid = ((~ (IData)(vlSelfRef.axi4frag__DOT__wbeats_latched)) 
                                             & (IData)(vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    vlSelfRef.axi4frag__DOT__nodeOut_awvalid = ((IData)(vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0) 
                                                & (IData)(vlSelfRef.axi4frag__DOT___in_awready_T));
    vlSelfRef.axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr 
        = vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_addr;
    vlSelfRef.axi4frag__DOT__addr_1 = ((IData)(vlSelfRef.axi4frag__DOT__busy_1)
                                        ? vlSelfRef.axi4frag__DOT__r_addr_1
                                        : vlSelfRef.axi4frag__DOT___deq_q_1_io_deq_bits_addr);
    vlSelfRef.axi4frag__DOT___deq_q_io_deq_valid = vlSelfRef.axi4frag__DOT__deq_q__DOT__io_deq_valid_0;
    vlSelfRef._axi4frag_auto_out_arvalid = vlSelfRef.axi4frag__DOT__deq_q__DOT__io_deq_valid_0;
    vlSelfRef._axi4yank_auto_out_arvalid = ((IData)(vlSelfRef.axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
                                            & (IData)(vlSelfRef.axi4yank__DOT____VdfgRegularize_h60d1478f_2_0));
    vlSelfRef.axi4frag__DOT__deq_q__DOT__io_deq_bits_addr 
        = vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_addr;
    vlSelfRef.axi4frag__DOT__addr = ((IData)(vlSelfRef.axi4frag__DOT__busy)
                                      ? vlSelfRef.axi4frag__DOT__r_addr
                                      : vlSelfRef.axi4frag__DOT___deq_q_io_deq_bits_addr);
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
    vlSelfRef.axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid 
        = vlSelfRef.axi4frag__DOT___in_wdeq_q_io_deq_valid;
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
    vlSelfRef.axi4frag__DOT___out_bits_addr_T_6 = (~ vlSelfRef.axi4frag__DOT__addr_1);
    vlSelfRef.axi4frag__DOT__deq_q__DOT__io_deq_valid 
        = vlSelfRef.axi4frag__DOT___deq_q_io_deq_valid;
    vlSelfRef.axi4yank__DOT__auto_in_arvalid = vlSelfRef._axi4frag_auto_out_arvalid;
    vlSelfRef.axi4frag__DOT__auto_out_arvalid = vlSelfRef._axi4frag_auto_out_arvalid;
    vlSelfRef.axi4xbar_1__DOT__auto_anon_in_arvalid 
        = vlSelfRef._axi4yank_auto_out_arvalid;
    vlSelfRef.axi4yank__DOT__auto_out_arvalid = vlSelfRef._axi4yank_auto_out_arvalid;
    vlSelfRef.axi4frag__DOT___out_bits_addr_T = (~ vlSelfRef.axi4frag__DOT__addr);
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

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__3(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lpsram__DOT__qspi_bundle_dio = vlSelfRef.psram_dio;
    vlSelfRef.lpsram__DOT__mpsram__DOT__din = vlSelfRef.psram_dio;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_din 
        = vlSelfRef.psram_dio;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_din 
        = vlSelfRef.psram_dio;
    vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio = vlSelfRef.lpsram__DOT__qspi_bundle_dio;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__din 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__din;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mr_din;
    vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__din 
        = vlSelfRef.lpsram__DOT__mpsram__DOT__u0__DOT__mw_din;
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__4(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lspi__DOT__spi_bundle_miso = vlSelfRef.spi_miso;
    vlSelfRef.lspi__DOT__mspi__DOT__spi_miso = vlSelfRef.lspi__DOT__spi_bundle_miso;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__miso_pad_i 
        = vlSelfRef.lspi__DOT__mspi__DOT__spi_miso;
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__s_in 
        = vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__miso_pad_i;
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__5(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_comb__TOP__ysyxSoCFull__asic__5\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
        = vlSelfRef.sdram_dq;
    vlSelfRef.lsdram_apb__DOT__sdram_bundle_dq = vlSelfRef.sdram_dq;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_dq 
        = vlSelfRef.lsdram_apb__DOT__sdram_bundle_dq;
    vlSelfRef.lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_input_i 
        = vlSelfRef.lsdram_apb__DOT__msdram__DOT__sdram_dq;
}
