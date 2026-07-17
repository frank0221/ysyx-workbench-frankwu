#include "cpu_exe.h"
#include "nvboard.h"
#if CONFIG_ITRACE
char logbuf[128];
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
#endif
FILE *fp;
extern NPCState npc_state;
void device_update();
extern void nvboard_update();
unsigned long cycle=0;
unsigned long inst=0;

extern VysyxSoCFull* top;
void excute_once(){
    if(npc_state.state == NPC_RUNNING){

    #if CONFIG_ITRACE
        char *p = logbuf;
        p += snprintf(p, sizeof(logbuf), "0x%08" PRIx32 ":", TOP->pc);
        int ilen = 4;
        int i;
        uint32_t instruction = host_read(guest_to_host(TOP->pc), 4);
        uint8_t *inst = (uint8_t *)&(instruction);
        for (i = ilen - 1; i >= 0; i --) {
            p += snprintf(p, 4, " %02x", inst[i]);
        }
        int ilen_max = 4;
        int space_len = ilen_max - ilen;
        if (space_len < 0) space_len = 0;
        space_len = space_len * 3 + 1;
        memset(p, ' ', space_len);
        p += space_len;
        disassemble(p, logbuf + sizeof(logbuf) - p,
            TOP->pc, inst, ilen);
     #endif
        log();
        top->eval(); 
#if PC_TRACE
        static int pc_r=0;
        if(TOP->pc != pc_r){
            fprintf(fp,"PC = 0x%08x\n", TOP->pc); 
            fflush(fp);
        }
        pc_r = TOP->pc;
#endif
        top->clock = 1;
        top->eval(); 
        step_and_dump_wave();  
        top->clock = 0;
        top->eval(); 
        step_and_dump_wave();
        cycle++;
        if(top->ysyxSoCFull->asic->cpu->cpu->commit){
            inst++;
        }
        nvboard_update();
        }
}

static unsigned long ifu_stastic=0;
extern "C" void IFU_stastic(){
    svSetScope(svGetScopeFromName("TOP.ysyxSoCFull.asic.cpu.cpu.IFU_init"));
    ifu_stastic++;
}

static unsigned long lsu_stastic=0;
extern "C" void LSU_stastic(){
    svSetScope(svGetScopeFromName("TOP.ysyxSoCFull.asic.cpu.cpu.MAU_init"));
    lsu_stastic++;
}

static unsigned long exu_stastic=0;
extern "C" void EXU_stastic(){
    svSetScope(svGetScopeFromName("TOP.ysyxSoCFull.asic.cpu.cpu.EXU_init"));
    exu_stastic++;
}

static unsigned long B_inst=0;
extern "C" void B_inst_analysis(){
    svSetScope(svGetScopeFromName("TOP.ysyxSoCFull.asic.cpu.cpu.EXU_init"));
    B_inst++;
}

static unsigned long I_inst=0;
extern "C" void I_inst_analysis(){
    svSetScope(svGetScopeFromName("TOP.ysyxSoCFull.asic.cpu.cpu.EXU_init"));
    I_inst++;
}

static unsigned long J_inst=0;
extern "C" void J_inst_analysis(){
    svSetScope(svGetScopeFromName("TOP.ysyxSoCFull.asic.cpu.cpu.EXU_init"));
    J_inst++;
}

static unsigned long R_inst=0;
extern "C" void R_inst_analysis(){
    svSetScope(svGetScopeFromName("TOP.ysyxSoCFull.asic.cpu.cpu.EXU_init"));
    R_inst++;
}

static unsigned long S_inst=0;
extern "C" void S_inst_analysis(){
    svSetScope(svGetScopeFromName("TOP.ysyxSoCFull.asic.cpu.cpu.EXU_init"));
    S_inst++;
}

static unsigned long U_inst=0; 
extern "C" void U_inst_analysis(){
    svSetScope(svGetScopeFromName("TOP.ysyxSoCFull.asic.cpu.cpu.EXU_init"));
    U_inst++;
}

static unsigned long lsu_cycle=0;
extern "C" void lsu_time(){
    svSetScope(svGetScopeFromName("TOP.ysyxSoCFull.asic.cpu.cpu.MAU_init"));
    lsu_cycle++;
}

static unsigned long cache_hit=0;
extern "C" void cache_total(){
    svSetScope(svGetScopeFromName("TOP.ysyxSoCFull.asic.cpu.cpu.Cache_init"));
    cache_hit++;
}

