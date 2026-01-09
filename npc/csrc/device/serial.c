#include <device/device.h>

uint8_t *serial_base = NULL;
void init_serial() {
  serial_base = new_space(8);
}