// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_CPU.h"
#include "VysyxSoCFull__Syms.h"

VL_ATTR_COLD void VysyxSoCFull_CPU___eval_initial__TOP__ysyxSoCFull__asic__cpu(VysyxSoCFull_CPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VysyxSoCFull_CPU___eval_initial__TOP__ysyxSoCFull__asic__cpu\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_rready = 0U;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_arburst = 0U;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_arsize = 0U;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_arlen = 0U;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_araddr = 0U;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_arid = 0U;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_arvalid = 0U;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_bready = 0U;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_wlast = 0U;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_wstrb = 0U;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_wdata = 0U;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_wvalid = 0U;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_awburst = 0U;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_awsize = 0U;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_awlen = 0U;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_awaddr = 0U;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_awid = 0U;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_slave_awvalid = 0U;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_interrupt = 0U;
}

VL_ATTR_COLD void VysyxSoCFull_CPU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__0(VysyxSoCFull_CPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VysyxSoCFull_CPU___stl_sequent__TOP__ysyxSoCFull__asic__cpu__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.auto_master_out_wlast = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wlast;
    vlSelfRef.auto_master_out_arburst = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arburst;
    vlSelfRef.auto_master_out_awburst = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awburst;
    vlSelfRef.auto_master_out_arlen = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arlen;
    vlSelfRef.auto_master_out_awlen = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awlen;
    vlSelfRef.auto_master_out_arid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arid;
    vlSelfRef.auto_master_out_awid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awid;
    vlSelfRef.auto_master_out_arsize = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arsize;
    vlSelfRef.auto_master_out_awsize = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awsize;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awready 
        = vlSelfRef.auto_master_out_awready;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wready 
        = vlSelfRef.auto_master_out_wready;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arready 
        = vlSelfRef.auto_master_out_arready;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_rvalid 
        = vlSelfRef.auto_master_out_rvalid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_rresp 
        = vlSelfRef.auto_master_out_rresp;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_rdata 
        = vlSelfRef.auto_master_out_rdata;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_rid 
        = vlSelfRef.auto_master_out_rid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_bid 
        = vlSelfRef.auto_master_out_bid;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_bresp 
        = vlSelfRef.auto_master_out_bresp;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_rlast 
        = vlSelfRef.auto_master_out_rlast;
    vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_bvalid 
        = vlSelfRef.auto_master_out_bvalid;
    vlSelfRef.auto_master_out_rready = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_rready;
    vlSelfRef.auto_master_out_bready = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_bready;
    vlSelfRef.auto_master_out_wdata = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wdata;
    vlSelfRef.auto_master_out_wstrb = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wstrb;
    vlSelfRef.auto_master_out_wvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_wvalid;
    vlSelfRef.auto_master_out_awvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awvalid;
    vlSelfRef.auto_master_out_awaddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_awaddr;
    vlSelfRef.auto_master_out_arvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_arvalid;
    vlSelfRef.auto_master_out_araddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.io_master_araddr;
}
