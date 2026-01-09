#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t key_input = inl(KBD_ADDR);
  if (key_input & KEYDOWN_MASK){
    kbd->keydown = 1;
    kbd->keycode = key_input & ~KEYDOWN_MASK;
  }
  else if(key_input != 0x0000){
    kbd->keydown = 0;
    kbd->keycode = key_input & ~KEYDOWN_MASK;
  }
  else{
    kbd->keydown = 0;
    kbd->keycode = AM_KEY_NONE;
  }
  
}
