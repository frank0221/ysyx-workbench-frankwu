#include <device/device.h>

uint8_t *io_space = NULL;
uint8_t *p_space = NULL;

uint8_t* new_space(int size) {
  uint8_t *p = p_space;
  p_space += size;
  assert(p_space - io_space < IO_SPACE_MAX);
  return p;
}

void init_map() {
  io_space = (uint8_t*)malloc(IO_SPACE_MAX);
  assert(io_space);
  p_space = io_space;
}