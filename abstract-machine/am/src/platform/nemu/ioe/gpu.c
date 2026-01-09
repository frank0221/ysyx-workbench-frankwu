#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
  // int i;
  // int w = io_read(AM_GPU_CONFIG).width / 32;
  // int h = io_read(AM_GPU_CONFIG).height / 32;
  // uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  // for (i = 0; i < w * h; i ++) fb[i] = i;
  // outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  uint32_t screen_config = inl(VGACTL_ADDR);
  uint32_t screen_width  = screen_config>>16;
  uint32_t screen_hidth  = screen_config & 0x0000ffff;   
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = screen_width, .height = screen_hidth,
    .vmemsz = screen_hidth * screen_width * sizeof(uint32_t)
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  uint32_t screen_config = inl(VGACTL_ADDR);
  uint32_t screen_width  = screen_config>>16;
  int k = 0;
  for(int i = 0; i < ctl->h; i++){
    for(int j = 0; j < ctl->w; j++){
      outl(FB_ADDR + 4*((screen_width) * (ctl->y + i) + ctl->x + j),*((uint32_t *)(ctl->pixels) + k));
      k++;
    }
    //screen_width++;
  }

  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
