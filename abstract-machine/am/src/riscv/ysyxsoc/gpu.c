#include <am.h>
#include "riscv/riscv.h"
// #define VGACTL_ADDR 0xa0000100
// #define SYNC_ADDR (VGACTL_ADDR + 4)
// static inline uint32_t inl(uintptr_t addr) { return *(volatile uint32_t *)addr; }
// static inline void outl(uintptr_t addr, uint32_t data) { *(volatile uint32_t *)addr = data; }
// #define FB_ADDR 0xa1000000
#define VGA_BASE 0x21000000
void __am_gpu_init() {
//   int i;
//   int w = io_read(AM_GPU_CONFIG).width / 32;
//   int h = io_read(AM_GPU_CONFIG).height / 32;
//   uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
//   for (i = 0; i < w * h; i ++) fb[i] = i;
//   outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  uint32_t screen_width  = 640;
  uint32_t screen_hidth  = 480;   
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = screen_width, .height = screen_hidth,
    .vmemsz = screen_hidth * screen_width * sizeof(uint32_t)
  };  
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int k=0;
  for(int i = 0; i < ctl->h; i++){
    for(int j = 0; j < ctl->w; j++){
      outw(VGA_BASE + 4*((640) * (ctl->y + i) + ctl->x + j),*((int *)(ctl->pixels)+k));
      k++;
    }

  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
