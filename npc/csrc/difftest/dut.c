#include <dlfcn.h>
#include "difftest.h"


void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

using memcpy_t = void (*)(uint32_t, void*, size_t, bool);
using regcpy_t = void (*)(void*, bool);
using exec_t   = void (*)(uint64_t);
using raise_t  = void (*)(uint64_t);
using init_t   = void (*)(int);

#if CONFIG_DIFFTEST
static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

void init_difftest(char *ref_so_file, long img_size, int port){
    assert(ref_so_file != NULL);

    void *handle;
    handle = dlopen(ref_so_file,RTLD_LAZY);
    assert(handle);

    ref_difftest_memcpy = (memcpy_t)dlsym(handle,"difftest_memcpy");
    assert(ref_difftest_memcpy);

    ref_difftest_regcpy = (regcpy_t)dlsym(handle,"difftest_regcpy");
    assert(ref_difftest_regcpy);

    ref_difftest_exec = (exec_t)dlsym(handle,"difftest_exec");
    assert(ref_difftest_exec);

    ref_difftest_raise_intr = (raise_t)dlsym(handle, "difftest_raise_intr");
    assert(ref_difftest_raise_intr);

    void (*ref_difftest_init)(int) = (init_t)dlsym(handle, "difftest_init");
    assert(ref_difftest_init);

    printf("Differential testing: " ANSI_COLOR_GREEN "on" ANSI_COLOR_RESET "\n");

    ref_difftest_init(port);
    ref_difftest_memcpy(0x80000000, guest_to_host(0x80000000), img_size, DIFFTEST_TO_REF);
    ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF); //把npc的reg和pc值复制给nemu
}

// this is used to let ref skip instructions which
// can not produce consistent behavior with NEMU
void difftest_skip_ref() {
  is_skip_ref = true;
  // If such an instruction is one of the instruction packing in QEMU
  // (see below), we end the process of catching up with QEMU's pc to
  // keep the consistent behavior in our best.
  // Note that this is still not perfect: if the packed instructions
  // already write some memory, and the incoming instruction in NEMU
  // will load that memory, we will encounter false negative. But such
  // situation is infrequent.
  skip_dut_nr_inst = 0;
}

// this is used to deal with instruction packing in QEMU.
// Sometimes letting QEMU step once will execute multiple instructions.
// We should skip checking until NEMU's pc catches up with QEMU's pc.
// The semantic is
//   Let REF run `nr_ref` instructions first.
//   We expect that DUT will catch up with REF within `nr_dut` instructions.
void difftest_skip_dut(int nr_ref, int nr_dut) {
  skip_dut_nr_inst += nr_dut;

  while (nr_ref -- > 0) {
    ref_difftest_exec(1);
  }
}

extern Vtop* top;
bool isa_difftest_checkregs(riscv32_CPU_state *ref_r, uint32_t pc) {
  for(int i=0; i < 32; i++){
    if(ref_r->gpr[i] != cpu.gpr[i]){
      printf("Wrong at gpr[%d]\n",i);
      printf("ref gpr = %x\n", ref_r->gpr[i]);
      printf("Wrong at(nemu): 0x%x\n",ref_r->pc);
      printf("dut gpr = %x\n", cpu.gpr[i]);
      printf("Wrong at(npc): 0x%x\n",top->pc);
      return false;
    }
  }
  if(ref_r->pc != top->pc){
    printf("ref_pc %0x\n",ref_r->pc);
    printf("Wrong at: 0x%x\n",top->pc);
    return false;
  }
  return true;
}

static void checkregs(riscv32_CPU_state *ref, uint32_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
    npc_state.state = NPC_ABORT;
    npc_state.halt_pc = pc;
    isa_reg_display();
  }
}

void difftest_step(uint32_t pc, uint32_t npc) {
  riscv32_CPU_state ref_r;

  if (skip_dut_nr_inst > 0) {
    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
    if (ref_r.pc == npc) {
      skip_dut_nr_inst = 0;
      checkregs(&ref_r, npc);
      return;
    }
    skip_dut_nr_inst --;
    if (skip_dut_nr_inst == 0)
        printf("can not catch up with ref.pc = %0x at pc = %0x", ref_r.pc, pc);
    return;
  }

  if (is_skip_ref) {
    // to skip the checking of an instruction, just copy the reg state to reference design
    ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
    is_skip_ref = false;
    return;
  }

  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);

  checkregs(&ref_r, pc);
}
#else
void init_difftest(char *ref_so_file, long img_size, int port) { };
#endif