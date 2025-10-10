#include "cpu_exe.h"

#ifdef CONFIG_ITRACE
char logbuf[128];
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
#endif

extern NPCState npc_state;

extern Vtop* top;
void excute_once(){
    if(npc_state.state == NPC_RUNNING){
        printf("PC = 0x%08x\n", top->pc); 
        top->clk = 1;
        top->eval(); 
        top->inst = pmem_read(top->pc);
        step_and_dump_wave();  
        top->clk = 0;
        top->eval(); 
        step_and_dump_wave();
    #ifdef CONFIG_ITRACE
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
        }
    // if(!finish_flag){
    //     printf(ANSI_COLOR_GREEN "HIT GOOD TRAP\n" ANSI_COLOR_RESET);
    // }
}

void state(){
    if(npc_state.halt_ret == 0)
    printf(ANSI_COLOR_GREEN "HIT GOOD TRAP\n" ANSI_COLOR_RESET);
    else
        printf(ANSI_COLOR_RED "HIT BAD TRAP\n" ANSI_COLOR_RESET);
}

void cpu_exec(uint64_t i){
    for(; i > 0; i--){
        excute_once();
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