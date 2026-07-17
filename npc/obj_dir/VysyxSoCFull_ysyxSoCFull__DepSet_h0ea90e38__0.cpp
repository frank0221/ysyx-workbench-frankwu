// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_ysyxSoCFull.h"

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__2(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__sdram__DOT__sdram0__DOT__state;
    __Vdly__sdram__DOT__sdram0__DOT__state = 0;
    SData/*12:0*/ __Vdly__sdram__DOT__sdram0__DOT__burst_count;
    __Vdly__sdram__DOT__sdram0__DOT__burst_count = 0;
    SData/*12:0*/ __Vdly__sdram__DOT__sdram0__DOT__write_count;
    __Vdly__sdram__DOT__sdram0__DOT__write_count = 0;
    CData/*3:0*/ __Vdly__sdram__DOT__sdram1__DOT__state;
    __Vdly__sdram__DOT__sdram1__DOT__state = 0;
    SData/*12:0*/ __Vdly__sdram__DOT__sdram1__DOT__burst_count;
    __Vdly__sdram__DOT__sdram1__DOT__burst_count = 0;
    SData/*12:0*/ __Vdly__sdram__DOT__sdram1__DOT__write_count;
    __Vdly__sdram__DOT__sdram1__DOT__write_count = 0;
    CData/*7:0*/ __VdlyVal__sdram__DOT__sdram0__DOT__bank0__v0;
    __VdlyVal__sdram__DOT__sdram0__DOT__bank0__v0 = 0;
    IData/*21:0*/ __VdlyDim0__sdram__DOT__sdram0__DOT__bank0__v0;
    __VdlyDim0__sdram__DOT__sdram0__DOT__bank0__v0 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram0__DOT__bank0__v0;
    __VdlySet__sdram__DOT__sdram0__DOT__bank0__v0 = 0;
    CData/*7:0*/ __VdlyVal__sdram__DOT__sdram0__DOT__bank0__v1;
    __VdlyVal__sdram__DOT__sdram0__DOT__bank0__v1 = 0;
    IData/*21:0*/ __VdlyDim0__sdram__DOT__sdram0__DOT__bank0__v1;
    __VdlyDim0__sdram__DOT__sdram0__DOT__bank0__v1 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram0__DOT__bank0__v1;
    __VdlySet__sdram__DOT__sdram0__DOT__bank0__v1 = 0;
    CData/*7:0*/ __VdlyVal__sdram__DOT__sdram0__DOT__bank1__v0;
    __VdlyVal__sdram__DOT__sdram0__DOT__bank1__v0 = 0;
    IData/*21:0*/ __VdlyDim0__sdram__DOT__sdram0__DOT__bank1__v0;
    __VdlyDim0__sdram__DOT__sdram0__DOT__bank1__v0 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram0__DOT__bank1__v0;
    __VdlySet__sdram__DOT__sdram0__DOT__bank1__v0 = 0;
    CData/*7:0*/ __VdlyVal__sdram__DOT__sdram0__DOT__bank1__v1;
    __VdlyVal__sdram__DOT__sdram0__DOT__bank1__v1 = 0;
    IData/*21:0*/ __VdlyDim0__sdram__DOT__sdram0__DOT__bank1__v1;
    __VdlyDim0__sdram__DOT__sdram0__DOT__bank1__v1 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram0__DOT__bank1__v1;
    __VdlySet__sdram__DOT__sdram0__DOT__bank1__v1 = 0;
    CData/*7:0*/ __VdlyVal__sdram__DOT__sdram0__DOT__bank2__v0;
    __VdlyVal__sdram__DOT__sdram0__DOT__bank2__v0 = 0;
    IData/*21:0*/ __VdlyDim0__sdram__DOT__sdram0__DOT__bank2__v0;
    __VdlyDim0__sdram__DOT__sdram0__DOT__bank2__v0 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram0__DOT__bank2__v0;
    __VdlySet__sdram__DOT__sdram0__DOT__bank2__v0 = 0;
    CData/*7:0*/ __VdlyVal__sdram__DOT__sdram0__DOT__bank2__v1;
    __VdlyVal__sdram__DOT__sdram0__DOT__bank2__v1 = 0;
    IData/*21:0*/ __VdlyDim0__sdram__DOT__sdram0__DOT__bank2__v1;
    __VdlyDim0__sdram__DOT__sdram0__DOT__bank2__v1 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram0__DOT__bank2__v1;
    __VdlySet__sdram__DOT__sdram0__DOT__bank2__v1 = 0;
    CData/*7:0*/ __VdlyVal__sdram__DOT__sdram0__DOT__bank3__v0;
    __VdlyVal__sdram__DOT__sdram0__DOT__bank3__v0 = 0;
    IData/*21:0*/ __VdlyDim0__sdram__DOT__sdram0__DOT__bank3__v0;
    __VdlyDim0__sdram__DOT__sdram0__DOT__bank3__v0 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram0__DOT__bank3__v0;
    __VdlySet__sdram__DOT__sdram0__DOT__bank3__v0 = 0;
    CData/*7:0*/ __VdlyVal__sdram__DOT__sdram0__DOT__bank3__v1;
    __VdlyVal__sdram__DOT__sdram0__DOT__bank3__v1 = 0;
    IData/*21:0*/ __VdlyDim0__sdram__DOT__sdram0__DOT__bank3__v1;
    __VdlyDim0__sdram__DOT__sdram0__DOT__bank3__v1 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram0__DOT__bank3__v1;
    __VdlySet__sdram__DOT__sdram0__DOT__bank3__v1 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram0__DOT__row_num__v0;
    __VdlyVal__sdram__DOT__sdram0__DOT__row_num__v0 = 0;
    CData/*1:0*/ __VdlyDim0__sdram__DOT__sdram0__DOT__row_num__v0;
    __VdlyDim0__sdram__DOT__sdram0__DOT__row_num__v0 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram0__DOT__row_num__v0;
    __VdlySet__sdram__DOT__sdram0__DOT__row_num__v0 = 0;
    CData/*7:0*/ __VdlyVal__sdram__DOT__sdram1__DOT__bank0__v0;
    __VdlyVal__sdram__DOT__sdram1__DOT__bank0__v0 = 0;
    IData/*21:0*/ __VdlyDim0__sdram__DOT__sdram1__DOT__bank0__v0;
    __VdlyDim0__sdram__DOT__sdram1__DOT__bank0__v0 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram1__DOT__bank0__v0;
    __VdlySet__sdram__DOT__sdram1__DOT__bank0__v0 = 0;
    CData/*7:0*/ __VdlyVal__sdram__DOT__sdram1__DOT__bank0__v1;
    __VdlyVal__sdram__DOT__sdram1__DOT__bank0__v1 = 0;
    IData/*21:0*/ __VdlyDim0__sdram__DOT__sdram1__DOT__bank0__v1;
    __VdlyDim0__sdram__DOT__sdram1__DOT__bank0__v1 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram1__DOT__bank0__v1;
    __VdlySet__sdram__DOT__sdram1__DOT__bank0__v1 = 0;
    CData/*7:0*/ __VdlyVal__sdram__DOT__sdram1__DOT__bank1__v0;
    __VdlyVal__sdram__DOT__sdram1__DOT__bank1__v0 = 0;
    IData/*21:0*/ __VdlyDim0__sdram__DOT__sdram1__DOT__bank1__v0;
    __VdlyDim0__sdram__DOT__sdram1__DOT__bank1__v0 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram1__DOT__bank1__v0;
    __VdlySet__sdram__DOT__sdram1__DOT__bank1__v0 = 0;
    CData/*7:0*/ __VdlyVal__sdram__DOT__sdram1__DOT__bank1__v1;
    __VdlyVal__sdram__DOT__sdram1__DOT__bank1__v1 = 0;
    IData/*21:0*/ __VdlyDim0__sdram__DOT__sdram1__DOT__bank1__v1;
    __VdlyDim0__sdram__DOT__sdram1__DOT__bank1__v1 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram1__DOT__bank1__v1;
    __VdlySet__sdram__DOT__sdram1__DOT__bank1__v1 = 0;
    CData/*7:0*/ __VdlyVal__sdram__DOT__sdram1__DOT__bank2__v0;
    __VdlyVal__sdram__DOT__sdram1__DOT__bank2__v0 = 0;
    IData/*21:0*/ __VdlyDim0__sdram__DOT__sdram1__DOT__bank2__v0;
    __VdlyDim0__sdram__DOT__sdram1__DOT__bank2__v0 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram1__DOT__bank2__v0;
    __VdlySet__sdram__DOT__sdram1__DOT__bank2__v0 = 0;
    CData/*7:0*/ __VdlyVal__sdram__DOT__sdram1__DOT__bank2__v1;
    __VdlyVal__sdram__DOT__sdram1__DOT__bank2__v1 = 0;
    IData/*21:0*/ __VdlyDim0__sdram__DOT__sdram1__DOT__bank2__v1;
    __VdlyDim0__sdram__DOT__sdram1__DOT__bank2__v1 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram1__DOT__bank2__v1;
    __VdlySet__sdram__DOT__sdram1__DOT__bank2__v1 = 0;
    CData/*7:0*/ __VdlyVal__sdram__DOT__sdram1__DOT__bank3__v0;
    __VdlyVal__sdram__DOT__sdram1__DOT__bank3__v0 = 0;
    IData/*21:0*/ __VdlyDim0__sdram__DOT__sdram1__DOT__bank3__v0;
    __VdlyDim0__sdram__DOT__sdram1__DOT__bank3__v0 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram1__DOT__bank3__v0;
    __VdlySet__sdram__DOT__sdram1__DOT__bank3__v0 = 0;
    CData/*7:0*/ __VdlyVal__sdram__DOT__sdram1__DOT__bank3__v1;
    __VdlyVal__sdram__DOT__sdram1__DOT__bank3__v1 = 0;
    IData/*21:0*/ __VdlyDim0__sdram__DOT__sdram1__DOT__bank3__v1;
    __VdlyDim0__sdram__DOT__sdram1__DOT__bank3__v1 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram1__DOT__bank3__v1;
    __VdlySet__sdram__DOT__sdram1__DOT__bank3__v1 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdram1__DOT__row_num__v0;
    __VdlyVal__sdram__DOT__sdram1__DOT__row_num__v0 = 0;
    CData/*1:0*/ __VdlyDim0__sdram__DOT__sdram1__DOT__row_num__v0;
    __VdlyDim0__sdram__DOT__sdram1__DOT__row_num__v0 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdram1__DOT__row_num__v0;
    __VdlySet__sdram__DOT__sdram1__DOT__row_num__v0 = 0;
    // Body
    __VdlySet__sdram__DOT__sdram1__DOT__row_num__v0 = 0U;
    __VdlySet__sdram__DOT__sdram0__DOT__row_num__v0 = 0U;
    __Vdly__sdram__DOT__sdram1__DOT__state = vlSelfRef.sdram__DOT__sdram1__DOT__state;
    __Vdly__sdram__DOT__sdram1__DOT__write_count = vlSelfRef.sdram__DOT__sdram1__DOT__write_count;
    __Vdly__sdram__DOT__sdram0__DOT__state = vlSelfRef.sdram__DOT__sdram0__DOT__state;
    __Vdly__sdram__DOT__sdram0__DOT__write_count = vlSelfRef.sdram__DOT__sdram0__DOT__write_count;
    __Vdly__sdram__DOT__sdram1__DOT__burst_count = vlSelfRef.sdram__DOT__sdram1__DOT__burst_count;
    __VdlySet__sdram__DOT__sdram1__DOT__bank0__v0 = 0U;
    __VdlySet__sdram__DOT__sdram1__DOT__bank0__v1 = 0U;
    __VdlySet__sdram__DOT__sdram1__DOT__bank1__v0 = 0U;
    __VdlySet__sdram__DOT__sdram1__DOT__bank1__v1 = 0U;
    __VdlySet__sdram__DOT__sdram1__DOT__bank2__v0 = 0U;
    __VdlySet__sdram__DOT__sdram1__DOT__bank2__v1 = 0U;
    __VdlySet__sdram__DOT__sdram1__DOT__bank3__v0 = 0U;
    __VdlySet__sdram__DOT__sdram1__DOT__bank3__v1 = 0U;
    __Vdly__sdram__DOT__sdram0__DOT__burst_count = vlSelfRef.sdram__DOT__sdram0__DOT__burst_count;
    __VdlySet__sdram__DOT__sdram0__DOT__bank0__v0 = 0U;
    __VdlySet__sdram__DOT__sdram0__DOT__bank0__v1 = 0U;
    __VdlySet__sdram__DOT__sdram0__DOT__bank1__v0 = 0U;
    __VdlySet__sdram__DOT__sdram0__DOT__bank1__v1 = 0U;
    __VdlySet__sdram__DOT__sdram0__DOT__bank2__v0 = 0U;
    __VdlySet__sdram__DOT__sdram0__DOT__bank2__v1 = 0U;
    __VdlySet__sdram__DOT__sdram0__DOT__bank3__v0 = 0U;
    __VdlySet__sdram__DOT__sdram0__DOT__bank3__v1 = 0U;
    if (vlSelfRef._asic_sdram_cke) {
        if (vlSelfRef.sdram__DOT__sdram1__DOT__ACTIVE) {
            __VdlyVal__sdram__DOT__sdram1__DOT__row_num__v0 
                = vlSelfRef._asic_sdram_a;
            __VdlyDim0__sdram__DOT__sdram1__DOT__row_num__v0 
                = vlSelfRef._asic_sdram_ba;
            __VdlySet__sdram__DOT__sdram1__DOT__row_num__v0 = 1U;
            vlSelfRef.sdram__DOT__sdram1__DOT__bank_num 
                = vlSelfRef._asic_sdram_ba;
            __Vdly__sdram__DOT__sdram1__DOT__state = 1U;
        }
        if (vlSelfRef.sdram__DOT__sdram0__DOT__ACTIVE) {
            __VdlyVal__sdram__DOT__sdram0__DOT__row_num__v0 
                = vlSelfRef._asic_sdram_a;
            __VdlyDim0__sdram__DOT__sdram0__DOT__row_num__v0 
                = vlSelfRef._asic_sdram_ba;
            __VdlySet__sdram__DOT__sdram0__DOT__row_num__v0 = 1U;
            vlSelfRef.sdram__DOT__sdram0__DOT__bank_num 
                = vlSelfRef._asic_sdram_ba;
            __Vdly__sdram__DOT__sdram0__DOT__state = 1U;
        }
        if (vlSelfRef.sdram__DOT__sdram1__DOT__LOAD_MODE_REGISTER) {
            vlSelfRef.sdram__DOT__sdram1__DOT__mode_reg 
                = vlSelfRef._asic_sdram_a;
        }
        if (vlSelfRef.sdram__DOT__sdram0__DOT__LOAD_MODE_REGISTER) {
            vlSelfRef.sdram__DOT__sdram0__DOT__mode_reg 
                = vlSelfRef._asic_sdram_a;
        }
        if (vlSelfRef.sdram__DOT__sdram1__DOT__READ) {
            vlSelfRef.sdram__DOT__sdram1__DOT__col_num 
                = (0x1ffU & (IData)(vlSelfRef._asic_sdram_a));
            vlSelfRef.sdram__DOT__sdram1__DOT__bank_num 
                = vlSelfRef._asic_sdram_ba;
            __Vdly__sdram__DOT__sdram1__DOT__state = 4U;
            __Vdly__sdram__DOT__sdram1__DOT__burst_count = 0U;
            vlSelfRef.sdram__DOT__sdram1__DOT__read_valid = 0U;
        } else if (vlSelfRef.sdram__DOT__sdram1__DOT__WRITE) {
            vlSelfRef.sdram__DOT__sdram1__DOT__col_num 
                = (0x1ffU & (IData)(vlSelfRef._asic_sdram_a));
            vlSelfRef.sdram__DOT__sdram1__DOT__bank_num 
                = vlSelfRef._asic_sdram_ba;
            __Vdly__sdram__DOT__sdram1__DOT__state = 3U;
            __Vdly__sdram__DOT__sdram1__DOT__write_count = 1U;
        } else if ((4U == (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__state))) {
            if ((((IData)(2U) + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__latency_count)) 
                 < (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__cas_latency))) {
                vlSelfRef.sdram__DOT__sdram1__DOT__latency_count 
                    = (0x1fffU & ((IData)(1U) + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__latency_count)));
            } else {
                __Vdly__sdram__DOT__sdram1__DOT__state = 2U;
                vlSelfRef.sdram__DOT__sdram1__DOT__read_valid = 1U;
            }
        } else if ((2U == (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__state))) {
            __Vdly__sdram__DOT__sdram1__DOT__burst_count 
                = (0x1fffU & ((IData)(1U) + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__burst_count)));
            vlSelfRef.sdram__DOT__sdram1__DOT__latency_count = 0U;
            if (((IData)(vlSelfRef.sdram__DOT__sdram1__DOT__burst_count) 
                 == ((IData)(vlSelfRef.sdram__DOT__sdram1__DOT__burst_length) 
                     - (IData)(1U)))) {
                __Vdly__sdram__DOT__sdram1__DOT__state = 0U;
                __Vdly__sdram__DOT__sdram1__DOT__burst_count = 0U;
                vlSelfRef.sdram__DOT__sdram1__DOT__read_valid = 0U;
            }
        } else if ((3U == (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__state))) {
            if (((IData)(vlSelfRef.sdram__DOT__sdram1__DOT__write_count) 
                 < ((IData)(vlSelfRef.sdram__DOT__sdram1__DOT__burst_length) 
                    - (IData)(1U)))) {
                __Vdly__sdram__DOT__sdram1__DOT__write_count 
                    = (0x1fffU & ((IData)(1U) + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__write_count)));
            } else {
                __Vdly__sdram__DOT__sdram1__DOT__write_count = 0U;
                __Vdly__sdram__DOT__sdram1__DOT__state = 0U;
            }
        }
        if (vlSelfRef.sdram__DOT__sdram0__DOT__READ) {
            vlSelfRef.sdram__DOT__sdram0__DOT__col_num 
                = (0x1ffU & (IData)(vlSelfRef._asic_sdram_a));
            vlSelfRef.sdram__DOT__sdram0__DOT__bank_num 
                = vlSelfRef._asic_sdram_ba;
            __Vdly__sdram__DOT__sdram0__DOT__state = 4U;
            __Vdly__sdram__DOT__sdram0__DOT__burst_count = 0U;
            vlSelfRef.sdram__DOT__sdram0__DOT__read_valid = 0U;
        } else if (vlSelfRef.sdram__DOT__sdram0__DOT__WRITE) {
            vlSelfRef.sdram__DOT__sdram0__DOT__col_num 
                = (0x1ffU & (IData)(vlSelfRef._asic_sdram_a));
            vlSelfRef.sdram__DOT__sdram0__DOT__bank_num 
                = vlSelfRef._asic_sdram_ba;
            __Vdly__sdram__DOT__sdram0__DOT__state = 3U;
            __Vdly__sdram__DOT__sdram0__DOT__write_count = 1U;
        } else if ((4U == (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__state))) {
            if ((((IData)(2U) + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__latency_count)) 
                 < (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__cas_latency))) {
                vlSelfRef.sdram__DOT__sdram0__DOT__latency_count 
                    = (0x1fffU & ((IData)(1U) + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__latency_count)));
            } else {
                __Vdly__sdram__DOT__sdram0__DOT__state = 2U;
                vlSelfRef.sdram__DOT__sdram0__DOT__read_valid = 1U;
            }
        } else if ((2U == (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__state))) {
            __Vdly__sdram__DOT__sdram0__DOT__burst_count 
                = (0x1fffU & ((IData)(1U) + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__burst_count)));
            vlSelfRef.sdram__DOT__sdram0__DOT__latency_count = 0U;
            if (((IData)(vlSelfRef.sdram__DOT__sdram0__DOT__burst_count) 
                 == ((IData)(vlSelfRef.sdram__DOT__sdram0__DOT__burst_length) 
                     - (IData)(1U)))) {
                __Vdly__sdram__DOT__sdram0__DOT__state = 0U;
                __Vdly__sdram__DOT__sdram0__DOT__burst_count = 0U;
                vlSelfRef.sdram__DOT__sdram0__DOT__read_valid = 0U;
            }
        } else if ((3U == (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__state))) {
            if (((IData)(vlSelfRef.sdram__DOT__sdram0__DOT__write_count) 
                 < ((IData)(vlSelfRef.sdram__DOT__sdram0__DOT__burst_length) 
                    - (IData)(1U)))) {
                __Vdly__sdram__DOT__sdram0__DOT__write_count 
                    = (0x1fffU & ((IData)(1U) + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__write_count)));
            } else {
                __Vdly__sdram__DOT__sdram0__DOT__write_count = 0U;
                __Vdly__sdram__DOT__sdram0__DOT__state = 0U;
            }
        }
        if (((3U == (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__state)) 
             | (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__WRITE))) {
            if ((0U == (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__write_bank))) {
                if ((1U & (~ ((IData)(vlSelfRef._asic_sdram_dqm) 
                              >> 3U)))) {
                    __VdlyVal__sdram__DOT__sdram1__DOT__bank0__v0 
                        = (vlSelfRef._dq_wire >> 0x18U);
                    __VdlyDim0__sdram__DOT__sdram1__DOT__bank0__v0 
                        = (0x3fffffU & ((VL_SHIFTL_III(22,32,32, 
                                                       vlSelfRef.sdram__DOT__sdram1__DOT__row_num
                                                       [vlSelfRef.sdram__DOT__sdram1__DOT__write_bank], 9U) 
                                         + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__write_col)) 
                                        + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__write_count)));
                    __VdlySet__sdram__DOT__sdram1__DOT__bank0__v0 = 1U;
                }
                if ((1U & (~ ((IData)(vlSelfRef._asic_sdram_dqm) 
                              >> 2U)))) {
                    __VdlyVal__sdram__DOT__sdram1__DOT__bank0__v1 
                        = (0xffU & (vlSelfRef._dq_wire 
                                    >> 0x10U));
                    __VdlyDim0__sdram__DOT__sdram1__DOT__bank0__v1 
                        = (0x3fffffU & ((VL_SHIFTL_III(22,32,32, 
                                                       vlSelfRef.sdram__DOT__sdram1__DOT__row_num
                                                       [vlSelfRef.sdram__DOT__sdram1__DOT__write_bank], 9U) 
                                         + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__write_col)) 
                                        + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__write_count)));
                    __VdlySet__sdram__DOT__sdram1__DOT__bank0__v1 = 1U;
                }
            } else if ((1U == (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__write_bank))) {
                if ((1U & (~ ((IData)(vlSelfRef._asic_sdram_dqm) 
                              >> 3U)))) {
                    __VdlyVal__sdram__DOT__sdram1__DOT__bank1__v0 
                        = (vlSelfRef._dq_wire >> 0x18U);
                    __VdlyDim0__sdram__DOT__sdram1__DOT__bank1__v0 
                        = (0x3fffffU & ((VL_SHIFTL_III(22,32,32, 
                                                       vlSelfRef.sdram__DOT__sdram1__DOT__row_num
                                                       [vlSelfRef.sdram__DOT__sdram1__DOT__write_bank], 9U) 
                                         + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__write_col)) 
                                        + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__write_count)));
                    __VdlySet__sdram__DOT__sdram1__DOT__bank1__v0 = 1U;
                }
                if ((1U & (~ ((IData)(vlSelfRef._asic_sdram_dqm) 
                              >> 2U)))) {
                    __VdlyVal__sdram__DOT__sdram1__DOT__bank1__v1 
                        = (0xffU & (vlSelfRef._dq_wire 
                                    >> 0x10U));
                    __VdlyDim0__sdram__DOT__sdram1__DOT__bank1__v1 
                        = (0x3fffffU & ((VL_SHIFTL_III(22,32,32, 
                                                       vlSelfRef.sdram__DOT__sdram1__DOT__row_num
                                                       [vlSelfRef.sdram__DOT__sdram1__DOT__write_bank], 9U) 
                                         + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__write_col)) 
                                        + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__write_count)));
                    __VdlySet__sdram__DOT__sdram1__DOT__bank1__v1 = 1U;
                }
            } else if ((2U == (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__write_bank))) {
                if ((1U & (~ ((IData)(vlSelfRef._asic_sdram_dqm) 
                              >> 3U)))) {
                    __VdlyVal__sdram__DOT__sdram1__DOT__bank2__v0 
                        = (vlSelfRef._dq_wire >> 0x18U);
                    __VdlyDim0__sdram__DOT__sdram1__DOT__bank2__v0 
                        = (0x3fffffU & ((VL_SHIFTL_III(22,32,32, 
                                                       vlSelfRef.sdram__DOT__sdram1__DOT__row_num
                                                       [vlSelfRef.sdram__DOT__sdram1__DOT__write_bank], 9U) 
                                         + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__write_col)) 
                                        + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__write_count)));
                    __VdlySet__sdram__DOT__sdram1__DOT__bank2__v0 = 1U;
                }
                if ((1U & (~ ((IData)(vlSelfRef._asic_sdram_dqm) 
                              >> 2U)))) {
                    __VdlyVal__sdram__DOT__sdram1__DOT__bank2__v1 
                        = (0xffU & (vlSelfRef._dq_wire 
                                    >> 0x10U));
                    __VdlyDim0__sdram__DOT__sdram1__DOT__bank2__v1 
                        = (0x3fffffU & ((VL_SHIFTL_III(22,32,32, 
                                                       vlSelfRef.sdram__DOT__sdram1__DOT__row_num
                                                       [vlSelfRef.sdram__DOT__sdram1__DOT__write_bank], 9U) 
                                         + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__write_col)) 
                                        + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__write_count)));
                    __VdlySet__sdram__DOT__sdram1__DOT__bank2__v1 = 1U;
                }
            } else if ((3U == (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__write_bank))) {
                if ((1U & (~ ((IData)(vlSelfRef._asic_sdram_dqm) 
                              >> 3U)))) {
                    __VdlyVal__sdram__DOT__sdram1__DOT__bank3__v0 
                        = (vlSelfRef._dq_wire >> 0x18U);
                    __VdlyDim0__sdram__DOT__sdram1__DOT__bank3__v0 
                        = (0x3fffffU & ((VL_SHIFTL_III(22,32,32, 
                                                       vlSelfRef.sdram__DOT__sdram1__DOT__row_num
                                                       [vlSelfRef.sdram__DOT__sdram1__DOT__write_bank], 9U) 
                                         + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__write_col)) 
                                        + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__write_count)));
                    __VdlySet__sdram__DOT__sdram1__DOT__bank3__v0 = 1U;
                }
                if ((1U & (~ ((IData)(vlSelfRef._asic_sdram_dqm) 
                              >> 2U)))) {
                    __VdlyVal__sdram__DOT__sdram1__DOT__bank3__v1 
                        = (0xffU & (vlSelfRef._dq_wire 
                                    >> 0x10U));
                    __VdlyDim0__sdram__DOT__sdram1__DOT__bank3__v1 
                        = (0x3fffffU & ((VL_SHIFTL_III(22,32,32, 
                                                       vlSelfRef.sdram__DOT__sdram1__DOT__row_num
                                                       [vlSelfRef.sdram__DOT__sdram1__DOT__write_bank], 9U) 
                                         + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__write_col)) 
                                        + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__write_count)));
                    __VdlySet__sdram__DOT__sdram1__DOT__bank3__v1 = 1U;
                }
            }
        }
        if (((3U == (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__state)) 
             | (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__WRITE))) {
            if ((0U == (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__write_bank))) {
                if ((1U & (~ ((IData)(vlSelfRef._asic_sdram_dqm) 
                              >> 1U)))) {
                    __VdlyVal__sdram__DOT__sdram0__DOT__bank0__v0 
                        = (0xffU & (vlSelfRef._dq_wire 
                                    >> 8U));
                    __VdlyDim0__sdram__DOT__sdram0__DOT__bank0__v0 
                        = (0x3fffffU & ((VL_SHIFTL_III(22,32,32, 
                                                       vlSelfRef.sdram__DOT__sdram0__DOT__row_num
                                                       [vlSelfRef.sdram__DOT__sdram0__DOT__write_bank], 9U) 
                                         + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__write_col)) 
                                        + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__write_count)));
                    __VdlySet__sdram__DOT__sdram0__DOT__bank0__v0 = 1U;
                }
                if ((1U & (~ (IData)(vlSelfRef._asic_sdram_dqm)))) {
                    __VdlyVal__sdram__DOT__sdram0__DOT__bank0__v1 
                        = (0xffU & vlSelfRef._dq_wire);
                    __VdlyDim0__sdram__DOT__sdram0__DOT__bank0__v1 
                        = (0x3fffffU & ((VL_SHIFTL_III(22,32,32, 
                                                       vlSelfRef.sdram__DOT__sdram0__DOT__row_num
                                                       [vlSelfRef.sdram__DOT__sdram0__DOT__write_bank], 9U) 
                                         + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__write_col)) 
                                        + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__write_count)));
                    __VdlySet__sdram__DOT__sdram0__DOT__bank0__v1 = 1U;
                }
            } else if ((1U == (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__write_bank))) {
                if ((1U & (~ ((IData)(vlSelfRef._asic_sdram_dqm) 
                              >> 1U)))) {
                    __VdlyVal__sdram__DOT__sdram0__DOT__bank1__v0 
                        = (0xffU & (vlSelfRef._dq_wire 
                                    >> 8U));
                    __VdlyDim0__sdram__DOT__sdram0__DOT__bank1__v0 
                        = (0x3fffffU & ((VL_SHIFTL_III(22,32,32, 
                                                       vlSelfRef.sdram__DOT__sdram0__DOT__row_num
                                                       [vlSelfRef.sdram__DOT__sdram0__DOT__write_bank], 9U) 
                                         + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__write_col)) 
                                        + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__write_count)));
                    __VdlySet__sdram__DOT__sdram0__DOT__bank1__v0 = 1U;
                }
                if ((1U & (~ (IData)(vlSelfRef._asic_sdram_dqm)))) {
                    __VdlyVal__sdram__DOT__sdram0__DOT__bank1__v1 
                        = (0xffU & vlSelfRef._dq_wire);
                    __VdlyDim0__sdram__DOT__sdram0__DOT__bank1__v1 
                        = (0x3fffffU & ((VL_SHIFTL_III(22,32,32, 
                                                       vlSelfRef.sdram__DOT__sdram0__DOT__row_num
                                                       [vlSelfRef.sdram__DOT__sdram0__DOT__write_bank], 9U) 
                                         + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__write_col)) 
                                        + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__write_count)));
                    __VdlySet__sdram__DOT__sdram0__DOT__bank1__v1 = 1U;
                }
            } else if ((2U == (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__write_bank))) {
                if ((1U & (~ ((IData)(vlSelfRef._asic_sdram_dqm) 
                              >> 1U)))) {
                    __VdlyVal__sdram__DOT__sdram0__DOT__bank2__v0 
                        = (0xffU & (vlSelfRef._dq_wire 
                                    >> 8U));
                    __VdlyDim0__sdram__DOT__sdram0__DOT__bank2__v0 
                        = (0x3fffffU & ((VL_SHIFTL_III(22,32,32, 
                                                       vlSelfRef.sdram__DOT__sdram0__DOT__row_num
                                                       [vlSelfRef.sdram__DOT__sdram0__DOT__write_bank], 9U) 
                                         + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__write_col)) 
                                        + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__write_count)));
                    __VdlySet__sdram__DOT__sdram0__DOT__bank2__v0 = 1U;
                }
                if ((1U & (~ (IData)(vlSelfRef._asic_sdram_dqm)))) {
                    __VdlyVal__sdram__DOT__sdram0__DOT__bank2__v1 
                        = (0xffU & vlSelfRef._dq_wire);
                    __VdlyDim0__sdram__DOT__sdram0__DOT__bank2__v1 
                        = (0x3fffffU & ((VL_SHIFTL_III(22,32,32, 
                                                       vlSelfRef.sdram__DOT__sdram0__DOT__row_num
                                                       [vlSelfRef.sdram__DOT__sdram0__DOT__write_bank], 9U) 
                                         + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__write_col)) 
                                        + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__write_count)));
                    __VdlySet__sdram__DOT__sdram0__DOT__bank2__v1 = 1U;
                }
            } else if ((3U == (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__write_bank))) {
                if ((1U & (~ ((IData)(vlSelfRef._asic_sdram_dqm) 
                              >> 1U)))) {
                    __VdlyVal__sdram__DOT__sdram0__DOT__bank3__v0 
                        = (0xffU & (vlSelfRef._dq_wire 
                                    >> 8U));
                    __VdlyDim0__sdram__DOT__sdram0__DOT__bank3__v0 
                        = (0x3fffffU & ((VL_SHIFTL_III(22,32,32, 
                                                       vlSelfRef.sdram__DOT__sdram0__DOT__row_num
                                                       [vlSelfRef.sdram__DOT__sdram0__DOT__write_bank], 9U) 
                                         + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__write_col)) 
                                        + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__write_count)));
                    __VdlySet__sdram__DOT__sdram0__DOT__bank3__v0 = 1U;
                }
                if ((1U & (~ (IData)(vlSelfRef._asic_sdram_dqm)))) {
                    __VdlyVal__sdram__DOT__sdram0__DOT__bank3__v1 
                        = (0xffU & vlSelfRef._dq_wire);
                    __VdlyDim0__sdram__DOT__sdram0__DOT__bank3__v1 
                        = (0x3fffffU & ((VL_SHIFTL_III(22,32,32, 
                                                       vlSelfRef.sdram__DOT__sdram0__DOT__row_num
                                                       [vlSelfRef.sdram__DOT__sdram0__DOT__write_bank], 9U) 
                                         + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__write_col)) 
                                        + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__write_count)));
                    __VdlySet__sdram__DOT__sdram0__DOT__bank3__v1 = 1U;
                }
            }
        }
    }
    vlSelfRef.sdram__DOT__sdram1__DOT__state = __Vdly__sdram__DOT__sdram1__DOT__state;
    vlSelfRef.sdram__DOT__sdram1__DOT__write_count 
        = __Vdly__sdram__DOT__sdram1__DOT__write_count;
    vlSelfRef.sdram__DOT__sdram1__DOT__burst_count 
        = __Vdly__sdram__DOT__sdram1__DOT__burst_count;
    if (__VdlySet__sdram__DOT__sdram1__DOT__row_num__v0) {
        vlSelfRef.sdram__DOT__sdram1__DOT__row_num[__VdlyDim0__sdram__DOT__sdram1__DOT__row_num__v0] 
            = __VdlyVal__sdram__DOT__sdram1__DOT__row_num__v0;
    }
    if (__VdlySet__sdram__DOT__sdram1__DOT__bank0__v0) {
        vlSelfRef.sdram__DOT__sdram1__DOT__bank0[__VdlyDim0__sdram__DOT__sdram1__DOT__bank0__v0] 
            = ((0xffU & vlSelfRef.sdram__DOT__sdram1__DOT__bank0
                [__VdlyDim0__sdram__DOT__sdram1__DOT__bank0__v0]) 
               | ((IData)(__VdlyVal__sdram__DOT__sdram1__DOT__bank0__v0) 
                  << 8U));
    }
    if (__VdlySet__sdram__DOT__sdram1__DOT__bank0__v1) {
        vlSelfRef.sdram__DOT__sdram1__DOT__bank0[__VdlyDim0__sdram__DOT__sdram1__DOT__bank0__v1] 
            = ((0xff00U & vlSelfRef.sdram__DOT__sdram1__DOT__bank0
                [__VdlyDim0__sdram__DOT__sdram1__DOT__bank0__v1]) 
               | (IData)(__VdlyVal__sdram__DOT__sdram1__DOT__bank0__v1));
    }
    if (__VdlySet__sdram__DOT__sdram1__DOT__bank1__v0) {
        vlSelfRef.sdram__DOT__sdram1__DOT__bank1[__VdlyDim0__sdram__DOT__sdram1__DOT__bank1__v0] 
            = ((0xffU & vlSelfRef.sdram__DOT__sdram1__DOT__bank1
                [__VdlyDim0__sdram__DOT__sdram1__DOT__bank1__v0]) 
               | ((IData)(__VdlyVal__sdram__DOT__sdram1__DOT__bank1__v0) 
                  << 8U));
    }
    if (__VdlySet__sdram__DOT__sdram1__DOT__bank1__v1) {
        vlSelfRef.sdram__DOT__sdram1__DOT__bank1[__VdlyDim0__sdram__DOT__sdram1__DOT__bank1__v1] 
            = ((0xff00U & vlSelfRef.sdram__DOT__sdram1__DOT__bank1
                [__VdlyDim0__sdram__DOT__sdram1__DOT__bank1__v1]) 
               | (IData)(__VdlyVal__sdram__DOT__sdram1__DOT__bank1__v1));
    }
    if (__VdlySet__sdram__DOT__sdram1__DOT__bank2__v0) {
        vlSelfRef.sdram__DOT__sdram1__DOT__bank2[__VdlyDim0__sdram__DOT__sdram1__DOT__bank2__v0] 
            = ((0xffU & vlSelfRef.sdram__DOT__sdram1__DOT__bank2
                [__VdlyDim0__sdram__DOT__sdram1__DOT__bank2__v0]) 
               | ((IData)(__VdlyVal__sdram__DOT__sdram1__DOT__bank2__v0) 
                  << 8U));
    }
    if (__VdlySet__sdram__DOT__sdram1__DOT__bank2__v1) {
        vlSelfRef.sdram__DOT__sdram1__DOT__bank2[__VdlyDim0__sdram__DOT__sdram1__DOT__bank2__v1] 
            = ((0xff00U & vlSelfRef.sdram__DOT__sdram1__DOT__bank2
                [__VdlyDim0__sdram__DOT__sdram1__DOT__bank2__v1]) 
               | (IData)(__VdlyVal__sdram__DOT__sdram1__DOT__bank2__v1));
    }
    if (__VdlySet__sdram__DOT__sdram1__DOT__bank3__v0) {
        vlSelfRef.sdram__DOT__sdram1__DOT__bank3[__VdlyDim0__sdram__DOT__sdram1__DOT__bank3__v0] 
            = ((0xffU & vlSelfRef.sdram__DOT__sdram1__DOT__bank3
                [__VdlyDim0__sdram__DOT__sdram1__DOT__bank3__v0]) 
               | ((IData)(__VdlyVal__sdram__DOT__sdram1__DOT__bank3__v0) 
                  << 8U));
    }
    if (__VdlySet__sdram__DOT__sdram1__DOT__bank3__v1) {
        vlSelfRef.sdram__DOT__sdram1__DOT__bank3[__VdlyDim0__sdram__DOT__sdram1__DOT__bank3__v1] 
            = ((0xff00U & vlSelfRef.sdram__DOT__sdram1__DOT__bank3
                [__VdlyDim0__sdram__DOT__sdram1__DOT__bank3__v1]) 
               | (IData)(__VdlyVal__sdram__DOT__sdram1__DOT__bank3__v1));
    }
    vlSelfRef.sdram__DOT__sdram0__DOT__state = __Vdly__sdram__DOT__sdram0__DOT__state;
    vlSelfRef.sdram__DOT__sdram0__DOT__write_count 
        = __Vdly__sdram__DOT__sdram0__DOT__write_count;
    vlSelfRef.sdram__DOT__sdram0__DOT__burst_count 
        = __Vdly__sdram__DOT__sdram0__DOT__burst_count;
    if (__VdlySet__sdram__DOT__sdram0__DOT__row_num__v0) {
        vlSelfRef.sdram__DOT__sdram0__DOT__row_num[__VdlyDim0__sdram__DOT__sdram0__DOT__row_num__v0] 
            = __VdlyVal__sdram__DOT__sdram0__DOT__row_num__v0;
    }
    if (__VdlySet__sdram__DOT__sdram0__DOT__bank0__v0) {
        vlSelfRef.sdram__DOT__sdram0__DOT__bank0[__VdlyDim0__sdram__DOT__sdram0__DOT__bank0__v0] 
            = ((0xffU & vlSelfRef.sdram__DOT__sdram0__DOT__bank0
                [__VdlyDim0__sdram__DOT__sdram0__DOT__bank0__v0]) 
               | ((IData)(__VdlyVal__sdram__DOT__sdram0__DOT__bank0__v0) 
                  << 8U));
    }
    if (__VdlySet__sdram__DOT__sdram0__DOT__bank0__v1) {
        vlSelfRef.sdram__DOT__sdram0__DOT__bank0[__VdlyDim0__sdram__DOT__sdram0__DOT__bank0__v1] 
            = ((0xff00U & vlSelfRef.sdram__DOT__sdram0__DOT__bank0
                [__VdlyDim0__sdram__DOT__sdram0__DOT__bank0__v1]) 
               | (IData)(__VdlyVal__sdram__DOT__sdram0__DOT__bank0__v1));
    }
    if (__VdlySet__sdram__DOT__sdram0__DOT__bank1__v0) {
        vlSelfRef.sdram__DOT__sdram0__DOT__bank1[__VdlyDim0__sdram__DOT__sdram0__DOT__bank1__v0] 
            = ((0xffU & vlSelfRef.sdram__DOT__sdram0__DOT__bank1
                [__VdlyDim0__sdram__DOT__sdram0__DOT__bank1__v0]) 
               | ((IData)(__VdlyVal__sdram__DOT__sdram0__DOT__bank1__v0) 
                  << 8U));
    }
    if (__VdlySet__sdram__DOT__sdram0__DOT__bank1__v1) {
        vlSelfRef.sdram__DOT__sdram0__DOT__bank1[__VdlyDim0__sdram__DOT__sdram0__DOT__bank1__v1] 
            = ((0xff00U & vlSelfRef.sdram__DOT__sdram0__DOT__bank1
                [__VdlyDim0__sdram__DOT__sdram0__DOT__bank1__v1]) 
               | (IData)(__VdlyVal__sdram__DOT__sdram0__DOT__bank1__v1));
    }
    if (__VdlySet__sdram__DOT__sdram0__DOT__bank2__v0) {
        vlSelfRef.sdram__DOT__sdram0__DOT__bank2[__VdlyDim0__sdram__DOT__sdram0__DOT__bank2__v0] 
            = ((0xffU & vlSelfRef.sdram__DOT__sdram0__DOT__bank2
                [__VdlyDim0__sdram__DOT__sdram0__DOT__bank2__v0]) 
               | ((IData)(__VdlyVal__sdram__DOT__sdram0__DOT__bank2__v0) 
                  << 8U));
    }
    if (__VdlySet__sdram__DOT__sdram0__DOT__bank2__v1) {
        vlSelfRef.sdram__DOT__sdram0__DOT__bank2[__VdlyDim0__sdram__DOT__sdram0__DOT__bank2__v1] 
            = ((0xff00U & vlSelfRef.sdram__DOT__sdram0__DOT__bank2
                [__VdlyDim0__sdram__DOT__sdram0__DOT__bank2__v1]) 
               | (IData)(__VdlyVal__sdram__DOT__sdram0__DOT__bank2__v1));
    }
    if (__VdlySet__sdram__DOT__sdram0__DOT__bank3__v0) {
        vlSelfRef.sdram__DOT__sdram0__DOT__bank3[__VdlyDim0__sdram__DOT__sdram0__DOT__bank3__v0] 
            = ((0xffU & vlSelfRef.sdram__DOT__sdram0__DOT__bank3
                [__VdlyDim0__sdram__DOT__sdram0__DOT__bank3__v0]) 
               | ((IData)(__VdlyVal__sdram__DOT__sdram0__DOT__bank3__v0) 
                  << 8U));
    }
    if (__VdlySet__sdram__DOT__sdram0__DOT__bank3__v1) {
        vlSelfRef.sdram__DOT__sdram0__DOT__bank3[__VdlyDim0__sdram__DOT__sdram0__DOT__bank3__v1] 
            = ((0xff00U & vlSelfRef.sdram__DOT__sdram0__DOT__bank3
                [__VdlyDim0__sdram__DOT__sdram0__DOT__bank3__v1]) 
               | (IData)(__VdlyVal__sdram__DOT__sdram0__DOT__bank3__v1));
    }
    vlSelfRef.sdram__DOT__sdram1__DOT__cas_latency 
        = ((1U == (7U & ((IData)(vlSelfRef.sdram__DOT__sdram1__DOT__mode_reg) 
                         >> 4U))) ? 1U : ((2U == (7U 
                                                  & ((IData)(vlSelfRef.sdram__DOT__sdram1__DOT__mode_reg) 
                                                     >> 4U)))
                                           ? 2U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.sdram__DOT__sdram1__DOT__mode_reg) 
                                                        >> 4U)))
                                                    ? 3U
                                                    : 0U)));
    vlSelfRef.sdram__DOT__sdram1__DOT__burst_length 
        = ((0U == (7U & (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__mode_reg)))
            ? 1U : ((1U == (7U & (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__mode_reg)))
                     ? 2U : ((2U == (7U & (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__mode_reg)))
                              ? 4U : ((3U == (7U & (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__mode_reg)))
                                       ? 8U : 0U))));
    vlSelfRef.sdram__DOT__sdram0__DOT__cas_latency 
        = ((1U == (7U & ((IData)(vlSelfRef.sdram__DOT__sdram0__DOT__mode_reg) 
                         >> 4U))) ? 1U : ((2U == (7U 
                                                  & ((IData)(vlSelfRef.sdram__DOT__sdram0__DOT__mode_reg) 
                                                     >> 4U)))
                                           ? 2U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.sdram__DOT__sdram0__DOT__mode_reg) 
                                                        >> 4U)))
                                                    ? 3U
                                                    : 0U)));
    vlSelfRef.sdram__DOT__sdram0__DOT__burst_length 
        = ((0U == (7U & (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__mode_reg)))
            ? 1U : ((1U == (7U & (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__mode_reg)))
                     ? 2U : ((2U == (7U & (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__mode_reg)))
                              ? 4U : ((3U == (7U & (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__mode_reg)))
                                       ? 8U : 0U))));
    vlSelfRef.sdram__DOT__sdram1__DOT__out = 0U;
    if (vlSelfRef.sdram__DOT__sdram1__DOT__read_valid) {
        if ((0U == (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__bank_num))) {
            vlSelfRef.sdram__DOT__sdram1__DOT__out 
                = vlSelfRef.sdram__DOT__sdram1__DOT__bank0
                [(0x3fffffU & ((VL_SHIFTL_III(22,32,32, 
                                              vlSelfRef.sdram__DOT__sdram1__DOT__row_num
                                              [vlSelfRef.sdram__DOT__sdram1__DOT__bank_num], 9U) 
                                + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__col_num)) 
                               + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__burst_count)))];
        } else if ((1U == (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__bank_num))) {
            vlSelfRef.sdram__DOT__sdram1__DOT__out 
                = vlSelfRef.sdram__DOT__sdram1__DOT__bank1
                [(0x3fffffU & ((VL_SHIFTL_III(22,32,32, 
                                              vlSelfRef.sdram__DOT__sdram1__DOT__row_num
                                              [vlSelfRef.sdram__DOT__sdram1__DOT__bank_num], 9U) 
                                + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__col_num)) 
                               + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__burst_count)))];
        } else if ((2U == (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__bank_num))) {
            vlSelfRef.sdram__DOT__sdram1__DOT__out 
                = vlSelfRef.sdram__DOT__sdram1__DOT__bank2
                [(0x3fffffU & ((VL_SHIFTL_III(22,32,32, 
                                              vlSelfRef.sdram__DOT__sdram1__DOT__row_num
                                              [vlSelfRef.sdram__DOT__sdram1__DOT__bank_num], 9U) 
                                + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__col_num)) 
                               + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__burst_count)))];
        } else if ((3U == (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__bank_num))) {
            vlSelfRef.sdram__DOT__sdram1__DOT__out 
                = vlSelfRef.sdram__DOT__sdram1__DOT__bank3
                [(0x3fffffU & ((VL_SHIFTL_III(22,32,32, 
                                              vlSelfRef.sdram__DOT__sdram1__DOT__row_num
                                              [vlSelfRef.sdram__DOT__sdram1__DOT__bank_num], 9U) 
                                + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__col_num)) 
                               + (IData)(vlSelfRef.sdram__DOT__sdram1__DOT__burst_count)))];
        }
    }
    vlSelfRef.sdram__DOT__sdram0__DOT__out = 0U;
    if (vlSelfRef.sdram__DOT__sdram0__DOT__read_valid) {
        if ((0U == (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__bank_num))) {
            vlSelfRef.sdram__DOT__sdram0__DOT__out 
                = vlSelfRef.sdram__DOT__sdram0__DOT__bank0
                [(0x3fffffU & ((VL_SHIFTL_III(22,32,32, 
                                              vlSelfRef.sdram__DOT__sdram0__DOT__row_num
                                              [vlSelfRef.sdram__DOT__sdram0__DOT__bank_num], 9U) 
                                + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__col_num)) 
                               + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__burst_count)))];
        } else if ((1U == (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__bank_num))) {
            vlSelfRef.sdram__DOT__sdram0__DOT__out 
                = vlSelfRef.sdram__DOT__sdram0__DOT__bank1
                [(0x3fffffU & ((VL_SHIFTL_III(22,32,32, 
                                              vlSelfRef.sdram__DOT__sdram0__DOT__row_num
                                              [vlSelfRef.sdram__DOT__sdram0__DOT__bank_num], 9U) 
                                + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__col_num)) 
                               + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__burst_count)))];
        } else if ((2U == (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__bank_num))) {
            vlSelfRef.sdram__DOT__sdram0__DOT__out 
                = vlSelfRef.sdram__DOT__sdram0__DOT__bank2
                [(0x3fffffU & ((VL_SHIFTL_III(22,32,32, 
                                              vlSelfRef.sdram__DOT__sdram0__DOT__row_num
                                              [vlSelfRef.sdram__DOT__sdram0__DOT__bank_num], 9U) 
                                + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__col_num)) 
                               + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__burst_count)))];
        } else if ((3U == (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__bank_num))) {
            vlSelfRef.sdram__DOT__sdram0__DOT__out 
                = vlSelfRef.sdram__DOT__sdram0__DOT__bank3
                [(0x3fffffU & ((VL_SHIFTL_III(22,32,32, 
                                              vlSelfRef.sdram__DOT__sdram0__DOT__row_num
                                              [vlSelfRef.sdram__DOT__sdram0__DOT__bank_num], 9U) 
                                + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__col_num)) 
                               + (IData)(vlSelfRef.sdram__DOT__sdram0__DOT__burst_count)))];
        }
    }
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__5(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__5\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__psram__DOT__cmd_done;
    __Vdly__psram__DOT__cmd_done = 0;
    CData/*7:0*/ __Vdly__psram__DOT__count;
    __Vdly__psram__DOT__count = 0;
    CData/*7:0*/ __Vdly__psram__DOT__cmd;
    __Vdly__psram__DOT__cmd = 0;
    IData/*23:0*/ __Vdly__psram__DOT__addr;
    __Vdly__psram__DOT__addr = 0;
    CData/*7:0*/ __Vdly__psram__DOT__data;
    __Vdly__psram__DOT__data = 0;
    CData/*7:0*/ __VdlyVal__psram__DOT__mem__v0;
    __VdlyVal__psram__DOT__mem__v0 = 0;
    IData/*23:0*/ __VdlyDim0__psram__DOT__mem__v0;
    __VdlyDim0__psram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__psram__DOT__mem__v0;
    __VdlySet__psram__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__psram__DOT__mem__v1;
    __VdlyVal__psram__DOT__mem__v1 = 0;
    IData/*23:0*/ __VdlyDim0__psram__DOT__mem__v1;
    __VdlyDim0__psram__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__psram__DOT__mem__v1;
    __VdlySet__psram__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__psram__DOT__mem__v2;
    __VdlyVal__psram__DOT__mem__v2 = 0;
    IData/*23:0*/ __VdlyDim0__psram__DOT__mem__v2;
    __VdlyDim0__psram__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__psram__DOT__mem__v2;
    __VdlySet__psram__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__psram__DOT__mem__v3;
    __VdlyVal__psram__DOT__mem__v3 = 0;
    IData/*23:0*/ __VdlyDim0__psram__DOT__mem__v3;
    __VdlyDim0__psram__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__psram__DOT__mem__v3;
    __VdlySet__psram__DOT__mem__v3 = 0;
    // Body
    __Vdly__psram__DOT__cmd_done = vlSelfRef.psram__DOT__cmd_done;
    __Vdly__psram__DOT__data = vlSelfRef.psram__DOT__data;
    __Vdly__psram__DOT__addr = vlSelfRef.psram__DOT__addr;
    __Vdly__psram__DOT__cmd = vlSelfRef.psram__DOT__cmd;
    __VdlySet__psram__DOT__mem__v0 = 0U;
    __VdlySet__psram__DOT__mem__v1 = 0U;
    __VdlySet__psram__DOT__mem__v2 = 0U;
    __VdlySet__psram__DOT__mem__v3 = 0U;
    __Vdly__psram__DOT__count = vlSelfRef.psram__DOT__count;
    if (vlSelfRef._asic_psram_ce_n) {
        __Vdly__psram__DOT__cmd_done = 0U;
        __Vdly__psram__DOT__count = 0U;
        __Vdly__psram__DOT__cmd = 0U;
        __Vdly__psram__DOT__addr = 0U;
        __Vdly__psram__DOT__data = 0U;
        vlSelfRef.psram__DOT__state = 0U;
    } else {
        __Vdly__psram__DOT__count = (0xffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.psram__DOT__count)));
        if (vlSelfRef.psram__DOT__qpi_en) {
            if (((0x35U == (IData)(vlSelfRef.psram__DOT__qpi_cmd)) 
                 & (IData)(vlSelfRef.psram__DOT__qpi_en))) {
                if (((IData)(vlSelfRef.psram__DOT__count) 
                     <= (IData)(vlSelfRef.psram__DOT__CMD_COUNT))) {
                    __Vdly__psram__DOT__cmd = ((0xf0U 
                                                & ((IData)(vlSelfRef.psram__DOT__cmd) 
                                                   << 4U)) 
                                               | (IData)(vlSelfRef.psram__DOT__din));
                }
                if (((IData)(vlSelfRef.psram__DOT__count) 
                     == (IData)(vlSelfRef.psram__DOT__CMD_COUNT))) {
                    __Vdly__psram__DOT__cmd_done = 1U;
                }
                if (((0xebU == (IData)(vlSelfRef.psram__DOT__cmd)) 
                     & (IData)(vlSelfRef.psram__DOT__cmd_done))) {
                    if ((((IData)(vlSelfRef.psram__DOT__count) 
                          > (IData)(vlSelfRef.psram__DOT__CMD_COUNT)) 
                         & ((IData)(vlSelfRef.psram__DOT__count) 
                            <= (0xffU & ((IData)(vlSelfRef.psram__DOT__CMD_COUNT) 
                                         + (IData)(vlSelfRef.psram__DOT__ADDR_COUNT)))))) {
                        __Vdly__psram__DOT__addr = 
                            ((0xfffff0U & (vlSelfRef.psram__DOT__addr 
                                           << 4U)) 
                             | (IData)(vlSelfRef.psram__DOT__din));
                    }
                }
                if (((0x38U == (IData)(vlSelfRef.psram__DOT__cmd)) 
                     & (IData)(vlSelfRef.psram__DOT__cmd_done))) {
                    if ((((IData)(vlSelfRef.psram__DOT__count) 
                          > (IData)(vlSelfRef.psram__DOT__CMD_COUNT)) 
                         & ((IData)(vlSelfRef.psram__DOT__count) 
                            <= (0xffU & ((IData)(vlSelfRef.psram__DOT__CMD_COUNT) 
                                         + (IData)(vlSelfRef.psram__DOT__ADDR_COUNT)))))) {
                        __Vdly__psram__DOT__addr = 
                            ((0xfffff0U & (vlSelfRef.psram__DOT__addr 
                                           << 4U)) 
                             | (IData)(vlSelfRef.psram__DOT__din));
                    }
                    if (((IData)(vlSelfRef.psram__DOT__count) 
                         > (0xffU & ((IData)(vlSelfRef.psram__DOT__CMD_COUNT) 
                                     + (IData)(vlSelfRef.psram__DOT__ADDR_COUNT))))) {
                        __Vdly__psram__DOT__data = 
                            ((0xf0U & ((IData)(vlSelfRef.psram__DOT__data) 
                                       << 4U)) | (IData)(vlSelfRef.psram__DOT__din));
                        if ((9U == (IData)(vlSelfRef.psram__DOT__count))) {
                            __VdlyVal__psram__DOT__mem__v0 
                                = ((0xf0U & ((IData)(vlSelfRef.psram__DOT__data) 
                                             << 4U)) 
                                   | (IData)(vlSelfRef.psram__DOT__din));
                            __VdlyDim0__psram__DOT__mem__v0 
                                = vlSelfRef.psram__DOT__addr;
                            __VdlySet__psram__DOT__mem__v0 = 1U;
                        } else if ((0xbU == (IData)(vlSelfRef.psram__DOT__count))) {
                            __VdlyVal__psram__DOT__mem__v1 
                                = ((0xf0U & ((IData)(vlSelfRef.psram__DOT__data) 
                                             << 4U)) 
                                   | (IData)(vlSelfRef.psram__DOT__din));
                            __VdlyDim0__psram__DOT__mem__v1 
                                = (0xffffffU & ((IData)(1U) 
                                                + vlSelfRef.psram__DOT__addr));
                            __VdlySet__psram__DOT__mem__v1 = 1U;
                        } else if ((0xdU == (IData)(vlSelfRef.psram__DOT__count))) {
                            __VdlyVal__psram__DOT__mem__v2 
                                = ((0xf0U & ((IData)(vlSelfRef.psram__DOT__data) 
                                             << 4U)) 
                                   | (IData)(vlSelfRef.psram__DOT__din));
                            __VdlyDim0__psram__DOT__mem__v2 
                                = (0xffffffU & ((IData)(2U) 
                                                + vlSelfRef.psram__DOT__addr));
                            __VdlySet__psram__DOT__mem__v2 = 1U;
                        } else if ((0xfU == (IData)(vlSelfRef.psram__DOT__count))) {
                            __VdlyVal__psram__DOT__mem__v3 
                                = ((0xf0U & ((IData)(vlSelfRef.psram__DOT__data) 
                                             << 4U)) 
                                   | (IData)(vlSelfRef.psram__DOT__din));
                            __VdlyDim0__psram__DOT__mem__v3 
                                = (0xffffffU & ((IData)(3U) 
                                                + vlSelfRef.psram__DOT__addr));
                            __VdlySet__psram__DOT__mem__v3 = 1U;
                        }
                    }
                }
            }
        } else {
            if (((IData)(vlSelfRef.psram__DOT__count) 
                 <= (IData)(vlSelfRef.psram__DOT__QPI_COUNT))) {
                vlSelfRef.psram__DOT__qpi_cmd = ((0xfeU 
                                                  & ((IData)(vlSelfRef.psram__DOT__qpi_cmd) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelfRef.psram__DOT__din)));
            }
            if (((IData)(vlSelfRef.psram__DOT__count) 
                 == (IData)(vlSelfRef.psram__DOT__QPI_COUNT))) {
                vlSelfRef.psram__DOT__qpi_en = 1U;
            }
        }
    }
    vlSelfRef.psram__DOT__cmd_done = __Vdly__psram__DOT__cmd_done;
    vlSelfRef.psram__DOT__data = __Vdly__psram__DOT__data;
    vlSelfRef.psram__DOT__addr = __Vdly__psram__DOT__addr;
    vlSelfRef.psram__DOT__cmd = __Vdly__psram__DOT__cmd;
    if (__VdlySet__psram__DOT__mem__v0) {
        vlSelfRef.psram__DOT__mem[__VdlyDim0__psram__DOT__mem__v0] 
            = __VdlyVal__psram__DOT__mem__v0;
    }
    if (__VdlySet__psram__DOT__mem__v1) {
        vlSelfRef.psram__DOT__mem[__VdlyDim0__psram__DOT__mem__v1] 
            = __VdlyVal__psram__DOT__mem__v1;
    }
    if (__VdlySet__psram__DOT__mem__v2) {
        vlSelfRef.psram__DOT__mem[__VdlyDim0__psram__DOT__mem__v2] 
            = __VdlyVal__psram__DOT__mem__v2;
    }
    if (__VdlySet__psram__DOT__mem__v3) {
        vlSelfRef.psram__DOT__mem[__VdlyDim0__psram__DOT__mem__v3] 
            = __VdlyVal__psram__DOT__mem__v3;
    }
    vlSelfRef.psram__DOT__count = __Vdly__psram__DOT__count;
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
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__6(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__6\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.flash__DOT__ren = ((1U == (IData)(vlSelfRef.flash__DOT__state)) 
                                 & (0x17U == (IData)(vlSelfRef.flash__DOT__counter)));
    vlSelfRef.flash__DOT__cmd = vlSelfRef.__Vdly__flash__DOT__cmd;
    vlSelfRef.flash__DOT__flash_cmd_i__DOT__valid = vlSelfRef.flash__DOT__ren;
    vlSelfRef.flash__DOT__flash_cmd_i__DOT__cmd = vlSelfRef.flash__DOT__cmd;
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.flash__DOT__raddr = ((0xfffffeU & (vlSelfRef.flash__DOT__addr 
                                                 << 1U)) 
                                   | (IData)(vlSelfRef._asic_spi_mosi));
    vlSelfRef._flash_miso = (1U & ((IData)(vlSelfRef.flash__DOT__reset) 
                                   | ((((2U == (IData)(vlSelfRef.flash__DOT__state)) 
                                        & (0U == (IData)(vlSelfRef.flash__DOT__counter)))
                                        ? vlSelfRef.flash__DOT__data_bswap
                                        : vlSelfRef.flash__DOT__data) 
                                      >> 0x1fU)));
    vlSelfRef.flash__DOT__flash_cmd_i__DOT__addr = vlSelfRef.flash__DOT__raddr;
    vlSelfRef.flash__DOT__miso = vlSelfRef._flash_miso;
}

VL_INLINE_OPT void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__3(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef._bitrev_miso = ((IData)(vlSelfRef.bitrev__DOT__out) 
                              | ((IData)(vlSelfRef._asic_spi_ss) 
                                 >> 7U));
    vlSelfRef.bitrev__DOT__miso = vlSelfRef._bitrev_miso;
}
