// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyx_25080218.h"

void VysyxSoCFull___024unit____Vdpiimwrap_halt_TOP____024unit();

VL_ATTR_COLD void VysyxSoCFull_ysyx_25080218___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_ysyx_25080218* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_ysyx_25080218___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.IDU_init__DOT__pc = vlSelfRef.pc;
    vlSelfRef.IDU_init__DOT__valid_from_ifu = vlSelfRef.Ifu2Idu_valid;
    vlSelfRef.IDU_init__DOT__imm = vlSelfRef.imm;
    vlSelfRef.IFU_init__DOT__pc = vlSelfRef.pc;
    vlSelfRef.IFU_init__DOT__inst = vlSelfRef.inst;
    vlSelfRef.IFU_init__DOT__valid = vlSelfRef.Ifu2Idu_valid;
    vlSelfRef.IFU_init__DOT__ARADDR = vlSelfRef.m0_araddr;
    vlSelfRef.IFU_init__DOT__ARVALID = vlSelfRef.m0_arvalid;
    vlSelfRef.IFU_init__DOT__RREADY = vlSelfRef.m0_rready;
    vlSelfRef.MAU_init__DOT__ready_from_wbu = vlSelfRef.ready_from_wbu;
    vlSelfRef.MAU_init__DOT__AWADDR = vlSelfRef.m1_awaddr;
    vlSelfRef.MAU_init__DOT__AWVALID = vlSelfRef.m1_awvalid;
    vlSelfRef.MAU_init__DOT__WDATA = vlSelfRef.m1_wdata;
    vlSelfRef.MAU_init__DOT__WSTRB = vlSelfRef.m1_wstrb;
    vlSelfRef.MAU_init__DOT__WVALID = vlSelfRef.m1_wvalid;
    vlSelfRef.MAU_init__DOT__BREADY = vlSelfRef.m1_bready;
    vlSelfRef.MAU_init__DOT__ARADDR = vlSelfRef.m1_araddr;
    vlSelfRef.MAU_init__DOT__ARVALID = vlSelfRef.m1_arvalid;
    vlSelfRef.MAU_init__DOT__RREADY = vlSelfRef.m1_rready;
    vlSelfRef.WBU_init__DOT__ready_from_wbu = vlSelfRef.ready_from_wbu;
    vlSelfRef.xbar_init__DOT__m1_awaddr = vlSelfRef.m1_awaddr;
    vlSelfRef.xbar_init__DOT__m1_awvalid = vlSelfRef.m1_awvalid;
    vlSelfRef.xbar_init__DOT__m1_wdata = vlSelfRef.m1_wdata;
    vlSelfRef.xbar_init__DOT__m1_wstrb = vlSelfRef.m1_wstrb;
    vlSelfRef.xbar_init__DOT__m1_wvalid = vlSelfRef.m1_wvalid;
    vlSelfRef.xbar_init__DOT__m1_bready = vlSelfRef.m1_bready;
    vlSelfRef.xbar_init__DOT__m1_araddr = vlSelfRef.m1_araddr;
    vlSelfRef.xbar_init__DOT__m1_arvalid = vlSelfRef.m1_arvalid;
    vlSelfRef.xbar_init__DOT__m1_rready = vlSelfRef.m1_rready;
    vlSelfRef.xbar_init__DOT__m0_awaddr = vlSelfRef.m0_awaddr;
    vlSelfRef.xbar_init__DOT__m0_awvalid = vlSelfRef.m0_awvalid;
    vlSelfRef.xbar_init__DOT__m0_awready = vlSelfRef.m0_awready;
    vlSelfRef.xbar_init__DOT__m0_wdata = vlSelfRef.m0_wdata;
    vlSelfRef.xbar_init__DOT__m0_wstrb = vlSelfRef.m0_wstrb;
    vlSelfRef.xbar_init__DOT__m0_wvalid = vlSelfRef.m0_wvalid;
    vlSelfRef.xbar_init__DOT__m0_wready = vlSelfRef.m0_wready;
    vlSelfRef.xbar_init__DOT__m0_bresp = vlSelfRef.m0_bresp;
    vlSelfRef.xbar_init__DOT__m0_bvalid = vlSelfRef.m0_bvalid;
    vlSelfRef.xbar_init__DOT__m0_bready = vlSelfRef.m0_bready;
    vlSelfRef.xbar_init__DOT__m0_araddr = vlSelfRef.m0_araddr;
    vlSelfRef.xbar_init__DOT__m0_arvalid = vlSelfRef.m0_arvalid;
    vlSelfRef.xbar_init__DOT__m0_rready = vlSelfRef.m0_rready;
    vlSelfRef.xbar_init__DOT__s1_awready = vlSelfRef.s1_awready;
    vlSelfRef.xbar_init__DOT__s1_wready = vlSelfRef.s1_wready;
    vlSelfRef.xbar_init__DOT__s1_bresp = vlSelfRef.s1_bresp;
    vlSelfRef.xbar_init__DOT__s1_bvalid = vlSelfRef.s1_bvalid;
    vlSelfRef.xbar_init__DOT__s1_arready = vlSelfRef.s1_arready;
    vlSelfRef.xbar_init__DOT__s1_rdata = vlSelfRef.s1_rdata;
    vlSelfRef.xbar_init__DOT__s1_rresp = vlSelfRef.s1_rresp;
    vlSelfRef.xbar_init__DOT__s1_rvalid = vlSelfRef.s1_rvalid;
    vlSelfRef.clint_init__DOT__s_awready = vlSelfRef.s1_awready;
    vlSelfRef.clint_init__DOT__s_wready = vlSelfRef.s1_wready;
    vlSelfRef.clint_init__DOT__s_bresp = vlSelfRef.s1_bresp;
    vlSelfRef.clint_init__DOT__s_bvalid = vlSelfRef.s1_bvalid;
    vlSelfRef.clint_init__DOT__s_arready = vlSelfRef.s1_arready;
    vlSelfRef.clint_init__DOT__s_rdata = vlSelfRef.s1_rdata;
    vlSelfRef.clint_init__DOT__s_rresp = vlSelfRef.s1_rresp;
    vlSelfRef.clint_init__DOT__s_rvalid = vlSelfRef.s1_rvalid;
    vlSelfRef.valid_to_exu = vlSelfRef.Ifu2Idu_valid;
    vlSelfRef.valid_to_lsu = vlSelfRef.Ifu2Idu_valid;
    vlSelfRef.s1_bready = 0U;
    if (vlSelfRef.xbar_init__DOT__s1_w_busy) {
        vlSelfRef.s1_bready = vlSelfRef.m1_bready;
    }
    vlSelfRef.s1_rready = 0U;
    if (vlSelfRef.xbar_init__DOT__s1_r_busy) {
        vlSelfRef.s1_rready = ((IData)(vlSelfRef.xbar_init__DOT__s1_r_owner)
                                ? (IData)(vlSelfRef.m1_rready)
                                : (IData)(vlSelfRef.m0_rready));
    }
    vlSelfRef.IFU_init__DOT__next_pc = ((IData)(4U) 
                                        + vlSelfRef.pc);
    vlSelfRef.xbar_init__DOT__m0_rreq_s1 = ((IData)(vlSelfRef.m0_arvalid) 
                                            & (IData)(vlSelfRef.xbar_init__DOT__m0_r_s1));
    if (vlSelfRef.Ifu2Idu_valid) {
        vlSelfRef.IDU_init__DOT__src1 = (0x1fU & (vlSelfRef.inst 
                                                  >> 0xfU));
        vlSelfRef.gpr_waddr = (0x1fU & (vlSelfRef.inst 
                                        >> 7U));
        vlSelfRef.__Vcellinp__IDU_init__inst = vlSelfRef.inst;
        vlSelfRef.IDU_init__DOT__src2 = (0x1fU & (vlSelfRef.inst 
                                                  >> 0x14U));
        vlSelfRef.IDU_init__DOT__csr_addr = (vlSelfRef.inst 
                                             >> 0x14U);
        vlSelfRef.IDU_init__DOT__fun7 = (vlSelfRef.inst 
                                         >> 0x19U);
        vlSelfRef.IDU_init__DOT__fun3 = (7U & (vlSelfRef.inst 
                                               >> 0xcU));
        vlSelfRef.IDU_init__DOT__opcode = (0x7fU & vlSelfRef.inst);
    } else {
        vlSelfRef.IDU_init__DOT__src1 = 0U;
        vlSelfRef.gpr_waddr = 0U;
        vlSelfRef.__Vcellinp__IDU_init__inst = 0U;
        vlSelfRef.IDU_init__DOT__src2 = 0U;
        vlSelfRef.IDU_init__DOT__csr_addr = 0U;
        vlSelfRef.IDU_init__DOT__fun7 = 0U;
        vlSelfRef.IDU_init__DOT__fun3 = 0U;
        vlSelfRef.IDU_init__DOT__opcode = 0U;
    }
    vlSelfRef.io_master_rready = 0U;
    if (vlSelfRef.xbar_init__DOT__s0_r_busy) {
        vlSelfRef.io_master_rready = ((IData)(vlSelfRef.xbar_init__DOT__s0_r_owner)
                                       ? (IData)(vlSelfRef.m1_rready)
                                       : (IData)(vlSelfRef.m0_rready));
    }
    vlSelfRef.io_master_bready = 0U;
    if (vlSelfRef.xbar_init__DOT__s0_w_busy) {
        vlSelfRef.io_master_bready = vlSelfRef.m1_bready;
    }
    vlSelfRef.xbar_init__DOT__m0_rreq_s0 = ((IData)(vlSelfRef.m0_arvalid) 
                                            & (IData)(vlSelfRef.xbar_init__DOT__m0_r_s0));
    vlSelfRef.xbar_init__DOT__m1_r_s1 = (0x200U == 
                                         (vlSelfRef.m1_araddr 
                                          >> 0x10U));
    vlSelfRef.IDU_init__DOT____VdfgRegularize_h80d369ef_0_0 
        = ((IData)(vlSelfRef.Ifu2Idu_valid) & (vlSelfRef.inst 
                                               >> 0x1fU));
    vlSelfRef.xbar_init__DOT__m1_w_s1 = (0x200U == 
                                         (vlSelfRef.m1_awaddr 
                                          >> 0x10U));
    vlSelfRef.IDU_init__DOT__valid_to_exu = vlSelfRef.valid_to_exu;
    vlSelfRef.EXU_init__DOT__valid_from_idu = vlSelfRef.valid_to_exu;
    vlSelfRef.EXU_init__DOT__valid_to_lsu = vlSelfRef.valid_to_lsu;
    vlSelfRef.MAU_init__DOT__valid_from_exu = vlSelfRef.valid_to_lsu;
    vlSelfRef.xbar_init__DOT__s1_bready = vlSelfRef.s1_bready;
    vlSelfRef.clint_init__DOT__s_bready = vlSelfRef.s1_bready;
    vlSelfRef.xbar_init__DOT__s1_rready = vlSelfRef.s1_rready;
    vlSelfRef.clint_init__DOT__s_rready = vlSelfRef.s1_rready;
    vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__gpr_raddr1 
        = vlSelfRef.IDU_init__DOT__src1;
    vlSelfRef.rs1 = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
        [vlSelfRef.IDU_init__DOT__src1];
    vlSelfRef.xbar_init__DOT__s0_rready = vlSelfRef.io_master_rready;
    vlSelfRef.xbar_init__DOT__s0_bready = vlSelfRef.io_master_bready;
    vlSelfRef.WBU_init__DOT__gpr_waddr = vlSelfRef.gpr_waddr;
    vlSelfRef.IDU_init__DOT__gpr_waddr = vlSelfRef.gpr_waddr;
    vlSelfRef.rd = vlSelfRef.gpr_waddr;
    vlSelfRef.IDU_init__DOT__inst = vlSelfRef.__Vcellinp__IDU_init__inst;
    vlSelfRef.IDU_init__DOT__is_break = (0x100073U 
                                         == vlSelfRef.__Vcellinp__IDU_init__inst);
    vlSelfRef.IDU_init__DOT__is_ecall = (0x73U == vlSelfRef.__Vcellinp__IDU_init__inst);
    vlSelfRef.IDU_init__DOT__is_mret = (0x30200073U 
                                        == vlSelfRef.__Vcellinp__IDU_init__inst);
    vlSelfRef.IDU_init__DOT__imm_U = (0xfffff000U & vlSelfRef.__Vcellinp__IDU_init__inst);
    vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__gpr_raddr2 
        = vlSelfRef.IDU_init__DOT__src2;
    vlSelfRef.IDU_init__DOT__shamt = vlSelfRef.IDU_init__DOT__src2;
    vlSelfRef.rs2 = vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
        [vlSelfRef.IDU_init__DOT__src2];
    vlSelfRef.EXU_init__DOT__equal = (vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                      [vlSelfRef.IDU_init__DOT__src1] 
                                      == vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                      [vlSelfRef.IDU_init__DOT__src2]);
    vlSelfRef.EXU_init__DOT__less_than_signed = VL_LTS_III(32, 
                                                           vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                                           [vlSelfRef.IDU_init__DOT__src1], 
                                                           vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                                           [vlSelfRef.IDU_init__DOT__src2]);
    vlSelfRef.EXU_init__DOT__less_than_unsigned = (
                                                   vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                                   [vlSelfRef.IDU_init__DOT__src1] 
                                                   < 
                                                   vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                                   [vlSelfRef.IDU_init__DOT__src2]);
    vlSelfRef.IDU_init__DOT__is_mstatus = (0x300U == (IData)(vlSelfRef.IDU_init__DOT__csr_addr));
    vlSelfRef.IDU_init__DOT__is_mtvec = (0x305U == (IData)(vlSelfRef.IDU_init__DOT__csr_addr));
    vlSelfRef.IDU_init__DOT__is_mepc = (0x341U == (IData)(vlSelfRef.IDU_init__DOT__csr_addr));
    vlSelfRef.IDU_init__DOT__is_mcause = (0x342U == (IData)(vlSelfRef.IDU_init__DOT__csr_addr));
    vlSelfRef.IDU_init__DOT__is_mvendorid = (0xf11U 
                                             == (IData)(vlSelfRef.IDU_init__DOT__csr_addr));
    vlSelfRef.IDU_init__DOT__is_marchid = (0xf12U == (IData)(vlSelfRef.IDU_init__DOT__csr_addr));
    vlSelfRef.xbar_init__DOT__m1_rreq_s1 = ((IData)(vlSelfRef.m1_arvalid) 
                                            & (IData)(vlSelfRef.xbar_init__DOT__m1_r_s1));
    vlSelfRef.xbar_init__DOT__m1_r_s0 = (1U & (~ (IData)(vlSelfRef.xbar_init__DOT__m1_r_s1)));
    vlSelfRef.IDU_init__DOT__imm_J = (((- (IData)((IData)(vlSelfRef.IDU_init__DOT____VdfgRegularize_h80d369ef_0_0))) 
                                       << 0x14U) | 
                                      (((((IData)(vlSelfRef.Ifu2Idu_valid)
                                           ? (0xffU 
                                              & (vlSelfRef.inst 
                                                 >> 0xcU))
                                           : 0U) << 0xcU) 
                                        | (0x7ff800U 
                                           & (((IData)(vlSelfRef.Ifu2Idu_valid) 
                                               << 0xbU) 
                                              & (vlSelfRef.inst 
                                                 >> 9U)))) 
                                       | (((IData)(vlSelfRef.Ifu2Idu_valid)
                                            ? (0x3ffU 
                                               & (vlSelfRef.inst 
                                                  >> 0x15U))
                                            : 0U) << 1U)));
    vlSelfRef.IDU_init__DOT__imm_B = (((- (IData)((IData)(vlSelfRef.IDU_init__DOT____VdfgRegularize_h80d369ef_0_0))) 
                                       << 0xcU) | (
                                                   (0xfffff800U 
                                                    & (((IData)(vlSelfRef.Ifu2Idu_valid) 
                                                        << 0xbU) 
                                                       & (vlSelfRef.inst 
                                                          << 4U))) 
                                                   | ((((IData)(vlSelfRef.Ifu2Idu_valid)
                                                         ? 
                                                        (0x3fU 
                                                         & (vlSelfRef.inst 
                                                            >> 0x19U))
                                                         : 0U) 
                                                       << 5U) 
                                                      | (((IData)(vlSelfRef.Ifu2Idu_valid)
                                                           ? 
                                                          (0xfU 
                                                           & (vlSelfRef.inst 
                                                              >> 8U))
                                                           : 0U) 
                                                         << 1U))));
    vlSelfRef.IDU_init__DOT__imm_I = (((- (IData)((IData)(vlSelfRef.IDU_init__DOT____VdfgRegularize_h80d369ef_0_0))) 
                                       << 0xcU) | (IData)(vlSelfRef.IDU_init__DOT__csr_addr));
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
    vlSelfRef.xbar_init__DOT__m1_w_s0 = (1U & (~ (IData)(vlSelfRef.xbar_init__DOT__m1_w_s1)));
    vlSelfRef.IDU_init__DOT__imm_S = (((- (IData)((IData)(vlSelfRef.IDU_init__DOT____VdfgRegularize_h80d369ef_0_0))) 
                                       << 0xcU) | (
                                                   ((IData)(vlSelfRef.IDU_init__DOT__fun7) 
                                                    << 5U) 
                                                   | (IData)(vlSelfRef.gpr_waddr)));
    vlSelfRef.IDU_init__DOT__is_csrrs = ((2U == (IData)(vlSelfRef.IDU_init__DOT__fun3)) 
                                         & (0x73U == (IData)(vlSelfRef.IDU_init__DOT__opcode)));
    vlSelfRef.IDU_init__DOT__is_csrrw = ((1U == (IData)(vlSelfRef.IDU_init__DOT__fun3)) 
                                         & (0x73U == (IData)(vlSelfRef.IDU_init__DOT__opcode)));
    vlSelfRef.IDU_init__DOT__imm_is_I = ((3U == (IData)(vlSelfRef.IDU_init__DOT__opcode)) 
                                         | ((0x13U 
                                             == (IData)(vlSelfRef.IDU_init__DOT__opcode)) 
                                            | (0x67U 
                                               == (IData)(vlSelfRef.IDU_init__DOT__opcode))));
    vlSelfRef.IDU_init__DOT__is_lhu = ((3U == (IData)(vlSelfRef.IDU_init__DOT__opcode)) 
                                       & (5U == (IData)(vlSelfRef.IDU_init__DOT__fun3)));
    vlSelfRef.IDU_init__DOT__is_lbu = ((3U == (IData)(vlSelfRef.IDU_init__DOT__opcode)) 
                                       & (4U == (IData)(vlSelfRef.IDU_init__DOT__fun3)));
    vlSelfRef.IDU_init__DOT__is_lw = ((3U == (IData)(vlSelfRef.IDU_init__DOT__opcode)) 
                                      & (2U == (IData)(vlSelfRef.IDU_init__DOT__fun3)));
    vlSelfRef.IDU_init__DOT__is_lh = ((3U == (IData)(vlSelfRef.IDU_init__DOT__opcode)) 
                                      & (1U == (IData)(vlSelfRef.IDU_init__DOT__fun3)));
    vlSelfRef.IDU_init__DOT__is_lb = ((3U == (IData)(vlSelfRef.IDU_init__DOT__opcode)) 
                                      & (0U == (IData)(vlSelfRef.IDU_init__DOT__fun3)));
    vlSelfRef.IDU_init__DOT__is_lui = (0x37U == (IData)(vlSelfRef.IDU_init__DOT__opcode));
    vlSelfRef.IDU_init__DOT__is_auipc = (0x17U == (IData)(vlSelfRef.IDU_init__DOT__opcode));
    vlSelfRef.IDU_init__DOT__is_jalr = ((0x67U == (IData)(vlSelfRef.IDU_init__DOT__opcode)) 
                                        & (0U == (IData)(vlSelfRef.IDU_init__DOT__fun3)));
    vlSelfRef.IDU_init__DOT__imm_is_J = (0x6fU == (IData)(vlSelfRef.IDU_init__DOT__opcode));
    vlSelfRef.IDU_init__DOT____VdfgRegularize_h80d369ef_0_15 
        = ((0x13U == (IData)(vlSelfRef.IDU_init__DOT__opcode)) 
           & (5U == (IData)(vlSelfRef.IDU_init__DOT__fun3)));
    vlSelfRef.IDU_init__DOT__imm_is_S = (0x23U == (IData)(vlSelfRef.IDU_init__DOT__opcode));
    vlSelfRef.IDU_init__DOT__imm_is_B = (0x63U == (IData)(vlSelfRef.IDU_init__DOT__opcode));
    vlSelfRef.IDU_init__DOT__imm_is_R = (0x33U == (IData)(vlSelfRef.IDU_init__DOT__opcode));
    vlSelfRef.EXU_init__DOT__rs1 = vlSelfRef.rs1;
    vlSelfRef.IDU_init__DOT__rs1 = vlSelfRef.rs1;
    vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__gpr_waddr 
        = vlSelfRef.IDU_init__DOT__gpr_waddr;
    vlSelfRef.IDU_init__DOT__rd = vlSelfRef.rd;
    vlSelfRef.WBU_init__DOT__rd = vlSelfRef.rd;
    if (vlSelfRef.IDU_init__DOT__is_break) {
        VysyxSoCFull___024unit____Vdpiimwrap_halt_TOP____024unit();
    }
    vlSelfRef.is_ecall_mret = ((IData)(vlSelfRef.IDU_init__DOT__is_ecall) 
                               | (IData)(vlSelfRef.IDU_init__DOT__is_mret));
    vlSelfRef.next_pc_csr = ((IData)(vlSelfRef.IDU_init__DOT__is_ecall)
                              ? vlSelfRef.IDU_init__DOT__mtvec
                              : ((IData)(vlSelfRef.IDU_init__DOT__is_mret)
                                  ? vlSelfRef.IDU_init__DOT__mepc
                                  : 0U));
    vlSelfRef.EXU_init__DOT__rs2 = vlSelfRef.rs2;
    vlSelfRef.MAU_init__DOT__data = vlSelfRef.rs2;
    vlSelfRef.IDU_init__DOT__rs2 = vlSelfRef.rs2;
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
    vlSelfRef.xbar_init__DOT__m1_rreq_s0 = ((IData)(vlSelfRef.xbar_init__DOT__m1_r_s0) 
                                            & (IData)(vlSelfRef.m1_arvalid));
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
    vlSelfRef.IDU_init__DOT__is_csr = ((IData)(vlSelfRef.IDU_init__DOT__is_csrrs) 
                                       | (IData)(vlSelfRef.IDU_init__DOT__is_csrrw));
    vlSelfRef.load_ctrl = ((((IData)(vlSelfRef.IDU_init__DOT__is_lhu) 
                             << 4U) | (((IData)(vlSelfRef.IDU_init__DOT__is_lbu) 
                                        << 3U) | ((IData)(vlSelfRef.IDU_init__DOT__is_lw) 
                                                  << 2U))) 
                           | (((IData)(vlSelfRef.IDU_init__DOT__is_lh) 
                               << 1U) | (IData)(vlSelfRef.IDU_init__DOT__is_lb)));
    vlSelfRef.IDU_init__DOT__imm_is_U = ((IData)(vlSelfRef.IDU_init__DOT__is_lui) 
                                         | (IData)(vlSelfRef.IDU_init__DOT__is_auipc));
    if (vlSelfRef.IDU_init__DOT__imm_is_J) {
        vlSelfRef.IDU_init__DOT__is_jal = 1U;
        vlSelfRef.next_pc_jump = (vlSelfRef.pc + vlSelfRef.IDU_init__DOT__imm_J);
    } else {
        vlSelfRef.IDU_init__DOT__is_jal = 0U;
        vlSelfRef.next_pc_jump = ((IData)(vlSelfRef.IDU_init__DOT__is_jalr)
                                   ? (vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                      [vlSelfRef.IDU_init__DOT__src1] 
                                      + vlSelfRef.IDU_init__DOT__imm_I)
                                   : 0U);
    }
    vlSelfRef.is_jump = ((IData)(vlSelfRef.IDU_init__DOT__imm_is_J) 
                         | (IData)(vlSelfRef.IDU_init__DOT__is_jalr));
    vlSelfRef.IDU_init__DOT__is_sw = ((IData)(vlSelfRef.IDU_init__DOT__imm_is_S) 
                                      & (2U == (IData)(vlSelfRef.IDU_init__DOT__fun3)));
    vlSelfRef.IDU_init__DOT__is_sh = ((IData)(vlSelfRef.IDU_init__DOT__imm_is_S) 
                                      & (1U == (IData)(vlSelfRef.IDU_init__DOT__fun3)));
    vlSelfRef.IDU_init__DOT__is_sb = ((IData)(vlSelfRef.IDU_init__DOT__imm_is_S) 
                                      & (0U == (IData)(vlSelfRef.IDU_init__DOT__fun3)));
    vlSelfRef.EXU_init__DOT__is_beq = ((IData)(vlSelfRef.IDU_init__DOT__imm_is_B) 
                                       & (0U == (IData)(vlSelfRef.IDU_init__DOT__fun3)));
    vlSelfRef.EXU_init__DOT__is_bne = ((IData)(vlSelfRef.IDU_init__DOT__imm_is_B) 
                                       & (1U == (IData)(vlSelfRef.IDU_init__DOT__fun3)));
    vlSelfRef.EXU_init__DOT__is_blt = ((IData)(vlSelfRef.IDU_init__DOT__imm_is_B) 
                                       & (4U == (IData)(vlSelfRef.IDU_init__DOT__fun3)));
    vlSelfRef.EXU_init__DOT__is_bge = ((IData)(vlSelfRef.IDU_init__DOT__imm_is_B) 
                                       & (5U == (IData)(vlSelfRef.IDU_init__DOT__fun3)));
    vlSelfRef.EXU_init__DOT__is_bltu = ((IData)(vlSelfRef.IDU_init__DOT__imm_is_B) 
                                        & (6U == (IData)(vlSelfRef.IDU_init__DOT__fun3)));
    vlSelfRef.EXU_init__DOT__is_bgeu = ((IData)(vlSelfRef.IDU_init__DOT__imm_is_B) 
                                        & (7U == (IData)(vlSelfRef.IDU_init__DOT__fun3)));
    vlSelfRef.IDU_init__DOT__is_sltu = (((IData)(vlSelfRef.IDU_init__DOT__imm_is_R) 
                                         | (0x13U == (IData)(vlSelfRef.IDU_init__DOT__opcode))) 
                                        & ((3U == (IData)(vlSelfRef.IDU_init__DOT__fun3)) 
                                           & (0U == (IData)(vlSelfRef.IDU_init__DOT__fun7))));
    vlSelfRef.IDU_init__DOT__is_slt = (((IData)(vlSelfRef.IDU_init__DOT__imm_is_R) 
                                        | (0x13U == (IData)(vlSelfRef.IDU_init__DOT__opcode))) 
                                       & ((2U == (IData)(vlSelfRef.IDU_init__DOT__fun3)) 
                                          & (0U == (IData)(vlSelfRef.IDU_init__DOT__fun7))));
    vlSelfRef.IDU_init__DOT__is_xor = (((IData)(vlSelfRef.IDU_init__DOT__imm_is_R) 
                                        & ((4U == (IData)(vlSelfRef.IDU_init__DOT__fun3)) 
                                           & (0U == (IData)(vlSelfRef.IDU_init__DOT__fun7)))) 
                                       | ((0x13U == (IData)(vlSelfRef.IDU_init__DOT__opcode)) 
                                          & (4U == (IData)(vlSelfRef.IDU_init__DOT__fun3))));
    vlSelfRef.IDU_init__DOT__is_or = (((IData)(vlSelfRef.IDU_init__DOT__imm_is_R) 
                                       & ((6U == (IData)(vlSelfRef.IDU_init__DOT__fun3)) 
                                          & (0U == (IData)(vlSelfRef.IDU_init__DOT__fun7)))) 
                                      | ((0x13U == (IData)(vlSelfRef.IDU_init__DOT__opcode)) 
                                         & (6U == (IData)(vlSelfRef.IDU_init__DOT__fun3))));
    vlSelfRef.IDU_init__DOT__is_and = (((IData)(vlSelfRef.IDU_init__DOT__imm_is_R) 
                                        & ((7U == (IData)(vlSelfRef.IDU_init__DOT__fun3)) 
                                           & (0U == (IData)(vlSelfRef.IDU_init__DOT__fun7)))) 
                                       | ((0x13U == (IData)(vlSelfRef.IDU_init__DOT__opcode)) 
                                          & (7U == (IData)(vlSelfRef.IDU_init__DOT__fun3))));
    vlSelfRef.IDU_init__DOT__is_sll = (((IData)(vlSelfRef.IDU_init__DOT__imm_is_R) 
                                        | (0x13U == (IData)(vlSelfRef.IDU_init__DOT__opcode))) 
                                       & ((1U == (IData)(vlSelfRef.IDU_init__DOT__fun3)) 
                                          & (0U == (IData)(vlSelfRef.IDU_init__DOT__fun7))));
    vlSelfRef.IDU_init__DOT____VdfgRegularize_h80d369ef_0_10 
        = ((IData)(vlSelfRef.IDU_init__DOT__imm_is_R) 
           & (0U == (IData)(vlSelfRef.IDU_init__DOT__fun3)));
    vlSelfRef.IDU_init__DOT____VdfgRegularize_h80d369ef_0_14 
        = ((IData)(vlSelfRef.IDU_init__DOT__imm_is_R) 
           & (5U == (IData)(vlSelfRef.IDU_init__DOT__fun3)));
    vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__gpr_rdata1 
        = vlSelfRef.IDU_init__DOT__rs1;
    vlSelfRef.IDU_init__DOT__is_ecall_mret = vlSelfRef.is_ecall_mret;
    vlSelfRef.IFU_init__DOT__is_ecall_mret = vlSelfRef.is_ecall_mret;
    vlSelfRef.IDU_init__DOT__next_pc_csr = vlSelfRef.next_pc_csr;
    vlSelfRef.IFU_init__DOT__next_pc_csr = vlSelfRef.next_pc_csr;
    vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__gpr_rdata2 
        = vlSelfRef.IDU_init__DOT__rs2;
    vlSelfRef.IDU_init__DOT__csr2reg = vlSelfRef.IDU_init__DOT__csr_temp;
    vlSelfRef.xbar_init__DOT__s1_arvalid = vlSelfRef.s1_arvalid;
    vlSelfRef.clint_init__DOT__s_arvalid = vlSelfRef.s1_arvalid;
    vlSelfRef.xbar_init__DOT__s1_araddr = vlSelfRef.s1_araddr;
    vlSelfRef.clint_init__DOT__s_araddr = vlSelfRef.s1_araddr;
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
    vlSelfRef.xbar_init__DOT__s0_wdata = vlSelfRef.io_master_wdata;
    vlSelfRef.xbar_init__DOT__s0_wstrb = vlSelfRef.io_master_wstrb;
    vlSelfRef.xbar_init__DOT__s0_wvalid = vlSelfRef.io_master_wvalid;
    vlSelfRef.xbar_init__DOT__s0_awvalid = vlSelfRef.io_master_awvalid;
    vlSelfRef.xbar_init__DOT__s0_awaddr = vlSelfRef.io_master_awaddr;
    vlSelfRef.IDU_init__DOT__load_ctrl = vlSelfRef.load_ctrl;
    vlSelfRef.MAU_init__DOT__load_ctrl = vlSelfRef.load_ctrl;
    vlSelfRef.WBU_init__DOT__load_ctrl = vlSelfRef.load_ctrl;
    vlSelfRef.MAU_init__DOT__load_valid = ((IData)(vlSelfRef.Ifu2Idu_valid) 
                                           & (0U != (IData)(vlSelfRef.load_ctrl)));
    vlSelfRef.IDU_init__DOT__next_pc_jump = vlSelfRef.next_pc_jump;
    vlSelfRef.IFU_init__DOT__next_pc_jump = vlSelfRef.next_pc_jump;
    vlSelfRef.IDU_init__DOT__is_jump = vlSelfRef.is_jump;
    vlSelfRef.IFU_init__DOT__is_jump = vlSelfRef.is_jump;
    vlSelfRef.rd_we = ((IData)(vlSelfRef.IDU_init__DOT__imm_is_R) 
                       | ((IData)(vlSelfRef.IDU_init__DOT__imm_is_U) 
                          | ((IData)(vlSelfRef.IDU_init__DOT__imm_is_I) 
                             | ((IData)(vlSelfRef.is_jump) 
                                | (IData)(vlSelfRef.IDU_init__DOT__is_csr)))));
    vlSelfRef.store_ctrl = (((IData)(vlSelfRef.IDU_init__DOT__is_sw) 
                             << 2U) | (((IData)(vlSelfRef.IDU_init__DOT__is_sh) 
                                        << 1U) | (IData)(vlSelfRef.IDU_init__DOT__is_sb)));
    vlSelfRef.IDU_init__DOT__is_beq = vlSelfRef.EXU_init__DOT__is_beq;
    vlSelfRef.IDU_init__DOT__is_bne = vlSelfRef.EXU_init__DOT__is_bne;
    vlSelfRef.IDU_init__DOT__is_blt = vlSelfRef.EXU_init__DOT__is_blt;
    vlSelfRef.IDU_init__DOT__is_bge = vlSelfRef.EXU_init__DOT__is_bge;
    vlSelfRef.IDU_init__DOT__is_bltu = vlSelfRef.EXU_init__DOT__is_bltu;
    vlSelfRef.IDU_init__DOT__is_bgeu = vlSelfRef.EXU_init__DOT__is_bgeu;
    vlSelfRef.branch_taken = (((IData)(vlSelfRef.EXU_init__DOT__is_beq) 
                               & (IData)(vlSelfRef.EXU_init__DOT__equal)) 
                              | (((~ (IData)(vlSelfRef.EXU_init__DOT__equal)) 
                                  & (IData)(vlSelfRef.EXU_init__DOT__is_bne)) 
                                 | (((IData)(vlSelfRef.EXU_init__DOT__is_blt) 
                                     & (IData)(vlSelfRef.EXU_init__DOT__less_than_signed)) 
                                    | (((~ (IData)(vlSelfRef.EXU_init__DOT__less_than_signed)) 
                                        & (IData)(vlSelfRef.EXU_init__DOT__is_bge)) 
                                       | (((IData)(vlSelfRef.EXU_init__DOT__is_bltu) 
                                           & (IData)(vlSelfRef.EXU_init__DOT__less_than_unsigned)) 
                                          | ((~ (IData)(vlSelfRef.EXU_init__DOT__less_than_unsigned)) 
                                             & (IData)(vlSelfRef.EXU_init__DOT__is_bgeu)))))));
    vlSelfRef.branch_ctrl = ((((IData)(vlSelfRef.EXU_init__DOT__is_bgeu) 
                               << 5U) | (((IData)(vlSelfRef.EXU_init__DOT__is_bltu) 
                                          << 4U) | 
                                         ((IData)(vlSelfRef.EXU_init__DOT__is_bge) 
                                          << 3U))) 
                             | (((IData)(vlSelfRef.EXU_init__DOT__is_blt) 
                                 << 2U) | (((IData)(vlSelfRef.EXU_init__DOT__is_bne) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.EXU_init__DOT__is_beq))));
    vlSelfRef.IDU_init__DOT__is_sub = ((IData)(vlSelfRef.IDU_init__DOT____VdfgRegularize_h80d369ef_0_10) 
                                       & (0x20U == (IData)(vlSelfRef.IDU_init__DOT__fun7)));
    vlSelfRef.IDU_init__DOT__is_srl = (((IData)(vlSelfRef.IDU_init__DOT____VdfgRegularize_h80d369ef_0_14) 
                                        | (IData)(vlSelfRef.IDU_init__DOT____VdfgRegularize_h80d369ef_0_15)) 
                                       & (0U == (IData)(vlSelfRef.IDU_init__DOT__fun7)));
    vlSelfRef.IDU_init__DOT__is_sra = (((IData)(vlSelfRef.IDU_init__DOT____VdfgRegularize_h80d369ef_0_14) 
                                        | (IData)(vlSelfRef.IDU_init__DOT____VdfgRegularize_h80d369ef_0_15)) 
                                       & (0x20U == (IData)(vlSelfRef.IDU_init__DOT__fun7)));
    vlSelfRef.xbar_init__DOT__s0_arvalid = vlSelfRef.io_master_arvalid;
    vlSelfRef.xbar_init__DOT__s0_araddr = vlSelfRef.io_master_araddr;
    vlSelfRef.IDU_init__DOT__rd_we = vlSelfRef.rd_we;
    vlSelfRef.WBU_init__DOT__rd_we = vlSelfRef.rd_we;
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
    vlSelfRef.IDU_init__DOT__store_ctrl = vlSelfRef.store_ctrl;
    vlSelfRef.MAU_init__DOT__wen = (0U != (IData)(vlSelfRef.store_ctrl));
    vlSelfRef.MAU_init__DOT__store_ctrl = vlSelfRef.store_ctrl;
    vlSelfRef.MAU_init__DOT__store_valid = ((IData)(vlSelfRef.Ifu2Idu_valid) 
                                            & (0U != (IData)(vlSelfRef.store_ctrl)));
    vlSelfRef.IFU_init__DOT__branch_taken = vlSelfRef.branch_taken;
    vlSelfRef.EXU_init__DOT__branch_taken = vlSelfRef.branch_taken;
    vlSelfRef.IDU_init__DOT__branch_ctrl = vlSelfRef.branch_ctrl;
    vlSelfRef.EXU_init__DOT__branch_ctrl = vlSelfRef.branch_ctrl;
    vlSelfRef.__VdfgRegularize_h628f4167_0_0 = (((IData)(vlSelfRef.IDU_init__DOT__imm_is_I) 
                                                 & ((IData)(vlSelfRef.IDU_init__DOT__is_sll) 
                                                    | ((IData)(vlSelfRef.IDU_init__DOT__is_srl) 
                                                       | (IData)(vlSelfRef.IDU_init__DOT__is_sra))))
                                                 ? (IData)(vlSelfRef.IDU_init__DOT__src2)
                                                 : 
                                                ((IData)(vlSelfRef.IDU_init__DOT__imm_is_I)
                                                  ? vlSelfRef.IDU_init__DOT__imm_I
                                                  : 
                                                 ((IData)(vlSelfRef.IDU_init__DOT__imm_is_R)
                                                   ? 
                                                  vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__GPR
                                                  [vlSelfRef.IDU_init__DOT__src2]
                                                   : 
                                                  ((IData)(vlSelfRef.IDU_init__DOT__imm_is_S)
                                                    ? vlSelfRef.IDU_init__DOT__imm_S
                                                    : 
                                                   ((IData)(vlSelfRef.IDU_init__DOT__imm_is_B)
                                                     ? vlSelfRef.IDU_init__DOT__imm_B
                                                     : 
                                                    ((IData)(vlSelfRef.IDU_init__DOT__imm_is_U)
                                                      ? vlSelfRef.IDU_init__DOT__imm_U
                                                      : 0U))))));
    vlSelfRef.alu_op = ((0x800U & (IData)(vlSelfRef.alu_op)) 
                        | (((((IData)(vlSelfRef.IDU_init__DOT__is_sltu) 
                              << 0xaU) | (((IData)(vlSelfRef.IDU_init__DOT__is_slt) 
                                           << 9U) | 
                                          ((IData)(vlSelfRef.IDU_init__DOT__is_sra) 
                                           << 8U))) 
                            | (((IData)(vlSelfRef.IDU_init__DOT__is_srl) 
                                << 7U) | (((IData)(vlSelfRef.IDU_init__DOT__is_sll) 
                                           << 6U) | 
                                          ((IData)(vlSelfRef.IDU_init__DOT__is_sub) 
                                           << 5U)))) 
                           | ((((IData)(vlSelfRef.IDU_init__DOT__is_xor) 
                                << 4U) | (((IData)(vlSelfRef.IDU_init__DOT__is_or) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.IDU_init__DOT__is_and) 
                                           << 2U))) 
                              | (((IData)(vlSelfRef.IDU_init__DOT__is_lui) 
                                  << 1U) | (((IData)(vlSelfRef.IDU_init__DOT____VdfgRegularize_h80d369ef_0_10) 
                                             & (0U 
                                                == (IData)(vlSelfRef.IDU_init__DOT__fun7))) 
                                            | ((IData)(vlSelfRef.IDU_init__DOT__is_auipc) 
                                               | (((0x13U 
                                                    == (IData)(vlSelfRef.IDU_init__DOT__opcode)) 
                                                   & (0U 
                                                      == (IData)(vlSelfRef.IDU_init__DOT__fun3))) 
                                                  | ((IData)(vlSelfRef.is_jump) 
                                                     | ((0U 
                                                         != (IData)(vlSelfRef.load_ctrl)) 
                                                        | ((0U 
                                                            != (IData)(vlSelfRef.store_ctrl)) 
                                                           | (0U 
                                                              != (IData)(vlSelfRef.branch_ctrl))))))))))));
    vlSelfRef.MAU_init__DOT__is_mem_op = ((IData)(vlSelfRef.MAU_init__DOT__store_valid) 
                                          | (IData)(vlSelfRef.MAU_init__DOT__load_valid));
    vlSelfRef.IDU_init__DOT__alu_op = vlSelfRef.alu_op;
    vlSelfRef.EXU_init__DOT__alu_op = vlSelfRef.alu_op;
    vlSelfRef.EXU_init__DOT__op_add = (1U & (IData)(vlSelfRef.alu_op));
    vlSelfRef.EXU_init__DOT__op_lui = (1U & ((IData)(vlSelfRef.alu_op) 
                                             >> 1U));
    vlSelfRef.EXU_init__DOT__op_and = (1U & ((IData)(vlSelfRef.alu_op) 
                                             >> 2U));
    vlSelfRef.EXU_init__DOT__op_or = (1U & ((IData)(vlSelfRef.alu_op) 
                                            >> 3U));
    vlSelfRef.EXU_init__DOT__op_xor = (1U & ((IData)(vlSelfRef.alu_op) 
                                             >> 4U));
    vlSelfRef.EXU_init__DOT__op_sll = (1U & ((IData)(vlSelfRef.alu_op) 
                                             >> 6U));
    vlSelfRef.EXU_init__DOT__op_srl = (1U & ((IData)(vlSelfRef.alu_op) 
                                             >> 7U));
    vlSelfRef.EXU_init__DOT__op_sra = (1U & ((IData)(vlSelfRef.alu_op) 
                                             >> 8U));
    vlSelfRef.EXU_init__DOT__op_slt = (1U & ((IData)(vlSelfRef.alu_op) 
                                             >> 9U));
    vlSelfRef.EXU_init__DOT__op_sltu = (1U & ((IData)(vlSelfRef.alu_op) 
                                              >> 0xaU));
    vlSelfRef.EXU_init__DOT__op_sub = (1U & ((IData)(vlSelfRef.alu_op) 
                                             >> 5U));
    vlSelfRef.MAU_init__DOT____VdfgRegularize_h3fdffd83_0_0 
        = (1U & ((~ (IData)(vlSelfRef.MAU_init__DOT__is_mem_op)) 
                 | (IData)(vlSelfRef.MAU_init__DOT__done)));
    vlSelfRef.EXU_init__DOT____VdfgRegularize_he932f07c_0_0 
        = ((IData)(vlSelfRef.is_jump) ? 4U : (0x1fU 
                                              & vlSelfRef.__VdfgRegularize_h628f4167_0_0));
    vlSelfRef.EXU_init__DOT____VdfgRegularize_he932f07c_0_1 
        = (vlSelfRef.alu_src1 >> (IData)(vlSelfRef.EXU_init__DOT____VdfgRegularize_he932f07c_0_0));
    vlSelfRef.alu_src2 = ((IData)(vlSelfRef.is_jump)
                           ? 4U : vlSelfRef.__VdfgRegularize_h628f4167_0_0);
    vlSelfRef.IDU_init__DOT__alu_src2 = vlSelfRef.alu_src2;
    vlSelfRef.EXU_init__DOT__alu_src2 = vlSelfRef.alu_src2;
    if (vlSelfRef.EXU_init__DOT__op_sub) {
        vlSelfRef.EXU_init__DOT__carry_in = 1U;
        vlSelfRef.EXU_init__DOT__alu_b = ((IData)(vlSelfRef.is_jump)
                                           ? 0xfffffffbU
                                           : (~ vlSelfRef.__VdfgRegularize_h628f4167_0_0));
    } else {
        vlSelfRef.EXU_init__DOT__carry_in = 0U;
        vlSelfRef.EXU_init__DOT__alu_b = vlSelfRef.alu_src2;
    }
    vlSelfRef.Idu2Ifu_ready = ((IData)(vlSelfRef.ready_from_wbu) 
                               & (IData)(vlSelfRef.MAU_init__DOT____VdfgRegularize_h3fdffd83_0_0));
    vlSelfRef.valid_to_wbu = ((IData)(vlSelfRef.Ifu2Idu_valid) 
                              & (IData)(vlSelfRef.MAU_init__DOT____VdfgRegularize_h3fdffd83_0_0));
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
    vlSelfRef.IDU_init__DOT__ready_to_ifu = vlSelfRef.Idu2Ifu_ready;
    vlSelfRef.IFU_init__DOT__ready = vlSelfRef.Idu2Ifu_ready;
    vlSelfRef.ready_from_exu = vlSelfRef.Idu2Ifu_ready;
    vlSelfRef.ready_from_lsu = vlSelfRef.Idu2Ifu_ready;
    vlSelfRef.MAU_init__DOT__valid_to_wbu = vlSelfRef.valid_to_wbu;
    vlSelfRef.WBU_init__DOT__valid_from_lsu = vlSelfRef.valid_to_wbu;
    vlSelfRef.commit = vlSelfRef.valid_to_wbu;
    vlSelfRef.gpr_we = ((IData)(vlSelfRef.rd_we) & (IData)(vlSelfRef.valid_to_wbu));
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
    vlSelfRef.IDU_init__DOT__ready_from_exu = vlSelfRef.ready_from_exu;
    vlSelfRef.EXU_init__DOT__ready_to_idu = vlSelfRef.ready_from_exu;
    vlSelfRef.EXU_init__DOT__read_from_lsu = vlSelfRef.ready_from_lsu;
    vlSelfRef.MAU_init__DOT__ready_to_exu = vlSelfRef.ready_from_lsu;
    vlSelfRef.WBU_init__DOT__gpr_we = vlSelfRef.gpr_we;
    vlSelfRef.IDU_init__DOT__gpr_we = vlSelfRef.gpr_we;
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
    vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__gpr_we 
        = vlSelfRef.IDU_init__DOT__gpr_we;
    vlSelfRef.IDU_init__DOT__gpr_wdata = vlSelfRef.gpr_wdata;
    vlSelfRef.WBU_init__DOT__gpr_wdata = vlSelfRef.gpr_wdata;
    vlSelfRef.IDU_init__DOT__gpr_wdata_total = ((IData)(vlSelfRef.IDU_init__DOT__is_csr)
                                                 ? vlSelfRef.IDU_init__DOT__csr_temp
                                                 : vlSelfRef.gpr_wdata);
    vlSelfRef.IDU_init__DOT__ysyx_25080218_GPR_init__DOT__gpr_wdata 
        = vlSelfRef.IDU_init__DOT__gpr_wdata_total;
}
