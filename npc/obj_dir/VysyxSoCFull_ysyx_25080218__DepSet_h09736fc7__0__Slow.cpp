// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_ysyx_25080218.h"

VL_ATTR_COLD void VysyxSoCFull_ysyx_25080218___eval_static__TOP__ysyxSoCFull__asic__cpu__cpu(VysyxSoCFull_ysyx_25080218* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25080218___eval_static__TOP__ysyxSoCFull__asic__cpu__cpu\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.IDU_init__DOT__mstatus = 0x1800U;
    vlSelfRef.IDU_init__DOT__mvendorid = 0x17eb19aU;
    vlSelfRef.IDU_init__DOT__marchid = 0x25080218U;
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_25080218___eval_initial__TOP__ysyxSoCFull__asic__cpu__cpu(VysyxSoCFull_ysyx_25080218* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25080218___eval_initial__TOP__ysyxSoCFull__asic__cpu__cpu\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_master_awid = 0U;
    vlSelfRef.io_master_awlen = 0U;
    vlSelfRef.io_master_awsize = 0U;
    vlSelfRef.io_master_awburst = 0U;
    vlSelfRef.io_master_wlast = 0U;
    vlSelfRef.io_master_arid = 0U;
    vlSelfRef.io_master_arlen = 0U;
    vlSelfRef.io_master_arsize = 0U;
    vlSelfRef.io_master_arburst = 0U;
    vlSelfRef.io_slave_awready = 0U;
    vlSelfRef.io_slave_wready = 0U;
    vlSelfRef.io_slave_bvalid = 0U;
    vlSelfRef.io_slave_bresp = 0U;
    vlSelfRef.io_slave_bid = 0U;
    vlSelfRef.io_slave_arready = 0U;
    vlSelfRef.io_slave_rvalid = 0U;
    vlSelfRef.io_slave_rresp = 0U;
    vlSelfRef.io_slave_rdata = 0U;
    vlSelfRef.io_slave_rlast = 0U;
    vlSelfRef.io_slave_rid = 0U;
    vlSelfRef.m0_awaddr = 0U;
    vlSelfRef.m0_awvalid = 0U;
    vlSelfRef.m0_wdata = 0U;
    vlSelfRef.m0_wstrb = 0U;
    vlSelfRef.m0_wvalid = 0U;
    vlSelfRef.m0_bready = 0U;
    vlSelfRef.s0_awready = 1U;
    vlSelfRef.s0_wready = 1U;
    vlSelfRef.s0_bresp = 0U;
    vlSelfRef.s0_bvalid = 1U;
    vlSelfRef.ready_from_wbu = 1U;
    vlSelfRef.xbar_init__DOT__m0_r_s0 = 1U;
    vlSelfRef.xbar_init__DOT__m0_r_s1 = 0U;
    vlSelfRef.m0_wready = 0U;
    vlSelfRef.m0_bvalid = 0U;
    vlSelfRef.m0_bresp = 0U;
    vlSelfRef.m0_awready = 0U;
    vlSelfRef.s1_wready = 0U;
    vlSelfRef.s1_awready = 0U;
    vlSelfRef.s1_bresp = 0U;
    vlSelfRef.s1_bvalid = 0U;
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_25080218___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_25080218* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25080218___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.xbar_init__DOT__s0_awready = vlSelfRef.io_master_awready;
    vlSelfRef.m1_awready = 0U;
    if ((1U & (~ (IData)(vlSelfRef.xbar_init__DOT__s0_w_busy)))) {
        vlSelfRef.xbar_init__DOT__s0_wready = vlSelfRef.io_master_wready;
        vlSelfRef.m1_wready = 0U;
        if ((((IData)(vlSelfRef.m1_awvalid) & (IData)(vlSelfRef.m1_wvalid)) 
             & (IData)(vlSelfRef.xbar_init__DOT__m1_w_s0))) {
            vlSelfRef.m1_awready = vlSelfRef.io_master_awready;
            vlSelfRef.m1_wready = vlSelfRef.io_master_wready;
        }
    } else {
        vlSelfRef.xbar_init__DOT__s0_wready = vlSelfRef.io_master_wready;
        vlSelfRef.m1_wready = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.xbar_init__DOT__s1_w_busy)))) {
        if ((((IData)(vlSelfRef.m1_awvalid) & (IData)(vlSelfRef.m1_wvalid)) 
             & (IData)(vlSelfRef.xbar_init__DOT__m1_w_s1))) {
            vlSelfRef.m1_awready = vlSelfRef.s1_awready;
            vlSelfRef.m1_wready = vlSelfRef.s1_wready;
        }
    }
    vlSelfRef.xbar_init__DOT__s0_arready = vlSelfRef.io_master_arready;
    vlSelfRef.m0_arready = 0U;
    if ((1U & (~ (IData)(vlSelfRef.xbar_init__DOT__s0_r_busy)))) {
        if (vlSelfRef.xbar_init__DOT__m0_rreq_s0) {
            vlSelfRef.m0_arready = vlSelfRef.io_master_arready;
        }
        vlSelfRef.m1_arready = 0U;
        if ((1U & (~ (IData)(vlSelfRef.xbar_init__DOT__m0_rreq_s0)))) {
            if (vlSelfRef.xbar_init__DOT__m1_rreq_s0) {
                vlSelfRef.m1_arready = vlSelfRef.io_master_arready;
            }
        }
    } else {
        vlSelfRef.m1_arready = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.xbar_init__DOT__s1_r_busy)))) {
        if (vlSelfRef.xbar_init__DOT__m0_rreq_s1) {
            vlSelfRef.m0_arready = vlSelfRef.s1_arready;
        }
        if ((1U & (~ (IData)(vlSelfRef.xbar_init__DOT__m0_rreq_s1)))) {
            if (vlSelfRef.xbar_init__DOT__m1_rreq_s1) {
                vlSelfRef.m1_arready = vlSelfRef.s1_arready;
            }
        }
    }
    vlSelfRef.xbar_init__DOT__s0_rvalid = vlSelfRef.io_master_rvalid;
    vlSelfRef.m0_rvalid = 0U;
    vlSelfRef.m1_rvalid = 0U;
    vlSelfRef.xbar_init__DOT__s0_rresp = vlSelfRef.io_master_rresp;
    vlSelfRef.m0_rresp = 0U;
    vlSelfRef.m1_rresp = 0U;
    vlSelfRef.xbar_init__DOT__s0_rdata = vlSelfRef.io_master_rdata;
    vlSelfRef.m0_rdata = 0U;
    if (vlSelfRef.xbar_init__DOT__s0_r_busy) {
        if ((1U & (~ (IData)(vlSelfRef.xbar_init__DOT__s0_r_owner)))) {
            vlSelfRef.m0_rvalid = vlSelfRef.io_master_rvalid;
            vlSelfRef.m0_rresp = vlSelfRef.io_master_rresp;
            vlSelfRef.m0_rdata = vlSelfRef.io_master_rdata;
        }
        vlSelfRef.m1_rdata = 0U;
        if (vlSelfRef.xbar_init__DOT__s0_r_owner) {
            vlSelfRef.m1_rvalid = vlSelfRef.io_master_rvalid;
            vlSelfRef.m1_rresp = vlSelfRef.io_master_rresp;
            vlSelfRef.m1_rdata = vlSelfRef.io_master_rdata;
        }
    } else {
        vlSelfRef.m1_rdata = 0U;
    }
    if (vlSelfRef.xbar_init__DOT__s1_r_busy) {
        if ((1U & (~ (IData)(vlSelfRef.xbar_init__DOT__s1_r_owner)))) {
            vlSelfRef.m0_rvalid = vlSelfRef.s1_rvalid;
            vlSelfRef.m0_rresp = vlSelfRef.s1_rresp;
            vlSelfRef.m0_rdata = vlSelfRef.s1_rdata;
        }
        if (vlSelfRef.xbar_init__DOT__s1_r_owner) {
            vlSelfRef.m1_rvalid = vlSelfRef.s1_rvalid;
            vlSelfRef.m1_rresp = vlSelfRef.s1_rresp;
            vlSelfRef.m1_rdata = vlSelfRef.s1_rdata;
        }
    }
    vlSelfRef.xbar_init__DOT__s0_bresp = vlSelfRef.io_master_bresp;
    vlSelfRef.m1_bresp = 0U;
    if (vlSelfRef.xbar_init__DOT__s0_w_busy) {
        vlSelfRef.m1_bresp = vlSelfRef.io_master_bresp;
        vlSelfRef.xbar_init__DOT__s0_bvalid = vlSelfRef.io_master_bvalid;
        vlSelfRef.m1_bvalid = 0U;
        vlSelfRef.m1_bvalid = vlSelfRef.io_master_bvalid;
    } else {
        vlSelfRef.xbar_init__DOT__s0_bvalid = vlSelfRef.io_master_bvalid;
        vlSelfRef.m1_bvalid = 0U;
    }
    if (vlSelfRef.xbar_init__DOT__s1_w_busy) {
        vlSelfRef.m1_bresp = vlSelfRef.s1_bresp;
        vlSelfRef.m1_bvalid = vlSelfRef.s1_bvalid;
    }
    vlSelfRef.MAU_init__DOT__AWREADY = vlSelfRef.m1_awready;
    vlSelfRef.xbar_init__DOT__m1_awready = vlSelfRef.m1_awready;
    vlSelfRef.MAU_init__DOT__WREADY = vlSelfRef.m1_wready;
    vlSelfRef.xbar_init__DOT__m1_wready = vlSelfRef.m1_wready;
    vlSelfRef.IFU_init__DOT__ARREADY = vlSelfRef.m0_arready;
    vlSelfRef.xbar_init__DOT__m0_arready = vlSelfRef.m0_arready;
    vlSelfRef.MAU_init__DOT__ARREADY = vlSelfRef.m1_arready;
    vlSelfRef.xbar_init__DOT__m1_arready = vlSelfRef.m1_arready;
    vlSelfRef.IFU_init__DOT__RVALID = vlSelfRef.m0_rvalid;
    vlSelfRef.xbar_init__DOT__m0_rvalid = vlSelfRef.m0_rvalid;
    vlSelfRef.MAU_init__DOT__RVALID = vlSelfRef.m1_rvalid;
    vlSelfRef.xbar_init__DOT__m1_rvalid = vlSelfRef.m1_rvalid;
    vlSelfRef.IFU_init__DOT__RRESP = vlSelfRef.m0_rresp;
    vlSelfRef.xbar_init__DOT__m0_rresp = vlSelfRef.m0_rresp;
    vlSelfRef.MAU_init__DOT__RRESP = vlSelfRef.m1_rresp;
    vlSelfRef.xbar_init__DOT__m1_rresp = vlSelfRef.m1_rresp;
    vlSelfRef.IFU_init__DOT__RDATA = vlSelfRef.m0_rdata;
    vlSelfRef.xbar_init__DOT__m0_rdata = vlSelfRef.m0_rdata;
    vlSelfRef.MAU_init__DOT__RDATA = vlSelfRef.m1_rdata;
    vlSelfRef.xbar_init__DOT__m1_rdata = vlSelfRef.m1_rdata;
    vlSelfRef.MAU_init__DOT__BRESP = vlSelfRef.m1_bresp;
    vlSelfRef.xbar_init__DOT__m1_bresp = vlSelfRef.m1_bresp;
    vlSelfRef.MAU_init__DOT__BVALID = vlSelfRef.m1_bvalid;
    vlSelfRef.xbar_init__DOT__m1_bvalid = vlSelfRef.m1_bvalid;
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_25080218___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_25080218* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25080218___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.IFU_init__DOT__clk = vlSelfRef.clock;
    vlSelfRef.MAU_init__DOT__clk = vlSelfRef.clock;
    vlSelfRef.xbar_init__DOT__clk = vlSelfRef.clock;
    vlSelfRef.clint_init__DOT__clk = vlSelfRef.clock;
    vlSelfRef.IDU_init__DOT__clk = vlSelfRef.clock;
    if (vlSelfRef.reset) {
        vlSelfRef.IFU_init__DOT__rst = 1U;
        vlSelfRef.MAU_init__DOT__rst = 1U;
        vlSelfRef.xbar_init__DOT__rst = 1U;
        vlSelfRef.clint_init__DOT__rst = 1U;
        vlSelfRef.IDU_init__DOT__rst = 1U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 1U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 2U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 3U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 4U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 5U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 6U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 7U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 8U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 9U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0xaU;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0xbU;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0xcU;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0xdU;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0xeU;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0xfU;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x10U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x11U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x12U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x13U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x14U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x15U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x16U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x17U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x18U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x19U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x1aU;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x1bU;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x1cU;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x1dU;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x1eU;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x1fU;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x20U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0U] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[1U] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[2U] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[3U] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[4U] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[5U] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[6U] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[7U] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[8U] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[9U] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0xaU] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0xbU] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0xcU] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0xdU] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0xeU] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0xfU] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x10U] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x11U] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x12U] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x13U] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x14U] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x15U] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x16U] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x17U] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x18U] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x19U] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x1aU] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x1bU] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x1cU] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x1dU] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x1eU] = 0U;
        vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x1fU] = 0U;
    } else {
        vlSelfRef.IFU_init__DOT__rst = 0U;
        vlSelfRef.MAU_init__DOT__rst = 0U;
        vlSelfRef.xbar_init__DOT__rst = 0U;
        vlSelfRef.clint_init__DOT__rst = 0U;
        vlSelfRef.IDU_init__DOT__rst = 0U;
        if ((1U & (~ ((IData)(vlSelfRef.gpr_we) & (0U 
                                                   != (IData)(vlSelfRef.gpr_waddr)))))) {
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 1U;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 2U;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 3U;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 4U;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 5U;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 6U;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 7U;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 8U;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 9U;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0xaU;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0xbU;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0xcU;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0xdU;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0xeU;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0xfU;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x10U;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x11U;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x12U;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x13U;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x14U;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x15U;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x16U;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x17U;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x18U;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x19U;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x1aU;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x1bU;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x1cU;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x1dU;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x1eU;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x1fU;
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x20U;
        }
        if (((IData)(vlSelfRef.gpr_we) & (0U != (IData)(vlSelfRef.gpr_waddr)))) {
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[vlSelfRef.gpr_waddr] 
                = vlSelfRef.IDU_init__DOT__gpr_wdata_total;
        } else {
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0U] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0U];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[1U] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [1U];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[2U] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [2U];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[3U] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [3U];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[4U] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [4U];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[5U] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [5U];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[6U] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [6U];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[7U] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [7U];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[8U] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [8U];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[9U] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [9U];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0xaU] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0xaU];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0xbU] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0xbU];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0xcU] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0xcU];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0xdU] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0xdU];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0xeU] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0xeU];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0xfU] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0xfU];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x10U] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x10U];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x11U] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x11U];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x12U] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x12U];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x13U] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x13U];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x14U] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x14U];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x15U] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x15U];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x16U] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x16U];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x17U] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x17U];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x18U] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x18U];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x19U] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x19U];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x1aU] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x1aU];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x1bU] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x1bU];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x1cU] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x1cU];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x1dU] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x1dU];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x1eU] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x1eU];
            vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0x1fU] 
                = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
                [0x1fU];
        }
    }
    vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__clk 
        = vlSelfRef.IDU_init__DOT__clk;
    vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__rst 
        = vlSelfRef.IDU_init__DOT__rst;
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_25080218___ctor_var_reset(VysyxSoCFull_ysyx_25080218* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25080218___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_interrupt = VL_RAND_RESET_I(1);
    vlSelf->io_master_awready = VL_RAND_RESET_I(1);
    vlSelf->io_master_awvalid = VL_RAND_RESET_I(1);
    vlSelf->io_master_awaddr = VL_RAND_RESET_I(32);
    vlSelf->io_master_awid = VL_RAND_RESET_I(4);
    vlSelf->io_master_awlen = VL_RAND_RESET_I(8);
    vlSelf->io_master_awsize = VL_RAND_RESET_I(3);
    vlSelf->io_master_awburst = VL_RAND_RESET_I(2);
    vlSelf->io_master_wready = VL_RAND_RESET_I(1);
    vlSelf->io_master_wvalid = VL_RAND_RESET_I(1);
    vlSelf->io_master_wdata = VL_RAND_RESET_I(32);
    vlSelf->io_master_wstrb = VL_RAND_RESET_I(4);
    vlSelf->io_master_wlast = VL_RAND_RESET_I(1);
    vlSelf->io_master_bready = VL_RAND_RESET_I(1);
    vlSelf->io_master_bvalid = VL_RAND_RESET_I(1);
    vlSelf->io_master_bresp = VL_RAND_RESET_I(2);
    vlSelf->io_master_bid = VL_RAND_RESET_I(4);
    vlSelf->io_master_arready = VL_RAND_RESET_I(1);
    vlSelf->io_master_arvalid = VL_RAND_RESET_I(1);
    vlSelf->io_master_araddr = VL_RAND_RESET_I(32);
    vlSelf->io_master_arid = VL_RAND_RESET_I(4);
    vlSelf->io_master_arlen = VL_RAND_RESET_I(8);
    vlSelf->io_master_arsize = VL_RAND_RESET_I(3);
    vlSelf->io_master_arburst = VL_RAND_RESET_I(2);
    vlSelf->io_master_rready = VL_RAND_RESET_I(1);
    vlSelf->io_master_rvalid = VL_RAND_RESET_I(1);
    vlSelf->io_master_rresp = VL_RAND_RESET_I(2);
    vlSelf->io_master_rdata = VL_RAND_RESET_I(32);
    vlSelf->io_master_rlast = VL_RAND_RESET_I(1);
    vlSelf->io_master_rid = VL_RAND_RESET_I(4);
    vlSelf->io_slave_awready = VL_RAND_RESET_I(1);
    vlSelf->io_slave_awvalid = VL_RAND_RESET_I(1);
    vlSelf->io_slave_awaddr = VL_RAND_RESET_I(32);
    vlSelf->io_slave_awid = VL_RAND_RESET_I(4);
    vlSelf->io_slave_awlen = VL_RAND_RESET_I(8);
    vlSelf->io_slave_awsize = VL_RAND_RESET_I(3);
    vlSelf->io_slave_awburst = VL_RAND_RESET_I(2);
    vlSelf->io_slave_wready = VL_RAND_RESET_I(1);
    vlSelf->io_slave_wvalid = VL_RAND_RESET_I(1);
    vlSelf->io_slave_wdata = VL_RAND_RESET_I(32);
    vlSelf->io_slave_wstrb = VL_RAND_RESET_I(4);
    vlSelf->io_slave_wlast = VL_RAND_RESET_I(1);
    vlSelf->io_slave_bready = VL_RAND_RESET_I(1);
    vlSelf->io_slave_bvalid = VL_RAND_RESET_I(1);
    vlSelf->io_slave_bresp = VL_RAND_RESET_I(2);
    vlSelf->io_slave_bid = VL_RAND_RESET_I(4);
    vlSelf->io_slave_arready = VL_RAND_RESET_I(1);
    vlSelf->io_slave_arvalid = VL_RAND_RESET_I(1);
    vlSelf->io_slave_araddr = VL_RAND_RESET_I(32);
    vlSelf->io_slave_arid = VL_RAND_RESET_I(4);
    vlSelf->io_slave_arlen = VL_RAND_RESET_I(8);
    vlSelf->io_slave_arsize = VL_RAND_RESET_I(3);
    vlSelf->io_slave_arburst = VL_RAND_RESET_I(2);
    vlSelf->io_slave_rready = VL_RAND_RESET_I(1);
    vlSelf->io_slave_rvalid = VL_RAND_RESET_I(1);
    vlSelf->io_slave_rresp = VL_RAND_RESET_I(2);
    vlSelf->io_slave_rdata = VL_RAND_RESET_I(32);
    vlSelf->io_slave_rlast = VL_RAND_RESET_I(1);
    vlSelf->io_slave_rid = VL_RAND_RESET_I(4);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->gpr_wdata = VL_RAND_RESET_I(32);
    vlSelf->gpr_waddr = VL_RAND_RESET_I(5);
    vlSelf->gpr_we = VL_RAND_RESET_I(1);
    vlSelf->imm = VL_RAND_RESET_I(12);
    vlSelf->alu_src1 = VL_RAND_RESET_I(32);
    vlSelf->alu_src2 = VL_RAND_RESET_I(32);
    vlSelf->alu_op = VL_RAND_RESET_I(12);
    vlSelf->rd_we = VL_RAND_RESET_I(1);
    vlSelf->rd = VL_RAND_RESET_I(5);
    vlSelf->next_pc_jump = VL_RAND_RESET_I(32);
    vlSelf->is_jump = VL_RAND_RESET_I(1);
    vlSelf->pc_wire = VL_RAND_RESET_I(32);
    vlSelf->npc = VL_RAND_RESET_I(32);
    vlSelf->dnpc = VL_RAND_RESET_I(32);
    vlSelf->load_ctrl = VL_RAND_RESET_I(5);
    vlSelf->store_ctrl = VL_RAND_RESET_I(3);
    vlSelf->rs2 = VL_RAND_RESET_I(32);
    vlSelf->rs1 = VL_RAND_RESET_I(32);
    vlSelf->branch_ctrl = VL_RAND_RESET_I(6);
    vlSelf->branch_pc = VL_RAND_RESET_I(32);
    vlSelf->next_pc_csr = VL_RAND_RESET_I(32);
    vlSelf->is_ecall_mret = VL_RAND_RESET_I(1);
    vlSelf->Ifu2Idu_valid = VL_RAND_RESET_I(1);
    vlSelf->Idu2Ifu_ready = VL_RAND_RESET_I(1);
    vlSelf->valid_to_exu = VL_RAND_RESET_I(1);
    vlSelf->ready_from_exu = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__IDU_init__inst = VL_RAND_RESET_I(32);
    vlSelf->branch_taken = VL_RAND_RESET_I(1);
    vlSelf->m0_awaddr = VL_RAND_RESET_I(32);
    vlSelf->m0_awvalid = VL_RAND_RESET_I(1);
    vlSelf->m0_awready = VL_RAND_RESET_I(1);
    vlSelf->m0_wdata = VL_RAND_RESET_I(32);
    vlSelf->m0_wstrb = VL_RAND_RESET_I(4);
    vlSelf->m0_wvalid = VL_RAND_RESET_I(1);
    vlSelf->m0_wready = VL_RAND_RESET_I(1);
    vlSelf->m0_bresp = VL_RAND_RESET_I(2);
    vlSelf->m0_bvalid = VL_RAND_RESET_I(1);
    vlSelf->m0_bready = VL_RAND_RESET_I(1);
    vlSelf->m0_araddr = VL_RAND_RESET_I(32);
    vlSelf->m0_arvalid = VL_RAND_RESET_I(1);
    vlSelf->m0_arready = VL_RAND_RESET_I(1);
    vlSelf->m0_rdata = VL_RAND_RESET_I(32);
    vlSelf->m0_rresp = VL_RAND_RESET_I(2);
    vlSelf->m0_rvalid = VL_RAND_RESET_I(1);
    vlSelf->m0_rready = VL_RAND_RESET_I(1);
    vlSelf->alu_result = VL_RAND_RESET_I(32);
    vlSelf->ready_from_lsu = VL_RAND_RESET_I(1);
    vlSelf->valid_to_lsu = VL_RAND_RESET_I(1);
    vlSelf->valid_to_wbu = VL_RAND_RESET_I(1);
    vlSelf->ready_from_wbu = VL_RAND_RESET_I(1);
    vlSelf->rdata = VL_RAND_RESET_I(32);
    vlSelf->commit = VL_RAND_RESET_I(1);
    vlSelf->m1_awaddr = VL_RAND_RESET_I(32);
    vlSelf->m1_awvalid = VL_RAND_RESET_I(1);
    vlSelf->m1_awready = VL_RAND_RESET_I(1);
    vlSelf->m1_wdata = VL_RAND_RESET_I(32);
    vlSelf->m1_wstrb = VL_RAND_RESET_I(4);
    vlSelf->m1_wvalid = VL_RAND_RESET_I(1);
    vlSelf->m1_wready = VL_RAND_RESET_I(1);
    vlSelf->m1_bresp = VL_RAND_RESET_I(2);
    vlSelf->m1_bvalid = VL_RAND_RESET_I(1);
    vlSelf->m1_bready = VL_RAND_RESET_I(1);
    vlSelf->m1_araddr = VL_RAND_RESET_I(32);
    vlSelf->m1_arvalid = VL_RAND_RESET_I(1);
    vlSelf->m1_arready = VL_RAND_RESET_I(1);
    vlSelf->m1_rdata = VL_RAND_RESET_I(32);
    vlSelf->m1_rresp = VL_RAND_RESET_I(2);
    vlSelf->m1_rvalid = VL_RAND_RESET_I(1);
    vlSelf->m1_rready = VL_RAND_RESET_I(1);
    vlSelf->s0_awaddr = VL_RAND_RESET_I(32);
    vlSelf->s0_awvalid = VL_RAND_RESET_I(1);
    vlSelf->s0_awready = VL_RAND_RESET_I(1);
    vlSelf->s0_wdata = VL_RAND_RESET_I(32);
    vlSelf->s0_wstrb = VL_RAND_RESET_I(4);
    vlSelf->s0_wvalid = VL_RAND_RESET_I(1);
    vlSelf->s0_wready = VL_RAND_RESET_I(1);
    vlSelf->s0_bresp = VL_RAND_RESET_I(2);
    vlSelf->s0_bvalid = VL_RAND_RESET_I(1);
    vlSelf->s0_bready = VL_RAND_RESET_I(1);
    vlSelf->s0_araddr = VL_RAND_RESET_I(32);
    vlSelf->s0_arvalid = VL_RAND_RESET_I(1);
    vlSelf->s0_arready = VL_RAND_RESET_I(1);
    vlSelf->s0_rdata = VL_RAND_RESET_I(32);
    vlSelf->s0_rresp = VL_RAND_RESET_I(2);
    vlSelf->s0_rvalid = VL_RAND_RESET_I(1);
    vlSelf->s0_rready = VL_RAND_RESET_I(1);
    vlSelf->s1_awaddr = VL_RAND_RESET_I(32);
    vlSelf->s1_awvalid = VL_RAND_RESET_I(1);
    vlSelf->s1_awready = VL_RAND_RESET_I(1);
    vlSelf->s1_wdata = VL_RAND_RESET_I(32);
    vlSelf->s1_wstrb = VL_RAND_RESET_I(4);
    vlSelf->s1_wvalid = VL_RAND_RESET_I(1);
    vlSelf->s1_wready = VL_RAND_RESET_I(1);
    vlSelf->s1_bresp = VL_RAND_RESET_I(2);
    vlSelf->s1_bvalid = VL_RAND_RESET_I(1);
    vlSelf->s1_bready = VL_RAND_RESET_I(1);
    vlSelf->s1_araddr = VL_RAND_RESET_I(32);
    vlSelf->s1_arvalid = VL_RAND_RESET_I(1);
    vlSelf->s1_arready = VL_RAND_RESET_I(1);
    vlSelf->s1_rdata = VL_RAND_RESET_I(32);
    vlSelf->s1_rresp = VL_RAND_RESET_I(2);
    vlSelf->s1_rvalid = VL_RAND_RESET_I(1);
    vlSelf->s1_rready = VL_RAND_RESET_I(1);
    vlSelf->s2_awaddr = VL_RAND_RESET_I(32);
    vlSelf->s2_awvalid = VL_RAND_RESET_I(1);
    vlSelf->s2_awready = VL_RAND_RESET_I(1);
    vlSelf->s2_wdata = VL_RAND_RESET_I(32);
    vlSelf->s2_wstrb = VL_RAND_RESET_I(4);
    vlSelf->s2_wvalid = VL_RAND_RESET_I(1);
    vlSelf->s2_wready = VL_RAND_RESET_I(1);
    vlSelf->s2_bresp = VL_RAND_RESET_I(2);
    vlSelf->s2_bvalid = VL_RAND_RESET_I(1);
    vlSelf->s2_bready = VL_RAND_RESET_I(1);
    vlSelf->s2_araddr = VL_RAND_RESET_I(32);
    vlSelf->s2_arvalid = VL_RAND_RESET_I(1);
    vlSelf->s2_arready = VL_RAND_RESET_I(1);
    vlSelf->s2_rdata = VL_RAND_RESET_I(32);
    vlSelf->s2_rresp = VL_RAND_RESET_I(2);
    vlSelf->s2_rvalid = VL_RAND_RESET_I(1);
    vlSelf->s2_rready = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__gpr_wdata = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__gpr_waddr = VL_RAND_RESET_I(5);
    vlSelf->IDU_init__DOT__gpr_we = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__valid_from_ifu = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__ready_from_exu = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__imm = VL_RAND_RESET_I(12);
    vlSelf->IDU_init__DOT__alu_src1 = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__alu_src2 = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__alu_op = VL_RAND_RESET_I(12);
    vlSelf->IDU_init__DOT__rd_we = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->IDU_init__DOT__is_jump = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__next_pc_jump = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__load_ctrl = VL_RAND_RESET_I(5);
    vlSelf->IDU_init__DOT__store_ctrl = VL_RAND_RESET_I(3);
    vlSelf->IDU_init__DOT__branch_ctrl = VL_RAND_RESET_I(6);
    vlSelf->IDU_init__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__is_ecall_mret = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__next_pc_csr = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__ready_to_ifu = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__valid_to_exu = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->IDU_init__DOT__src1 = VL_RAND_RESET_I(5);
    vlSelf->IDU_init__DOT__src2 = VL_RAND_RESET_I(5);
    vlSelf->IDU_init__DOT__fun3 = VL_RAND_RESET_I(3);
    vlSelf->IDU_init__DOT__fun7 = VL_RAND_RESET_I(7);
    vlSelf->IDU_init__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->IDU_init__DOT__imm_J = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__imm_I = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__imm_U = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__imm_S = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__imm_B = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__imm_is_I = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__imm_is_J = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__imm_is_B = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__imm_is_S = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__imm_is_U = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__imm_is_R = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_break = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_auipc = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_lui = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_jal = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_and = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_or = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_xor = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_sub = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_sll = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_srl = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_sra = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_slt = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_sltu = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_lb = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_lh = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_lw = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_lhu = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_lbu = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_sw = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_sh = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_sb = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_bne = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_beq = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_blt = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_bge = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_bltu = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_bgeu = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__csr_addr = VL_RAND_RESET_I(12);
    vlSelf->IDU_init__DOT__is_mstatus = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_mtvec = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_mepc = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_mcause = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_mvendorid = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_marchid = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_csrrw = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_csrrs = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_csr = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__is_mret = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__csr_temp = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__csr2reg = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__mvendorid = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__marchid = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__gpr_wdata_total = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT____VdfgRegularize_h80d369ef_0_0 = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT____VdfgRegularize_h80d369ef_0_10 = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT____VdfgRegularize_h80d369ef_0_14 = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT____VdfgRegularize_h80d369ef_0_15 = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__ysyx_25080218_GPR_init__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__ysyx_25080218_GPR_init__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__ysyx_25080218_GPR_init__DOT__gpr_waddr = VL_RAND_RESET_I(5);
    vlSelf->IDU_init__DOT__ysyx_25080218_GPR_init__DOT__gpr_wdata = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__ysyx_25080218_GPR_init__DOT__gpr_we = VL_RAND_RESET_I(1);
    vlSelf->IDU_init__DOT__ysyx_25080218_GPR_init__DOT__gpr_raddr1 = VL_RAND_RESET_I(5);
    vlSelf->IDU_init__DOT__ysyx_25080218_GPR_init__DOT__gpr_raddr2 = VL_RAND_RESET_I(5);
    vlSelf->IDU_init__DOT__ysyx_25080218_GPR_init__DOT__gpr_rdata1 = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__ysyx_25080218_GPR_init__DOT__gpr_rdata2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->IDU_init__DOT__ysyx_25080218_GPR_init__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->IFU_init__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->IFU_init__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->IFU_init__DOT__is_jump = VL_RAND_RESET_I(1);
    vlSelf->IFU_init__DOT__next_pc_jump = VL_RAND_RESET_I(32);
    vlSelf->IFU_init__DOT__branch_pc = VL_RAND_RESET_I(32);
    vlSelf->IFU_init__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->IFU_init__DOT__next_pc_csr = VL_RAND_RESET_I(32);
    vlSelf->IFU_init__DOT__is_ecall_mret = VL_RAND_RESET_I(1);
    vlSelf->IFU_init__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->IFU_init__DOT__npc = VL_RAND_RESET_I(32);
    vlSelf->IFU_init__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->IFU_init__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->IFU_init__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->IFU_init__DOT__ARADDR = VL_RAND_RESET_I(32);
    vlSelf->IFU_init__DOT__ARVALID = VL_RAND_RESET_I(1);
    vlSelf->IFU_init__DOT__ARREADY = VL_RAND_RESET_I(1);
    vlSelf->IFU_init__DOT__RDATA = VL_RAND_RESET_I(32);
    vlSelf->IFU_init__DOT__RRESP = VL_RAND_RESET_I(2);
    vlSelf->IFU_init__DOT__RVALID = VL_RAND_RESET_I(1);
    vlSelf->IFU_init__DOT__RREADY = VL_RAND_RESET_I(1);
    vlSelf->IFU_init__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->IFU_init__DOT__valid_rst = VL_RAND_RESET_I(1);
    vlSelf->IFU_init__DOT__araddr_latched = VL_RAND_RESET_I(32);
    vlSelf->IFU_init__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->EXU_init__DOT__alu_src1 = VL_RAND_RESET_I(32);
    vlSelf->EXU_init__DOT__alu_src2 = VL_RAND_RESET_I(32);
    vlSelf->EXU_init__DOT__alu_op = VL_RAND_RESET_I(12);
    vlSelf->EXU_init__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->EXU_init__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->EXU_init__DOT__branch_ctrl = VL_RAND_RESET_I(6);
    vlSelf->EXU_init__DOT__valid_from_idu = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__read_from_lsu = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->EXU_init__DOT__branch_pc = VL_RAND_RESET_I(32);
    vlSelf->EXU_init__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__ready_to_idu = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__valid_to_lsu = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__op_add = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__op_sub = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__op_and = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__op_or = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__op_xor = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__op_sll = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__op_srl = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__op_sra = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__op_lui = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__op_slt = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__op_sltu = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__alu_a = VL_RAND_RESET_I(32);
    vlSelf->EXU_init__DOT__alu_b = VL_RAND_RESET_I(32);
    vlSelf->EXU_init__DOT__carry_in = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__is_beq = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__is_bne = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__is_blt = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__is_bge = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__is_bltu = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__is_bgeu = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__equal = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__less_than_signed = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT__less_than_unsigned = VL_RAND_RESET_I(1);
    vlSelf->EXU_init__DOT____VdfgRegularize_he932f07c_0_0 = VL_RAND_RESET_I(5);
    vlSelf->EXU_init__DOT____VdfgRegularize_he932f07c_0_1 = VL_RAND_RESET_I(32);
    vlSelf->MAU_init__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->MAU_init__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->MAU_init__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->MAU_init__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->MAU_init__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->MAU_init__DOT__valid_from_exu = VL_RAND_RESET_I(1);
    vlSelf->MAU_init__DOT__ready_to_exu = VL_RAND_RESET_I(1);
    vlSelf->MAU_init__DOT__valid_to_wbu = VL_RAND_RESET_I(1);
    vlSelf->MAU_init__DOT__ready_from_wbu = VL_RAND_RESET_I(1);
    vlSelf->MAU_init__DOT__load_ctrl = VL_RAND_RESET_I(5);
    vlSelf->MAU_init__DOT__store_ctrl = VL_RAND_RESET_I(3);
    vlSelf->MAU_init__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->MAU_init__DOT__AWADDR = VL_RAND_RESET_I(32);
    vlSelf->MAU_init__DOT__AWVALID = VL_RAND_RESET_I(1);
    vlSelf->MAU_init__DOT__AWREADY = VL_RAND_RESET_I(1);
    vlSelf->MAU_init__DOT__WDATA = VL_RAND_RESET_I(32);
    vlSelf->MAU_init__DOT__WSTRB = VL_RAND_RESET_I(4);
    vlSelf->MAU_init__DOT__WVALID = VL_RAND_RESET_I(1);
    vlSelf->MAU_init__DOT__WREADY = VL_RAND_RESET_I(1);
    vlSelf->MAU_init__DOT__BRESP = VL_RAND_RESET_I(2);
    vlSelf->MAU_init__DOT__BVALID = VL_RAND_RESET_I(1);
    vlSelf->MAU_init__DOT__BREADY = VL_RAND_RESET_I(1);
    vlSelf->MAU_init__DOT__ARADDR = VL_RAND_RESET_I(32);
    vlSelf->MAU_init__DOT__ARVALID = VL_RAND_RESET_I(1);
    vlSelf->MAU_init__DOT__ARREADY = VL_RAND_RESET_I(1);
    vlSelf->MAU_init__DOT__RDATA = VL_RAND_RESET_I(32);
    vlSelf->MAU_init__DOT__RRESP = VL_RAND_RESET_I(2);
    vlSelf->MAU_init__DOT__RVALID = VL_RAND_RESET_I(1);
    vlSelf->MAU_init__DOT__RREADY = VL_RAND_RESET_I(1);
    vlSelf->MAU_init__DOT__lsu_reqValid = VL_RAND_RESET_I(1);
    vlSelf->MAU_init__DOT__is_mem_op = VL_RAND_RESET_I(1);
    vlSelf->MAU_init__DOT__load_valid = VL_RAND_RESET_I(1);
    vlSelf->MAU_init__DOT__store_valid = VL_RAND_RESET_I(1);
    vlSelf->MAU_init__DOT__wmask = VL_RAND_RESET_I(4);
    vlSelf->MAU_init__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->MAU_init__DOT__rdata_r = VL_RAND_RESET_I(32);
    vlSelf->MAU_init__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->MAU_init__DOT__araddr_latched = VL_RAND_RESET_I(32);
    vlSelf->MAU_init__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->MAU_init__DOT__aw_done = VL_RAND_RESET_I(1);
    vlSelf->MAU_init__DOT__w_done = VL_RAND_RESET_I(1);
    vlSelf->MAU_init__DOT____VdfgRegularize_h3fdffd83_0_0 = VL_RAND_RESET_I(1);
    vlSelf->WBU_init__DOT__rd_we = VL_RAND_RESET_I(1);
    vlSelf->WBU_init__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->WBU_init__DOT__load_ctrl = VL_RAND_RESET_I(5);
    vlSelf->WBU_init__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->WBU_init__DOT__gpr_we = VL_RAND_RESET_I(1);
    vlSelf->WBU_init__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->WBU_init__DOT__valid_from_lsu = VL_RAND_RESET_I(1);
    vlSelf->WBU_init__DOT__gpr_wdata = VL_RAND_RESET_I(32);
    vlSelf->WBU_init__DOT__gpr_waddr = VL_RAND_RESET_I(5);
    vlSelf->WBU_init__DOT__ready_from_wbu = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m1_awaddr = VL_RAND_RESET_I(32);
    vlSelf->xbar_init__DOT__m1_awvalid = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m1_awready = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m1_wdata = VL_RAND_RESET_I(32);
    vlSelf->xbar_init__DOT__m1_wstrb = VL_RAND_RESET_I(4);
    vlSelf->xbar_init__DOT__m1_wvalid = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m1_wready = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m1_bresp = VL_RAND_RESET_I(2);
    vlSelf->xbar_init__DOT__m1_bvalid = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m1_bready = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m1_araddr = VL_RAND_RESET_I(32);
    vlSelf->xbar_init__DOT__m1_arvalid = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m1_arready = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m1_rdata = VL_RAND_RESET_I(32);
    vlSelf->xbar_init__DOT__m1_rresp = VL_RAND_RESET_I(2);
    vlSelf->xbar_init__DOT__m1_rvalid = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m1_rready = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m0_awaddr = VL_RAND_RESET_I(32);
    vlSelf->xbar_init__DOT__m0_awvalid = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m0_awready = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m0_wdata = VL_RAND_RESET_I(32);
    vlSelf->xbar_init__DOT__m0_wstrb = VL_RAND_RESET_I(4);
    vlSelf->xbar_init__DOT__m0_wvalid = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m0_wready = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m0_bresp = VL_RAND_RESET_I(2);
    vlSelf->xbar_init__DOT__m0_bvalid = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m0_bready = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m0_araddr = VL_RAND_RESET_I(32);
    vlSelf->xbar_init__DOT__m0_arvalid = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m0_arready = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m0_rdata = VL_RAND_RESET_I(32);
    vlSelf->xbar_init__DOT__m0_rresp = VL_RAND_RESET_I(2);
    vlSelf->xbar_init__DOT__m0_rvalid = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m0_rready = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s0_awaddr = VL_RAND_RESET_I(32);
    vlSelf->xbar_init__DOT__s0_awvalid = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s0_awready = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s0_wdata = VL_RAND_RESET_I(32);
    vlSelf->xbar_init__DOT__s0_wstrb = VL_RAND_RESET_I(4);
    vlSelf->xbar_init__DOT__s0_wvalid = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s0_wready = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s0_bresp = VL_RAND_RESET_I(2);
    vlSelf->xbar_init__DOT__s0_bvalid = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s0_bready = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s0_araddr = VL_RAND_RESET_I(32);
    vlSelf->xbar_init__DOT__s0_arvalid = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s0_arready = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s0_rdata = VL_RAND_RESET_I(32);
    vlSelf->xbar_init__DOT__s0_rresp = VL_RAND_RESET_I(2);
    vlSelf->xbar_init__DOT__s0_rvalid = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s0_rready = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s1_awaddr = VL_RAND_RESET_I(32);
    vlSelf->xbar_init__DOT__s1_awvalid = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s1_awready = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s1_wdata = VL_RAND_RESET_I(32);
    vlSelf->xbar_init__DOT__s1_wstrb = VL_RAND_RESET_I(4);
    vlSelf->xbar_init__DOT__s1_wvalid = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s1_wready = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s1_bresp = VL_RAND_RESET_I(2);
    vlSelf->xbar_init__DOT__s1_bvalid = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s1_bready = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s1_araddr = VL_RAND_RESET_I(32);
    vlSelf->xbar_init__DOT__s1_arvalid = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s1_arready = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s1_rdata = VL_RAND_RESET_I(32);
    vlSelf->xbar_init__DOT__s1_rresp = VL_RAND_RESET_I(2);
    vlSelf->xbar_init__DOT__s1_rvalid = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s1_rready = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m0_r_s0 = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m0_r_s1 = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m1_r_s0 = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m1_r_s1 = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m0_rreq_s0 = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m0_rreq_s1 = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m1_rreq_s0 = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m1_rreq_s1 = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m0_w_s0 = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m0_w_s1 = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m1_w_s0 = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__m1_w_s1 = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s0_r_owner = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s0_r_busy = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s1_r_owner = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s1_r_busy = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s0_w_busy = VL_RAND_RESET_I(1);
    vlSelf->xbar_init__DOT__s1_w_busy = VL_RAND_RESET_I(1);
    vlSelf->clint_init__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->clint_init__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->clint_init__DOT__s_awaddr = VL_RAND_RESET_I(32);
    vlSelf->clint_init__DOT__s_awvalid = VL_RAND_RESET_I(1);
    vlSelf->clint_init__DOT__s_awready = VL_RAND_RESET_I(1);
    vlSelf->clint_init__DOT__s_wdata = VL_RAND_RESET_I(32);
    vlSelf->clint_init__DOT__s_wstrb = VL_RAND_RESET_I(4);
    vlSelf->clint_init__DOT__s_wvalid = VL_RAND_RESET_I(1);
    vlSelf->clint_init__DOT__s_wready = VL_RAND_RESET_I(1);
    vlSelf->clint_init__DOT__s_bresp = VL_RAND_RESET_I(2);
    vlSelf->clint_init__DOT__s_bvalid = VL_RAND_RESET_I(1);
    vlSelf->clint_init__DOT__s_bready = VL_RAND_RESET_I(1);
    vlSelf->clint_init__DOT__s_araddr = VL_RAND_RESET_I(32);
    vlSelf->clint_init__DOT__s_arvalid = VL_RAND_RESET_I(1);
    vlSelf->clint_init__DOT__s_arready = VL_RAND_RESET_I(1);
    vlSelf->clint_init__DOT__s_rdata = VL_RAND_RESET_I(32);
    vlSelf->clint_init__DOT__s_rresp = VL_RAND_RESET_I(2);
    vlSelf->clint_init__DOT__s_rvalid = VL_RAND_RESET_I(1);
    vlSelf->clint_init__DOT__s_rready = VL_RAND_RESET_I(1);
    vlSelf->clint_init__DOT__s_busy = VL_RAND_RESET_I(1);
    vlSelf->clint_init__DOT__s_araddr_r = VL_RAND_RESET_I(32);
    vlSelf->clint_init__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->__VdfgRegularize_h628f4167_0_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__pc = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__m0_arvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__m1_arvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__m1_awvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__m1_wvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__s1_rvalid = VL_RAND_RESET_I(1);
}
