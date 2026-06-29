#include "common.h"

riscv32_CPU_state cpu;

NPCState npc_state;
VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

VysyxSoCFull* top=new VysyxSoCFull;
extern void state();
extern "C" void halt(){
  npc_state.state = NPC_END;
  svSetScope(svGetScopeFromName("TOP.ysyxSoCFull.asic.cpu.cpu.IDU_init.ysyx_25080218_GPR_init"));
  npc_state.halt_ret = get_gpr(10);

  if (dump_wave && tfp) {
    tfp->close();  // 刷新缓冲区，确保文件完整
  }
};
unsigned char wave_start=0;
void step_and_dump_wave(){
  // /if(TOP->pc == 0x80001088) wave_start =1;
  // else if(TOP->pc == 0xa00000b8) wave_start =1;
  // else if(TOP->pc == 0xa00000f0) wave_start =1;
  // else wave_start = 0;
  wave_start = 1;
  top->eval();
  contextp->timeInc(1);
  if(wave_start){
    if (dump_wave) {
      tfp->dump(contextp->time());
    }
  }
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new VysyxSoCFull;
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
  top->reset = 1;
  top->clock = 0;
  step_and_dump_wave();

  // n >= 12
  while (n-- > 0) {
    top->clock = 1;
    step_and_dump_wave();
    top->clock = 0;
    step_and_dump_wave();
  }

  top->reset = 0;
  step_and_dump_wave();
  // printf("After reset, pc = 0x%08x\n", top->pc);
}

void nvboard_bind_all_pins(VysyxSoCFull* top);

int main(int argc, char *argv[]) {
  Verilated::commandArgs(argc, argv);
  npc_state = {0};
  // init_map();
  // init_vga();
  // init_serial();
  // init_timer();
  // init_i8042();
  init_device(argc, argv);
  sim_init();
  nvboard_bind_all_pins(top);
  nvboard_init();
  npc_state.state = NPC_RUNNING;
  reset(11);
  cmd_process();
  sim_exit();
  nvboard_quit();
}
