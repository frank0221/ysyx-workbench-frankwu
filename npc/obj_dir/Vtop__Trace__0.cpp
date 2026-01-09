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
        bufp->chgIData(oldp+0,(vlSelfRef.top__DOT__inst),32);
        bufp->chgIData(oldp+1,(((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lb)
                                 ? (((- (IData)((1U 
                                                 & (vlSelfRef.top__DOT__rdata 
                                                    >> 7U)))) 
                                     << 8U) | (0xffU 
                                               & vlSelfRef.top__DOT__rdata))
                                 : ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lh)
                                     ? (((- (IData)(
                                                    (1U 
                                                     & (vlSelfRef.top__DOT__rdata 
                                                        >> 0xfU)))) 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & vlSelfRef.top__DOT__rdata))
                                     : ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lw)
                                         ? vlSelfRef.top__DOT__rdata
                                         : ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lbu)
                                             ? (0xffU 
                                                & vlSelfRef.top__DOT__rdata)
                                             : ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lhu)
                                                 ? 
                                                (0xffffU 
                                                 & vlSelfRef.top__DOT__rdata)
                                                 : vlSelfRef.top__DOT__branch_pc)))))),32);
        bufp->chgCData(oldp+2,((0x1fU & (vlSelfRef.top__DOT__inst 
                                         >> 7U))),5);
        bufp->chgBit(oldp+3,(((0x33U == (0x7fU & vlSelfRef.top__DOT__inst)) 
                              | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_U) 
                                 | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I) 
                                    | (IData)(vlSelfRef.top__DOT__is_jump))))));
        bufp->chgIData(oldp+4,(vlSelfRef.top__DOT__alu_src1),32);
        bufp->chgIData(oldp+5,(vlSelfRef.top__DOT__alu_src2),32);
        bufp->chgSData(oldp+6,(vlSelfRef.top__DOT__alu_op),12);
        bufp->chgBit(oldp+7,(vlSelfRef.top__DOT__is_jump));
        bufp->chgCData(oldp+8,(vlSelfRef.top__DOT__load_ctrl),5);
        bufp->chgCData(oldp+9,(vlSelfRef.top__DOT__store_ctrl),3);
        bufp->chgIData(oldp+10,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                [(0x1fU & (vlSelfRef.top__DOT__inst 
                                           >> 0x14U))]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                [(0x1fU & (vlSelfRef.top__DOT__inst 
                                           >> 0xfU))]),32);
        bufp->chgCData(oldp+12,(((((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_bgeu) 
                                   << 5U) | (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_bltu) 
                                              << 4U) 
                                             | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_bge) 
                                                << 3U))) 
                                 | (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_blt) 
                                     << 2U) | (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_bne) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_beq))))),6);
        bufp->chgIData(oldp+13,(vlSelfRef.top__DOT__branch_pc),32);
        bufp->chgBit(oldp+14,((((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_beq) 
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
                                              & (IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_bgeu)))))))));
        bufp->chgIData(oldp+15,(vlSelfRef.top__DOT__rdata),32);
        bufp->chgBit(oldp+16,((1U & (IData)(vlSelfRef.top__DOT__alu_op))));
        bufp->chgBit(oldp+17,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                     >> 5U))));
        bufp->chgBit(oldp+18,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                     >> 2U))));
        bufp->chgBit(oldp+19,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                     >> 3U))));
        bufp->chgBit(oldp+20,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                     >> 4U))));
        bufp->chgBit(oldp+21,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                     >> 6U))));
        bufp->chgBit(oldp+22,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                     >> 7U))));
        bufp->chgBit(oldp+23,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                     >> 8U))));
        bufp->chgBit(oldp+24,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                     >> 1U))));
        bufp->chgBit(oldp+25,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                     >> 9U))));
        bufp->chgBit(oldp+26,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                     >> 0xaU))));
        bufp->chgIData(oldp+27,(((0x20U & (IData)(vlSelfRef.top__DOT__alu_op))
                                  ? ((IData)(vlSelfRef.top__DOT__is_jump)
                                      ? 0xfffffffbU
                                      : (~ vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))
                                  : vlSelfRef.top__DOT__alu_src2)),32);
        bufp->chgBit(oldp+28,(vlSelfRef.top__DOT__IDU_init__DOT__is_beq));
        bufp->chgBit(oldp+29,(vlSelfRef.top__DOT__IDU_init__DOT__is_bne));
        bufp->chgBit(oldp+30,(vlSelfRef.top__DOT__IDU_init__DOT__is_blt));
        bufp->chgBit(oldp+31,(vlSelfRef.top__DOT__IDU_init__DOT__is_bge));
        bufp->chgBit(oldp+32,(vlSelfRef.top__DOT__IDU_init__DOT__is_bltu));
        bufp->chgBit(oldp+33,(vlSelfRef.top__DOT__IDU_init__DOT__is_bgeu));
        bufp->chgBit(oldp+34,(vlSelfRef.top__DOT__EXU_init__DOT__equal));
        bufp->chgBit(oldp+35,(vlSelfRef.top__DOT__EXU_init__DOT__less_than_signed));
        bufp->chgBit(oldp+36,(vlSelfRef.top__DOT__EXU_init__DOT__less_than_unsigned));
        bufp->chgCData(oldp+37,((0x7fU & vlSelfRef.top__DOT__inst)),7);
        bufp->chgCData(oldp+38,((0x1fU & (vlSelfRef.top__DOT__inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+39,((0x1fU & (vlSelfRef.top__DOT__inst 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+40,((7U & (vlSelfRef.top__DOT__inst 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+41,((vlSelfRef.top__DOT__inst 
                                 >> 0x19U)),7);
        bufp->chgIData(oldp+42,((((- (IData)((vlSelfRef.top__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0x14U) | (((0xff000U 
                                                 & vlSelfRef.top__DOT__inst) 
                                                | (0x800U 
                                                   & (vlSelfRef.top__DOT__inst 
                                                      >> 9U))) 
                                               | (0x7feU 
                                                  & (vlSelfRef.top__DOT__inst 
                                                     >> 0x14U))))),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top__DOT__IDU_init__DOT__imm_I),32);
        bufp->chgIData(oldp+44,((0xfffff000U & vlSelfRef.top__DOT__inst)),32);
        bufp->chgIData(oldp+45,((((- (IData)((vlSelfRef.top__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0xfe0U 
                                               & (vlSelfRef.top__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelfRef.top__DOT__inst 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+46,((((- (IData)((vlSelfRef.top__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0x800U 
                                               & (vlSelfRef.top__DOT__inst 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelfRef.top__DOT__inst 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelfRef.top__DOT__inst 
                                                       >> 7U)))))),32);
        bufp->chgBit(oldp+47,(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I));
        bufp->chgBit(oldp+48,((0x6fU == (0x7fU & vlSelfRef.top__DOT__inst))));
        bufp->chgBit(oldp+49,((0x63U == (0x7fU & vlSelfRef.top__DOT__inst))));
        bufp->chgBit(oldp+50,((0x23U == (0x7fU & vlSelfRef.top__DOT__inst))));
        bufp->chgBit(oldp+51,(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_U));
        bufp->chgBit(oldp+52,((0x33U == (0x7fU & vlSelfRef.top__DOT__inst))));
        bufp->chgBit(oldp+53,((0x100073U == vlSelfRef.top__DOT__inst)));
        bufp->chgBit(oldp+54,((0x17U == (0x7fU & vlSelfRef.top__DOT__inst))));
        bufp->chgBit(oldp+55,((0x37U == (0x7fU & vlSelfRef.top__DOT__inst))));
        bufp->chgBit(oldp+56,(vlSelfRef.top__DOT__IDU_init__DOT__is_jalr));
        bufp->chgBit(oldp+57,(((IData)((0x7033U == 
                                        (0xfe00707fU 
                                         & vlSelfRef.top__DOT__inst))) 
                               | (IData)((0x7013U == 
                                          (0x707fU 
                                           & vlSelfRef.top__DOT__inst))))));
        bufp->chgBit(oldp+58,(((IData)((0x6033U == 
                                        (0xfe00707fU 
                                         & vlSelfRef.top__DOT__inst))) 
                               | (IData)((0x6013U == 
                                          (0x707fU 
                                           & vlSelfRef.top__DOT__inst))))));
        bufp->chgBit(oldp+59,(((IData)((0x4033U == 
                                        (0xfe00707fU 
                                         & vlSelfRef.top__DOT__inst))) 
                               | (IData)((0x4013U == 
                                          (0x707fU 
                                           & vlSelfRef.top__DOT__inst))))));
        bufp->chgBit(oldp+60,(((IData)(vlSelfRef.top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_10) 
                               & (0x20U == (vlSelfRef.top__DOT__inst 
                                            >> 0x19U)))));
        bufp->chgBit(oldp+61,(vlSelfRef.top__DOT__IDU_init__DOT__is_sll));
        bufp->chgBit(oldp+62,(vlSelfRef.top__DOT__IDU_init__DOT__is_srl));
        bufp->chgBit(oldp+63,(vlSelfRef.top__DOT__IDU_init__DOT__is_sra));
        bufp->chgBit(oldp+64,((((0x33U == (0x7fU & vlSelfRef.top__DOT__inst)) 
                                | (0x13U == (0x7fU 
                                             & vlSelfRef.top__DOT__inst))) 
                               & (IData)((0x2000U == 
                                          (0xfe007000U 
                                           & vlSelfRef.top__DOT__inst))))));
        bufp->chgBit(oldp+65,((((0x33U == (0x7fU & vlSelfRef.top__DOT__inst)) 
                                | (0x13U == (0x7fU 
                                             & vlSelfRef.top__DOT__inst))) 
                               & (IData)((0x3000U == 
                                          (0xfe007000U 
                                           & vlSelfRef.top__DOT__inst))))));
        bufp->chgBit(oldp+66,(vlSelfRef.top__DOT__IDU_init__DOT__is_lb));
        bufp->chgBit(oldp+67,(vlSelfRef.top__DOT__IDU_init__DOT__is_lh));
        bufp->chgBit(oldp+68,(vlSelfRef.top__DOT__IDU_init__DOT__is_lw));
        bufp->chgBit(oldp+69,(vlSelfRef.top__DOT__IDU_init__DOT__is_lhu));
        bufp->chgBit(oldp+70,(vlSelfRef.top__DOT__IDU_init__DOT__is_lbu));
        bufp->chgBit(oldp+71,((IData)((0x2023U == (0x707fU 
                                                   & vlSelfRef.top__DOT__inst)))));
        bufp->chgBit(oldp+72,((IData)((0x1023U == (0x707fU 
                                                   & vlSelfRef.top__DOT__inst)))));
        bufp->chgBit(oldp+73,((IData)((0x23U == (0x707fU 
                                                 & vlSelfRef.top__DOT__inst)))));
        bufp->chgIData(oldp+74,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0]),32);
        bufp->chgIData(oldp+75,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[1]),32);
        bufp->chgIData(oldp+76,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[2]),32);
        bufp->chgIData(oldp+77,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[3]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[4]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[5]),32);
        bufp->chgIData(oldp+80,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[6]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[7]),32);
        bufp->chgIData(oldp+82,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[8]),32);
        bufp->chgIData(oldp+83,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[9]),32);
        bufp->chgIData(oldp+84,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[10]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[11]),32);
        bufp->chgIData(oldp+86,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[12]),32);
        bufp->chgIData(oldp+87,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[13]),32);
        bufp->chgIData(oldp+88,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[14]),32);
        bufp->chgIData(oldp+89,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[15]),32);
        bufp->chgIData(oldp+90,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[16]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[17]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[18]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[19]),32);
        bufp->chgIData(oldp+94,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[20]),32);
        bufp->chgIData(oldp+95,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[21]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[22]),32);
        bufp->chgIData(oldp+97,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[23]),32);
        bufp->chgIData(oldp+98,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[24]),32);
        bufp->chgIData(oldp+99,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[25]),32);
        bufp->chgIData(oldp+100,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[26]),32);
        bufp->chgIData(oldp+101,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[27]),32);
        bufp->chgIData(oldp+102,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[28]),32);
        bufp->chgIData(oldp+103,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[29]),32);
        bufp->chgIData(oldp+104,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[30]),32);
        bufp->chgIData(oldp+105,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[31]),32);
        bufp->chgIData(oldp+106,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__i),32);
        bufp->chgBit(oldp+107,(vlSelfRef.top__DOT__IFU_init__DOT__valid));
        bufp->chgBit(oldp+108,((0U != (IData)(vlSelfRef.top__DOT__store_ctrl))));
        bufp->chgBit(oldp+109,(((0U != (IData)(vlSelfRef.top__DOT__load_ctrl)) 
                                | (0U != (IData)(vlSelfRef.top__DOT__store_ctrl)))));
        bufp->chgCData(oldp+110,((((IData)((0x23U == 
                                            (0x707fU 
                                             & vlSelfRef.top__DOT__inst))) 
                                   & (0U == (3U & vlSelfRef.top__DOT__branch_pc)))
                                   ? 1U : (((IData)(
                                                    (0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelfRef.top__DOT__inst))) 
                                            & (1U == 
                                               (3U 
                                                & vlSelfRef.top__DOT__branch_pc)))
                                            ? 2U : 
                                           (((IData)(
                                                     (0x23U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.top__DOT__inst))) 
                                             & (2U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.top__DOT__branch_pc)))
                                             ? 4U : 
                                            (((IData)(
                                                      (0x23U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.top__DOT__inst))) 
                                              & (3U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.top__DOT__branch_pc)))
                                              ? 8U : 
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
                                               : (((IData)(
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
                                                    : 0U)))))))),8);
        bufp->chgIData(oldp+111,(vlSelfRef.top__DOT__MAU_init__DOT__rdata_r),32);
    }
    bufp->chgBit(oldp+112,(vlSelfRef.clk));
    bufp->chgBit(oldp+113,(vlSelfRef.rst));
    bufp->chgIData(oldp+114,(vlSelfRef.pc),32);
    bufp->chgIData(oldp+115,(vlSelfRef.dnpc),32);
    bufp->chgIData(oldp+116,(((0x6fU == (0x7fU & vlSelfRef.top__DOT__inst))
                               ? (vlSelfRef.pc + ((
                                                   (- (IData)(
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
                                      [(0x1fU & (vlSelfRef.top__DOT__inst 
                                                 >> 0xfU))] 
                                      + vlSelfRef.top__DOT__IDU_init__DOT__imm_I)
                                   : 0U))),32);
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
}
