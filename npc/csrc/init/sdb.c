#include "init.h"
#include "verilated_dpi.h" 
#include "svdpi.h"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int cmd_q(char *args) {
   npc_state.state = NPC_QUIT;
  return -1;
}

int cmd_c(char *args){
  cpu_exec(-1);
    // while(finish_flag){
    //     excute_once();
    // }
    // if(finish_flag)
    //     printf(ANSI_COLOR_RED "HIT BAD TRAP\n" ANSI_COLOR_RESET);
    return -1;
}

int cmd_si(char *args){
  char *arg = strtok(NULL," ");
  uint64_t i = atoi(arg);
  cpu_exec(i);
  return 0;
}


int cmd_x(char *args){
  char *arg = strtok(NULL," ");
  int i = atoi(arg);

  // char *exp = strtok(NULL,"");
  // bool ok;
  // uint32_t result = expr(exp, &ok);
  // assert(ok==true);

  uint32_t add = 0x80000000;
  for(int j=0;j<i;j++)
  {
    printf("0x%X :%08xH\n",add,host_read(guest_to_host(add), 4));
    add = add + 0x4;
  }
  return 0;
}

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
  int i;
  printf(">>> get_gpr function address = %p\n", (void*)get_gpr);

  if (get_gpr == nullptr) {
      printf(">>> ERROR: get_gpr is NULL! DPI not linked!\n");
      return;
  }
  svSetScope(svGetScopeFromName("TOP.top.IDU_init.ysyx_25080218_GPR_init"));
  for(i=0;i<32;i++)
  {
    printf("%s: %u \n",regs[i],get_gpr(i));
  }
  //printf("PC: 0x%x",cpu.pc);
}

int cmd_info(char *args){
  char *arg = strtok(NULL," ");
  if (strcmp(arg, "r") == 0) {
    isa_reg_display();
}
  return 0;
}