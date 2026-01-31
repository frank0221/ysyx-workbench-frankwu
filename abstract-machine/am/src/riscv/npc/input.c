#include <am.h>

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t scancode = *(volatile uint32_t  *)0xa0000060;
  if(scancode & 0x8000){
    kbd->keydown = 1;
    kbd->keycode = scancode & ~0x8000;
  }
  else if(scancode != 0x0000){
    kbd->keydown = 0;
    kbd->keycode = scancode & ~0x8000;
  }
  else{
    kbd->keydown = 0;
    kbd->keycode = AM_KEY_NONE;
  }
  //printf("%d %d ",kbd->keydown,kbd->keycode);
}
