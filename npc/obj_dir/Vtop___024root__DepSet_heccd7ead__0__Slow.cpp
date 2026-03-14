// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
    Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__IDU_init__DOT__mstatus = 0x1800U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/frank_wu/ysyx-workbench/npc/vsrc/top.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->dnpc = VL_RAND_RESET_I(32);
    vlSelf->commit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__gpr_we = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imm = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__alu_src1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu_src2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu_op = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__next_pc_jump = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__is_jump = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pc_wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__load_ctrl = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__store_ctrl = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__branch_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__next_pc_csr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__is_ecall_mret = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Ifu2Idu_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ARADDR = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ARVALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RDATA = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RRESP = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__RREADY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU_ARADDR = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU_ARVALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU_RDATA = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU_RRESP = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__LSU_RREADY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU_AWADDR = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU_AWVALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU_WDATA = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU_WSTRB = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__LSU_WVALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU_BRESP = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__LSU_BREADY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_init__DOT__imm_I = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU_init__DOT__imm_is_I = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_init__DOT__imm_is_U = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_init__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_init__DOT__is_sll = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_init__DOT__is_srl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_init__DOT__is_sra = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_init__DOT__is_lb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_init__DOT__is_lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_init__DOT__is_lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_init__DOT__is_lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_init__DOT__is_lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_init__DOT__is_sw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_init__DOT__is_sh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_init__DOT__is_sb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_init__DOT__is_csrrw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_init__DOT__is_csrrs = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_init__DOT__is_csr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_init__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU_init__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU_init__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU_init__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU_init__DOT__gpr_wdata_total = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_15 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IFU_init__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IFU_init__DOT__valid_rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU_init__DOT__araddr_latched = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IFU_init__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__EXU_init__DOT__is_beq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU_init__DOT__is_bne = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU_init__DOT__is_blt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU_init__DOT__is_bge = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU_init__DOT__is_bltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU_init__DOT__is_bgeu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU_init__DOT__equal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU_init__DOT__less_than_signed = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU_init__DOT__less_than_unsigned = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU_init__DOT____VdfgRegularize_he932f07c_0_0 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__EXU_init__DOT____VdfgRegularize_he932f07c_0_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__MAU_init__DOT__lsu_reqValid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MAU_init__DOT__is_mem_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MAU_init__DOT__load_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MAU_init__DOT__store_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MAU_init__DOT__rdata_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__MAU_init__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__MAU_init__DOT__araddr_latched = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__MAU_init__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MAU_init__DOT__aw_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MAU_init__DOT__w_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MAU_init__DOT____VdfgRegularize_h3fdffd83_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__pc = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__top__DOT__IFU_init__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__top__DOT__ARVALID = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__RREADY = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__Ifu2Idu_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__ARADDR = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__top__DOT__IFU_init__DOT__araddr_latched = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
