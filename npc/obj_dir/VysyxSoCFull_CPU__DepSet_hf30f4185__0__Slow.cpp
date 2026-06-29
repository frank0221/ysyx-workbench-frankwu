// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_CPU.h"

VL_ATTR_COLD void VysyxSoCFull_CPU___ctor_var_reset(VysyxSoCFull_CPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VysyxSoCFull_CPU___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->auto_master_out_awready = VL_RAND_RESET_I(1);
    vlSelf->auto_master_out_awvalid = VL_RAND_RESET_I(1);
    vlSelf->auto_master_out_awid = VL_RAND_RESET_I(4);
    vlSelf->auto_master_out_awaddr = VL_RAND_RESET_I(32);
    vlSelf->auto_master_out_awlen = VL_RAND_RESET_I(8);
    vlSelf->auto_master_out_awsize = VL_RAND_RESET_I(3);
    vlSelf->auto_master_out_awburst = VL_RAND_RESET_I(2);
    vlSelf->auto_master_out_wready = VL_RAND_RESET_I(1);
    vlSelf->auto_master_out_wvalid = VL_RAND_RESET_I(1);
    vlSelf->auto_master_out_wdata = VL_RAND_RESET_I(32);
    vlSelf->auto_master_out_wstrb = VL_RAND_RESET_I(4);
    vlSelf->auto_master_out_wlast = VL_RAND_RESET_I(1);
    vlSelf->auto_master_out_bready = VL_RAND_RESET_I(1);
    vlSelf->auto_master_out_bvalid = VL_RAND_RESET_I(1);
    vlSelf->auto_master_out_bid = VL_RAND_RESET_I(4);
    vlSelf->auto_master_out_bresp = VL_RAND_RESET_I(2);
    vlSelf->auto_master_out_arready = VL_RAND_RESET_I(1);
    vlSelf->auto_master_out_arvalid = VL_RAND_RESET_I(1);
    vlSelf->auto_master_out_arid = VL_RAND_RESET_I(4);
    vlSelf->auto_master_out_araddr = VL_RAND_RESET_I(32);
    vlSelf->auto_master_out_arlen = VL_RAND_RESET_I(8);
    vlSelf->auto_master_out_arsize = VL_RAND_RESET_I(3);
    vlSelf->auto_master_out_arburst = VL_RAND_RESET_I(2);
    vlSelf->auto_master_out_rready = VL_RAND_RESET_I(1);
    vlSelf->auto_master_out_rvalid = VL_RAND_RESET_I(1);
    vlSelf->auto_master_out_rid = VL_RAND_RESET_I(4);
    vlSelf->auto_master_out_rdata = VL_RAND_RESET_I(32);
    vlSelf->auto_master_out_rresp = VL_RAND_RESET_I(2);
    vlSelf->auto_master_out_rlast = VL_RAND_RESET_I(1);
}
