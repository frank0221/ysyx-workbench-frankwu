#include "common.h"

riscv32_CPU_state cpu;

NPCState npc_state;
VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

Vtop* top;
extern void state();
extern "C" void halt(){
  npc_state.state = NPC_END;
  svSetScope(svGetScopeFromName("TOP.top.IDU_init.ysyx_25080218_GPR_init"));
  npc_state.halt_ret = get_gpr(10);

  if (dump_wave && tfp) {
    tfp->close();  // 刷新缓冲区，确保文件完整
  }
};
void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  if (dump_wave) {
    tfp->dump(contextp->time());
  }
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vtop;
  if (dump_wave) {
    contextp->traceEverOn(true);
    top->trace(tfp,99);
    tfp->open("dump.vcd");
  }
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

static void reset(int n) {
  top->rst = 1;
  top->clk = 1;
  top->pc = 0x80000000;
  while (n -- > 0){  
    top->eval(); 
    step_and_dump_wave();  
    top->clk = !top->clk;
    top->eval(); 
    step_and_dump_wave(); 
  }
  top->rst = 0;
  printf("After reset, pc = 0x%08x\n", top->pc);
}



int main(int argc, char *argv[]) {
  cpu.pc = 0x80000000;
  npc_state = {0};
  init_map();
  init_vga();
  init_serial();
  init_timer();
  init_i8042();
  init_device(argc, argv);
  sim_init();
  npc_state.state = NPC_RUNNING;
  reset(1);
  cmd_process();
  sim_exit();
}
