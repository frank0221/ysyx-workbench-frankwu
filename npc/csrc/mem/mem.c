#include "mem.h"

uint8_t pmem[256*1024*1024] = {0};
uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - 0x80000000; }
extern void difftest_skip_ref();
extern Vtop* top;

extern uint8_t *serial_base;
extern uint32_t *timer_base;
extern uint32_t *i8042_data_port_base;
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
  case 12: *(((uint16_t *) addr)+1) = (data)&0x0000ffff;return ;
  case 15: *(uint32_t *) addr = data;return ;
  }
}

extern "C" int pmem_read(int raddr) {
  uint32_t addr = (uint32_t) raddr;
  if(addr == 0xa00003F8){
#if CONFIG_DTRACE
    printf(ANSI_COLOR_YELLOW "DEVICE READ AT 0x%x\n" ANSI_COLOR_RESET,addr);
#endif
#if CONFIG_DIFFTEST
    difftest_skip_ref();
#endif
    return serial_base[0];
  }
  if(addr == 0xa0000048 || addr == 0xa0000048+4){
#if CONFIG_DIFFTEST
    difftest_skip_ref();
#endif
    uint64_t us = get_time();
    timer_base[0] = (uint32_t)us;
    timer_base[1] = us >> 32;
#if CONFIG_DIFFTEST
    difftest_skip_ref();
#endif
    return addr == 0xa0000048 ? timer_base[0] : timer_base[1];
  }
  if(addr == 0xa0000060){
#if CONFIG_DIFFTEST
    difftest_skip_ref();
#endif
    i8042_data_port_base[0] = key_dequeue();
    //printf("%d",i8042_data_port_base[0]);
    return i8042_data_port_base[0];
  }
  if(addr >= 0xa0000100 && addr <= 0xa0000100 + 7){
#if CONFIG_DIFFTEST
    difftest_skip_ref();
#endif
    extern uint32_t *vgactl_port_base;
  //  if(addr != 0xa0000100) printf(ANSI_COLOR_RED "VGACTL READ AT 0x%x: 0x%x\n" ANSI_COLOR_RESET,addr,vgactl_port_base[(addr - 0xa0000100)/4]);
    return vgactl_port_base[(addr - 0xa0000100)/4];
  }
  if(addr >= 0xa1000000 && addr <= 0xa1000000 + 400*300*sizeof(uint32_t) - 1){
#if CONFIG_DIFFTEST
    difftest_skip_ref();
#endif
    extern void *vmem;
    return ((uint32_t*)vmem)[(addr - 0xa1000000)/4];
  }
  if (addr < 0x80000000 || addr >= 0x80000000 + sizeof(pmem)) {
      printf("[ERROR] Illegal pmem read access at 0x%08x PC at 0x%x\n", addr, top->pc);
      exit(0);
  }
#if CONFIG_MTRACE
  printf(ANSI_COLOR_BLUE "MEMORY READ AT 0x%x\n" ANSI_COLOR_RESET,addr);
#endif
  uint32_t ret = host_read(guest_to_host(addr), 4);
  return ret;
}

extern "C" void pmem_write(int waddr, int wdata, char wmask) {
  // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  uint32_t addr = (uint32_t) waddr;
  if(addr == 0xa00003F8){
#if CONFIG_DIFFTEST
    difftest_skip_ref();
#endif
    serial_base[0]= wdata & 0xff;
    char ch = wdata & 0xff;
    putc(ch,stderr);
    return;
  }
  if(addr >= 0xa0000100 && addr <= 0xa0000100 + 7){
#if CONFIG_DIFFTEST
    difftest_skip_ref();
#endif
    extern uint32_t *vgactl_port_base;
    vgactl_port_base[(addr - 0xa0000100)/4] = wdata;
#if CONFIG_DTRACE
    printf(ANSI_COLOR_BLUE "VGACTL WRITE AT 0x%x: 0x%x\n" ANSI_COLOR_RESET,addr,wdata);
    //if(addr == 0xa0000104) exit(0);
#endif  
    return;
  }
  if(addr >= 0xa1000000 && addr <= 0xa1000000 + 400*300*sizeof(uint32_t) - 1){
#if CONFIG_DTRACE
    //printf(ANSI_COLOR_YELLOW "VMEM WRITE AT 0x%x: 0x%x\n" ANSI_COLOR_RESET,addr,wdata);
#endif  
#if CONFIG_DIFFTEST
    difftest_skip_ref();
#endif
    extern void *vmem;
    ((uint32_t*)vmem)[(addr - 0xa1000000)/4] = wdata;
    return;
  }  
   if (addr < 0x80000000 || addr >= 0x80000000 + sizeof(pmem)) {
    printf("[ERROR] Illegal pmem write access at 0x%08x PC at 0x%x\n", addr, top->pc);
    exit(1);
  }
  host_write(guest_to_host(addr & ~0x00000003),wmask,wdata);

}
