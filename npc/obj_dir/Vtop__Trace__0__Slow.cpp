// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+44,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+44,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"gpr_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"gpr_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+50,0,"gpr_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+51,0,"alu_src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"alu_src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+50,0,"rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+52,0,"next_pc_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"is_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"pc_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("EXU_init", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+51,0,"alu_src1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"alu_src2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+48,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"op_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"op_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"op_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"op_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"op_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"op_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"op_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"op_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"op_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("IDU_init", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+44,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"gpr_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"gpr_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+50,0,"gpr_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+51,0,"alu_src1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"alu_src2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+50,0,"rd_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+3,0,"is_jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"next_pc_jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+54,0,"src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+76,0,"src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+55,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"fun3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+57,0,"fun7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+58,0,"imm_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"imm_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"imm_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"imm_is_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"imm_is_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"imm_is_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"imm_is_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"is_break",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"is_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"is_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ysyx_25080218_GPR_init", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+44,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"gpr_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+48,0,"gpr_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+50,0,"gpr_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"gpr_raddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+76,0,"gpr_raddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+55,0,"gpr_rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"gpr_rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("GPR", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+10+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+42,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("IFU_init", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+44,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"is_jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"next_pc_jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("WBU_init", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+50,0,"rd_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+50,0,"gpr_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"gpr_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"gpr_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+67,(vlSelfRef.top__DOT__imm),12);
    bufp->fullIData(oldp+68,(vlSelfRef.top__DOT__pc_wire),32);
    bufp->fullBit(oldp+69,(vlSelfRef.top__DOT__EXU_init__DOT__op_sub));
    bufp->fullBit(oldp+70,(vlSelfRef.top__DOT__EXU_init__DOT__op_and));
    bufp->fullBit(oldp+71,(vlSelfRef.top__DOT__EXU_init__DOT__op_or));
    bufp->fullBit(oldp+72,(vlSelfRef.top__DOT__EXU_init__DOT__op_xor));
    bufp->fullBit(oldp+73,(vlSelfRef.top__DOT__EXU_init__DOT__op_sll));
    bufp->fullBit(oldp+74,(vlSelfRef.top__DOT__EXU_init__DOT__op_srl));
    bufp->fullBit(oldp+75,(vlSelfRef.top__DOT__EXU_init__DOT__op_sra));
    bufp->fullCData(oldp+76,(vlSelfRef.top__DOT__IDU_init__DOT__src2),5);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.top__DOT__alu_src2),32);
    bufp->fullSData(oldp+2,(vlSelfRef.top__DOT__alu_op),12);
    bufp->fullBit(oldp+3,(vlSelfRef.top__DOT__is_jump));
    bufp->fullBit(oldp+4,((1U & (IData)(vlSelfRef.top__DOT__alu_op))));
    bufp->fullBit(oldp+5,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                 >> 1U))));
    bufp->fullIData(oldp+6,(vlSelfRef.top__DOT__IDU_init__DOT__imm_I),32);
    bufp->fullBit(oldp+7,(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I));
    bufp->fullBit(oldp+8,(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_U));
    bufp->fullIData(oldp+9,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                            [vlSelfRef.top__DOT__IDU_init__DOT__src2]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[1]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[2]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[3]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[4]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[5]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[6]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[7]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[8]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[9]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[10]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[11]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[12]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[13]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[14]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[15]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[16]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[17]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[18]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[19]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[20]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[21]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[22]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[23]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[24]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[25]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[26]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[27]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[28]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[29]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[30]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[31]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__i),32);
    bufp->fullBit(oldp+43,(vlSelfRef.top__DOT__IFU_init__DOT__valid));
    bufp->fullBit(oldp+44,(vlSelfRef.clk));
    bufp->fullBit(oldp+45,(vlSelfRef.rst));
    bufp->fullIData(oldp+46,(vlSelfRef.inst),32);
    bufp->fullIData(oldp+47,(vlSelfRef.pc),32);
    bufp->fullIData(oldp+48,(((1U & (IData)(vlSelfRef.top__DOT__alu_op))
                               ? (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I)
                                    ? vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                   [(0x1fU & (vlSelfRef.inst 
                                              >> 0xfU))]
                                    : ((0x17U == (0x7fU 
                                                  & vlSelfRef.inst))
                                        ? vlSelfRef.pc
                                        : ((0x37U == 
                                            (0x7fU 
                                             & vlSelfRef.inst))
                                            ? 0U : 
                                           ((IData)(vlSelfRef.top__DOT__is_jump)
                                             ? vlSelfRef.pc
                                             : 0U)))) 
                                  + vlSelfRef.top__DOT__alu_src2)
                               : ((2U & (IData)(vlSelfRef.top__DOT__alu_op))
                                   ? vlSelfRef.top__DOT__alu_src2
                                   : 0U))),32);
    bufp->fullCData(oldp+49,((0x1fU & (vlSelfRef.inst 
                                       >> 7U))),5);
    bufp->fullBit(oldp+50,(((0x33U == (0x7fU & vlSelfRef.inst)) 
                            | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_U) 
                               | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I) 
                                  | (IData)(vlSelfRef.top__DOT__is_jump))))));
    bufp->fullIData(oldp+51,(((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I)
                               ? vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                              [(0x1fU & (vlSelfRef.inst 
                                         >> 0xfU))]
                               : ((0x17U == (0x7fU 
                                             & vlSelfRef.inst))
                                   ? vlSelfRef.pc : 
                                  ((0x37U == (0x7fU 
                                              & vlSelfRef.inst))
                                    ? 0U : ((IData)(vlSelfRef.top__DOT__is_jump)
                                             ? vlSelfRef.pc
                                             : 0U))))),32);
    bufp->fullIData(oldp+52,(((0x6fU == (0x7fU & vlSelfRef.inst))
                               ? (vlSelfRef.pc + ((
                                                   (- (IData)(
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
                               : ((0x67U == (0x7fU 
                                             & vlSelfRef.inst))
                                   ? (vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                      [(0x1fU & (vlSelfRef.inst 
                                                 >> 0xfU))] 
                                      + vlSelfRef.top__DOT__IDU_init__DOT__imm_I)
                                   : 0U))),32);
    bufp->fullCData(oldp+53,((0x7fU & vlSelfRef.inst)),7);
    bufp->fullCData(oldp+54,((0x1fU & (vlSelfRef.inst 
                                       >> 0xfU))),5);
    bufp->fullIData(oldp+55,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                             [(0x1fU & (vlSelfRef.inst 
                                        >> 0xfU))]),32);
    bufp->fullCData(oldp+56,((7U & (vlSelfRef.inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+57,((vlSelfRef.inst >> 0x19U)),7);
    bufp->fullIData(oldp+58,((((- (IData)((vlSelfRef.inst 
                                           >> 0x1fU))) 
                               << 0x14U) | (((0xff000U 
                                              & vlSelfRef.inst) 
                                             | (0x800U 
                                                & (vlSelfRef.inst 
                                                   >> 9U))) 
                                            | (0x7feU 
                                               & (vlSelfRef.inst 
                                                  >> 0x14U))))),32);
    bufp->fullIData(oldp+59,((0xfffff000U & vlSelfRef.inst)),32);
    bufp->fullBit(oldp+60,((0x6fU == (0x7fU & vlSelfRef.inst))));
    bufp->fullBit(oldp+61,((0x33U == (0x7fU & vlSelfRef.inst))));
    bufp->fullBit(oldp+62,((0x100073U == vlSelfRef.inst)));
    bufp->fullBit(oldp+63,((0x17U == (0x7fU & vlSelfRef.inst))));
    bufp->fullBit(oldp+64,((0x37U == (0x7fU & vlSelfRef.inst))));
    bufp->fullBit(oldp+65,((0x67U == (0x7fU & vlSelfRef.inst))));
    bufp->fullIData(oldp+66,(((IData)(4U) + vlSelfRef.pc)),32);
}
