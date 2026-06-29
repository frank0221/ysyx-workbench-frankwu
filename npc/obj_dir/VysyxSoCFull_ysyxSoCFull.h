// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYXSOCFULL_H_
#define VERILATED_VYSYXSOCFULL_YSYXSOCFULL_H_  // guard

#include "verilated.h"
class VysyxSoCFull_ysyxSoCASIC;


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull_ysyxSoCFull final : public VerilatedModule {
  public:
    // CELLS
    VysyxSoCFull_ysyxSoCASIC* asic;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ _asic_spi_sck;
        CData/*0:0*/ _asic_psram_sck;
        CData/*0:0*/ _asic_psram_ce_n;
        CData/*0:0*/ _asic_sdram_clk;
        CData/*0:0*/ flash__DOT__reset;
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(externalPins_gpio_seg_0,7,0);
        VL_OUT8(externalPins_gpio_seg_1,7,0);
        VL_OUT8(externalPins_gpio_seg_2,7,0);
        VL_OUT8(externalPins_gpio_seg_3,7,0);
        VL_OUT8(externalPins_gpio_seg_4,7,0);
        VL_OUT8(externalPins_gpio_seg_5,7,0);
        VL_OUT8(externalPins_gpio_seg_6,7,0);
        VL_OUT8(externalPins_gpio_seg_7,7,0);
        VL_IN8(externalPins_ps2_clk,0,0);
        VL_IN8(externalPins_ps2_data,0,0);
        VL_OUT8(externalPins_vga_r,7,0);
        VL_OUT8(externalPins_vga_g,7,0);
        VL_OUT8(externalPins_vga_b,7,0);
        VL_OUT8(externalPins_vga_hsync,0,0);
        VL_OUT8(externalPins_vga_vsync,0,0);
        VL_OUT8(externalPins_vga_valid,0,0);
        VL_IN8(externalPins_uart_rx,0,0);
        VL_OUT8(externalPins_uart_tx,0,0);
        CData/*0:0*/ _bitrev_miso;
        CData/*0:0*/ _flash_miso;
        CData/*7:0*/ _asic_spi_ss;
        CData/*0:0*/ _asic_spi_mosi;
        CData/*0:0*/ _asic_sdram_cke;
        CData/*0:0*/ _asic_sdram_cs;
        CData/*0:0*/ _asic_sdram_ras;
        CData/*0:0*/ _asic_sdram_cas;
        CData/*0:0*/ _asic_sdram_we;
        CData/*1:0*/ _asic_sdram_ba;
        CData/*1:0*/ _asic_sdram_dqm;
        CData/*3:0*/ _dio_wire;
        CData/*0:0*/ flash__DOT__sck;
        CData/*0:0*/ flash__DOT__ss;
        CData/*0:0*/ flash__DOT__mosi;
        CData/*0:0*/ flash__DOT__miso;
        CData/*2:0*/ flash__DOT__state;
        CData/*7:0*/ flash__DOT__counter;
        CData/*7:0*/ flash__DOT__cmd;
        CData/*0:0*/ flash__DOT__ren;
        CData/*0:0*/ flash__DOT__flash_cmd_i__DOT__clock;
        CData/*0:0*/ flash__DOT__flash_cmd_i__DOT__valid;
        CData/*7:0*/ flash__DOT__flash_cmd_i__DOT__cmd;
        CData/*0:0*/ bitrev__DOT__sck;
        CData/*0:0*/ bitrev__DOT__ss;
        CData/*0:0*/ bitrev__DOT__mosi;
        CData/*0:0*/ bitrev__DOT__miso;
        CData/*7:0*/ bitrev__DOT__data_i;
        CData/*7:0*/ bitrev__DOT__data_o;
        CData/*0:0*/ bitrev__DOT__out;
        CData/*0:0*/ bitrev__DOT__data_i_7;
        CData/*0:0*/ bitrev__DOT__data_i_6;
        CData/*0:0*/ bitrev__DOT__data_i_5;
        CData/*0:0*/ bitrev__DOT__data_i_4;
        CData/*0:0*/ bitrev__DOT__data_i_3;
        CData/*0:0*/ bitrev__DOT__data_i_2;
        CData/*0:0*/ bitrev__DOT__data_i_1;
        CData/*0:0*/ bitrev__DOT__data_i_0;
        CData/*0:0*/ bitrev__DOT__data_o_7;
    };
    struct {
        CData/*0:0*/ bitrev__DOT__data_o_6;
        CData/*0:0*/ bitrev__DOT__data_o_5;
        CData/*0:0*/ bitrev__DOT__data_o_4;
        CData/*0:0*/ bitrev__DOT__data_o_3;
        CData/*0:0*/ bitrev__DOT__data_o_2;
        CData/*0:0*/ bitrev__DOT__data_o_1;
        CData/*0:0*/ bitrev__DOT__data_o_0;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__clk;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__ss;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__in_s;
        CData/*7:0*/ bitrev__DOT__serial2pare_init__DOT__in_p;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__out_s;
        CData/*7:0*/ bitrev__DOT__serial2pare_init__DOT__out_p;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__d0;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__d1;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__d2;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__d3;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__d4;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__d5;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__d6;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__d7;
        CData/*4:0*/ bitrev__DOT__serial2pare_init__DOT__i;
        CData/*7:0*/ bitrev__DOT__serial2pare_init__DOT__out_r;
        CData/*3:0*/ bitrev__DOT__serial2pare_init__DOT__sel;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D0__DOT__clk;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D0__DOT__ss;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D0__DOT__in;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D0__DOT__out;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D1__DOT__clk;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D1__DOT__ss;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D1__DOT__in;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D1__DOT__out;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D2__DOT__clk;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D2__DOT__ss;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D2__DOT__in;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D2__DOT__out;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D3__DOT__clk;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D3__DOT__ss;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D3__DOT__in;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D3__DOT__out;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D4__DOT__clk;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D4__DOT__ss;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D4__DOT__in;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D4__DOT__out;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D5__DOT__clk;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D5__DOT__ss;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D5__DOT__in;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D5__DOT__out;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D6__DOT__clk;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D6__DOT__ss;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D6__DOT__in;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D6__DOT__out;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D7__DOT__clk;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D7__DOT__ss;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D7__DOT__in;
        CData/*0:0*/ bitrev__DOT__serial2pare_init__DOT__D7__DOT__out;
        CData/*0:0*/ psram__DOT__sck;
        CData/*0:0*/ psram__DOT__ce_n;
        CData/*3:0*/ psram__DOT__dio;
        CData/*3:0*/ psram__DOT__din;
        CData/*3:0*/ psram__DOT__dout;
        CData/*0:0*/ psram__DOT__douten;
        CData/*7:0*/ psram__DOT__QPI_COUNT;
        CData/*7:0*/ psram__DOT__CMD_COUNT;
    };
    struct {
        CData/*7:0*/ psram__DOT__ADDR_COUNT;
        CData/*7:0*/ psram__DOT__WAIT_COUNT;
        CData/*7:0*/ psram__DOT__DATA_COUNT;
        CData/*7:0*/ psram__DOT__count;
        CData/*7:0*/ psram__DOT__cmd;
        CData/*7:0*/ psram__DOT__qpi_cmd;
        CData/*0:0*/ psram__DOT__qpi_en;
        CData/*0:0*/ psram__DOT__addr_done;
        CData/*0:0*/ psram__DOT__cmd_done;
        CData/*7:0*/ psram__DOT__data;
        CData/*0:0*/ psram__DOT__state;
        CData/*0:0*/ sdram__DOT__clk;
        CData/*0:0*/ sdram__DOT__cke;
        CData/*0:0*/ sdram__DOT__cs;
        CData/*0:0*/ sdram__DOT__ras;
        CData/*0:0*/ sdram__DOT__cas;
        CData/*0:0*/ sdram__DOT__we;
        CData/*1:0*/ sdram__DOT__ba;
        CData/*1:0*/ sdram__DOT__dqm;
        CData/*0:0*/ sdram__DOT__COMMAND_INHIBIT;
        CData/*0:0*/ sdram__DOT__NO_OPERATION;
        CData/*0:0*/ sdram__DOT__ACTIVE;
        CData/*0:0*/ sdram__DOT__READ;
        CData/*0:0*/ sdram__DOT__WRITE;
        CData/*0:0*/ sdram__DOT__BURST_TERMINATE;
        CData/*0:0*/ sdram__DOT__LOAD_MODE_REGISTER;
        CData/*3:0*/ sdram__DOT__rst_count;
        CData/*3:0*/ sdram__DOT__count;
        CData/*3:0*/ sdram__DOT__state;
        CData/*1:0*/ sdram__DOT__bank_num;
        CData/*0:0*/ sdram__DOT__read_valid;
        CData/*0:0*/ sdram__DOT____VdfgRegularize_h49d81015_0_3;
        CData/*0:0*/ sdram__DOT____VdfgRegularize_h49d81015_0_6;
        CData/*7:0*/ __Vdly__flash__DOT__cmd;
        VL_OUT16(externalPins_gpio_out,15,0);
        VL_IN16(externalPins_gpio_in,15,0);
        SData/*12:0*/ _asic_sdram_a;
        SData/*15:0*/ _dq_wire;
        SData/*12:0*/ sdram__DOT__a;
        SData/*15:0*/ sdram__DOT__dq;
        SData/*12:0*/ sdram__DOT__mode_reg;
        SData/*12:0*/ sdram__DOT__cas_latency;
        SData/*12:0*/ sdram__DOT__burst_length;
        SData/*12:0*/ sdram__DOT__row_num;
        SData/*12:0*/ sdram__DOT__col_num;
        SData/*12:0*/ sdram__DOT__cas_count;
        SData/*15:0*/ sdram__DOT__out;
        SData/*12:0*/ sdram__DOT__write_count;
        IData/*23:0*/ flash__DOT__addr;
        IData/*31:0*/ flash__DOT__data;
        IData/*31:0*/ flash__DOT__rdata;
        IData/*31:0*/ flash__DOT__raddr;
        IData/*31:0*/ flash__DOT__data_bswap;
        IData/*31:0*/ flash__DOT__flash_cmd_i__DOT__addr;
        IData/*31:0*/ flash__DOT__flash_cmd_i__DOT__data;
        IData/*23:0*/ psram__DOT__addr;
        VlUnpacked<CData/*7:0*/, 16777216> psram__DOT__mem;
        VlUnpacked<SData/*15:0*/, 4194304> sdram__DOT__bank0;
        VlUnpacked<SData/*15:0*/, 4194304> sdram__DOT__bank1;
        VlUnpacked<SData/*15:0*/, 4194304> sdram__DOT__bank2;
        VlUnpacked<SData/*15:0*/, 4194304> sdram__DOT__bank3;
    };

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*0:0*/ psram__DOT__WORK = 1U;
    static constexpr CData/*0:0*/ psram__DOT__IDLE = 0U;
    static constexpr IData/*31:0*/ sdram__DOT__idle = 0U;
    static constexpr IData/*31:0*/ sdram__DOT__active = 1U;
    static constexpr IData/*31:0*/ sdram__DOT__read = 2U;
    static constexpr IData/*31:0*/ sdram__DOT__write = 3U;
    static constexpr IData/*31:0*/ sdram__DOT__read_latency = 4U;
    static constexpr IData/*31:0*/ sdram__DOT__read_latency_1 = 5U;

    // CONSTRUCTORS
    VysyxSoCFull_ysyxSoCFull(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_ysyxSoCFull();
    VL_UNCOPYABLE(VysyxSoCFull_ysyxSoCFull);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
