#include <common.h>


#define IO_SPACE_MAX (32 * 1024 * 1024)

extern void init_serial();
extern void init_map();
extern uint8_t* new_space(int size);
extern void init_timer();
extern uint64_t get_time();
extern void init_i8042();
extern uint32_t key_dequeue();
extern void send_key(uint8_t scancode, bool is_keydown);
extern void init_vga();
extern void deinit_vga();
