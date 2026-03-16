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
        bufp->chgCData(oldp+32,(vlSelfRef.top__DOT__s1_bresp),2);
        bufp->chgIData(oldp+33,(vlSelfRef.top__DOT__s1_rdata),32);
        bufp->chgCData(oldp+34,(vlSelfRef.top__DOT__s1_rresp),2);
        bufp->chgBit(oldp+35,(vlSelfRef.top__DOT__s2_arready));
        bufp->chgIData(oldp+36,(vlSelfRef.top__DOT__s2_rdata),32);
        bufp->chgCData(oldp+37,(vlSelfRef.top__DOT__s2_rresp),2);
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[1]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[2]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[3]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[4]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[5]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[6]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[7]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[8]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[9]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[10]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[11]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[12]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[13]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[14]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[15]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[16]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[17]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[18]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[19]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[20]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[21]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[22]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[23]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[24]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[25]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[26]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[27]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[28]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[29]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[30]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[31]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__i),32);
        bufp->chgBit(oldp+71,(vlSelfRef.top__DOT__IFU_init__DOT__valid_rst));
        bufp->chgBit(oldp+72,(vlSelfRef.top__DOT__clint_init__DOT__s_busy));
        bufp->chgQData(oldp+73,(vlSelfRef.top__DOT__clint_init__DOT__mtime),64);
        bufp->chgBit(oldp+75,(vlSelfRef.top__DOT__uart_init__DOT__aw_holding));
        bufp->chgBit(oldp+76,(vlSelfRef.top__DOT__uart_init__DOT__w_holding));
        bufp->chgIData(oldp+77,(vlSelfRef.top__DOT__uart_init__DOT__awaddr_hold),32);
        bufp->chgIData(oldp+78,(vlSelfRef.top__DOT__uart_init__DOT__wdata_hold),32);
        bufp->chgCData(oldp+79,(vlSelfRef.top__DOT__uart_init__DOT__wstrb_hold),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+80,(vlSelfRef.top__DOT__IDU_init__DOT__mstatus),32);
        bufp->chgIData(oldp+81,(vlSelfRef.top__DOT__IDU_init__DOT__mtvec),32);
        bufp->chgIData(oldp+82,(vlSelfRef.top__DOT__IDU_init__DOT__mepc),32);
        bufp->chgIData(oldp+83,(vlSelfRef.top__DOT__IDU_init__DOT__mcause),32);
        bufp->chgBit(oldp+84,(vlSelfRef.top__DOT__xbar_init__DOT__s0_r_owner));
        bufp->chgBit(oldp+85,(vlSelfRef.top__DOT__xbar_init__DOT__s0_r_busy));
        bufp->chgBit(oldp+86,(vlSelfRef.top__DOT__xbar_init__DOT__s1_r_owner));
        bufp->chgBit(oldp+87,(vlSelfRef.top__DOT__xbar_init__DOT__s1_r_busy));
        bufp->chgBit(oldp+88,(vlSelfRef.top__DOT__xbar_init__DOT__s2_r_busy));
        bufp->chgBit(oldp+89,(vlSelfRef.top__DOT__xbar_init__DOT__s2_r_owner));
        bufp->chgBit(oldp+90,(vlSelfRef.top__DOT__xbar_init__DOT__s0_w_busy));
        bufp->chgBit(oldp+91,(vlSelfRef.top__DOT__xbar_init__DOT__s1_w_busy));
        bufp->chgBit(oldp+92,(vlSelfRef.top__DOT__xbar_init__DOT__s2_w_busy));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+93,(vlSelfRef.top__DOT__inst),32);
        bufp->chgIData(oldp+94,(((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lb)
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
        bufp->chgCData(oldp+95,((0x1fU & (vlSelfRef.top__DOT__inst 
                                          >> 7U))),5);
        bufp->chgBit(oldp+96,(vlSelfRef.top__DOT__gpr_we));
        bufp->chgIData(oldp+97,(vlSelfRef.top__DOT__alu_src1),32);
        bufp->chgIData(oldp+98,(vlSelfRef.top__DOT__alu_src2),32);
        bufp->chgSData(oldp+99,(vlSelfRef.top__DOT__alu_op),12);
        bufp->chgBit(oldp+100,(((0x33U == (0x7fU & vlSelfRef.top__DOT__inst)) 
                                | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_U) 
                                   | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I) 
                                      | ((IData)(vlSelfRef.top__DOT__is_jump) 
                                         | (IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_csr)))))));
        bufp->chgIData(oldp+101,(vlSelfRef.top__DOT__next_pc_jump),32);
        bufp->chgBit(oldp+102,(vlSelfRef.top__DOT__is_jump));
        bufp->chgCData(oldp+103,(vlSelfRef.top__DOT__load_ctrl),5);
        bufp->chgCData(oldp+104,(vlSelfRef.top__DOT__store_ctrl),3);
        bufp->chgIData(oldp+105,(vlSelfRef.top__DOT__rs2),32);
        bufp->chgIData(oldp+106,(vlSelfRef.top__DOT__rs1),32);
        bufp->chgCData(oldp+107,(((((IData)(vlSelfRef.top__DOT__EXU_init__DOT__is_bgeu) 
                                    << 5U) | (((IData)(vlSelfRef.top__DOT__EXU_init__DOT__is_bltu) 
                                               << 4U) 
                                              | ((IData)(vlSelfRef.top__DOT__EXU_init__DOT__is_bge) 
                                                 << 3U))) 
                                  | (((IData)(vlSelfRef.top__DOT__EXU_init__DOT__is_blt) 
                                      << 2U) | (((IData)(vlSelfRef.top__DOT__EXU_init__DOT__is_bne) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.top__DOT__EXU_init__DOT__is_beq))))),6);
        bufp->chgIData(oldp+108,(vlSelfRef.top__DOT__branch_pc),32);
        bufp->chgBit(oldp+109,(vlSelfRef.top__DOT__is_ecall_mret));
        bufp->chgBit(oldp+110,(vlSelfRef.top__DOT__Ifu2Idu_valid));
        bufp->chgBit(oldp+111,(vlSelfRef.top__DOT__MAU_init__DOT____VdfgRegularize_h3fdffd83_0_0));
        bufp->chgBit(oldp+112,(vlSelfRef.top__DOT__branch_taken));
        bufp->chgIData(oldp+113,(vlSelfRef.top__DOT__m0_araddr),32);
        bufp->chgBit(oldp+114,(vlSelfRef.top__DOT__m0_arvalid));
        bufp->chgBit(oldp+115,(vlSelfRef.top__DOT__m0_rready));
        bufp->chgIData(oldp+116,(vlSelfRef.top__DOT__rdata),32);
        bufp->chgIData(oldp+117,(vlSelfRef.top__DOT__m1_awaddr),32);
        bufp->chgBit(oldp+118,(vlSelfRef.top__DOT__m1_awvalid));
        bufp->chgIData(oldp+119,(vlSelfRef.top__DOT__m1_wdata),32);
        bufp->chgCData(oldp+120,(vlSelfRef.top__DOT__m1_wstrb),4);
        bufp->chgBit(oldp+121,(vlSelfRef.top__DOT__m1_wvalid));
        bufp->chgBit(oldp+122,(vlSelfRef.top__DOT__m1_bready));
        bufp->chgIData(oldp+123,(vlSelfRef.top__DOT__m1_araddr),32);
        bufp->chgBit(oldp+124,(vlSelfRef.top__DOT__m1_arvalid));
        bufp->chgBit(oldp+125,(vlSelfRef.top__DOT__m1_rready));
        bufp->chgBit(oldp+126,(vlSelfRef.top__DOT__s1_awready));
        bufp->chgBit(oldp+127,(vlSelfRef.top__DOT__s1_wready));
        bufp->chgBit(oldp+128,(vlSelfRef.top__DOT__s1_bvalid));
        bufp->chgBit(oldp+129,((1U & (~ (IData)(vlSelfRef.top__DOT__s1_rvalid)))));
        bufp->chgBit(oldp+130,(vlSelfRef.top__DOT__s1_rvalid));
        bufp->chgBit(oldp+131,(vlSelfRef.top__DOT__s2_rvalid));
        bufp->chgBit(oldp+132,((1U & (IData)(vlSelfRef.top__DOT__alu_op))));
        bufp->chgBit(oldp+133,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                      >> 5U))));
        bufp->chgBit(oldp+134,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                      >> 2U))));
        bufp->chgBit(oldp+135,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                      >> 3U))));
        bufp->chgBit(oldp+136,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                      >> 4U))));
        bufp->chgBit(oldp+137,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                      >> 6U))));
        bufp->chgBit(oldp+138,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                      >> 7U))));
        bufp->chgBit(oldp+139,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                      >> 8U))));
        bufp->chgBit(oldp+140,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                      >> 1U))));
        bufp->chgBit(oldp+141,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                      >> 9U))));
        bufp->chgBit(oldp+142,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                      >> 0xaU))));
        bufp->chgIData(oldp+143,(((0x20U & (IData)(vlSelfRef.top__DOT__alu_op))
                                   ? ((IData)(vlSelfRef.top__DOT__is_jump)
                                       ? 0xfffffffbU
                                       : (~ vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))
                                   : vlSelfRef.top__DOT__alu_src2)),32);
        bufp->chgBit(oldp+144,(vlSelfRef.top__DOT__EXU_init__DOT__is_beq));
        bufp->chgBit(oldp+145,(vlSelfRef.top__DOT__EXU_init__DOT__is_bne));
        bufp->chgBit(oldp+146,(vlSelfRef.top__DOT__EXU_init__DOT__is_blt));
        bufp->chgBit(oldp+147,(vlSelfRef.top__DOT__EXU_init__DOT__is_bge));
        bufp->chgBit(oldp+148,(vlSelfRef.top__DOT__EXU_init__DOT__is_bltu));
        bufp->chgBit(oldp+149,(vlSelfRef.top__DOT__EXU_init__DOT__is_bgeu));
        bufp->chgBit(oldp+150,(vlSelfRef.top__DOT__EXU_init__DOT__equal));
        bufp->chgBit(oldp+151,(vlSelfRef.top__DOT__EXU_init__DOT__less_than_signed));
        bufp->chgBit(oldp+152,(vlSelfRef.top__DOT__EXU_init__DOT__less_than_unsigned));
        bufp->chgCData(oldp+153,((0x7fU & vlSelfRef.top__DOT__inst)),7);
        bufp->chgCData(oldp+154,((0x1fU & (vlSelfRef.top__DOT__inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+155,((0x1fU & (vlSelfRef.top__DOT__inst 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+156,((7U & (vlSelfRef.top__DOT__inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+157,((vlSelfRef.top__DOT__inst 
                                  >> 0x19U)),7);
        bufp->chgIData(oldp+158,((((- (IData)((vlSelfRef.top__DOT__inst 
                                               >> 0x1fU))) 
                                   << 0x14U) | (((0xff000U 
                                                  & vlSelfRef.top__DOT__inst) 
                                                 | (0x800U 
                                                    & (vlSelfRef.top__DOT__inst 
                                                       >> 9U))) 
                                                | (0x7feU 
                                                   & (vlSelfRef.top__DOT__inst 
                                                      >> 0x14U))))),32);
        bufp->chgIData(oldp+159,(vlSelfRef.top__DOT__IDU_init__DOT__imm_I),32);
        bufp->chgIData(oldp+160,((0xfffff000U & vlSelfRef.top__DOT__inst)),32);
        bufp->chgIData(oldp+161,((((- (IData)((vlSelfRef.top__DOT__inst 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelfRef.top__DOT__inst 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelfRef.top__DOT__inst 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+162,((((- (IData)((vlSelfRef.top__DOT__inst 
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
        bufp->chgBit(oldp+163,(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I));
        bufp->chgBit(oldp+164,((0x6fU == (0x7fU & vlSelfRef.top__DOT__inst))));
        bufp->chgBit(oldp+165,((0x63U == (0x7fU & vlSelfRef.top__DOT__inst))));
        bufp->chgBit(oldp+166,((0x23U == (0x7fU & vlSelfRef.top__DOT__inst))));
        bufp->chgBit(oldp+167,(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_U));
        bufp->chgBit(oldp+168,((0x33U == (0x7fU & vlSelfRef.top__DOT__inst))));
        bufp->chgBit(oldp+169,((0x100073U == vlSelfRef.top__DOT__inst)));
        bufp->chgBit(oldp+170,((0x17U == (0x7fU & vlSelfRef.top__DOT__inst))));
        bufp->chgBit(oldp+171,((0x37U == (0x7fU & vlSelfRef.top__DOT__inst))));
        bufp->chgBit(oldp+172,(vlSelfRef.top__DOT__IDU_init__DOT__is_jalr));
        bufp->chgBit(oldp+173,(((IData)((0x7033U == 
                                         (0xfe00707fU 
                                          & vlSelfRef.top__DOT__inst))) 
                                | (IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelfRef.top__DOT__inst))))));
        bufp->chgBit(oldp+174,(((IData)((0x6033U == 
                                         (0xfe00707fU 
                                          & vlSelfRef.top__DOT__inst))) 
                                | (IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelfRef.top__DOT__inst))))));
        bufp->chgBit(oldp+175,(((IData)((0x4033U == 
                                         (0xfe00707fU 
                                          & vlSelfRef.top__DOT__inst))) 
                                | (IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelfRef.top__DOT__inst))))));
        bufp->chgBit(oldp+176,(((IData)(vlSelfRef.top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_10) 
                                & (0x20U == (vlSelfRef.top__DOT__inst 
                                             >> 0x19U)))));
        bufp->chgBit(oldp+177,(vlSelfRef.top__DOT__IDU_init__DOT__is_sll));
        bufp->chgBit(oldp+178,(vlSelfRef.top__DOT__IDU_init__DOT__is_srl));
        bufp->chgBit(oldp+179,(vlSelfRef.top__DOT__IDU_init__DOT__is_sra));
        bufp->chgBit(oldp+180,((((0x33U == (0x7fU & vlSelfRef.top__DOT__inst)) 
                                 | (0x13U == (0x7fU 
                                              & vlSelfRef.top__DOT__inst))) 
                                & (IData)((0x2000U 
                                           == (0xfe007000U 
                                               & vlSelfRef.top__DOT__inst))))));
        bufp->chgBit(oldp+181,((((0x33U == (0x7fU & vlSelfRef.top__DOT__inst)) 
                                 | (0x13U == (0x7fU 
                                              & vlSelfRef.top__DOT__inst))) 
                                & (IData)((0x3000U 
                                           == (0xfe007000U 
                                               & vlSelfRef.top__DOT__inst))))));
        bufp->chgBit(oldp+182,(vlSelfRef.top__DOT__IDU_init__DOT__is_lb));
        bufp->chgBit(oldp+183,(vlSelfRef.top__DOT__IDU_init__DOT__is_lh));
        bufp->chgBit(oldp+184,(vlSelfRef.top__DOT__IDU_init__DOT__is_lw));
        bufp->chgBit(oldp+185,(vlSelfRef.top__DOT__IDU_init__DOT__is_lhu));
        bufp->chgBit(oldp+186,(vlSelfRef.top__DOT__IDU_init__DOT__is_lbu));
        bufp->chgBit(oldp+187,(vlSelfRef.top__DOT__IDU_init__DOT__is_sw));
        bufp->chgBit(oldp+188,(vlSelfRef.top__DOT__IDU_init__DOT__is_sh));
        bufp->chgBit(oldp+189,(vlSelfRef.top__DOT__IDU_init__DOT__is_sb));
        bufp->chgSData(oldp+190,((vlSelfRef.top__DOT__inst 
                                  >> 0x14U)),12);
        bufp->chgBit(oldp+191,((0x300U == (vlSelfRef.top__DOT__inst 
                                           >> 0x14U))));
        bufp->chgBit(oldp+192,((0x305U == (vlSelfRef.top__DOT__inst 
                                           >> 0x14U))));
        bufp->chgBit(oldp+193,((0x341U == (vlSelfRef.top__DOT__inst 
                                           >> 0x14U))));
        bufp->chgBit(oldp+194,((0x342U == (vlSelfRef.top__DOT__inst 
                                           >> 0x14U))));
        bufp->chgBit(oldp+195,(vlSelfRef.top__DOT__IDU_init__DOT__is_csrrw));
        bufp->chgBit(oldp+196,(vlSelfRef.top__DOT__IDU_init__DOT__is_csrrs));
        bufp->chgBit(oldp+197,(vlSelfRef.top__DOT__IDU_init__DOT__is_csr));
        bufp->chgBit(oldp+198,((0x73U == vlSelfRef.top__DOT__inst)));
        bufp->chgBit(oldp+199,((0x30200073U == vlSelfRef.top__DOT__inst)));
        bufp->chgIData(oldp+200,(vlSelfRef.top__DOT__IFU_init__DOT__araddr_latched),32);
        bufp->chgCData(oldp+201,(vlSelfRef.top__DOT__IFU_init__DOT__state),3);
        bufp->chgBit(oldp+202,((0U != (IData)(vlSelfRef.top__DOT__store_ctrl))));
        bufp->chgBit(oldp+203,(vlSelfRef.top__DOT__MAU_init__DOT__is_mem_op));
        bufp->chgBit(oldp+204,(vlSelfRef.top__DOT__MAU_init__DOT__load_valid));
        bufp->chgBit(oldp+205,(vlSelfRef.top__DOT__MAU_init__DOT__store_valid));
        bufp->chgCData(oldp+206,((((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_sb) 
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
        bufp->chgIData(oldp+207,(vlSelfRef.top__DOT__MAU_init__DOT__rdata_r),32);
        bufp->chgCData(oldp+208,(vlSelfRef.top__DOT__MAU_init__DOT__state),3);
        bufp->chgIData(oldp+209,(vlSelfRef.top__DOT__MAU_init__DOT__araddr_latched),32);
        bufp->chgBit(oldp+210,(vlSelfRef.top__DOT__MAU_init__DOT__done));
        bufp->chgBit(oldp+211,(vlSelfRef.top__DOT__MAU_init__DOT__aw_done));
        bufp->chgBit(oldp+212,(vlSelfRef.top__DOT__MAU_init__DOT__w_done));
        bufp->chgBit(oldp+213,((0x80U == (vlSelfRef.top__DOT__m0_araddr 
                                          >> 0x18U))));
        bufp->chgBit(oldp+214,((0x80U == (vlSelfRef.top__DOT__m1_araddr 
                                          >> 0x18U))));
        bufp->chgBit(oldp+215,((0x10000U == (vlSelfRef.top__DOT__m1_araddr 
                                             >> 0xcU))));
        bufp->chgBit(oldp+216,((0xa000004U == (vlSelfRef.top__DOT__m1_araddr 
                                               >> 4U))));
        bufp->chgBit(oldp+217,(vlSelfRef.top__DOT__xbar_init__DOT__m0_rreq_s0));
        bufp->chgBit(oldp+218,(vlSelfRef.top__DOT__xbar_init__DOT__m1_rreq_s0));
        bufp->chgBit(oldp+219,(vlSelfRef.top__DOT__xbar_init__DOT__m1_rreq_s1));
        bufp->chgBit(oldp+220,(vlSelfRef.top__DOT__xbar_init__DOT__m1_rreq_s2));
        bufp->chgBit(oldp+221,((0x80U == (vlSelfRef.top__DOT__m1_awaddr 
                                          >> 0x18U))));
        bufp->chgBit(oldp+222,((0xa000U == (vlSelfRef.top__DOT__m1_awaddr 
                                            >> 0x10U))));
        bufp->chgBit(oldp+223,((0xa000004U == (vlSelfRef.top__DOT__m1_awaddr 
                                               >> 4U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+224,(vlSelfRef.top__DOT__next_pc_csr),32);
        bufp->chgBit(oldp+225,(vlSelfRef.top__DOT__m0_arready));
        bufp->chgIData(oldp+226,(vlSelfRef.top__DOT__m0_rdata),32);
        bufp->chgCData(oldp+227,(vlSelfRef.top__DOT__m0_rresp),2);
        bufp->chgBit(oldp+228,(vlSelfRef.top__DOT__m0_rvalid));
        bufp->chgBit(oldp+229,(vlSelfRef.top__DOT__m1_awready));
        bufp->chgBit(oldp+230,(vlSelfRef.top__DOT__m1_wready));
        bufp->chgCData(oldp+231,(vlSelfRef.top__DOT__m1_bresp),2);
        bufp->chgBit(oldp+232,(vlSelfRef.top__DOT__m1_bvalid));
        bufp->chgBit(oldp+233,(vlSelfRef.top__DOT__m1_arready));
        bufp->chgIData(oldp+234,(vlSelfRef.top__DOT__m1_rdata),32);
        bufp->chgCData(oldp+235,(vlSelfRef.top__DOT__m1_rresp),2);
        bufp->chgBit(oldp+236,(vlSelfRef.top__DOT__m1_rvalid));
        bufp->chgIData(oldp+237,(vlSelfRef.top__DOT__s0_awaddr),32);
        bufp->chgBit(oldp+238,(vlSelfRef.top__DOT__s0_awvalid));
        bufp->chgIData(oldp+239,(vlSelfRef.top__DOT__s0_wdata),32);
        bufp->chgCData(oldp+240,(vlSelfRef.top__DOT__s0_wstrb),4);
        bufp->chgBit(oldp+241,(vlSelfRef.top__DOT__s0_wvalid));
        bufp->chgBit(oldp+242,(vlSelfRef.top__DOT__s0_bready));
        bufp->chgIData(oldp+243,(vlSelfRef.top__DOT__s0_araddr),32);
        bufp->chgBit(oldp+244,(vlSelfRef.top__DOT__s0_arvalid));
        bufp->chgBit(oldp+245,(vlSelfRef.top__DOT__s0_rready));
        bufp->chgIData(oldp+246,(vlSelfRef.top__DOT__s1_awaddr),32);
        bufp->chgBit(oldp+247,(vlSelfRef.top__DOT__s1_awvalid));
        bufp->chgIData(oldp+248,(vlSelfRef.top__DOT__s1_wdata),32);
        bufp->chgCData(oldp+249,(vlSelfRef.top__DOT__s1_wstrb),4);
        bufp->chgBit(oldp+250,(vlSelfRef.top__DOT__s1_wvalid));
        bufp->chgBit(oldp+251,(vlSelfRef.top__DOT__s1_bready));
        bufp->chgIData(oldp+252,(vlSelfRef.top__DOT__s1_araddr),32);
        bufp->chgBit(oldp+253,(vlSelfRef.top__DOT__s1_arvalid));
        bufp->chgBit(oldp+254,(vlSelfRef.top__DOT__s1_rready));
        bufp->chgIData(oldp+255,(vlSelfRef.top__DOT__s2_awaddr),32);
        bufp->chgBit(oldp+256,(vlSelfRef.top__DOT__s2_awvalid));
        bufp->chgIData(oldp+257,(vlSelfRef.top__DOT__s2_wdata),32);
        bufp->chgCData(oldp+258,(vlSelfRef.top__DOT__s2_wstrb),4);
        bufp->chgBit(oldp+259,(vlSelfRef.top__DOT__s2_wvalid));
        bufp->chgBit(oldp+260,(vlSelfRef.top__DOT__s2_bready));
        bufp->chgIData(oldp+261,(vlSelfRef.top__DOT__s2_araddr),32);
        bufp->chgBit(oldp+262,(vlSelfRef.top__DOT__s2_arvalid));
        bufp->chgBit(oldp+263,(vlSelfRef.top__DOT__s2_rready));
        bufp->chgIData(oldp+264,(vlSelfRef.top__DOT__IDU_init__DOT__gpr_wdata_total),32);
    }
    bufp->chgBit(oldp+265,(vlSelfRef.clk));
    bufp->chgBit(oldp+266,(vlSelfRef.rst));
    bufp->chgIData(oldp+267,(vlSelfRef.pc),32);
    bufp->chgIData(oldp+268,(vlSelfRef.dnpc),32);
    bufp->chgBit(oldp+269,(vlSelfRef.commit));
    bufp->chgIData(oldp+270,(((0x342U == (vlSelfRef.top__DOT__inst 
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
    bufp->chgIData(oldp+271,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__j),32);
    bufp->chgIData(oldp+272,(((IData)(4U) + vlSelfRef.pc)),32);
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
