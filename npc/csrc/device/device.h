#include <common.h>


#define IO_SPACE_MAX (32 * 1024 * 1024)

extern void init_serial();
extern void init_map();
extern uint8_t* new_space(int size);
extern void init_timer();
extern uint64_t get_time();