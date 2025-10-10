#ifndef __COMMON_H_
#define __COMMON_H_
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"
#include "Vtop__Dpi.h"
#include "svdpi.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>


#include "init/init.h"
#include "cpu/cpu_exe.h"
#include "mem/mem.h"

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

#define CONFIG_ITRACE 1
#define CONFIG_ISA_riscv 1
#define CONFIG_ISA_x86 0
#define CONFIG_ISA_mips32 0
#define CONFIG_ISA_loongarch32r 0

typedef struct {
  int state;
  uint32_t halt_pc;
  uint32_t halt_ret;
} NPCState;
enum state {NPC_RUNNING , NPC_END , NEMU_STOP};
//NPCState npc_state{.state = NEMU_STOP};

//extern bool finish_flag;
void step_and_dump_wave();
// int get_gpr(int idx);
#endif