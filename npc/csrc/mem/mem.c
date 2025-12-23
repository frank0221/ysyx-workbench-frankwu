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

void host_write(void *addr, char mask, uint32_t data){
  uint8_t* waddr = (uint8_t *)addr; 
  switch (mask)
  {
  case 1: waddr[0] = (uint8_t) data&0x000000ff;return ;
  case 2: waddr[1] = (uint8_t) (data)&0x000000ff;return ;
  case 4: waddr[2] = (uint8_t) (data)&0x000000ff;return ;
  case 8: waddr[3] = (uint8_t) (data)&0x000000ff;return ;
  case 3: *(uint16_t *) addr = data&0x0000ffff;return ;
  case 12: *(((uint16_t *) addr)+1) = (data>>16)&0x0000ffff;return ;
  case 15: *(uint32_t *) addr = data;return ;
  }
}

extern "C" int pmem_read(int raddr) {
  uint32_t addr = (uint32_t) raddr;
  if (addr < 0x80000000 || addr >= 0x80000000 + sizeof(pmem)) {
      printf("[ERROR] Illegal pmem read access at 0x%08x\n", addr);
      //printf(ANSI_COLOR_RED "HIT BAD TRAP\n" ANSI_COLOR_RESET);
      exit(0);
  }
  printf(ANSI_COLOR_BLUE "MEMORY READ AT 0x%x\n" ANSI_COLOR_RESET,addr);
  uint32_t ret = host_read(guest_to_host(addr), 4);
  return ret;
}
extern "C" void pmem_write(int waddr, int wdata, char wmask) {
  // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  uint32_t addr = (uint32_t) waddr;
  if (addr < 0x80000000 || addr >= 0x80000000 + sizeof(pmem)) {
    printf("[ERROR] Illegal pmem write access at 0x%08x\n", addr);
    exit(0);
  }
  host_write(guest_to_host(addr & ~0x00000003),wmask,wdata);
}

// uint32_t pmem_read(uint32_t addr){
//   if (addr < 0x80000000 || addr >= 0x80000000 + sizeof(pmem)) {
//         printf("[ERROR] Illegal pmem read access at 0x%08x\n", addr);
//         //printf(ANSI_COLOR_RED "HIT BAD TRAP\n" ANSI_COLOR_RESET);
//         exit(0);
//     }
//   printf(ANSI_COLOR_BLUE "MEMORY READ AT 0x%x\n" ANSI_COLOR_RESET,addr);
//   uint32_t ret = host_read(guest_to_host(addr), 4);
//   return ret;
// }

// void pmem_write(uint32_t addr,int len,uint32_t data){
//     if (addr < 0x80000000 || addr >= 0x80000000 + sizeof(pmem)) {
//         printf("[ERROR] Illegal pmem write access at 0x%08x\n", addr);
//         exit(0);
//     }
//   host_write(guest_to_host(addr),len,data);
// }