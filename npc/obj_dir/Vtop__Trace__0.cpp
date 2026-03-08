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
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[21]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[22]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[23]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[24]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[25]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[26]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[27]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[28]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[29]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[30]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR_diff[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+32,(vlSelfRef.top__DOT__Ifu2Idu_valid));
        bufp->chgIData(oldp+33,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[1]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[2]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[3]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[4]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[5]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[6]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[7]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[8]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[9]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[10]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[11]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[12]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[13]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[14]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[15]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[16]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[17]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[18]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[19]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[20]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[21]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[22]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[23]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[24]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[25]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[26]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[27]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[28]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[29]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[30]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[31]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__i),32);
        bufp->chgBit(oldp+66,(vlSelfRef.top__DOT__IFU_init__DOT__valid_rst));
        bufp->chgBit(oldp+67,(vlSelfRef.top__DOT__IFU_init__DOT__state));
        bufp->chgBit(oldp+68,(vlSelfRef.top__DOT__IFU_init__DOT__ifu_reqValid));
        bufp->chgBit(oldp+69,(vlSelfRef.top__DOT__IFU_init__DOT__ifu_respValid));
        bufp->chgCData(oldp+70,(vlSelfRef.top__DOT__IFU_init__DOT__resp_cnt),8);
        bufp->chgBit(oldp+71,(vlSelfRef.top__DOT__MAU_init__DOT__lsu_reqValid));
        bufp->chgIData(oldp+72,(vlSelfRef.top__DOT__MAU_init__DOT__rdata_r),32);
        bufp->chgBit(oldp+73,(vlSelfRef.top__DOT__MAU_init__DOT__mem_state));
        bufp->chgBit(oldp+74,(vlSelfRef.top__DOT__MAU_init__DOT__lsu_respValid));
        bufp->chgBit(oldp+75,(vlSelfRef.top__DOT__MAU_init__DOT__lsu_respValid_r));
        bufp->chgCData(oldp+76,(vlSelfRef.top__DOT__MAU_init__DOT__resp_cnt),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+77,(vlSelfRef.top__DOT__IDU_init__DOT__mstatus),32);
        bufp->chgIData(oldp+78,(vlSelfRef.top__DOT__IDU_init__DOT__mtvec),32);
        bufp->chgIData(oldp+79,(vlSelfRef.top__DOT__IDU_init__DOT__mepc),32);
        bufp->chgIData(oldp+80,(vlSelfRef.top__DOT__IDU_init__DOT__mcause),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+81,(vlSelfRef.top__DOT__inst),32);
        bufp->chgIData(oldp+82,(((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lb)
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
        bufp->chgCData(oldp+83,((0x1fU & (vlSelfRef.top__DOT__inst 
                                          >> 7U))),5);
        bufp->chgBit(oldp+84,(vlSelfRef.top__DOT__gpr_we));
        bufp->chgIData(oldp+85,(vlSelfRef.top__DOT__alu_src1),32);
        bufp->chgIData(oldp+86,(vlSelfRef.top__DOT__alu_src2),32);
        bufp->chgSData(oldp+87,(vlSelfRef.top__DOT__alu_op),12);
        bufp->chgBit(oldp+88,(((0x33U == (0x7fU & vlSelfRef.top__DOT__inst)) 
                               | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_U) 
                                  | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I) 
                                     | ((IData)(vlSelfRef.top__DOT__is_jump) 
                                        | (IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_csr)))))));
        bufp->chgIData(oldp+89,(vlSelfRef.top__DOT__next_pc_jump),32);
        bufp->chgBit(oldp+90,(vlSelfRef.top__DOT__is_jump));
        bufp->chgCData(oldp+91,(vlSelfRef.top__DOT__load_ctrl),5);
        bufp->chgCData(oldp+92,(vlSelfRef.top__DOT__store_ctrl),3);
        bufp->chgIData(oldp+93,(vlSelfRef.top__DOT__rs1),32);
        bufp->chgCData(oldp+94,(((((IData)(vlSelfRef.top__DOT__EXU_init__DOT__is_bgeu) 
                                   << 5U) | (((IData)(vlSelfRef.top__DOT__EXU_init__DOT__is_bltu) 
                                              << 4U) 
                                             | ((IData)(vlSelfRef.top__DOT__EXU_init__DOT__is_bge) 
                                                << 3U))) 
                                 | (((IData)(vlSelfRef.top__DOT__EXU_init__DOT__is_blt) 
                                     << 2U) | (((IData)(vlSelfRef.top__DOT__EXU_init__DOT__is_bne) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.top__DOT__EXU_init__DOT__is_beq))))),6);
        bufp->chgIData(oldp+95,(vlSelfRef.top__DOT__branch_pc),32);
        bufp->chgBit(oldp+96,(vlSelfRef.top__DOT__is_ecall_mret));
        bufp->chgBit(oldp+97,(vlSelfRef.top__DOT__MAU_init__DOT____VdfgRegularize_h3fdffd83_0_0));
        bufp->chgBit(oldp+98,(vlSelfRef.top__DOT__branch_taken));
        bufp->chgIData(oldp+99,(vlSelfRef.top__DOT__rdata),32);
        bufp->chgBit(oldp+100,((1U & (IData)(vlSelfRef.top__DOT__alu_op))));
        bufp->chgBit(oldp+101,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                      >> 5U))));
        bufp->chgBit(oldp+102,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                      >> 2U))));
        bufp->chgBit(oldp+103,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                      >> 3U))));
        bufp->chgBit(oldp+104,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                      >> 4U))));
        bufp->chgBit(oldp+105,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                      >> 6U))));
        bufp->chgBit(oldp+106,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                      >> 7U))));
        bufp->chgBit(oldp+107,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                      >> 8U))));
        bufp->chgBit(oldp+108,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                      >> 1U))));
        bufp->chgBit(oldp+109,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                      >> 9U))));
        bufp->chgBit(oldp+110,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                      >> 0xaU))));
        bufp->chgIData(oldp+111,(((0x20U & (IData)(vlSelfRef.top__DOT__alu_op))
                                   ? ((IData)(vlSelfRef.top__DOT__is_jump)
                                       ? 0xfffffffbU
                                       : (~ vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))
                                   : vlSelfRef.top__DOT__alu_src2)),32);
        bufp->chgBit(oldp+112,(vlSelfRef.top__DOT__EXU_init__DOT__is_beq));
        bufp->chgBit(oldp+113,(vlSelfRef.top__DOT__EXU_init__DOT__is_bne));
        bufp->chgBit(oldp+114,(vlSelfRef.top__DOT__EXU_init__DOT__is_blt));
        bufp->chgBit(oldp+115,(vlSelfRef.top__DOT__EXU_init__DOT__is_bge));
        bufp->chgBit(oldp+116,(vlSelfRef.top__DOT__EXU_init__DOT__is_bltu));
        bufp->chgBit(oldp+117,(vlSelfRef.top__DOT__EXU_init__DOT__is_bgeu));
        bufp->chgBit(oldp+118,(vlSelfRef.top__DOT__EXU_init__DOT__equal));
        bufp->chgBit(oldp+119,(vlSelfRef.top__DOT__EXU_init__DOT__less_than_signed));
        bufp->chgBit(oldp+120,(vlSelfRef.top__DOT__EXU_init__DOT__less_than_unsigned));
        bufp->chgCData(oldp+121,((0x7fU & vlSelfRef.top__DOT__inst)),7);
        bufp->chgCData(oldp+122,((0x1fU & (vlSelfRef.top__DOT__inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+123,((0x1fU & (vlSelfRef.top__DOT__inst 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+124,((7U & (vlSelfRef.top__DOT__inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+125,((vlSelfRef.top__DOT__inst 
                                  >> 0x19U)),7);
        bufp->chgIData(oldp+126,((((- (IData)((vlSelfRef.top__DOT__inst 
                                               >> 0x1fU))) 
                                   << 0x14U) | (((0xff000U 
                                                  & vlSelfRef.top__DOT__inst) 
                                                 | (0x800U 
                                                    & (vlSelfRef.top__DOT__inst 
                                                       >> 9U))) 
                                                | (0x7feU 
                                                   & (vlSelfRef.top__DOT__inst 
                                                      >> 0x14U))))),32);
        bufp->chgIData(oldp+127,(vlSelfRef.top__DOT__IDU_init__DOT__imm_I),32);
        bufp->chgIData(oldp+128,((0xfffff000U & vlSelfRef.top__DOT__inst)),32);
        bufp->chgIData(oldp+129,((((- (IData)((vlSelfRef.top__DOT__inst 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelfRef.top__DOT__inst 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelfRef.top__DOT__inst 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+130,((((- (IData)((vlSelfRef.top__DOT__inst 
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
        bufp->chgBit(oldp+131,(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I));
        bufp->chgBit(oldp+132,((0x6fU == (0x7fU & vlSelfRef.top__DOT__inst))));
        bufp->chgBit(oldp+133,((0x63U == (0x7fU & vlSelfRef.top__DOT__inst))));
        bufp->chgBit(oldp+134,((0x23U == (0x7fU & vlSelfRef.top__DOT__inst))));
        bufp->chgBit(oldp+135,(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_U));
        bufp->chgBit(oldp+136,((0x33U == (0x7fU & vlSelfRef.top__DOT__inst))));
        bufp->chgBit(oldp+137,((0x100073U == vlSelfRef.top__DOT__inst)));
        bufp->chgBit(oldp+138,((0x17U == (0x7fU & vlSelfRef.top__DOT__inst))));
        bufp->chgBit(oldp+139,((0x37U == (0x7fU & vlSelfRef.top__DOT__inst))));
        bufp->chgBit(oldp+140,(vlSelfRef.top__DOT__IDU_init__DOT__is_jalr));
        bufp->chgBit(oldp+141,(((IData)((0x7033U == 
                                         (0xfe00707fU 
                                          & vlSelfRef.top__DOT__inst))) 
                                | (IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelfRef.top__DOT__inst))))));
        bufp->chgBit(oldp+142,(((IData)((0x6033U == 
                                         (0xfe00707fU 
                                          & vlSelfRef.top__DOT__inst))) 
                                | (IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelfRef.top__DOT__inst))))));
        bufp->chgBit(oldp+143,(((IData)((0x4033U == 
                                         (0xfe00707fU 
                                          & vlSelfRef.top__DOT__inst))) 
                                | (IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelfRef.top__DOT__inst))))));
        bufp->chgBit(oldp+144,(((IData)(vlSelfRef.top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_10) 
                                & (0x20U == (vlSelfRef.top__DOT__inst 
                                             >> 0x19U)))));
        bufp->chgBit(oldp+145,(vlSelfRef.top__DOT__IDU_init__DOT__is_sll));
        bufp->chgBit(oldp+146,(vlSelfRef.top__DOT__IDU_init__DOT__is_srl));
        bufp->chgBit(oldp+147,(vlSelfRef.top__DOT__IDU_init__DOT__is_sra));
        bufp->chgBit(oldp+148,((((0x33U == (0x7fU & vlSelfRef.top__DOT__inst)) 
                                 | (0x13U == (0x7fU 
                                              & vlSelfRef.top__DOT__inst))) 
                                & (IData)((0x2000U 
                                           == (0xfe007000U 
                                               & vlSelfRef.top__DOT__inst))))));
        bufp->chgBit(oldp+149,((((0x33U == (0x7fU & vlSelfRef.top__DOT__inst)) 
                                 | (0x13U == (0x7fU 
                                              & vlSelfRef.top__DOT__inst))) 
                                & (IData)((0x3000U 
                                           == (0xfe007000U 
                                               & vlSelfRef.top__DOT__inst))))));
        bufp->chgBit(oldp+150,(vlSelfRef.top__DOT__IDU_init__DOT__is_lb));
        bufp->chgBit(oldp+151,(vlSelfRef.top__DOT__IDU_init__DOT__is_lh));
        bufp->chgBit(oldp+152,(vlSelfRef.top__DOT__IDU_init__DOT__is_lw));
        bufp->chgBit(oldp+153,(vlSelfRef.top__DOT__IDU_init__DOT__is_lhu));
        bufp->chgBit(oldp+154,(vlSelfRef.top__DOT__IDU_init__DOT__is_lbu));
        bufp->chgBit(oldp+155,(vlSelfRef.top__DOT__IDU_init__DOT__is_sw));
        bufp->chgBit(oldp+156,(vlSelfRef.top__DOT__IDU_init__DOT__is_sh));
        bufp->chgBit(oldp+157,(vlSelfRef.top__DOT__IDU_init__DOT__is_sb));
        bufp->chgSData(oldp+158,((vlSelfRef.top__DOT__inst 
                                  >> 0x14U)),12);
        bufp->chgBit(oldp+159,((0x300U == (vlSelfRef.top__DOT__inst 
                                           >> 0x14U))));
        bufp->chgBit(oldp+160,((0x305U == (vlSelfRef.top__DOT__inst 
                                           >> 0x14U))));
        bufp->chgBit(oldp+161,((0x341U == (vlSelfRef.top__DOT__inst 
                                           >> 0x14U))));
        bufp->chgBit(oldp+162,((0x342U == (vlSelfRef.top__DOT__inst 
                                           >> 0x14U))));
        bufp->chgBit(oldp+163,(vlSelfRef.top__DOT__IDU_init__DOT__is_csrrw));
        bufp->chgBit(oldp+164,(vlSelfRef.top__DOT__IDU_init__DOT__is_csrrs));
        bufp->chgBit(oldp+165,(vlSelfRef.top__DOT__IDU_init__DOT__is_csr));
        bufp->chgBit(oldp+166,((0x73U == vlSelfRef.top__DOT__inst)));
        bufp->chgBit(oldp+167,((0x30200073U == vlSelfRef.top__DOT__inst)));
        bufp->chgBit(oldp+168,((0U != (IData)(vlSelfRef.top__DOT__store_ctrl))));
        bufp->chgBit(oldp+169,(vlSelfRef.top__DOT__MAU_init__DOT__is_mem_op));
        bufp->chgBit(oldp+170,(vlSelfRef.top__DOT__MAU_init__DOT__load_valid));
        bufp->chgCData(oldp+171,((((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sb) 
                                   & (0U == (3U & vlSelfRef.top__DOT__branch_pc)))
                                   ? 1U : (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sb) 
                                            & (1U == 
                                               (3U 
                                                & vlSelfRef.top__DOT__branch_pc)))
                                            ? 2U : 
                                           (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sb) 
                                             & (2U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.top__DOT__branch_pc)))
                                             ? 4U : 
                                            (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sb) 
                                              & (3U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.top__DOT__branch_pc)))
                                              ? 8U : 
                                             (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sh) 
                                               & (0U 
                                                  == 
                                                  (3U 
                                                   & vlSelfRef.top__DOT__branch_pc)))
                                               ? 3U
                                               : (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sh) 
                                                   & (2U 
                                                      == 
                                                      (3U 
                                                       & vlSelfRef.top__DOT__branch_pc)))
                                                   ? 0xcU
                                                   : 
                                                  ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sw)
                                                    ? 0xfU
                                                    : 0U)))))))),8);
    }
    bufp->chgBit(oldp+172,(vlSelfRef.clk));
    bufp->chgBit(oldp+173,(vlSelfRef.rst));
    bufp->chgIData(oldp+174,(vlSelfRef.pc),32);
    bufp->chgIData(oldp+175,(vlSelfRef.dnpc),32);
    bufp->chgBit(oldp+176,(vlSelfRef.commit));
    bufp->chgIData(oldp+177,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                             [(0x1fU & (vlSelfRef.top__DOT__inst 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+178,(vlSelfRef.top__DOT__next_pc_csr),32);
    bufp->chgIData(oldp+179,(((0x342U == (vlSelfRef.top__DOT__inst 
                                          >> 0x14U))
                               ? vlSelfRef.top__DOT__IDU_init__DOT__mcause
                               : ((0x341U == (vlSelfRef.top__DOT__inst 
                                              >> 0x14U))
                                   ? vlSelfRef.top__DOT__IDU_init__DOT__mepc
                                   : ((0x305U == (vlSelfRef.top__DOT__inst 
                                                  >> 0x14U))
                                       ? vlSelfRef.top__DOT__IDU_init__DOT__mtvec
                                       : ((0x300U == 
                                           (vlSelfRef.top__DOT__inst 
                                            >> 0x14U))
                                           ? vlSelfRef.top__DOT__IDU_init__DOT__mstatus
                                           : 0U))))),32);
    bufp->chgIData(oldp+180,(vlSelfRef.top__DOT__IDU_init__DOT__gpr_wdata_total),32);
    bufp->chgIData(oldp+181,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j),32);
    bufp->chgIData(oldp+182,(((IData)(4U) + vlSelfRef.pc)),32);
    bufp->chgBit(oldp+183,(((IData)(vlSelfRef.top__DOT__Ifu2Idu_valid) 
                            & (0U != (IData)(vlSelfRef.top__DOT__store_ctrl)))));
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
