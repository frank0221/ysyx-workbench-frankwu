// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.top__DOT__alu_src2),32);
        bufp->chgSData(oldp+1,(vlSelfRef.top__DOT__alu_op),12);
        bufp->chgBit(oldp+2,(vlSelfRef.top__DOT__is_jump));
        bufp->chgBit(oldp+3,((1U & (IData)(vlSelfRef.top__DOT__alu_op))));
        bufp->chgBit(oldp+4,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                    >> 1U))));
        bufp->chgIData(oldp+5,(vlSelfRef.top__DOT__IDU_init__DOT__imm_I),32);
        bufp->chgBit(oldp+6,(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I));
        bufp->chgBit(oldp+7,(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_U));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+8,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                               [vlSelfRef.top__DOT__IDU_init__DOT__src2]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[1]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[2]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[3]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[4]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[5]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[6]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[7]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[8]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[9]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[10]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[11]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[12]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[13]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[14]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[15]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[16]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[17]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[18]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[19]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[20]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[21]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[22]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[23]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[24]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[25]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[26]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[27]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[28]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[29]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[30]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[31]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__i),32);
        bufp->chgBit(oldp+42,(vlSelfRef.top__DOT__IFU_init__DOT__valid));
    }
    bufp->chgBit(oldp+43,(vlSelfRef.clk));
    bufp->chgBit(oldp+44,(vlSelfRef.rst));
    bufp->chgIData(oldp+45,(vlSelfRef.inst),32);
    bufp->chgIData(oldp+46,(vlSelfRef.pc),32);
    bufp->chgIData(oldp+47,(((1U & (IData)(vlSelfRef.top__DOT__alu_op))
                              ? (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I)
                                   ? vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                  [(0x1fU & (vlSelfRef.inst 
                                             >> 0xfU))]
                                   : ((0x17U == (0x7fU 
                                                 & vlSelfRef.inst))
                                       ? vlSelfRef.pc
                                       : ((0x37U == 
                                           (0x7fU & vlSelfRef.inst))
                                           ? 0U : ((IData)(vlSelfRef.top__DOT__is_jump)
                                                    ? vlSelfRef.pc
                                                    : 0U)))) 
                                 + vlSelfRef.top__DOT__alu_src2)
                              : ((2U & (IData)(vlSelfRef.top__DOT__alu_op))
                                  ? vlSelfRef.top__DOT__alu_src2
                                  : 0U))),32);
    bufp->chgCData(oldp+48,((0x1fU & (vlSelfRef.inst 
                                      >> 7U))),5);
    bufp->chgBit(oldp+49,(((0x33U == (0x7fU & vlSelfRef.inst)) 
                           | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_U) 
                              | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I) 
                                 | (IData)(vlSelfRef.top__DOT__is_jump))))));
    bufp->chgIData(oldp+50,(((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I)
                              ? vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                             [(0x1fU & (vlSelfRef.inst 
                                        >> 0xfU))] : 
                             ((0x17U == (0x7fU & vlSelfRef.inst))
                               ? vlSelfRef.pc : ((0x37U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelfRef.inst))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.top__DOT__is_jump)
                                                   ? vlSelfRef.pc
                                                   : 0U))))),32);
    bufp->chgIData(oldp+51,(((0x6fU == (0x7fU & vlSelfRef.inst))
                              ? (vlSelfRef.pc + (((- (IData)(
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
                              : ((0x67U == (0x7fU & vlSelfRef.inst))
                                  ? (vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                     [(0x1fU & (vlSelfRef.inst 
                                                >> 0xfU))] 
                                     + vlSelfRef.top__DOT__IDU_init__DOT__imm_I)
                                  : 0U))),32);
    bufp->chgCData(oldp+52,((0x7fU & vlSelfRef.inst)),7);
    bufp->chgCData(oldp+53,((0x1fU & (vlSelfRef.inst 
                                      >> 0xfU))),5);
    bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                            [(0x1fU & (vlSelfRef.inst 
                                       >> 0xfU))]),32);
    bufp->chgCData(oldp+55,((7U & (vlSelfRef.inst >> 0xcU))),3);
    bufp->chgCData(oldp+56,((vlSelfRef.inst >> 0x19U)),7);
    bufp->chgIData(oldp+57,((((- (IData)((vlSelfRef.inst 
                                          >> 0x1fU))) 
                              << 0x14U) | (((0xff000U 
                                             & vlSelfRef.inst) 
                                            | (0x800U 
                                               & (vlSelfRef.inst 
                                                  >> 9U))) 
                                           | (0x7feU 
                                              & (vlSelfRef.inst 
                                                 >> 0x14U))))),32);
    bufp->chgIData(oldp+58,((0xfffff000U & vlSelfRef.inst)),32);
    bufp->chgBit(oldp+59,((0x6fU == (0x7fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+60,((0x33U == (0x7fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+61,((0x100073U == vlSelfRef.inst)));
    bufp->chgBit(oldp+62,((0x17U == (0x7fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+63,((0x37U == (0x7fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+64,((0x67U == (0x7fU & vlSelfRef.inst))));
    bufp->chgIData(oldp+65,(((IData)(4U) + vlSelfRef.pc)),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
