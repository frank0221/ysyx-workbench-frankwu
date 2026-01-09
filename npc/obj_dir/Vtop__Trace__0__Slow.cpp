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
    tracep->declBit(c+113,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"dnpc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+113,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"dnpc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"gpr_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"gpr_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+4,0,"gpr_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+5,0,"alu_src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"alu_src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+4,0,"rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+117,0,"next_pc_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"is_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"pc_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"load_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"store_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+11,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"branch_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+14,0,"branch_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("EXU_init", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"alu_src1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"alu_src2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+12,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"branch_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+14,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"branch_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"branch_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"op_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"op_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"op_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"op_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"op_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"op_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"op_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"op_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"op_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"op_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"op_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"alu_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"alu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"carry_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"is_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"is_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"is_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"is_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"is_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"is_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"less_than_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"less_than_unsigned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("IDU_init", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+113,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"gpr_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"gpr_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+4,0,"gpr_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+5,0,"alu_src1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"alu_src2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+4,0,"rd_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+8,0,"is_jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"next_pc_jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"load_ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"store_ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+13,0,"branch_ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+12,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+39,0,"src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+40,0,"src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+41,0,"fun3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+42,0,"fun7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+40,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+43,0,"imm_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"imm_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"imm_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"imm_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"imm_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"imm_is_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"imm_is_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"imm_is_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"imm_is_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"imm_is_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"imm_is_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"is_break",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"is_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"is_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"is_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"is_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"is_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"is_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"is_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"is_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"is_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"is_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"is_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"is_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"is_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"is_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"is_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"is_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"is_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"is_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"is_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"is_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"is_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"is_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"is_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"is_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"is_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ysyx_25080218_GPR_init", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+113,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"gpr_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2,0,"gpr_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"gpr_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"gpr_raddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+40,0,"gpr_raddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"gpr_rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"gpr_rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("GPR", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+75+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+107,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("IFU_init", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+113,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"is_jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"next_pc_jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"branch_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"branch_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+108,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("MAU_init", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+109,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"load_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"store_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+16,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+110,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+112,0,"rdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("WBU_init", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4,0,"rd_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"load_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"gpr_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"gpr_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"gpr_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
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
    bufp->fullSData(oldp+118,(vlSelfRef.top__DOT__imm),12);
    bufp->fullIData(oldp+119,(vlSelfRef.top__DOT__pc_wire),32);
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
    bufp->fullIData(oldp+1,(vlSelfRef.top__DOT__inst),32);
    bufp->fullIData(oldp+2,(((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lb)
                              ? (((- (IData)((1U & 
                                              (vlSelfRef.top__DOT__rdata 
                                               >> 7U)))) 
                                  << 8U) | (0xffU & vlSelfRef.top__DOT__rdata))
                              : ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lh)
                                  ? (((- (IData)((1U 
                                                  & (vlSelfRef.top__DOT__rdata 
                                                     >> 0xfU)))) 
                                      << 0x10U) | (0xffffU 
                                                   & vlSelfRef.top__DOT__rdata))
                                  : ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lw)
                                      ? vlSelfRef.top__DOT__rdata
                                      : ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lbu)
                                          ? (0xffU 
                                             & vlSelfRef.top__DOT__rdata)
                                          : ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_lhu)
                                              ? (0xffffU 
                                                 & vlSelfRef.top__DOT__rdata)
                                              : vlSelfRef.top__DOT__branch_pc)))))),32);
    bufp->fullCData(oldp+3,((0x1fU & (vlSelfRef.top__DOT__inst 
                                      >> 7U))),5);
    bufp->fullBit(oldp+4,(((0x33U == (0x7fU & vlSelfRef.top__DOT__inst)) 
                           | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_U) 
                              | ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I) 
                                 | (IData)(vlSelfRef.top__DOT__is_jump))))));
    bufp->fullIData(oldp+5,(vlSelfRef.top__DOT__alu_src1),32);
    bufp->fullIData(oldp+6,(vlSelfRef.top__DOT__alu_src2),32);
    bufp->fullSData(oldp+7,(vlSelfRef.top__DOT__alu_op),12);
    bufp->fullBit(oldp+8,(vlSelfRef.top__DOT__is_jump));
    bufp->fullCData(oldp+9,(vlSelfRef.top__DOT__load_ctrl),5);
    bufp->fullCData(oldp+10,(vlSelfRef.top__DOT__store_ctrl),3);
    bufp->fullIData(oldp+11,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                             [(0x1fU & (vlSelfRef.top__DOT__inst 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                             [(0x1fU & (vlSelfRef.top__DOT__inst 
                                        >> 0xfU))]),32);
    bufp->fullCData(oldp+13,(((((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_bgeu) 
                                << 5U) | (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_bltu) 
                                           << 4U) | 
                                          ((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_bge) 
                                           << 3U))) 
                              | (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_blt) 
                                  << 2U) | (((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_bne) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_beq))))),6);
    bufp->fullIData(oldp+14,(vlSelfRef.top__DOT__branch_pc),32);
    bufp->fullBit(oldp+15,((((IData)(vlSelfRef.top__DOT__IDU_init__DOT__is_beq) 
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
    bufp->fullIData(oldp+16,(vlSelfRef.top__DOT__rdata),32);
    bufp->fullBit(oldp+17,((1U & (IData)(vlSelfRef.top__DOT__alu_op))));
    bufp->fullBit(oldp+18,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                  >> 5U))));
    bufp->fullBit(oldp+19,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                  >> 2U))));
    bufp->fullBit(oldp+20,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                  >> 3U))));
    bufp->fullBit(oldp+21,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                  >> 4U))));
    bufp->fullBit(oldp+22,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                  >> 6U))));
    bufp->fullBit(oldp+23,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                  >> 7U))));
    bufp->fullBit(oldp+24,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                  >> 8U))));
    bufp->fullBit(oldp+25,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                  >> 1U))));
    bufp->fullBit(oldp+26,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                  >> 9U))));
    bufp->fullBit(oldp+27,((1U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                                  >> 0xaU))));
    bufp->fullIData(oldp+28,(((0x20U & (IData)(vlSelfRef.top__DOT__alu_op))
                               ? ((IData)(vlSelfRef.top__DOT__is_jump)
                                   ? 0xfffffffbU : 
                                  (~ vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))
                               : vlSelfRef.top__DOT__alu_src2)),32);
    bufp->fullBit(oldp+29,(vlSelfRef.top__DOT__IDU_init__DOT__is_beq));
    bufp->fullBit(oldp+30,(vlSelfRef.top__DOT__IDU_init__DOT__is_bne));
    bufp->fullBit(oldp+31,(vlSelfRef.top__DOT__IDU_init__DOT__is_blt));
    bufp->fullBit(oldp+32,(vlSelfRef.top__DOT__IDU_init__DOT__is_bge));
    bufp->fullBit(oldp+33,(vlSelfRef.top__DOT__IDU_init__DOT__is_bltu));
    bufp->fullBit(oldp+34,(vlSelfRef.top__DOT__IDU_init__DOT__is_bgeu));
    bufp->fullBit(oldp+35,(vlSelfRef.top__DOT__EXU_init__DOT__equal));
    bufp->fullBit(oldp+36,(vlSelfRef.top__DOT__EXU_init__DOT__less_than_signed));
    bufp->fullBit(oldp+37,(vlSelfRef.top__DOT__EXU_init__DOT__less_than_unsigned));
    bufp->fullCData(oldp+38,((0x7fU & vlSelfRef.top__DOT__inst)),7);
    bufp->fullCData(oldp+39,((0x1fU & (vlSelfRef.top__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+40,((0x1fU & (vlSelfRef.top__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+41,((7U & (vlSelfRef.top__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+42,((vlSelfRef.top__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+43,((((- (IData)((vlSelfRef.top__DOT__inst 
                                           >> 0x1fU))) 
                               << 0x14U) | (((0xff000U 
                                              & vlSelfRef.top__DOT__inst) 
                                             | (0x800U 
                                                & (vlSelfRef.top__DOT__inst 
                                                   >> 9U))) 
                                            | (0x7feU 
                                               & (vlSelfRef.top__DOT__inst 
                                                  >> 0x14U))))),32);
    bufp->fullIData(oldp+44,(vlSelfRef.top__DOT__IDU_init__DOT__imm_I),32);
    bufp->fullIData(oldp+45,((0xfffff000U & vlSelfRef.top__DOT__inst)),32);
    bufp->fullIData(oldp+46,((((- (IData)((vlSelfRef.top__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelfRef.top__DOT__inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelfRef.top__DOT__inst 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+47,((((- (IData)((vlSelfRef.top__DOT__inst 
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
    bufp->fullBit(oldp+48,(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_I));
    bufp->fullBit(oldp+49,((0x6fU == (0x7fU & vlSelfRef.top__DOT__inst))));
    bufp->fullBit(oldp+50,((0x63U == (0x7fU & vlSelfRef.top__DOT__inst))));
    bufp->fullBit(oldp+51,((0x23U == (0x7fU & vlSelfRef.top__DOT__inst))));
    bufp->fullBit(oldp+52,(vlSelfRef.top__DOT__IDU_init__DOT__imm_is_U));
    bufp->fullBit(oldp+53,((0x33U == (0x7fU & vlSelfRef.top__DOT__inst))));
    bufp->fullBit(oldp+54,((0x100073U == vlSelfRef.top__DOT__inst)));
    bufp->fullBit(oldp+55,((0x17U == (0x7fU & vlSelfRef.top__DOT__inst))));
    bufp->fullBit(oldp+56,((0x37U == (0x7fU & vlSelfRef.top__DOT__inst))));
    bufp->fullBit(oldp+57,(vlSelfRef.top__DOT__IDU_init__DOT__is_jalr));
    bufp->fullBit(oldp+58,(((IData)((0x7033U == (0xfe00707fU 
                                                 & vlSelfRef.top__DOT__inst))) 
                            | (IData)((0x7013U == (0x707fU 
                                                   & vlSelfRef.top__DOT__inst))))));
    bufp->fullBit(oldp+59,(((IData)((0x6033U == (0xfe00707fU 
                                                 & vlSelfRef.top__DOT__inst))) 
                            | (IData)((0x6013U == (0x707fU 
                                                   & vlSelfRef.top__DOT__inst))))));
    bufp->fullBit(oldp+60,(((IData)((0x4033U == (0xfe00707fU 
                                                 & vlSelfRef.top__DOT__inst))) 
                            | (IData)((0x4013U == (0x707fU 
                                                   & vlSelfRef.top__DOT__inst))))));
    bufp->fullBit(oldp+61,(((IData)(vlSelfRef.top__DOT__IDU_init__DOT____VdfgRegularize_h80d369ef_0_10) 
                            & (0x20U == (vlSelfRef.top__DOT__inst 
                                         >> 0x19U)))));
    bufp->fullBit(oldp+62,(vlSelfRef.top__DOT__IDU_init__DOT__is_sll));
    bufp->fullBit(oldp+63,(vlSelfRef.top__DOT__IDU_init__DOT__is_srl));
    bufp->fullBit(oldp+64,(vlSelfRef.top__DOT__IDU_init__DOT__is_sra));
    bufp->fullBit(oldp+65,((((0x33U == (0x7fU & vlSelfRef.top__DOT__inst)) 
                             | (0x13U == (0x7fU & vlSelfRef.top__DOT__inst))) 
                            & (IData)((0x2000U == (0xfe007000U 
                                                   & vlSelfRef.top__DOT__inst))))));
    bufp->fullBit(oldp+66,((((0x33U == (0x7fU & vlSelfRef.top__DOT__inst)) 
                             | (0x13U == (0x7fU & vlSelfRef.top__DOT__inst))) 
                            & (IData)((0x3000U == (0xfe007000U 
                                                   & vlSelfRef.top__DOT__inst))))));
    bufp->fullBit(oldp+67,(vlSelfRef.top__DOT__IDU_init__DOT__is_lb));
    bufp->fullBit(oldp+68,(vlSelfRef.top__DOT__IDU_init__DOT__is_lh));
    bufp->fullBit(oldp+69,(vlSelfRef.top__DOT__IDU_init__DOT__is_lw));
    bufp->fullBit(oldp+70,(vlSelfRef.top__DOT__IDU_init__DOT__is_lhu));
    bufp->fullBit(oldp+71,(vlSelfRef.top__DOT__IDU_init__DOT__is_lbu));
    bufp->fullBit(oldp+72,((IData)((0x2023U == (0x707fU 
                                                & vlSelfRef.top__DOT__inst)))));
    bufp->fullBit(oldp+73,((IData)((0x1023U == (0x707fU 
                                                & vlSelfRef.top__DOT__inst)))));
    bufp->fullBit(oldp+74,((IData)((0x23U == (0x707fU 
                                              & vlSelfRef.top__DOT__inst)))));
    bufp->fullIData(oldp+75,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[0]),32);
    bufp->fullIData(oldp+76,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[1]),32);
    bufp->fullIData(oldp+77,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[2]),32);
    bufp->fullIData(oldp+78,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[3]),32);
    bufp->fullIData(oldp+79,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[4]),32);
    bufp->fullIData(oldp+80,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[5]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[6]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[7]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[8]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[9]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[10]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[11]),32);
    bufp->fullIData(oldp+87,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[12]),32);
    bufp->fullIData(oldp+88,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[13]),32);
    bufp->fullIData(oldp+89,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[14]),32);
    bufp->fullIData(oldp+90,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[15]),32);
    bufp->fullIData(oldp+91,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[16]),32);
    bufp->fullIData(oldp+92,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[17]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[18]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[19]),32);
    bufp->fullIData(oldp+95,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[20]),32);
    bufp->fullIData(oldp+96,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[21]),32);
    bufp->fullIData(oldp+97,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[22]),32);
    bufp->fullIData(oldp+98,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[23]),32);
    bufp->fullIData(oldp+99,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[24]),32);
    bufp->fullIData(oldp+100,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[25]),32);
    bufp->fullIData(oldp+101,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[26]),32);
    bufp->fullIData(oldp+102,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[27]),32);
    bufp->fullIData(oldp+103,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[28]),32);
    bufp->fullIData(oldp+104,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[29]),32);
    bufp->fullIData(oldp+105,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[30]),32);
    bufp->fullIData(oldp+106,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR[31]),32);
    bufp->fullIData(oldp+107,(vlSelfRef.top__DOT__IDU_init__DOT__ysyx_25080218_GPR_init__DOT__i),32);
    bufp->fullBit(oldp+108,(vlSelfRef.top__DOT__IFU_init__DOT__valid));
    bufp->fullBit(oldp+109,((0U != (IData)(vlSelfRef.top__DOT__store_ctrl))));
    bufp->fullBit(oldp+110,(((0U != (IData)(vlSelfRef.top__DOT__load_ctrl)) 
                             | (0U != (IData)(vlSelfRef.top__DOT__store_ctrl)))));
    bufp->fullCData(oldp+111,((((IData)((0x23U == (0x707fU 
                                                   & vlSelfRef.top__DOT__inst))) 
                                & (0U == (3U & vlSelfRef.top__DOT__branch_pc)))
                                ? 1U : (((IData)((0x23U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelfRef.top__DOT__inst))) 
                                         & (1U == (3U 
                                                   & vlSelfRef.top__DOT__branch_pc)))
                                         ? 2U : (((IData)(
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
                                                      : 0U)))))))),8);
    bufp->fullIData(oldp+112,(vlSelfRef.top__DOT__MAU_init__DOT__rdata_r),32);
    bufp->fullBit(oldp+113,(vlSelfRef.clk));
    bufp->fullBit(oldp+114,(vlSelfRef.rst));
    bufp->fullIData(oldp+115,(vlSelfRef.pc),32);
    bufp->fullIData(oldp+116,(vlSelfRef.dnpc),32);
    bufp->fullIData(oldp+117,(((0x6fU == (0x7fU & vlSelfRef.top__DOT__inst))
                                ? (vlSelfRef.pc + (
                                                   ((- (IData)(
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
