#ifndef __COMMON_H_
#define __COMMON_H_
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VysyxSoCFull.h"
#include "VysyxSoCFull_ysyxSoCASIC.h"
#include "VysyxSoCFull_ysyxSoCFull.h"
#include "VysyxSoCFull_CPU.h"
#include "VysyxSoCFull_ysyx_25080218.h"
#include "VysyxSoCFull__Dpi.h"
#include "svdpi.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <SDL2/SDL.h>


#include "init/init.h"
#include "cpu/cpu_exe.h"
#include "mem/mem.h"
#include "difftest/difftest.h"
#include "device/device.h"
#include "nvboard.h"

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

#define CONFIG_ITRACE 0
#define CONFIG_ISA_riscv 1
#define CONFIG_ISA_x86 0
#define CONFIG_ISA_mips32 0
#define CONFIG_ISA_loongarch32r 0
#define CONFIG_DIFFTEST 0
#define PC_TRACE 1
#define CONFIG_MTRACE 0
#define CONFIG_DTRACE 0

#define SOC_EN 1
#define TOP top->ysyxSoCFull->asic->cpu->cpu

typedef struct {
  int state;
  uint32_t halt_pc;
  uint32_t halt_ret;
} NPCState;
extern NPCState npc_state;
enum state {NPC_RUNNING , NPC_END , NPC_STOP, NPC_ABORT, NPC_QUIT};
//NPCState npc_state{.state = NEMU_STOP};

extern bool finish_flag;
extern bool dump_wave;
void step_and_dump_wave();
// int get_gpr(int idx);

typedef struct {
  uint32_t gpr[32];
  uint32_t pc;
} riscv32_CPU_state;
extern riscv32_CPU_state cpu;
#endif