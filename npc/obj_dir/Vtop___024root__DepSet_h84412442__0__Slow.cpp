// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void Vtop___024unit____Vdpiimwrap_halt_TOP____024unit();

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x100073U == vlSelfRef.inst)) {
        Vtop___024unit____Vdpiimwrap_halt_TOP____024unit();
    }
    vlSelfRef.top__DOT__IFU_init__DOT__next_pc = ((IData)(4U) 
                                                  + vlSelfRef.pc);
    vlSelfRef.top__DOT__IDU_init__DOT__imm_is_U = (
                                                   (0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.inst)) 
                                                   | (0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.inst)));
    vlSelfRef.top__DOT__IDU_init__DOT__imm_I = (((- (IData)(
                                                            (vlSelfRef.inst 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | (vlSelfRef.inst 
                                                   >> 0x14U));
    vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I = (
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.inst)) 
                                                   | ((0x13U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelfRef.inst)) 
                                                      | (0x67U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelfRef.inst))));
    vlSelfRef.top__DOT__is_jump = ((0x6fU == (0x7fU 
                                              & vlSelfRef.inst)) 
                                   | (0x67U == (0x7fU 
                                                & vlSelfRef.inst)));
    vlSelfRef.top__DOT__next_pc_jump = ((0x6fU == (0x7fU 
                                                   & vlSelfRef.inst))
                                         ? (vlSelfRef.pc 
                                            + (((- (IData)(
                                                           (vlSelfRef.inst 
                                                            >> 0x1fU))) 
                                                << 0x14U) 
                                               | (((0xff000U 
                                                    & vlSelfRef.inst) 
                                                   | (0x800U 
                                                      & (vlSelfRef.inst 
                                                         >> 9U))) 
                                                  | (0x7feU 
                                                     & (vlSelfRef.inst 
                                                        >> 0x14U)))))
                                         : ((0x67U 
                                             == (0x7fU 
                                                 & vlSelfRef.inst))
                                             ? (vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                                [(0x1fU 
                                                  & (vlSelfRef.inst 
                                                     >> 0xfU))] 
                                                + vlSelfRef.top__DOT__IDU_init__DOT__imm_I)
                                             : 0U));
    vlSelfRef.top__DOT__alu_op = ((0xffcU & (IData)(vlSelfRef.top__DOT__alu_op)) 
                                  | (((0x37U == (0x7fU 
                                                 & vlSelfRef.inst)) 
                                      << 1U) | ((IData)(
                                                        (0x33U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.inst))) 
                                                | ((0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.inst)) 
                                                   | ((IData)(
                                                              (0x13U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelfRef.inst))) 
                                                      | (IData)(vlSelfRef.top__DOT__is_jump))))));
    if (vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I) {
        vlSelfRef.top__DOT__alu_src1 = vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
            [(0x1fU & (vlSelfRef.inst >> 0xfU))];
        vlSelfRef.top__DOT__alu_src2 = vlSelfRef.top__DOT__IDU_init__DOT__imm_I;
    } else {
        vlSelfRef.top__DOT__alu_src1 = ((0x17U == (0x7fU 
                                                   & vlSelfRef.inst))
                                         ? vlSelfRef.pc
                                         : ((0x37U 
                                             == (0x7fU 
                                                 & vlSelfRef.inst))
                                             ? 0U : 
                                            ((IData)(vlSelfRef.top__DOT__is_jump)
                                              ? vlSelfRef.pc
                                              : 0U)));
        vlSelfRef.top__DOT__alu_src2 = ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_U)
                                         ? (0xfffff000U 
                                            & vlSelfRef.inst)
                                         : ((IData)(vlSelfRef.top__DOT__is_jump)
                                             ? 4U : 0U));
    }
}
