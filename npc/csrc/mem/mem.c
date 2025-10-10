#include "mem.h"

uint8_t pmem[256*1024*1024] = {0};
uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - 0x80000000; }



uint32_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    default: return 0;
  }
}


uint32_t pmem_read(uint32_t addr){
  if (addr < 0x80000000 || addr >= 0x80000000 + sizeof(pmem)) {
        printf("[ERROR] Illegal pmem access at 0x%08x\n", addr);
        //printf(ANSI_COLOR_RED "HIT BAD TRAP\n" ANSI_COLOR_RESET);
        exit(0);
    }
  printf(ANSI_COLOR_BLUE "MEMORY READ AT 0x%x\n" ANSI_COLOR_RESET,addr);
  uint32_t ret = host_read(guest_to_host(addr), 4);
  return ret;
}