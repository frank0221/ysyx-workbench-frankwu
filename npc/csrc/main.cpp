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

  if (tfp) {
    tfp->close();  // 刷新缓冲区，确保文件完整
  }
};
void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vtop;
  contextp->traceEverOn(true);
  top->trace(tfp,99);
  tfp->open("dump.vcd");
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
  sim_init();
  cpu.pc = 0x80000000;
  npc_state = {0};
  init_device(argc, argv);
  // uint32_t first_inst = pmem_read(0x80000000);
  // printf("First instruction at 0x80000000: 0x%08x\n", first_inst);
  //finish_flag = true;
  npc_state.state = NPC_RUNNING;
  reset(1);
  cmd_process();
  sim_exit();
}