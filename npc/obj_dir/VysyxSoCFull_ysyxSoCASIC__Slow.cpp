// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_ysyxSoCASIC.h"

// Parameter definitions for VysyxSoCFull_ysyxSoCASIC
constexpr CData/*2:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__s_idle;
constexpr CData/*2:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__s_send_start;
constexpr CData/*2:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__s_send_byte;
constexpr CData/*2:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__s_send_parity;
constexpr CData/*2:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__s_send_stop;
constexpr CData/*2:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__s_pop_byte;
constexpr CData/*0:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__init_value;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__sr_idle;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__sr_rec_start;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__sr_rec_bit;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__sr_rec_parity;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__sr_rec_stop;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__sr_check_parity;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__sr_rec_prepare;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__sr_end_bit;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__sr_ca_lc_parity;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__sr_wait1;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__sr_push;
constexpr CData/*2:0*/ VysyxSoCFull_ysyxSoCASIC::lspi__DOT__mspi__DOT__divider;
constexpr CData/*2:0*/ VysyxSoCFull_ysyxSoCASIC::lspi__DOT__mspi__DOT__ss;
constexpr CData/*2:0*/ VysyxSoCFull_ysyxSoCASIC::lspi__DOT__mspi__DOT__tx;
constexpr CData/*2:0*/ VysyxSoCFull_ysyxSoCASIC::lspi__DOT__mspi__DOT__ctrl;
constexpr CData/*2:0*/ VysyxSoCFull_ysyxSoCASIC::lspi__DOT__mspi__DOT__finish;
constexpr CData/*2:0*/ VysyxSoCFull_ysyxSoCASIC::lspi__DOT__mspi__DOT__clean;
constexpr CData/*2:0*/ VysyxSoCFull_ysyxSoCASIC::lspi__DOT__mspi__DOT__read;
constexpr CData/*2:0*/ VysyxSoCFull_ysyxSoCASIC::lspi__DOT__mspi__DOT__done;
constexpr CData/*0:0*/ VysyxSoCFull_ysyxSoCASIC::lpsram__DOT__mpsram__DOT__u0__DOT__ST_IDLE;
constexpr CData/*0:0*/ VysyxSoCFull_ysyxSoCASIC::lpsram__DOT__mpsram__DOT__u0__DOT__ST_WAIT;
constexpr CData/*0:0*/ VysyxSoCFull_ysyxSoCASIC::lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__IDLE;
constexpr CData/*0:0*/ VysyxSoCFull_ysyxSoCASIC::lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__READ;
constexpr CData/*0:0*/ VysyxSoCFull_ysyxSoCASIC::lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__IDLE;
constexpr CData/*0:0*/ VysyxSoCFull_ysyxSoCASIC::lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__WRITE;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__CMD_NOP;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__CMD_ACTIVE;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__CMD_READ;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__CMD_WRITE;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__CMD_TERMINATE;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__CMD_PRECHARGE;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__CMD_REFRESH;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__CMD_LOAD_MODE;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__STATE_INIT;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__STATE_DELAY;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__STATE_IDLE;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__STATE_ACTIVATE;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__STATE_READ;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__STATE_READ_WAIT;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__STATE_WRITE0;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__STATE_WRITE1;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__STATE_PRECHARGE;
constexpr CData/*3:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__STATE_REFRESH;
constexpr SData/*12:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__MODE_REG;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__fifo_width;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__fifo_depth;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__fifo_pointer_w;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__fifo_counter_w;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__addr_width;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__data_width;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__depth;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__Tp;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__width;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo_width;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo_depth;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo_pointer_w;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo_counter_w;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__addr_width;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__data_width;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__depth;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lgpio__DOT__mgpio__DOT__idle;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lgpio__DOT__mgpio__DOT__setup;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lgpio__DOT__mgpio__DOT__access;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lvga__DOT__mvga__DOT__VS_COUNT;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lvga__DOT__mvga__DOT__V_ACTIVE;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lvga__DOT__mvga__DOT__V_Backporch;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lvga__DOT__mvga__DOT__V_Frontporch;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lvga__DOT__mvga__DOT__V_total;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lvga__DOT__mvga__DOT__HS_COUNT;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lvga__DOT__mvga__DOT__H_ACTIVE;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lvga__DOT__mvga__DOT__H_Backporch;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lvga__DOT__mvga__DOT__H_Frontporch;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lvga__DOT__mvga__DOT__H_total;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lspi__DOT__mspi__DOT__flash_addr_start;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lspi__DOT__mspi__DOT__flash_addr_end;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lspi__DOT__mspi__DOT__spi_ss_num;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lspi__DOT__mspi__DOT__u0_spi_top__DOT__Tp;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__Tp;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__Tp;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__SDRAM_MHZ;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__SDRAM_ADDR_W;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__SDRAM_COL_W;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__SDRAM_READ_LATENCY;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__SDRAM_BANK_W;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__SDRAM_DQM_W;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__SDRAM_BANKS;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__SDRAM_ROW_W;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__SDRAM_REFRESH_CNT;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__SDRAM_START_DELAY;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__SDRAM_REFRESH_CYCLES;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__CMD_W;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__STATE_W;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__AUTO_PRECHARGE;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ALL_BANKS;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__SDRAM_DATA_W;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__CYCLE_TIME_NS;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__SDRAM_TRCD_CYCLES;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__SDRAM_TRP_CYCLES;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__SDRAM_TRFC_CYCLES;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__DELAY_W;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__REFRESH_CNT_W;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::apbdelay_delayer__DOT__idle;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::apbdelay_delayer__DOT__setup;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::apbdelay_delayer__DOT__access;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::apbdelay_delayer__DOT__wait1;
constexpr IData/*31:0*/ VysyxSoCFull_ysyxSoCASIC::apbdelay_delayer__DOT__wait2;


void VysyxSoCFull_ysyxSoCASIC___ctor_var_reset(VysyxSoCFull_ysyxSoCASIC* vlSelf);

VysyxSoCFull_ysyxSoCASIC::VysyxSoCFull_ysyxSoCASIC(VysyxSoCFull__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VysyxSoCFull_ysyxSoCASIC___ctor_var_reset(this);
}

void VysyxSoCFull_ysyxSoCASIC::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VysyxSoCFull_ysyxSoCASIC::~VysyxSoCFull_ysyxSoCASIC() {
}
