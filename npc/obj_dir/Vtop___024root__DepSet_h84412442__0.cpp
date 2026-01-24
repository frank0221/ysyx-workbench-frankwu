// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024root____Vdpiexp_top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__get_gpr_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ idx, IData/*31:0*/ &get_gpr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__get_gpr_TOP\n"); );
    // Init
    // Body
    get_gpr__Vfuncrtn = vlSymsp->TOP.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff
        [(0x1fU & idx)];
}

extern "C" int pmem_read(int raddr);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__IFU_init__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__IFU_init__DOT__pmem_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(raddr__Vcvt);
    pmem_read__Vfuncrtn = pmem_read__Vfuncrtn__Vcvt;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.rst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop___024unit____Vdpiimwrap_halt_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst) {
        vlSelfRef.pc = 0x80000000U;
        vlSelfRef.__Vdly__top__DOT__IFU_init__DOT__valid = 0U;
    } else if (vlSelfRef.top__DOT__IFU_init__DOT__valid) {
        vlSelfRef.pc = ((IData)(vlSelfRef.top__DOT__is_jump)
                         ? vlSelfRef.top__DOT__next_pc_jump
                         : ((IData)(vlSelfRef.top__DOT__branch_taken)
                             ? vlSelfRef.top__DOT__branch_pc
                             : ((IData)(vlSelfRef.top__DOT__is_ecall_mret)
                                 ? vlSelfRef.top__DOT__next_pc_csr
                                 : vlSelfRef.top__DOT__IFU_init__DOT__next_pc)));
    } else {
        vlSelfRef.pc = 0x80000000U;
        vlSelfRef.__Vdly__top__DOT__IFU_init__DOT__valid = 1U;
    }
    vlSelfRef.top__DOT__IFU_init__DOT__valid = vlSelfRef.__Vdly__top__DOT__IFU_init__DOT__valid;
    vlSelfRef.top__DOT__IFU_init__DOT__next_pc = ((IData)(4U) 
                                                  + vlSelfRef.pc);
    Vtop___024root____Vdpiimwrap_top__DOT__IFU_init__DOT__pmem_read_TOP(vlSelfRef.pc, vlSelfRef.__Vfunc_top__DOT__IFU_init__DOT__pmem_read__1__Vfuncout);
    vlSelfRef.top__DOT__inst = vlSelfRef.__Vfunc_top__DOT__IFU_init__DOT__pmem_read__1__Vfuncout;
    if ((0x100073U == vlSelfRef.top__DOT__inst)) {
        Vtop___024unit____Vdpiimwrap_halt_TOP____024unit();
    }
    vlSelfRef.top__DOT__rs1 = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
        [(0x1fU & (vlSelfRef.top__DOT__inst >> 0xfU))];
    vlSelfRef.top__DOT__is_ecall_mret = ((0x73U == vlSelfRef.top__DOT__inst) 
                                         | (0x30200073U 
                                            == vlSelfRef.top__DOT__inst));
    vlSelfRef.top__DOT__EXU_init__DOT__equal = (vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                                [(0x1fU 
                                                  & (vlSelfRef.top__DOT__inst 
                                                     >> 0xfU))] 
                                                == 
                                                vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                                [(0x1fU 
                                                  & (vlSelfRef.top__DOT__inst 
                                                     >> 0x14U))]);
    vlSelfRef.top__DOT__EXU_init__DOT__less_than_signed 
        = VL_LTS_III(32, vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                     [(0x1fU & (vlSelfRef.top__DOT__inst 
                                >> 0xfU))], vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                     [(0x1fU & (vlSelfRef.top__DOT__inst 
                                >> 0x14U))]);
    vlSelfRef.top__DOT__EXU_init__DOT__less_than_unsigned 
        = (vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
           [(0x1fU & (vlSelfRef.top__DOT__inst >> 0xfU))] 
           < vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
           [(0x1fU & (vlSelfRef.top__DOT__inst >> 0x14U))]);
    vlSelfRef.top__DOT__IDU_init__DOT__is_csrrs = (IData)(
                                                          (0x2073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_csrrw = (IData)(
                                                          (0x1073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_10 
        = (IData)((0x33U == (0x707fU & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_bgeu = (IData)(
                                                         (0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_bltu = (IData)(
                                                         (0x6063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_bge = (IData)(
                                                        (0x5063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_blt = (IData)(
                                                        (0x4063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_bne = (IData)(
                                                        (0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_beq = (IData)(
                                                        (0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__store_ctrl = (((IData)((0x2023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelfRef.top__DOT__inst))) 
                                       << 2U) | (((IData)(
                                                          (0x1023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.top__DOT__inst))) 
                                                  << 1U) 
                                                 | (IData)(
                                                           (0x23U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.top__DOT__inst)))));
    vlSelfRef.top__DOT__IDU_init__DOT__is_lhu = (IData)(
                                                        (0x5003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_lbu = (IData)(
                                                        (0x4003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_lw = (IData)(
                                                       (0x2003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_lh = (IData)(
                                                       (0x1003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_lb = (IData)(
                                                       (3U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__imm_I = (((- (IData)(
                                                            (vlSelfRef.top__DOT__inst 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | (vlSelfRef.top__DOT__inst 
                                                   >> 0x14U));
    vlSelfRef.top__DOT__IDU_init__DOT__imm_is_U = (
                                                   (0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.top__DOT__inst)) 
                                                   | (0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_sll = (((0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.top__DOT__inst)) 
                                                  | (0x13U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.top__DOT__inst))) 
                                                 & (IData)(
                                                           (0x1000U 
                                                            == 
                                                            (0xfe007000U 
                                                             & vlSelfRef.top__DOT__inst))));
    vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I = (
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.top__DOT__inst)) 
                                                   | ((0x13U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelfRef.top__DOT__inst)) 
                                                      | (0x67U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelfRef.top__DOT__inst))));
    vlSelfRef.top__DOT__IDU_init__DOT__is_jalr = (IData)(
                                                         (0x67U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_14 
        = (IData)((0x5033U == (0x707fU & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_15 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_csr = ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_csrrs) 
                                                 | (IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_csrrw));
    vlSelfRef.top__DOT__branch_taken = (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_beq) 
                                         & (IData)(vlSelfRef.top__DOT__EXU_init__DOT__equal)) 
                                        | (((~ (IData)(vlSelfRef.top__DOT__EXU_init__DOT__equal)) 
                                            & (IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_bne)) 
                                           | (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_blt) 
                                               & (IData)(vlSelfRef.top__DOT__EXU_init__DOT__less_than_signed)) 
                                              | (((~ (IData)(vlSelfRef.top__DOT__EXU_init__DOT__less_than_signed)) 
                                                  & (IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_bge)) 
                                                 | (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_bltu) 
                                                     & (IData)(vlSelfRef.top__DOT__EXU_init__DOT__less_than_unsigned)) 
                                                    | ((~ (IData)(vlSelfRef.top__DOT__EXU_init__DOT__less_than_unsigned)) 
                                                       & (IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_bgeu)))))));
    vlSelfRef.top__DOT__load_ctrl = ((((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lhu) 
                                       << 4U) | (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lbu) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lw) 
                                                    << 2U))) 
                                     | (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lh) 
                                         << 1U) | (IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lb)));
    vlSelfRef.top__DOT__next_pc_jump = ((0x6fU == (0x7fU 
                                                   & vlSelfRef.top__DOT__inst))
                                         ? (vlSelfRef.pc 
                                            + (((- (IData)(
                                                           (vlSelfRef.top__DOT__inst 
                                                            >> 0x1fU))) 
                                                << 0x14U) 
                                               | (((0xff000U 
                                                    & vlSelfRef.top__DOT__inst) 
                                                   | (0x800U 
                                                      & (vlSelfRef.top__DOT__inst 
                                                         >> 9U))) 
                                                  | (0x7feU 
                                                     & (vlSelfRef.top__DOT__inst 
                                                        >> 0x14U)))))
                                         : ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_jalr)
                                             ? (vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                                [(0x1fU 
                                                  & (vlSelfRef.top__DOT__inst 
                                                     >> 0xfU))] 
                                                + vlSelfRef.top__DOT__IDU_init__DOT__imm_I)
                                             : 0U));
    vlSelfRef.top__DOT__is_jump = ((0x6fU == (0x7fU 
                                              & vlSelfRef.top__DOT__inst)) 
                                   | (IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_jalr));
    vlSelfRef.top__DOT__IDU_init__DOT__is_srl = (((IData)(vlSelfRef.top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_14) 
                                                  | (IData)(vlSelfRef.top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_15)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelfRef.top__DOT__inst 
                                                     >> 0x19U)));
    vlSelfRef.top__DOT__IDU_init__DOT__is_sra = (((IData)(vlSelfRef.top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_14) 
                                                  | (IData)(vlSelfRef.top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_15)) 
                                                 & (0x20U 
                                                    == 
                                                    (vlSelfRef.top__DOT__inst 
                                                     >> 0x19U)));
    vlSelfRef.top__DOT__gpr_we = ((0x33U == (0x7fU 
                                             & vlSelfRef.top__DOT__inst)) 
                                  | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_U) 
                                     | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I) 
                                        | ((IData)(vlSelfRef.top__DOT__is_jump) 
                                           | (IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_csr)))));
    if (vlSelfRef.rst) {
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x20U;
    } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__gpr_we) 
                         & (0U != (0x1fU & (vlSelfRef.top__DOT__inst 
                                            >> 7U))))))) {
        vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j = 0x20U;
    }
    vlSelfRef.top__DOT__alu_op = ((0x800U & (IData)(vlSelfRef.top__DOT__alu_op)) 
                                  | (((((((0x33U == 
                                           (0x7fU & vlSelfRef.top__DOT__inst)) 
                                          | (0x13U 
                                             == (0x7fU 
                                                 & vlSelfRef.top__DOT__inst))) 
                                         & (IData)(
                                                   (0x3000U 
                                                    == 
                                                    (0xfe007000U 
                                                     & vlSelfRef.top__DOT__inst)))) 
                                        << 0xaU) | 
                                       (((((0x33U == 
                                            (0x7fU 
                                             & vlSelfRef.top__DOT__inst)) 
                                           | (0x13U 
                                              == (0x7fU 
                                                  & vlSelfRef.top__DOT__inst))) 
                                          & (IData)(
                                                    (0x2000U 
                                                     == 
                                                     (0xfe007000U 
                                                      & vlSelfRef.top__DOT__inst)))) 
                                         << 9U) | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sra) 
                                                   << 8U))) 
                                      | (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_srl) 
                                          << 7U) | 
                                         (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sll) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_10) 
                                            & (0x20U 
                                               == (vlSelfRef.top__DOT__inst 
                                                   >> 0x19U))) 
                                           << 5U)))) 
                                     | (((((IData)(
                                                   (0x4033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelfRef.top__DOT__inst))) 
                                           | (IData)(
                                                     (0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.top__DOT__inst)))) 
                                          << 4U) | 
                                         ((((IData)(
                                                    (0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelfRef.top__DOT__inst))) 
                                            | (IData)(
                                                      (0x6013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.top__DOT__inst)))) 
                                           << 3U) | 
                                          (((IData)(
                                                    (0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelfRef.top__DOT__inst))) 
                                            | (IData)(
                                                      (0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.top__DOT__inst)))) 
                                           << 2U))) 
                                        | (((0x37U 
                                             == (0x7fU 
                                                 & vlSelfRef.top__DOT__inst)) 
                                            << 1U) 
                                           | (((IData)(vlSelfRef.top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_10) 
                                               & (0U 
                                                  == 
                                                  (vlSelfRef.top__DOT__inst 
                                                   >> 0x19U))) 
                                              | ((0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelfRef.top__DOT__inst)) 
                                                 | ((IData)(
                                                            (0x13U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.top__DOT__inst))) 
                                                    | ((IData)(vlSelfRef.top__DOT__is_jump) 
                                                       | ((0U 
                                                           != (IData)(vlSelfRef.top__DOT__load_ctrl)) 
                                                          | ((0U 
                                                              != (IData)(vlSelfRef.top__DOT__store_ctrl)) 
                                                             | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_bgeu) 
                                                                | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_bltu) 
                                                                   | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_bge) 
                                                                      | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_blt) 
                                                                         | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_bne) 
                                                                            | (IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_beq))))))))))))))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 = (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I) 
                                                 & ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sll) 
                                                    | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_srl) 
                                                       | (IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sra))))
                                                 ? 
                                                (0x1fU 
                                                 & (vlSelfRef.top__DOT__inst 
                                                    >> 0x14U))
                                                 : 
                                                ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I)
                                                  ? vlSelfRef.top__DOT__IDU_init__DOT__imm_I
                                                  : 
                                                 ((0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.top__DOT__inst))
                                                   ? 
                                                  vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                                  [
                                                  (0x1fU 
                                                   & (vlSelfRef.top__DOT__inst 
                                                      >> 0x14U))]
                                                   : 
                                                  ((0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.top__DOT__inst))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelfRef.top__DOT__inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelfRef.top__DOT__inst 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelfRef.top__DOT__inst 
                                                             >> 7U))))
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.top__DOT__inst))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelfRef.top__DOT__inst 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0x800U 
                                                         & (vlSelfRef.top__DOT__inst 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelfRef.top__DOT__inst 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelfRef.top__DOT__inst 
                                                                 >> 7U)))))
                                                     : 
                                                    ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_U)
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelfRef.top__DOT__inst)
                                                      : 0U))))));
    if (vlSelfRef.top__DOT__is_jump) {
        vlSelfRef.top__DOT__alu_src1 = vlSelfRef.pc;
        vlSelfRef.top__DOT__alu_src2 = 4U;
    } else {
        vlSelfRef.top__DOT__alu_src1 = ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I)
                                         ? vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                        [(0x1fU & (vlSelfRef.top__DOT__inst 
                                                   >> 0xfU))]
                                         : ((0x33U 
                                             == (0x7fU 
                                                 & vlSelfRef.top__DOT__inst))
                                             ? vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                            [(0x1fU 
                                              & (vlSelfRef.top__DOT__inst 
                                                 >> 0xfU))]
                                             : ((0x23U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelfRef.top__DOT__inst))
                                                 ? 
                                                vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                                [(0x1fU 
                                                  & (vlSelfRef.top__DOT__inst 
                                                     >> 0xfU))]
                                                 : 
                                                ((0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelfRef.top__DOT__inst))
                                                  ? vlSelfRef.pc
                                                  : 
                                                 ((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.top__DOT__inst))
                                                   ? vlSelfRef.pc
                                                   : 0U)))));
        vlSelfRef.top__DOT__alu_src2 = vlSelfRef.__VdfgRegularize_hd87f99a1_0_0;
    }
    vlSelfRef.top__DOT__EXU_init__DOT____VdfgRegularize_he932f07c_0_0 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__alu_src1, vlSelfRef.top__DOT__alu_src2);
    vlSelfRef.top__DOT__branch_pc = ((IData)((0U != 
                                              (0x21U 
                                               & (IData)(vlSelfRef.top__DOT__alu_op))))
                                      ? (vlSelfRef.top__DOT__alu_src1 
                                         + (((0x20U 
                                              & (IData)(vlSelfRef.top__DOT__alu_op))
                                              ? ((IData)(vlSelfRef.top__DOT__is_jump)
                                                  ? 0xfffffffbU
                                                  : 
                                                 (~ vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))
                                              : vlSelfRef.top__DOT__alu_src2) 
                                            + (1U & 
                                               ((IData)(vlSelfRef.top__DOT__alu_op) 
                                                >> 5U))))
                                      : ((2U & (IData)(vlSelfRef.top__DOT__alu_op))
                                          ? vlSelfRef.top__DOT__alu_src2
                                          : ((4U & (IData)(vlSelfRef.top__DOT__alu_op))
                                              ? (vlSelfRef.top__DOT__alu_src1 
                                                 & vlSelfRef.top__DOT__alu_src2)
                                              : ((8U 
                                                  & (IData)(vlSelfRef.top__DOT__alu_op))
                                                  ? 
                                                 (vlSelfRef.top__DOT__alu_src1 
                                                  | vlSelfRef.top__DOT__alu_src2)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.top__DOT__alu_op))
                                                   ? 
                                                  (vlSelfRef.top__DOT__alu_src1 
                                                   ^ vlSelfRef.top__DOT__alu_src2)
                                                   : 
                                                  ((0x40U 
                                                    & (IData)(vlSelfRef.top__DOT__alu_op))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__alu_src1, vlSelfRef.top__DOT__alu_src2)
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSelfRef.top__DOT__alu_op))
                                                     ? vlSelfRef.top__DOT__EXU_init__DOT____VdfgRegularize_he932f07c_0_0
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSelfRef.top__DOT__alu_op))
                                                      ? 
                                                     ((vlSelfRef.top__DOT__alu_src1 
                                                       >> 0x1fU)
                                                       ? 
                                                      (~ 
                                                       VL_SHIFTR_III(32,32,32, 
                                                                     (~ vlSelfRef.top__DOT__alu_src1), vlSelfRef.top__DOT__alu_src2))
                                                       : vlSelfRef.top__DOT__EXU_init__DOT____VdfgRegularize_he932f07c_0_0)
                                                      : 
                                                     ((0x200U 
                                                       & (IData)(vlSelfRef.top__DOT__alu_op))
                                                       ? 
                                                      (VL_LTS_III(32, vlSelfRef.top__DOT__alu_src1, vlSelfRef.top__DOT__alu_src2)
                                                        ? 1U
                                                        : 0U)
                                                       : 
                                                      ((0x400U 
                                                        & (IData)(vlSelfRef.top__DOT__alu_op))
                                                        ? 
                                                       ((vlSelfRef.top__DOT__alu_src1 
                                                         < vlSelfRef.top__DOT__alu_src2)
                                                         ? 1U
                                                         : 0U)
                                                        : 0U))))))))));
    if ((0U != (IData)(vlSelfRef.top__DOT__store_ctrl))) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelfRef.top__DOT__branch_pc, 
                                                               vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                                               [
                                                               (0x1fU 
                                                                & (vlSelfRef.top__DOT__inst 
                                                                   >> 0x14U))], 
                                                               (((IData)(
                                                                         (0x23U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelfRef.top__DOT__inst))) 
                                                                 & (0U 
                                                                    == 
                                                                    (3U 
                                                                     & vlSelfRef.top__DOT__branch_pc)))
                                                                 ? 1U
                                                                 : 
                                                                (((IData)(
                                                                          (0x23U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelfRef.top__DOT__inst))) 
                                                                  & (1U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSelfRef.top__DOT__branch_pc)))
                                                                  ? 2U
                                                                  : 
                                                                 (((IData)(
                                                                           (0x23U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelfRef.top__DOT__inst))) 
                                                                   & (2U 
                                                                      == 
                                                                      (3U 
                                                                       & vlSelfRef.top__DOT__branch_pc)))
                                                                   ? 4U
                                                                   : 
                                                                  (((IData)(
                                                                            (0x23U 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelfRef.top__DOT__inst))) 
                                                                    & (3U 
                                                                       == 
                                                                       (3U 
                                                                        & vlSelfRef.top__DOT__branch_pc)))
                                                                    ? 8U
                                                                    : 
                                                                   (((IData)(
                                                                             (0x1023U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelfRef.top__DOT__inst))) 
                                                                     & (0U 
                                                                        == 
                                                                        (3U 
                                                                         & vlSelfRef.top__DOT__branch_pc)))
                                                                     ? 3U
                                                                     : 
                                                                    (((IData)(
                                                                              (0x1023U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelfRef.top__DOT__inst))) 
                                                                      & (2U 
                                                                         == 
                                                                         (3U 
                                                                          & vlSelfRef.top__DOT__branch_pc)))
                                                                      ? 0xcU
                                                                      : 
                                                                     ((IData)(
                                                                              (0x2023U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelfRef.top__DOT__inst)))
                                                                       ? 0xfU
                                                                       : 0U))))))));
    }
    if (((0U != (IData)(vlSelfRef.top__DOT__load_ctrl)) 
         | (0U != (IData)(vlSelfRef.top__DOT__store_ctrl)))) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.top__DOT__branch_pc, vlSelfRef.__Vfunc_pmem_read__2__Vfuncout);
        vlSelfRef.top__DOT__MAU_init__DOT__rdata_r 
            = vlSelfRef.__Vfunc_pmem_read__2__Vfuncout;
    } else {
        vlSelfRef.top__DOT__MAU_init__DOT__rdata_r = 0U;
    }
    vlSelfRef.top__DOT__rdata = ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lb)
                                  ? (vlSelfRef.top__DOT__MAU_init__DOT__rdata_r 
                                     & (0xffU | ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                                                [
                                                                (0x1fU 
                                                                 & (vlSelfRef.top__DOT__inst 
                                                                    >> 0x14U))] 
                                                                >> 7U)))) 
                                                 << 8U)))
                                  : ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lh)
                                      ? (vlSelfRef.top__DOT__MAU_init__DOT__rdata_r 
                                         & (0xffffU 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                                              [
                                                              (0x1fU 
                                                               & (vlSelfRef.top__DOT__inst 
                                                                  >> 0x14U))] 
                                                              >> 0xfU)))) 
                                               << 0x10U)))
                                      : ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lw)
                                          ? vlSelfRef.top__DOT__MAU_init__DOT__rdata_r
                                          : ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lbu)
                                              ? (0xffU 
                                                 & vlSelfRef.top__DOT__MAU_init__DOT__rdata_r)
                                              : ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lhu)
                                                  ? 
                                                 (0xffffU 
                                                  & vlSelfRef.top__DOT__MAU_init__DOT__rdata_r)
                                                  : 0U)))));
}
