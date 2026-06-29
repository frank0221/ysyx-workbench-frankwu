// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_ysyx_25080218.h"

VL_INLINE_OPT void VysyxSoCFull_ysyx_25080218___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_25080218* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25080218___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.IDU_init__DOT__pc = vlSelfRef.pc;
    vlSelfRef.IFU_init__DOT__pc = vlSelfRef.pc;
    vlSelfRef.IFU_init__DOT__next_pc = ((IData)(4U) 
                                        + vlSelfRef.pc);
    vlSelfRef.next_pc_jump = ((IData)(vlSelfRef.IDU_init__DOT__imm_is_J)
                               ? (vlSelfRef.pc + vlSelfRef.IDU_init__DOT__imm_J)
                               : ((IData)(vlSelfRef.IDU_init__DOT__is_jalr)
                                   ? (vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                      [vlSelfRef.IDU_init__DOT__src1] 
                                      + vlSelfRef.IDU_init__DOT__imm_I)
                                   : 0U));
    vlSelfRef.IDU_init__DOT__next_pc_jump = vlSelfRef.next_pc_jump;
    vlSelfRef.IFU_init__DOT__next_pc_jump = vlSelfRef.next_pc_jump;
    vlSelfRef.alu_src1 = ((IData)(vlSelfRef.is_jump)
                           ? vlSelfRef.pc : ((IData)(vlSelfRef.IDU_init__DOT__imm_is_I)
                                              ? vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                             [vlSelfRef.IDU_init__DOT__src1]
                                              : ((IData)(vlSelfRef.IDU_init__DOT__imm_is_R)
                                                  ? 
                                                 vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                                 [vlSelfRef.IDU_init__DOT__src1]
                                                  : 
                                                 ((IData)(vlSelfRef.IDU_init__DOT__imm_is_S)
                                                   ? 
                                                  vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                                  [vlSelfRef.IDU_init__DOT__src1]
                                                   : 
                                                  ((IData)(vlSelfRef.IDU_init__DOT__is_auipc)
                                                    ? vlSelfRef.pc
                                                    : 
                                                   ((IData)(vlSelfRef.IDU_init__DOT__imm_is_B)
                                                     ? vlSelfRef.pc
                                                     : 0U))))));
    vlSelfRef.IDU_init__DOT__alu_src1 = vlSelfRef.alu_src1;
    vlSelfRef.EXU_init__DOT__alu_src1 = vlSelfRef.alu_src1;
    vlSelfRef.EXU_init__DOT__alu_a = vlSelfRef.alu_src1;
    vlSelfRef.EXU_init__DOT____VdfgRegularize_he932f07c_0_1 
        = (vlSelfRef.alu_src1 >> (IData)(vlSelfRef.EXU_init__DOT____VdfgRegularize_he932f07c_0_0));
    vlSelfRef.branch_pc = (((IData)(vlSelfRef.EXU_init__DOT__op_add) 
                            | (IData)(vlSelfRef.EXU_init__DOT__op_sub))
                            ? (vlSelfRef.alu_src1 + 
                               (vlSelfRef.EXU_init__DOT__alu_b 
                                + (IData)(vlSelfRef.EXU_init__DOT__op_sub)))
                            : ((IData)(vlSelfRef.EXU_init__DOT__op_lui)
                                ? vlSelfRef.alu_src2
                                : ((IData)(vlSelfRef.EXU_init__DOT__op_and)
                                    ? (vlSelfRef.alu_src1 
                                       & vlSelfRef.alu_src2)
                                    : ((IData)(vlSelfRef.EXU_init__DOT__op_or)
                                        ? (vlSelfRef.alu_src1 
                                           | vlSelfRef.alu_src2)
                                        : ((IData)(vlSelfRef.EXU_init__DOT__op_xor)
                                            ? (vlSelfRef.alu_src1 
                                               ^ vlSelfRef.alu_src2)
                                            : ((IData)(vlSelfRef.EXU_init__DOT__op_sll)
                                                ? (vlSelfRef.alu_src1 
                                                   << (IData)(vlSelfRef.EXU_init__DOT____VdfgRegularize_he932f07c_0_0))
                                                : ((IData)(vlSelfRef.EXU_init__DOT__op_srl)
                                                    ? vlSelfRef.EXU_init__DOT____VdfgRegularize_he932f07c_0_1
                                                    : 
                                                   ((IData)(vlSelfRef.EXU_init__DOT__op_sra)
                                                     ? 
                                                    ((vlSelfRef.alu_src1 
                                                      >> 0x1fU)
                                                      ? 
                                                     (~ 
                                                      ((~ vlSelfRef.alu_src1) 
                                                       >> (IData)(vlSelfRef.EXU_init__DOT____VdfgRegularize_he932f07c_0_0)))
                                                      : vlSelfRef.EXU_init__DOT____VdfgRegularize_he932f07c_0_1)
                                                     : 
                                                    ((IData)(vlSelfRef.EXU_init__DOT__op_slt)
                                                      ? 
                                                     (VL_LTS_III(32, vlSelfRef.alu_src1, vlSelfRef.alu_src2)
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     ((IData)(vlSelfRef.EXU_init__DOT__op_sltu)
                                                       ? 
                                                      ((vlSelfRef.alu_src1 
                                                        < vlSelfRef.alu_src2)
                                                        ? 1U
                                                        : 0U)
                                                       : 0U))))))))));
    vlSelfRef.npc = ((IData)(vlSelfRef.is_jump) ? vlSelfRef.next_pc_jump
                      : ((IData)(vlSelfRef.branch_taken)
                          ? vlSelfRef.branch_pc : ((IData)(vlSelfRef.is_ecall_mret)
                                                    ? vlSelfRef.next_pc_csr
                                                    : vlSelfRef.IFU_init__DOT__next_pc)));
    vlSelfRef.IFU_init__DOT__branch_pc = vlSelfRef.branch_pc;
    vlSelfRef.EXU_init__DOT__branch_pc = vlSelfRef.branch_pc;
    vlSelfRef.MAU_init__DOT__wmask = (((IData)(vlSelfRef.IDU_init__DOT__is_sb) 
                                       & (0U == (3U 
                                                 & vlSelfRef.branch_pc)))
                                       ? 1U : (((IData)(vlSelfRef.IDU_init__DOT__is_sb) 
                                                & (1U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.branch_pc)))
                                                ? 2U
                                                : (
                                                   ((IData)(vlSelfRef.IDU_init__DOT__is_sb) 
                                                    & (2U 
                                                       == 
                                                       (3U 
                                                        & vlSelfRef.branch_pc)))
                                                    ? 4U
                                                    : 
                                                   (((IData)(vlSelfRef.IDU_init__DOT__is_sb) 
                                                     & (3U 
                                                        == 
                                                        (3U 
                                                         & vlSelfRef.branch_pc)))
                                                     ? 8U
                                                     : 
                                                    (((IData)(vlSelfRef.IDU_init__DOT__is_sh) 
                                                      & (0U 
                                                         == 
                                                         (3U 
                                                          & vlSelfRef.branch_pc)))
                                                      ? 3U
                                                      : 
                                                     (((IData)(vlSelfRef.IDU_init__DOT__is_sh) 
                                                       & (2U 
                                                          == 
                                                          (3U 
                                                           & vlSelfRef.branch_pc)))
                                                       ? 0xcU
                                                       : 
                                                      ((IData)(vlSelfRef.IDU_init__DOT__is_sw)
                                                        ? 0xfU
                                                        : 0U)))))));
    vlSelfRef.MAU_init__DOT__wdata = ((IData)(vlSelfRef.IDU_init__DOT__is_sb)
                                       ? (vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                          [vlSelfRef.IDU_init__DOT__src2] 
                                          << (0x18U 
                                              & (vlSelfRef.branch_pc 
                                                 << 3U)))
                                       : ((IData)(vlSelfRef.IDU_init__DOT__is_sh)
                                           ? (vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                              [vlSelfRef.IDU_init__DOT__src2] 
                                              << (0x10U 
                                                  & (vlSelfRef.branch_pc 
                                                     << 3U)))
                                           : vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                          [vlSelfRef.IDU_init__DOT__src2]));
    vlSelfRef.alu_result = vlSelfRef.branch_pc;
    vlSelfRef.rdata = (((IData)(vlSelfRef.IDU_init__DOT__is_lb) 
                        & (0U == (3U & vlSelfRef.branch_pc)))
                        ? (((- (IData)((1U & (vlSelfRef.MAU_init__DOT__rdata_r 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSelfRef.MAU_init__DOT__rdata_r))
                        : (((IData)(vlSelfRef.IDU_init__DOT__is_lb) 
                            & (1U == (3U & vlSelfRef.branch_pc)))
                            ? (((- (IData)((1U & (vlSelfRef.MAU_init__DOT__rdata_r 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (vlSelfRef.MAU_init__DOT__rdata_r 
                                                   >> 8U)))
                            : (((IData)(vlSelfRef.IDU_init__DOT__is_lb) 
                                & (2U == (3U & vlSelfRef.branch_pc)))
                                ? (((- (IData)((1U 
                                                & (vlSelfRef.MAU_init__DOT__rdata_r 
                                                   >> 0x17U)))) 
                                    << 8U) | (0xffU 
                                              & (vlSelfRef.MAU_init__DOT__rdata_r 
                                                 >> 0x10U)))
                                : (((IData)(vlSelfRef.IDU_init__DOT__is_lb) 
                                    & (3U == (3U & vlSelfRef.branch_pc)))
                                    ? (((- (IData)(
                                                   (vlSelfRef.MAU_init__DOT__rdata_r 
                                                    >> 0x1fU))) 
                                        << 8U) | (vlSelfRef.MAU_init__DOT__rdata_r 
                                                  >> 0x18U))
                                    : (((IData)(vlSelfRef.IDU_init__DOT__is_lh) 
                                        & (0U == (3U 
                                                  & vlSelfRef.branch_pc)))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.MAU_init__DOT__rdata_r 
                                                           >> 0xfU)))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & vlSelfRef.MAU_init__DOT__rdata_r))
                                        : (((IData)(vlSelfRef.IDU_init__DOT__is_lh) 
                                            & (2U == 
                                               (3U 
                                                & vlSelfRef.branch_pc)))
                                            ? (((- (IData)(
                                                           (vlSelfRef.MAU_init__DOT__rdata_r 
                                                            >> 0x1fU))) 
                                                << 0x10U) 
                                               | (vlSelfRef.MAU_init__DOT__rdata_r 
                                                  >> 0x10U))
                                            : ((IData)(vlSelfRef.IDU_init__DOT__is_lw)
                                                ? vlSelfRef.MAU_init__DOT__rdata_r
                                                : (
                                                   ((IData)(vlSelfRef.IDU_init__DOT__is_lbu) 
                                                    & (0U 
                                                       == 
                                                       (3U 
                                                        & vlSelfRef.branch_pc)))
                                                    ? 
                                                   (0xffU 
                                                    & vlSelfRef.MAU_init__DOT__rdata_r)
                                                    : 
                                                   (((IData)(vlSelfRef.IDU_init__DOT__is_lbu) 
                                                     & (1U 
                                                        == 
                                                        (3U 
                                                         & vlSelfRef.branch_pc)))
                                                     ? 
                                                    (0xffU 
                                                     & (vlSelfRef.MAU_init__DOT__rdata_r 
                                                        >> 8U))
                                                     : 
                                                    (((IData)(vlSelfRef.IDU_init__DOT__is_lbu) 
                                                      & (2U 
                                                         == 
                                                         (3U 
                                                          & vlSelfRef.branch_pc)))
                                                      ? 
                                                     (0xffU 
                                                      & (vlSelfRef.MAU_init__DOT__rdata_r 
                                                         >> 0x10U))
                                                      : 
                                                     (((IData)(vlSelfRef.IDU_init__DOT__is_lbu) 
                                                       & (3U 
                                                          == 
                                                          (3U 
                                                           & vlSelfRef.branch_pc)))
                                                       ? 
                                                      VL_SHIFTR_III(32,32,32, vlSelfRef.MAU_init__DOT__rdata_r, 0x18U)
                                                       : 
                                                      (((IData)(vlSelfRef.IDU_init__DOT__is_lhu) 
                                                        & (0U 
                                                           == 
                                                           (3U 
                                                            & vlSelfRef.branch_pc)))
                                                        ? 
                                                       (0xffffU 
                                                        & vlSelfRef.MAU_init__DOT__rdata_r)
                                                        : 
                                                       (((IData)(vlSelfRef.IDU_init__DOT__is_lhu) 
                                                         & (2U 
                                                            == 
                                                            (3U 
                                                             & vlSelfRef.branch_pc)))
                                                         ? 
                                                        VL_SHIFTR_III(32,32,32, vlSelfRef.MAU_init__DOT__rdata_r, 0x10U)
                                                         : 0U)))))))))))));
    vlSelfRef.EXU_init__DOT__alu_result = vlSelfRef.alu_result;
    vlSelfRef.MAU_init__DOT__addr = vlSelfRef.alu_result;
    vlSelfRef.WBU_init__DOT__alu_result = vlSelfRef.alu_result;
    vlSelfRef.IFU_init__DOT__npc = vlSelfRef.npc;
    vlSelfRef.dnpc = vlSelfRef.npc;
    vlSelfRef.MAU_init__DOT__rdata = vlSelfRef.rdata;
    vlSelfRef.WBU_init__DOT__rdata = vlSelfRef.rdata;
    vlSelfRef.gpr_wdata = ((IData)(vlSelfRef.IDU_init__DOT__is_lb)
                            ? (((- (IData)((1U & (vlSelfRef.rdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelfRef.rdata))
                            : ((IData)(vlSelfRef.IDU_init__DOT__is_lh)
                                ? (((- (IData)((1U 
                                                & (vlSelfRef.rdata 
                                                   >> 0xfU)))) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSelfRef.rdata))
                                : ((IData)(vlSelfRef.IDU_init__DOT__is_lw)
                                    ? vlSelfRef.rdata
                                    : ((IData)(vlSelfRef.IDU_init__DOT__is_lbu)
                                        ? (0xffU & vlSelfRef.rdata)
                                        : ((IData)(vlSelfRef.IDU_init__DOT__is_lhu)
                                            ? (0xffffU 
                                               & vlSelfRef.rdata)
                                            : vlSelfRef.branch_pc)))));
    vlSelfRef.IDU_init__DOT__gpr_wdata = vlSelfRef.gpr_wdata;
    vlSelfRef.WBU_init__DOT__gpr_wdata = vlSelfRef.gpr_wdata;
    vlSelfRef.IDU_init__DOT__gpr_wdata_total = ((IData)(vlSelfRef.IDU_init__DOT__is_csr)
                                                 ? vlSelfRef.IDU_init__DOT__csr_temp
                                                 : vlSelfRef.gpr_wdata);
    vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__gpr_wdata 
        = vlSelfRef.IDU_init__DOT__gpr_wdata_total;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25080218___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_25080218* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25080218___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1\n"); );
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
        vlSelfRef.IDU_init__DOT__rst = 1U;
    } else {
        vlSelfRef.IFU_init__DOT__rst = 0U;
        vlSelfRef.MAU_init__DOT__rst = 0U;
        vlSelfRef.xbar_init__DOT__rst = 0U;
        vlSelfRef.clint_init__DOT__rst = 0U;
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
        vlSelfRef.IDU_init__DOT__rst = 0U;
    }
    vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__clk 
        = vlSelfRef.IDU_init__DOT__clk;
    vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__rst 
        = vlSelfRef.IDU_init__DOT__rst;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__8(VysyxSoCFull_ysyx_25080218* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__8\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.xbar_init__DOT__s0_wready = vlSelfRef.io_master_wready;
    vlSelfRef.xbar_init__DOT__s0_arready = vlSelfRef.io_master_arready;
    vlSelfRef.xbar_init__DOT__s0_awready = vlSelfRef.io_master_awready;
    vlSelfRef.xbar_init__DOT__s0_rresp = vlSelfRef.io_master_rresp;
    vlSelfRef.xbar_init__DOT__s0_rdata = vlSelfRef.io_master_rdata;
    vlSelfRef.xbar_init__DOT__s0_bresp = vlSelfRef.io_master_bresp;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__9(VysyxSoCFull_ysyx_25080218* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__9\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__IDU_init__DOT__mstatus;
    __Vdly__IDU_init__DOT__mstatus = 0;
    IData/*31:0*/ __Vdly__IDU_init__DOT__mtvec;
    __Vdly__IDU_init__DOT__mtvec = 0;
    IData/*31:0*/ __Vdly__IDU_init__DOT__mepc;
    __Vdly__IDU_init__DOT__mepc = 0;
    IData/*31:0*/ __Vdly__IDU_init__DOT__mcause;
    __Vdly__IDU_init__DOT__mcause = 0;
    CData/*0:0*/ __Vdly__xbar_init__DOT__s0_r_owner;
    __Vdly__xbar_init__DOT__s0_r_owner = 0;
    CData/*0:0*/ __Vdly__xbar_init__DOT__s0_r_busy;
    __Vdly__xbar_init__DOT__s0_r_busy = 0;
    CData/*0:0*/ __Vdly__xbar_init__DOT__s1_w_busy;
    __Vdly__xbar_init__DOT__s1_w_busy = 0;
    CData/*0:0*/ __Vdly__xbar_init__DOT__s1_r_owner;
    __Vdly__xbar_init__DOT__s1_r_owner = 0;
    CData/*0:0*/ __Vdly__xbar_init__DOT__s1_r_busy;
    __Vdly__xbar_init__DOT__s1_r_busy = 0;
    CData/*0:0*/ __Vdly__xbar_init__DOT__s0_w_busy;
    __Vdly__xbar_init__DOT__s0_w_busy = 0;
    // Body
    __Vdly__IDU_init__DOT__mstatus = vlSelfRef.IDU_init__DOT__mstatus;
    __Vdly__IDU_init__DOT__mcause = vlSelfRef.IDU_init__DOT__mcause;
    __Vdly__IDU_init__DOT__mtvec = vlSelfRef.IDU_init__DOT__mtvec;
    __Vdly__IDU_init__DOT__mepc = vlSelfRef.IDU_init__DOT__mepc;
    __Vdly__xbar_init__DOT__s1_r_owner = vlSelfRef.xbar_init__DOT__s1_r_owner;
    __Vdly__xbar_init__DOT__s1_r_busy = vlSelfRef.xbar_init__DOT__s1_r_busy;
    __Vdly__xbar_init__DOT__s0_r_owner = vlSelfRef.xbar_init__DOT__s0_r_owner;
    __Vdly__xbar_init__DOT__s0_r_busy = vlSelfRef.xbar_init__DOT__s0_r_busy;
    __Vdly__xbar_init__DOT__s1_w_busy = vlSelfRef.xbar_init__DOT__s1_w_busy;
    __Vdly__xbar_init__DOT__s0_w_busy = vlSelfRef.xbar_init__DOT__s0_w_busy;
    if (vlSelfRef.reset) {
        __Vdly__IDU_init__DOT__mstatus = 0x1800U;
        __Vdly__IDU_init__DOT__mtvec = 0U;
        __Vdly__IDU_init__DOT__mepc = 0U;
        __Vdly__IDU_init__DOT__mcause = 0U;
    } else if (VL_UNLIKELY((vlSelfRef.IDU_init__DOT__is_ecall))) {
        VL_WRITEF_NX("ECALL at PC=%x\n",0,32,vlSelfRef.pc);
        Verilated::runFlushCallbacks();
        __Vdly__IDU_init__DOT__mcause = 0xbU;
        __Vdly__IDU_init__DOT__mepc = vlSelfRef.pc;
    } else if (vlSelfRef.IDU_init__DOT__is_csrrs) {
        if (vlSelfRef.IDU_init__DOT__is_mstatus) {
            __Vdly__IDU_init__DOT__mstatus = (vlSelfRef.IDU_init__DOT__mstatus 
                                              | vlSelfRef.rs1);
        } else if (vlSelfRef.IDU_init__DOT__is_mtvec) {
            __Vdly__IDU_init__DOT__mtvec = (vlSelfRef.IDU_init__DOT__mtvec 
                                            | vlSelfRef.rs1);
        } else if (vlSelfRef.IDU_init__DOT__is_mepc) {
            __Vdly__IDU_init__DOT__mepc = (vlSelfRef.IDU_init__DOT__mepc 
                                           | vlSelfRef.rs1);
        } else if (vlSelfRef.IDU_init__DOT__is_mcause) {
            __Vdly__IDU_init__DOT__mcause = (vlSelfRef.IDU_init__DOT__mcause 
                                             | vlSelfRef.rs1);
        } else if (vlSelfRef.IDU_init__DOT__is_mvendorid) {
            vlSelfRef.IDU_init__DOT__mvendorid = (vlSelfRef.IDU_init__DOT__mvendorid 
                                                  | vlSelfRef.rs1);
        } else if (vlSelfRef.IDU_init__DOT__is_marchid) {
            vlSelfRef.IDU_init__DOT__marchid = (vlSelfRef.IDU_init__DOT__marchid 
                                                | vlSelfRef.rs1);
        }
    } else if (vlSelfRef.IDU_init__DOT__is_csrrw) {
        if (vlSelfRef.IDU_init__DOT__is_mstatus) {
            __Vdly__IDU_init__DOT__mstatus = vlSelfRef.rs1;
        } else if (vlSelfRef.IDU_init__DOT__is_mtvec) {
            __Vdly__IDU_init__DOT__mtvec = vlSelfRef.rs1;
        } else if (vlSelfRef.IDU_init__DOT__is_mepc) {
            __Vdly__IDU_init__DOT__mepc = vlSelfRef.rs1;
        } else if (vlSelfRef.IDU_init__DOT__is_mcause) {
            __Vdly__IDU_init__DOT__mcause = vlSelfRef.rs1;
        }
    }
    if (vlSelfRef.reset) {
        __Vdly__xbar_init__DOT__s1_r_owner = 0U;
        __Vdly__xbar_init__DOT__s1_r_busy = 0U;
        __Vdly__xbar_init__DOT__s0_r_owner = 0U;
        __Vdly__xbar_init__DOT__s0_r_busy = 0U;
        __Vdly__xbar_init__DOT__s1_w_busy = 0U;
        __Vdly__xbar_init__DOT__s0_w_busy = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.xbar_init__DOT__s1_r_busy)))) {
            if ((((IData)(vlSelfRef.xbar_init__DOT__m0_r_s1) 
                  & (IData)(vlSelfRef.m0_arvalid)) 
                 & (IData)(vlSelfRef.m0_arready))) {
                __Vdly__xbar_init__DOT__s1_r_busy = 1U;
                __Vdly__xbar_init__DOT__s1_r_owner = 0U;
            } else if ((((IData)(vlSelfRef.xbar_init__DOT__m1_r_s1) 
                         & (IData)(vlSelfRef.m1_arvalid)) 
                        & (IData)(vlSelfRef.m1_arready))) {
                __Vdly__xbar_init__DOT__s1_r_busy = 1U;
                __Vdly__xbar_init__DOT__s1_r_owner = 1U;
            }
        }
        if ((((~ (IData)(vlSelfRef.xbar_init__DOT__s1_r_owner)) 
              & (IData)(vlSelfRef.s1_rvalid)) & (IData)(vlSelfRef.s1_rready))) {
            __Vdly__xbar_init__DOT__s1_r_busy = 0U;
        } else if ((((IData)(vlSelfRef.xbar_init__DOT__s1_r_owner) 
                     & (IData)(vlSelfRef.s1_rvalid)) 
                    & (IData)(vlSelfRef.s1_rready))) {
            __Vdly__xbar_init__DOT__s1_r_busy = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.xbar_init__DOT__s0_r_busy)))) {
            if ((((IData)(vlSelfRef.xbar_init__DOT__m0_r_s0) 
                  & (IData)(vlSelfRef.m0_arvalid)) 
                 & (IData)(vlSelfRef.m0_arready))) {
                __Vdly__xbar_init__DOT__s0_r_busy = 1U;
                __Vdly__xbar_init__DOT__s0_r_owner = 0U;
            } else if ((((IData)(vlSelfRef.xbar_init__DOT__m1_r_s0) 
                         & (IData)(vlSelfRef.m1_arvalid)) 
                        & (IData)(vlSelfRef.m1_arready))) {
                __Vdly__xbar_init__DOT__s0_r_busy = 1U;
                __Vdly__xbar_init__DOT__s0_r_owner = 1U;
            }
        }
        if ((((~ (IData)(vlSelfRef.xbar_init__DOT__s0_r_owner)) 
              & (IData)(vlSelfRef.io_master_rvalid)) 
             & (IData)(vlSelfRef.io_master_rready))) {
            __Vdly__xbar_init__DOT__s0_r_busy = 0U;
        } else if ((((IData)(vlSelfRef.xbar_init__DOT__s0_r_owner) 
                     & (IData)(vlSelfRef.io_master_rvalid)) 
                    & (IData)(vlSelfRef.io_master_rready))) {
            __Vdly__xbar_init__DOT__s0_r_busy = 0U;
        }
        if (vlSelfRef.xbar_init__DOT__s1_w_busy) {
            if (((IData)(vlSelfRef.s1_bready) & (IData)(vlSelfRef.s1_bvalid))) {
                __Vdly__xbar_init__DOT__s1_w_busy = 0U;
            }
        } else if ((((((IData)(vlSelfRef.m1_awvalid) 
                       & (IData)(vlSelfRef.m1_wvalid)) 
                      & (IData)(vlSelfRef.xbar_init__DOT__m1_w_s1)) 
                     & (IData)(vlSelfRef.m1_awready)) 
                    & (IData)(vlSelfRef.m1_wready))) {
            __Vdly__xbar_init__DOT__s1_w_busy = 1U;
        }
        if (vlSelfRef.xbar_init__DOT__s0_w_busy) {
            if (((IData)(vlSelfRef.io_master_bready) 
                 & (IData)(vlSelfRef.io_master_bvalid))) {
                __Vdly__xbar_init__DOT__s0_w_busy = 0U;
            }
        } else if ((((((IData)(vlSelfRef.m1_awvalid) 
                       & (IData)(vlSelfRef.m1_wvalid)) 
                      & (IData)(vlSelfRef.xbar_init__DOT__m1_w_s0)) 
                     & (IData)(vlSelfRef.m1_awready)) 
                    & (IData)(vlSelfRef.m1_wready))) {
            __Vdly__xbar_init__DOT__s0_w_busy = 1U;
        }
    }
    vlSelfRef.IDU_init__DOT__mstatus = __Vdly__IDU_init__DOT__mstatus;
    vlSelfRef.IDU_init__DOT__mcause = __Vdly__IDU_init__DOT__mcause;
    vlSelfRef.IDU_init__DOT__mtvec = __Vdly__IDU_init__DOT__mtvec;
    vlSelfRef.IDU_init__DOT__mepc = __Vdly__IDU_init__DOT__mepc;
    vlSelfRef.xbar_init__DOT__s1_r_owner = __Vdly__xbar_init__DOT__s1_r_owner;
    vlSelfRef.xbar_init__DOT__s1_r_busy = __Vdly__xbar_init__DOT__s1_r_busy;
    vlSelfRef.xbar_init__DOT__s0_r_owner = __Vdly__xbar_init__DOT__s0_r_owner;
    vlSelfRef.xbar_init__DOT__s0_r_busy = __Vdly__xbar_init__DOT__s0_r_busy;
    vlSelfRef.xbar_init__DOT__s1_w_busy = __Vdly__xbar_init__DOT__s1_w_busy;
    vlSelfRef.xbar_init__DOT__s0_w_busy = __Vdly__xbar_init__DOT__s0_w_busy;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__10(VysyxSoCFull_ysyx_25080218* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__10\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.xbar_init__DOT__s0_rvalid = vlSelfRef.io_master_rvalid;
    vlSelfRef.xbar_init__DOT__s0_bvalid = vlSelfRef.io_master_bvalid;
    vlSelfRef.IFU_init__DOT__rst = vlSelfRef.reset;
    vlSelfRef.MAU_init__DOT__rst = vlSelfRef.reset;
    vlSelfRef.xbar_init__DOT__rst = vlSelfRef.reset;
    vlSelfRef.clint_init__DOT__rst = vlSelfRef.reset;
    vlSelfRef.IDU_init__DOT__rst = vlSelfRef.reset;
    vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__rst 
        = vlSelfRef.IDU_init__DOT__rst;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__11(VysyxSoCFull_ysyx_25080218* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25080218___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__11\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rs1 = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
        [vlSelfRef.IDU_init__DOT__src1];
    vlSelfRef.IDU_init__DOT__is_mstatus = (0x300U == (IData)(vlSelfRef.IDU_init__DOT__csr_addr));
    vlSelfRef.IDU_init__DOT__is_mtvec = (0x305U == (IData)(vlSelfRef.IDU_init__DOT__csr_addr));
    vlSelfRef.IDU_init__DOT__is_mepc = (0x341U == (IData)(vlSelfRef.IDU_init__DOT__csr_addr));
    vlSelfRef.IDU_init__DOT__is_mcause = (0x342U == (IData)(vlSelfRef.IDU_init__DOT__csr_addr));
    vlSelfRef.IDU_init__DOT__is_mvendorid = (0xf11U 
                                             == (IData)(vlSelfRef.IDU_init__DOT__csr_addr));
    vlSelfRef.IDU_init__DOT__is_marchid = (0xf12U == (IData)(vlSelfRef.IDU_init__DOT__csr_addr));
    vlSelfRef.IDU_init__DOT__is_ecall = (0x73U == vlSelfRef.__Vcellinp__IDU_init__inst);
    vlSelfRef.IDU_init__DOT__is_csrrs = ((2U == (IData)(vlSelfRef.IDU_init__DOT__fun3)) 
                                         & (0x73U == (IData)(vlSelfRef.IDU_init__DOT__opcode)));
    vlSelfRef.IDU_init__DOT__is_csrrw = ((1U == (IData)(vlSelfRef.IDU_init__DOT__fun3)) 
                                         & (0x73U == (IData)(vlSelfRef.IDU_init__DOT__opcode)));
    vlSelfRef.pc = vlSelfRef.__Vdly__pc;
    vlSelfRef.xbar_init__DOT__m1_r_s1 = (0x200U == 
                                         (vlSelfRef.m1_araddr 
                                          >> 0x10U));
    vlSelfRef.s1_rvalid = vlSelfRef.__Vdly__s1_rvalid;
    vlSelfRef.m1_arvalid = vlSelfRef.__Vdly__m1_arvalid;
    vlSelfRef.m0_arvalid = vlSelfRef.__Vdly__m0_arvalid;
    vlSelfRef.xbar_init__DOT__m1_w_s1 = (0x200U == 
                                         (vlSelfRef.m1_awaddr 
                                          >> 0x10U));
    vlSelfRef.m1_awvalid = vlSelfRef.__Vdly__m1_awvalid;
    vlSelfRef.m1_wvalid = vlSelfRef.__Vdly__m1_wvalid;
    vlSelfRef.EXU_init__DOT__rs1 = vlSelfRef.rs1;
    vlSelfRef.IDU_init__DOT__rs1 = vlSelfRef.rs1;
    vlSelfRef.is_ecall_mret = ((IData)(vlSelfRef.IDU_init__DOT__is_ecall) 
                               | (IData)(vlSelfRef.IDU_init__DOT__is_mret));
    vlSelfRef.IDU_init__DOT__is_csr = ((IData)(vlSelfRef.IDU_init__DOT__is_csrrs) 
                                       | (IData)(vlSelfRef.IDU_init__DOT__is_csrrw));
    vlSelfRef.IDU_init__DOT__pc = vlSelfRef.pc;
    vlSelfRef.IFU_init__DOT__pc = vlSelfRef.pc;
    vlSelfRef.IFU_init__DOT__next_pc = ((IData)(4U) 
                                        + vlSelfRef.pc);
    vlSelfRef.next_pc_jump = ((IData)(vlSelfRef.IDU_init__DOT__imm_is_J)
                               ? (vlSelfRef.pc + vlSelfRef.IDU_init__DOT__imm_J)
                               : ((IData)(vlSelfRef.IDU_init__DOT__is_jalr)
                                   ? (vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                      [vlSelfRef.IDU_init__DOT__src1] 
                                      + vlSelfRef.IDU_init__DOT__imm_I)
                                   : 0U));
    vlSelfRef.alu_src1 = ((IData)(vlSelfRef.is_jump)
                           ? vlSelfRef.pc : ((IData)(vlSelfRef.IDU_init__DOT__imm_is_I)
                                              ? vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                             [vlSelfRef.IDU_init__DOT__src1]
                                              : ((IData)(vlSelfRef.IDU_init__DOT__imm_is_R)
                                                  ? 
                                                 vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                                 [vlSelfRef.IDU_init__DOT__src1]
                                                  : 
                                                 ((IData)(vlSelfRef.IDU_init__DOT__imm_is_S)
                                                   ? 
                                                  vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                                  [vlSelfRef.IDU_init__DOT__src1]
                                                   : 
                                                  ((IData)(vlSelfRef.IDU_init__DOT__is_auipc)
                                                    ? vlSelfRef.pc
                                                    : 
                                                   ((IData)(vlSelfRef.IDU_init__DOT__imm_is_B)
                                                     ? vlSelfRef.pc
                                                     : 0U))))));
    vlSelfRef.xbar_init__DOT__m1_r_s0 = (1U & (~ (IData)(vlSelfRef.xbar_init__DOT__m1_r_s1)));
    vlSelfRef.xbar_init__DOT__s1_rvalid = vlSelfRef.s1_rvalid;
    vlSelfRef.clint_init__DOT__s_rvalid = vlSelfRef.s1_rvalid;
    vlSelfRef.MAU_init__DOT__ARVALID = vlSelfRef.m1_arvalid;
    vlSelfRef.xbar_init__DOT__m1_arvalid = vlSelfRef.m1_arvalid;
    vlSelfRef.xbar_init__DOT__m1_rreq_s1 = ((IData)(vlSelfRef.m1_arvalid) 
                                            & (IData)(vlSelfRef.xbar_init__DOT__m1_r_s1));
    vlSelfRef.IFU_init__DOT__ARVALID = vlSelfRef.m0_arvalid;
    vlSelfRef.xbar_init__DOT__m0_arvalid = vlSelfRef.m0_arvalid;
    vlSelfRef.xbar_init__DOT__m0_rreq_s1 = ((IData)(vlSelfRef.m0_arvalid) 
                                            & (IData)(vlSelfRef.xbar_init__DOT__m0_r_s1));
    vlSelfRef.xbar_init__DOT__m0_rreq_s0 = ((IData)(vlSelfRef.m0_arvalid) 
                                            & (IData)(vlSelfRef.xbar_init__DOT__m0_r_s0));
    vlSelfRef.xbar_init__DOT__m1_w_s0 = (1U & (~ (IData)(vlSelfRef.xbar_init__DOT__m1_w_s1)));
    vlSelfRef.MAU_init__DOT__AWVALID = vlSelfRef.m1_awvalid;
    vlSelfRef.xbar_init__DOT__m1_awvalid = vlSelfRef.m1_awvalid;
    vlSelfRef.MAU_init__DOT__WVALID = vlSelfRef.m1_wvalid;
    vlSelfRef.xbar_init__DOT__m1_wvalid = vlSelfRef.m1_wvalid;
    vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__gpr_rdata1 
        = vlSelfRef.IDU_init__DOT__rs1;
    vlSelfRef.IDU_init__DOT__is_ecall_mret = vlSelfRef.is_ecall_mret;
    vlSelfRef.IFU_init__DOT__is_ecall_mret = vlSelfRef.is_ecall_mret;
    vlSelfRef.rd_we = ((IData)(vlSelfRef.IDU_init__DOT__imm_is_R) 
                       | ((IData)(vlSelfRef.IDU_init__DOT__imm_is_U) 
                          | ((IData)(vlSelfRef.IDU_init__DOT__imm_is_I) 
                             | ((IData)(vlSelfRef.is_jump) 
                                | (IData)(vlSelfRef.IDU_init__DOT__is_csr)))));
    vlSelfRef.IDU_init__DOT__next_pc_jump = vlSelfRef.next_pc_jump;
    vlSelfRef.IFU_init__DOT__next_pc_jump = vlSelfRef.next_pc_jump;
    vlSelfRef.IDU_init__DOT__alu_src1 = vlSelfRef.alu_src1;
    vlSelfRef.EXU_init__DOT__alu_src1 = vlSelfRef.alu_src1;
    vlSelfRef.EXU_init__DOT__alu_a = vlSelfRef.alu_src1;
    vlSelfRef.EXU_init__DOT____VdfgRegularize_he932f07c_0_1 
        = (vlSelfRef.alu_src1 >> (IData)(vlSelfRef.EXU_init__DOT____VdfgRegularize_he932f07c_0_0));
    vlSelfRef.xbar_init__DOT__m1_rreq_s0 = ((IData)(vlSelfRef.xbar_init__DOT__m1_r_s0) 
                                            & (IData)(vlSelfRef.m1_arvalid));
    vlSelfRef.IDU_init__DOT__rd_we = vlSelfRef.rd_we;
    vlSelfRef.WBU_init__DOT__rd_we = vlSelfRef.rd_we;
    vlSelfRef.gpr_we = ((IData)(vlSelfRef.rd_we) & (IData)(vlSelfRef.valid_to_wbu));
    vlSelfRef.branch_pc = (((IData)(vlSelfRef.EXU_init__DOT__op_add) 
                            | (IData)(vlSelfRef.EXU_init__DOT__op_sub))
                            ? (vlSelfRef.alu_src1 + 
                               (vlSelfRef.EXU_init__DOT__alu_b 
                                + (IData)(vlSelfRef.EXU_init__DOT__op_sub)))
                            : ((IData)(vlSelfRef.EXU_init__DOT__op_lui)
                                ? vlSelfRef.alu_src2
                                : ((IData)(vlSelfRef.EXU_init__DOT__op_and)
                                    ? (vlSelfRef.alu_src1 
                                       & vlSelfRef.alu_src2)
                                    : ((IData)(vlSelfRef.EXU_init__DOT__op_or)
                                        ? (vlSelfRef.alu_src1 
                                           | vlSelfRef.alu_src2)
                                        : ((IData)(vlSelfRef.EXU_init__DOT__op_xor)
                                            ? (vlSelfRef.alu_src1 
                                               ^ vlSelfRef.alu_src2)
                                            : ((IData)(vlSelfRef.EXU_init__DOT__op_sll)
                                                ? (vlSelfRef.alu_src1 
                                                   << (IData)(vlSelfRef.EXU_init__DOT____VdfgRegularize_he932f07c_0_0))
                                                : ((IData)(vlSelfRef.EXU_init__DOT__op_srl)
                                                    ? vlSelfRef.EXU_init__DOT____VdfgRegularize_he932f07c_0_1
                                                    : 
                                                   ((IData)(vlSelfRef.EXU_init__DOT__op_sra)
                                                     ? 
                                                    ((vlSelfRef.alu_src1 
                                                      >> 0x1fU)
                                                      ? 
                                                     (~ 
                                                      ((~ vlSelfRef.alu_src1) 
                                                       >> (IData)(vlSelfRef.EXU_init__DOT____VdfgRegularize_he932f07c_0_0)))
                                                      : vlSelfRef.EXU_init__DOT____VdfgRegularize_he932f07c_0_1)
                                                     : 
                                                    ((IData)(vlSelfRef.EXU_init__DOT__op_slt)
                                                      ? 
                                                     (VL_LTS_III(32, vlSelfRef.alu_src1, vlSelfRef.alu_src2)
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     ((IData)(vlSelfRef.EXU_init__DOT__op_sltu)
                                                       ? 
                                                      ((vlSelfRef.alu_src1 
                                                        < vlSelfRef.alu_src2)
                                                        ? 1U
                                                        : 0U)
                                                       : 0U))))))))));
    vlSelfRef.WBU_init__DOT__gpr_we = vlSelfRef.gpr_we;
    vlSelfRef.IDU_init__DOT__gpr_we = vlSelfRef.gpr_we;
    vlSelfRef.IFU_init__DOT__branch_pc = vlSelfRef.branch_pc;
    vlSelfRef.EXU_init__DOT__branch_pc = vlSelfRef.branch_pc;
    vlSelfRef.MAU_init__DOT__wmask = (((IData)(vlSelfRef.IDU_init__DOT__is_sb) 
                                       & (0U == (3U 
                                                 & vlSelfRef.branch_pc)))
                                       ? 1U : (((IData)(vlSelfRef.IDU_init__DOT__is_sb) 
                                                & (1U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.branch_pc)))
                                                ? 2U
                                                : (
                                                   ((IData)(vlSelfRef.IDU_init__DOT__is_sb) 
                                                    & (2U 
                                                       == 
                                                       (3U 
                                                        & vlSelfRef.branch_pc)))
                                                    ? 4U
                                                    : 
                                                   (((IData)(vlSelfRef.IDU_init__DOT__is_sb) 
                                                     & (3U 
                                                        == 
                                                        (3U 
                                                         & vlSelfRef.branch_pc)))
                                                     ? 8U
                                                     : 
                                                    (((IData)(vlSelfRef.IDU_init__DOT__is_sh) 
                                                      & (0U 
                                                         == 
                                                         (3U 
                                                          & vlSelfRef.branch_pc)))
                                                      ? 3U
                                                      : 
                                                     (((IData)(vlSelfRef.IDU_init__DOT__is_sh) 
                                                       & (2U 
                                                          == 
                                                          (3U 
                                                           & vlSelfRef.branch_pc)))
                                                       ? 0xcU
                                                       : 
                                                      ((IData)(vlSelfRef.IDU_init__DOT__is_sw)
                                                        ? 0xfU
                                                        : 0U)))))));
    vlSelfRef.MAU_init__DOT__wdata = ((IData)(vlSelfRef.IDU_init__DOT__is_sb)
                                       ? (vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                          [vlSelfRef.IDU_init__DOT__src2] 
                                          << (0x18U 
                                              & (vlSelfRef.branch_pc 
                                                 << 3U)))
                                       : ((IData)(vlSelfRef.IDU_init__DOT__is_sh)
                                           ? (vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                              [vlSelfRef.IDU_init__DOT__src2] 
                                              << (0x10U 
                                                  & (vlSelfRef.branch_pc 
                                                     << 3U)))
                                           : vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                          [vlSelfRef.IDU_init__DOT__src2]));
    vlSelfRef.alu_result = vlSelfRef.branch_pc;
    vlSelfRef.rdata = (((IData)(vlSelfRef.IDU_init__DOT__is_lb) 
                        & (0U == (3U & vlSelfRef.branch_pc)))
                        ? (((- (IData)((1U & (vlSelfRef.MAU_init__DOT__rdata_r 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSelfRef.MAU_init__DOT__rdata_r))
                        : (((IData)(vlSelfRef.IDU_init__DOT__is_lb) 
                            & (1U == (3U & vlSelfRef.branch_pc)))
                            ? (((- (IData)((1U & (vlSelfRef.MAU_init__DOT__rdata_r 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (vlSelfRef.MAU_init__DOT__rdata_r 
                                                   >> 8U)))
                            : (((IData)(vlSelfRef.IDU_init__DOT__is_lb) 
                                & (2U == (3U & vlSelfRef.branch_pc)))
                                ? (((- (IData)((1U 
                                                & (vlSelfRef.MAU_init__DOT__rdata_r 
                                                   >> 0x17U)))) 
                                    << 8U) | (0xffU 
                                              & (vlSelfRef.MAU_init__DOT__rdata_r 
                                                 >> 0x10U)))
                                : (((IData)(vlSelfRef.IDU_init__DOT__is_lb) 
                                    & (3U == (3U & vlSelfRef.branch_pc)))
                                    ? (((- (IData)(
                                                   (vlSelfRef.MAU_init__DOT__rdata_r 
                                                    >> 0x1fU))) 
                                        << 8U) | (vlSelfRef.MAU_init__DOT__rdata_r 
                                                  >> 0x18U))
                                    : (((IData)(vlSelfRef.IDU_init__DOT__is_lh) 
                                        & (0U == (3U 
                                                  & vlSelfRef.branch_pc)))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.MAU_init__DOT__rdata_r 
                                                           >> 0xfU)))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & vlSelfRef.MAU_init__DOT__rdata_r))
                                        : (((IData)(vlSelfRef.IDU_init__DOT__is_lh) 
                                            & (2U == 
                                               (3U 
                                                & vlSelfRef.branch_pc)))
                                            ? (((- (IData)(
                                                           (vlSelfRef.MAU_init__DOT__rdata_r 
                                                            >> 0x1fU))) 
                                                << 0x10U) 
                                               | (vlSelfRef.MAU_init__DOT__rdata_r 
                                                  >> 0x10U))
                                            : ((IData)(vlSelfRef.IDU_init__DOT__is_lw)
                                                ? vlSelfRef.MAU_init__DOT__rdata_r
                                                : (
                                                   ((IData)(vlSelfRef.IDU_init__DOT__is_lbu) 
                                                    & (0U 
                                                       == 
                                                       (3U 
                                                        & vlSelfRef.branch_pc)))
                                                    ? 
                                                   (0xffU 
                                                    & vlSelfRef.MAU_init__DOT__rdata_r)
                                                    : 
                                                   (((IData)(vlSelfRef.IDU_init__DOT__is_lbu) 
                                                     & (1U 
                                                        == 
                                                        (3U 
                                                         & vlSelfRef.branch_pc)))
                                                     ? 
                                                    (0xffU 
                                                     & (vlSelfRef.MAU_init__DOT__rdata_r 
                                                        >> 8U))
                                                     : 
                                                    (((IData)(vlSelfRef.IDU_init__DOT__is_lbu) 
                                                      & (2U 
                                                         == 
                                                         (3U 
                                                          & vlSelfRef.branch_pc)))
                                                      ? 
                                                     (0xffU 
                                                      & (vlSelfRef.MAU_init__DOT__rdata_r 
                                                         >> 0x10U))
                                                      : 
                                                     (((IData)(vlSelfRef.IDU_init__DOT__is_lbu) 
                                                       & (3U 
                                                          == 
                                                          (3U 
                                                           & vlSelfRef.branch_pc)))
                                                       ? 
                                                      VL_SHIFTR_III(32,32,32, vlSelfRef.MAU_init__DOT__rdata_r, 0x18U)
                                                       : 
                                                      (((IData)(vlSelfRef.IDU_init__DOT__is_lhu) 
                                                        & (0U 
                                                           == 
                                                           (3U 
                                                            & vlSelfRef.branch_pc)))
                                                        ? 
                                                       (0xffffU 
                                                        & vlSelfRef.MAU_init__DOT__rdata_r)
                                                        : 
                                                       (((IData)(vlSelfRef.IDU_init__DOT__is_lhu) 
                                                         & (2U 
                                                            == 
                                                            (3U 
                                                             & vlSelfRef.branch_pc)))
                                                         ? 
                                                        VL_SHIFTR_III(32,32,32, vlSelfRef.MAU_init__DOT__rdata_r, 0x10U)
                                                         : 0U)))))))))))));
    vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__gpr_we 
        = vlSelfRef.IDU_init__DOT__gpr_we;
    vlSelfRef.EXU_init__DOT__alu_result = vlSelfRef.alu_result;
    vlSelfRef.MAU_init__DOT__addr = vlSelfRef.alu_result;
    vlSelfRef.WBU_init__DOT__alu_result = vlSelfRef.alu_result;
    vlSelfRef.MAU_init__DOT__rdata = vlSelfRef.rdata;
    vlSelfRef.WBU_init__DOT__rdata = vlSelfRef.rdata;
    vlSelfRef.gpr_wdata = ((IData)(vlSelfRef.IDU_init__DOT__is_lb)
                            ? (((- (IData)((1U & (vlSelfRef.rdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelfRef.rdata))
                            : ((IData)(vlSelfRef.IDU_init__DOT__is_lh)
                                ? (((- (IData)((1U 
                                                & (vlSelfRef.rdata 
                                                   >> 0xfU)))) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSelfRef.rdata))
                                : ((IData)(vlSelfRef.IDU_init__DOT__is_lw)
                                    ? vlSelfRef.rdata
                                    : ((IData)(vlSelfRef.IDU_init__DOT__is_lbu)
                                        ? (0xffU & vlSelfRef.rdata)
                                        : ((IData)(vlSelfRef.IDU_init__DOT__is_lhu)
                                            ? (0xffffU 
                                               & vlSelfRef.rdata)
                                            : vlSelfRef.branch_pc)))));
    vlSelfRef.IDU_init__DOT__gpr_wdata = vlSelfRef.gpr_wdata;
    vlSelfRef.WBU_init__DOT__gpr_wdata = vlSelfRef.gpr_wdata;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25080218___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_25080218* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25080218___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.s1_rready = 0U;
    if (vlSelfRef.xbar_init__DOT__s1_r_busy) {
        vlSelfRef.s1_rready = ((IData)(vlSelfRef.xbar_init__DOT__s1_r_owner)
                                ? (IData)(vlSelfRef.m1_rready)
                                : (IData)(vlSelfRef.m0_rready));
    }
    vlSelfRef.io_master_rready = 0U;
    if (vlSelfRef.xbar_init__DOT__s0_r_busy) {
        vlSelfRef.io_master_rready = ((IData)(vlSelfRef.xbar_init__DOT__s0_r_owner)
                                       ? (IData)(vlSelfRef.m1_rready)
                                       : (IData)(vlSelfRef.m0_rready));
    }
    vlSelfRef.s1_bready = 0U;
    if (vlSelfRef.xbar_init__DOT__s1_w_busy) {
        vlSelfRef.s1_bready = vlSelfRef.m1_bready;
    }
    vlSelfRef.io_master_bready = 0U;
    if (vlSelfRef.xbar_init__DOT__s0_w_busy) {
        vlSelfRef.io_master_bready = vlSelfRef.m1_bready;
    }
    vlSelfRef.IDU_init__DOT__csr_temp = ((IData)(vlSelfRef.IDU_init__DOT__is_mcause)
                                          ? vlSelfRef.IDU_init__DOT__mcause
                                          : ((IData)(vlSelfRef.IDU_init__DOT__is_mepc)
                                              ? vlSelfRef.IDU_init__DOT__mepc
                                              : ((IData)(vlSelfRef.IDU_init__DOT__is_mtvec)
                                                  ? vlSelfRef.IDU_init__DOT__mtvec
                                                  : 
                                                 ((IData)(vlSelfRef.IDU_init__DOT__is_mstatus)
                                                   ? vlSelfRef.IDU_init__DOT__mstatus
                                                   : 
                                                  ((IData)(vlSelfRef.IDU_init__DOT__is_mvendorid)
                                                    ? vlSelfRef.IDU_init__DOT__mvendorid
                                                    : 
                                                   ((IData)(vlSelfRef.IDU_init__DOT__is_marchid)
                                                     ? vlSelfRef.IDU_init__DOT__marchid
                                                     : 0U))))));
    vlSelfRef.next_pc_csr = ((IData)(vlSelfRef.IDU_init__DOT__is_ecall)
                              ? vlSelfRef.IDU_init__DOT__mtvec
                              : ((IData)(vlSelfRef.IDU_init__DOT__is_mret)
                                  ? vlSelfRef.IDU_init__DOT__mepc
                                  : 0U));
    vlSelfRef.s1_wvalid = 0U;
    vlSelfRef.s1_awvalid = 0U;
    vlSelfRef.s1_wstrb = 0U;
    vlSelfRef.s1_wdata = 0U;
    vlSelfRef.s1_awaddr = 0U;
    if ((1U & (~ (IData)(vlSelfRef.xbar_init__DOT__s1_w_busy)))) {
        if ((((IData)(vlSelfRef.m1_awvalid) & (IData)(vlSelfRef.m1_wvalid)) 
             & (IData)(vlSelfRef.xbar_init__DOT__m1_w_s1))) {
            vlSelfRef.s1_wvalid = 1U;
            vlSelfRef.s1_awvalid = 1U;
            vlSelfRef.s1_wstrb = vlSelfRef.m1_wstrb;
            vlSelfRef.s1_wdata = vlSelfRef.m1_wdata;
            vlSelfRef.s1_awaddr = vlSelfRef.m1_awaddr;
        }
    }
    vlSelfRef.s1_arvalid = 0U;
    vlSelfRef.s1_araddr = 0U;
    if ((1U & (~ (IData)(vlSelfRef.xbar_init__DOT__s1_r_busy)))) {
        if (vlSelfRef.xbar_init__DOT__m0_rreq_s1) {
            vlSelfRef.s1_arvalid = vlSelfRef.m0_arvalid;
            vlSelfRef.s1_araddr = vlSelfRef.m0_araddr;
        } else if (vlSelfRef.xbar_init__DOT__m1_rreq_s1) {
            vlSelfRef.s1_arvalid = vlSelfRef.m1_arvalid;
            vlSelfRef.s1_araddr = vlSelfRef.m1_araddr;
        }
    }
    vlSelfRef.io_master_wdata = 0U;
    vlSelfRef.io_master_wstrb = 0U;
    vlSelfRef.io_master_wvalid = 0U;
    vlSelfRef.io_master_awvalid = 0U;
    vlSelfRef.io_master_awaddr = 0U;
    if ((1U & (~ (IData)(vlSelfRef.xbar_init__DOT__s0_w_busy)))) {
        if ((((IData)(vlSelfRef.m1_awvalid) & (IData)(vlSelfRef.m1_wvalid)) 
             & (IData)(vlSelfRef.xbar_init__DOT__m1_w_s0))) {
            vlSelfRef.io_master_wdata = vlSelfRef.m1_wdata;
            vlSelfRef.io_master_wstrb = vlSelfRef.m1_wstrb;
            vlSelfRef.io_master_wvalid = 1U;
            vlSelfRef.io_master_awvalid = 1U;
            vlSelfRef.io_master_awaddr = vlSelfRef.m1_awaddr;
        }
    }
    vlSelfRef.io_master_arvalid = 0U;
    vlSelfRef.io_master_araddr = 0U;
    if ((1U & (~ (IData)(vlSelfRef.xbar_init__DOT__s0_r_busy)))) {
        if (vlSelfRef.xbar_init__DOT__m0_rreq_s0) {
            vlSelfRef.io_master_arvalid = vlSelfRef.m0_arvalid;
            vlSelfRef.io_master_araddr = vlSelfRef.m0_araddr;
        } else if (vlSelfRef.xbar_init__DOT__m1_rreq_s0) {
            vlSelfRef.io_master_arvalid = vlSelfRef.m1_arvalid;
            vlSelfRef.io_master_araddr = vlSelfRef.m1_araddr;
        }
    }
    vlSelfRef.xbar_init__DOT__s1_rready = vlSelfRef.s1_rready;
    vlSelfRef.clint_init__DOT__s_rready = vlSelfRef.s1_rready;
    vlSelfRef.xbar_init__DOT__s0_rready = vlSelfRef.io_master_rready;
    vlSelfRef.xbar_init__DOT__s1_bready = vlSelfRef.s1_bready;
    vlSelfRef.clint_init__DOT__s_bready = vlSelfRef.s1_bready;
    vlSelfRef.xbar_init__DOT__s0_bready = vlSelfRef.io_master_bready;
    vlSelfRef.IDU_init__DOT__csr2reg = vlSelfRef.IDU_init__DOT__csr_temp;
    vlSelfRef.IDU_init__DOT__gpr_wdata_total = ((IData)(vlSelfRef.IDU_init__DOT__is_csr)
                                                 ? vlSelfRef.IDU_init__DOT__csr_temp
                                                 : vlSelfRef.gpr_wdata);
    vlSelfRef.IDU_init__DOT__next_pc_csr = vlSelfRef.next_pc_csr;
    vlSelfRef.IFU_init__DOT__next_pc_csr = vlSelfRef.next_pc_csr;
    vlSelfRef.npc = ((IData)(vlSelfRef.is_jump) ? vlSelfRef.next_pc_jump
                      : ((IData)(vlSelfRef.branch_taken)
                          ? vlSelfRef.branch_pc : ((IData)(vlSelfRef.is_ecall_mret)
                                                    ? vlSelfRef.next_pc_csr
                                                    : vlSelfRef.IFU_init__DOT__next_pc)));
    vlSelfRef.xbar_init__DOT__s1_wvalid = vlSelfRef.s1_wvalid;
    vlSelfRef.clint_init__DOT__s_wvalid = vlSelfRef.s1_wvalid;
    vlSelfRef.xbar_init__DOT__s1_awvalid = vlSelfRef.s1_awvalid;
    vlSelfRef.clint_init__DOT__s_awvalid = vlSelfRef.s1_awvalid;
    vlSelfRef.xbar_init__DOT__s1_wstrb = vlSelfRef.s1_wstrb;
    vlSelfRef.clint_init__DOT__s_wstrb = vlSelfRef.s1_wstrb;
    vlSelfRef.xbar_init__DOT__s1_wdata = vlSelfRef.s1_wdata;
    vlSelfRef.clint_init__DOT__s_wdata = vlSelfRef.s1_wdata;
    vlSelfRef.xbar_init__DOT__s1_awaddr = vlSelfRef.s1_awaddr;
    vlSelfRef.clint_init__DOT__s_awaddr = vlSelfRef.s1_awaddr;
    vlSelfRef.xbar_init__DOT__s1_arvalid = vlSelfRef.s1_arvalid;
    vlSelfRef.clint_init__DOT__s_arvalid = vlSelfRef.s1_arvalid;
    vlSelfRef.xbar_init__DOT__s1_araddr = vlSelfRef.s1_araddr;
    vlSelfRef.clint_init__DOT__s_araddr = vlSelfRef.s1_araddr;
    vlSelfRef.xbar_init__DOT__s0_wdata = vlSelfRef.io_master_wdata;
    vlSelfRef.xbar_init__DOT__s0_wstrb = vlSelfRef.io_master_wstrb;
    vlSelfRef.xbar_init__DOT__s0_wvalid = vlSelfRef.io_master_wvalid;
    vlSelfRef.xbar_init__DOT__s0_awvalid = vlSelfRef.io_master_awvalid;
    vlSelfRef.xbar_init__DOT__s0_awaddr = vlSelfRef.io_master_awaddr;
    vlSelfRef.xbar_init__DOT__s0_arvalid = vlSelfRef.io_master_arvalid;
    vlSelfRef.xbar_init__DOT__s0_araddr = vlSelfRef.io_master_araddr;
    vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__gpr_wdata 
        = vlSelfRef.IDU_init__DOT__gpr_wdata_total;
    vlSelfRef.IFU_init__DOT__npc = vlSelfRef.npc;
    vlSelfRef.dnpc = vlSelfRef.npc;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25080218___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_ysyx_25080218* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25080218___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.m0_rdata = 0U;
    vlSelfRef.m0_rresp = 0U;
    vlSelfRef.m1_rdata = 0U;
    vlSelfRef.m1_rresp = 0U;
    vlSelfRef.m1_bresp = 0U;
    if (vlSelfRef.xbar_init__DOT__s0_w_busy) {
        vlSelfRef.m1_bresp = vlSelfRef.io_master_bresp;
        vlSelfRef.m1_bvalid = 0U;
        vlSelfRef.m1_bvalid = vlSelfRef.io_master_bvalid;
    } else {
        vlSelfRef.m1_bvalid = 0U;
    }
    if (vlSelfRef.xbar_init__DOT__s1_w_busy) {
        vlSelfRef.m1_bresp = vlSelfRef.s1_bresp;
        vlSelfRef.m1_bvalid = vlSelfRef.s1_bvalid;
    }
    vlSelfRef.m0_rvalid = 0U;
    if (vlSelfRef.xbar_init__DOT__s0_r_busy) {
        if ((1U & (~ (IData)(vlSelfRef.xbar_init__DOT__s0_r_owner)))) {
            vlSelfRef.m0_rdata = vlSelfRef.io_master_rdata;
            vlSelfRef.m0_rresp = vlSelfRef.io_master_rresp;
            vlSelfRef.m0_rvalid = vlSelfRef.io_master_rvalid;
        }
        vlSelfRef.m1_rvalid = 0U;
        if (vlSelfRef.xbar_init__DOT__s0_r_owner) {
            vlSelfRef.m1_rdata = vlSelfRef.io_master_rdata;
            vlSelfRef.m1_rresp = vlSelfRef.io_master_rresp;
            vlSelfRef.m1_rvalid = vlSelfRef.io_master_rvalid;
        }
    } else {
        vlSelfRef.m1_rvalid = 0U;
    }
    if (vlSelfRef.xbar_init__DOT__s1_r_busy) {
        if ((1U & (~ (IData)(vlSelfRef.xbar_init__DOT__s1_r_owner)))) {
            vlSelfRef.m0_rdata = vlSelfRef.s1_rdata;
            vlSelfRef.m0_rresp = vlSelfRef.s1_rresp;
            vlSelfRef.m0_rvalid = vlSelfRef.s1_rvalid;
        }
        if (vlSelfRef.xbar_init__DOT__s1_r_owner) {
            vlSelfRef.m1_rdata = vlSelfRef.s1_rdata;
            vlSelfRef.m1_rresp = vlSelfRef.s1_rresp;
            vlSelfRef.m1_rvalid = vlSelfRef.s1_rvalid;
        }
    }
    vlSelfRef.m0_arready = 0U;
    if ((1U & (~ (IData)(vlSelfRef.xbar_init__DOT__s0_r_busy)))) {
        if (vlSelfRef.xbar_init__DOT__m0_rreq_s0) {
            vlSelfRef.m0_arready = vlSelfRef.io_master_arready;
        }
    }
    vlSelfRef.m1_awready = 0U;
    if ((1U & (~ (IData)(vlSelfRef.xbar_init__DOT__s0_w_busy)))) {
        vlSelfRef.m1_wready = 0U;
        if ((((IData)(vlSelfRef.m1_awvalid) & (IData)(vlSelfRef.m1_wvalid)) 
             & (IData)(vlSelfRef.xbar_init__DOT__m1_w_s0))) {
            vlSelfRef.m1_awready = vlSelfRef.io_master_awready;
            vlSelfRef.m1_wready = vlSelfRef.io_master_wready;
        }
    } else {
        vlSelfRef.m1_wready = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.xbar_init__DOT__s1_w_busy)))) {
        if ((((IData)(vlSelfRef.m1_awvalid) & (IData)(vlSelfRef.m1_wvalid)) 
             & (IData)(vlSelfRef.xbar_init__DOT__m1_w_s1))) {
            vlSelfRef.m1_awready = vlSelfRef.s1_awready;
            vlSelfRef.m1_wready = vlSelfRef.s1_wready;
        }
    }
    vlSelfRef.m1_arready = 0U;
    if ((1U & (~ (IData)(vlSelfRef.xbar_init__DOT__s0_r_busy)))) {
        if ((1U & (~ (IData)(vlSelfRef.xbar_init__DOT__m0_rreq_s0)))) {
            if (vlSelfRef.xbar_init__DOT__m1_rreq_s0) {
                vlSelfRef.m1_arready = vlSelfRef.io_master_arready;
            }
        }
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
    if (vlSelfRef.reset) {
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
    } else if (((IData)(vlSelfRef.gpr_we) & (0U != (IData)(vlSelfRef.gpr_waddr)))) {
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
    vlSelfRef.IFU_init__DOT__RDATA = vlSelfRef.m0_rdata;
    vlSelfRef.xbar_init__DOT__m0_rdata = vlSelfRef.m0_rdata;
    vlSelfRef.IFU_init__DOT__RRESP = vlSelfRef.m0_rresp;
    vlSelfRef.xbar_init__DOT__m0_rresp = vlSelfRef.m0_rresp;
    vlSelfRef.MAU_init__DOT__RDATA = vlSelfRef.m1_rdata;
    vlSelfRef.xbar_init__DOT__m1_rdata = vlSelfRef.m1_rdata;
    vlSelfRef.MAU_init__DOT__RRESP = vlSelfRef.m1_rresp;
    vlSelfRef.xbar_init__DOT__m1_rresp = vlSelfRef.m1_rresp;
    vlSelfRef.MAU_init__DOT__BRESP = vlSelfRef.m1_bresp;
    vlSelfRef.xbar_init__DOT__m1_bresp = vlSelfRef.m1_bresp;
    vlSelfRef.MAU_init__DOT__BVALID = vlSelfRef.m1_bvalid;
    vlSelfRef.xbar_init__DOT__m1_bvalid = vlSelfRef.m1_bvalid;
    vlSelfRef.IFU_init__DOT__RVALID = vlSelfRef.m0_rvalid;
    vlSelfRef.xbar_init__DOT__m0_rvalid = vlSelfRef.m0_rvalid;
    vlSelfRef.MAU_init__DOT__RVALID = vlSelfRef.m1_rvalid;
    vlSelfRef.xbar_init__DOT__m1_rvalid = vlSelfRef.m1_rvalid;
    vlSelfRef.IFU_init__DOT__ARREADY = vlSelfRef.m0_arready;
    vlSelfRef.xbar_init__DOT__m0_arready = vlSelfRef.m0_arready;
    vlSelfRef.MAU_init__DOT__AWREADY = vlSelfRef.m1_awready;
    vlSelfRef.xbar_init__DOT__m1_awready = vlSelfRef.m1_awready;
    vlSelfRef.MAU_init__DOT__WREADY = vlSelfRef.m1_wready;
    vlSelfRef.xbar_init__DOT__m1_wready = vlSelfRef.m1_wready;
    vlSelfRef.MAU_init__DOT__ARREADY = vlSelfRef.m1_arready;
    vlSelfRef.xbar_init__DOT__m1_arready = vlSelfRef.m1_arready;
}

VL_INLINE_OPT void VysyxSoCFull_ysyx_25080218___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_ysyx_25080218* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25080218___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.reset) {
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
    } else if ((1U & (~ ((IData)(vlSelfRef.gpr_we) 
                         & (0U != (IData)(vlSelfRef.gpr_waddr)))))) {
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
}
