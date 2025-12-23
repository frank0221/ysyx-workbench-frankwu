#include "cpu_exe.h"

#if CONFIG_ITRACE
char logbuf[128];
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
#endif

extern NPCState npc_state;

extern Vtop* top;
void excute_once(){
    if(npc_state.state == NPC_RUNNING){

    #if CONFIG_ITRACE
        char *p = logbuf;
        p += snprintf(p, sizeof(logbuf), "0x%08" PRIx32 ":", top->pc);
        int ilen = 4;
        int i;
        uint32_t instruction = host_read(guest_to_host(top->pc), 4);
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
            top->pc, inst, ilen);
     #endif
        log();
        top->eval(); 
        printf("PC = 0x%08x\n", top->pc); 
        top->clk = 1;
        top->eval(); 
        //top->inst = pmem_read(top->pc);
        step_and_dump_wave();  
        top->clk = 0;
        top->eval(); 
        step_and_dump_wave();
        }
    // if(!finish_flag){
    //     printf(ANSI_COLOR_GREEN "HIT GOOD TRAP\n" ANSI_COLOR_RESET);
    // }
}

void state(){
    switch(npc_state.state){
        case NPC_RUNNING: npc_state.state = NPC_STOP; break;
        case NPC_END:
            if(npc_state.halt_ret == 0)
                printf(ANSI_COLOR_GREEN "HIT GOOD TRAP\n" ANSI_COLOR_RESET);
            else
                printf(ANSI_COLOR_RED "HIT BAD TRAP\n" ANSI_COLOR_RESET);
            break;
        case NPC_ABORT:
            printf(ANSI_COLOR_RED "ERROR!\n" ANSI_COLOR_RESET);
            break;
    }
}

void cpu_exec(uint64_t i){
    bool is_first_step = true;
    excute_once();
    if (npc_state.state != NPC_RUNNING){
        state();
        return;
    }
    for(uint64_t j = i -1 ; j > 0; j--){
        excute_once();
        #if CONFIG_DIFFTEST
        top->eval();
        svSetScope(svGetScopeFromName("TOP.top.IDU_init.ysyx_25080218_GPR_init"));
        for(int k=0; k<32; k++){
            cpu.gpr[k] = get_gpr(k);
        }
        cpu.pc = top->pc;
        difftest_step(top->pc, top->dnpc); //dnp 要等之后支持跳转指令
        #endif
        if (npc_state.state != NPC_RUNNING) break;
    }
    state();
}

void log(){
    FILE *fp = fopen("log.txt","a");
    fprintf(fp,"%s\n",logbuf);
    fflush(fp);
    fclose(fp);
}