static unsigned long cache_amat=0;
extern "C" void cache_amat_analysis(){
    svSetScope(svGetScopeFromName("TOP.ysyxSoCFull.asic.cpu.cpu.IFU_init"));
    cache_amat++;
}


void state(){
    switch(npc_state.state){
        case NPC_RUNNING: npc_state.state = NPC_STOP; break;
        case NPC_END:
            if(npc_state.halt_ret == 0){
                printf(ANSI_COLOR_GREEN "HIT GOOD TRAP\n" ANSI_COLOR_RESET);
                printf(ANSI_COLOR_GREEN "cycle:%ld inst: %ld IPC=%f\n" ANSI_COLOR_RESET,cycle,inst,(double)inst/(double)cycle);
                printf(ANSI_COLOR_GREEN "Cache hit: %ld\n" ANSI_COLOR_RESET,cache_hit);
                printf(ANSI_COLOR_GREEN "Cache AMAT: %f\n" ANSI_COLOR_RESET,(double)cache_amat/(double)cache_hit);
                printf(ANSI_COLOR_RED "IFU:%ld\n" ANSI_COLOR_RESET,ifu_stastic);
                printf(ANSI_COLOR_RED "LSU:%ld\n" ANSI_COLOR_RESET,lsu_stastic);
                printf(ANSI_COLOR_RED "EXU:%ld\n" ANSI_COLOR_RESET,exu_stastic);
                printf(ANSI_COLOR_RED "AVERAGE LSU LATENCY:%lf\n" ANSI_COLOR_RESET,(double)lsu_cycle/(double)lsu_stastic);
                printf(ANSI_COLOR_BLUE "B_TYPE: %ld I_TYPE: %ld J_TYPE: %ld R_TYPE: %ld S_TYPE: %ld U_TYPE: %ld\n" ANSI_COLOR_RESET,B_inst,I_inst,J_inst,R_inst,S_inst,U_inst);
            }
            else{
                printf(ANSI_COLOR_RED "HIT BAD TRAP\n" ANSI_COLOR_RESET);
                exit(1);
            }
            break;
        case NPC_ABORT:
            printf(ANSI_COLOR_RED "ERROR!\n" ANSI_COLOR_RESET);
            break;
        case NPC_QUIT:
            printf(ANSI_COLOR_RED "QUIT!\n" ANSI_COLOR_RESET);
            break;
    }
}

extern void uart_rx_getchar(uint8_t ch);
void cpu_exec(uint64_t i){
#if PC_TRACE
    fp = fopen("pc_log.txt","w");
#endif
    bool is_first_step = true;
    //uint64_t timer_start = get_time();
    //uart_rx_getchar(0x61);
    excute_once();
    cycle++;
#if CONFIG_DIFFTEST
    if (TOP->commit) {
        top->eval();
        svSetScope(svGetScopeFromName("TOP.ysyxSoCFull.asic.cpu.cpu.IDU_init.ysyx_25080218_GPR_init"));
        for(int k=0; k<32; k++){
            cpu.gpr[k] = get_gpr(k);
        }
        cpu.pc = TOP->pc;
        difftest_step(TOP->pc, TOP->dnpc);
    }
#endif 
    if (npc_state.state != NPC_RUNNING){
        state();
        return;
    }
    //device_update();
    for(uint64_t j = i -1 ; j > 0; j--){
        excute_once();
        #if CONFIG_DIFFTEST
        if (TOP->commit) {
            //printf("difftest enable");
            // if(TOP->pc >= 0x10000000 && TOP->pc <= 0x10000fff){
            //     difftest_skip_ref();
            // }
            top->eval();
            svSetScope(svGetScopeFromName("TOP.ysyxSoCFull.asic.cpu.cpu.IDU_init.ysyx_25080218_GPR_init"));
            for(int k=0; k<32; k++){
                cpu.gpr[k] = get_gpr(k);
            }
            cpu.pc = TOP->pc;
            difftest_step(TOP->pc, TOP->dnpc);
        }
        #endif
        if (npc_state.state != NPC_RUNNING) break;
        //device_update();
    }
    state();
#if PC_TRACE
    fclose(fp);
#endif
}

void log(){
#if CONFIG_ITRACE
    FILE *fp = fopen("log.txt","a");
    fprintf(fp,"%s\n",logbuf);
    fflush(fp);
    fclose(fp);
#endif
}