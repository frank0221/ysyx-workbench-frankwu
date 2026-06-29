#include <stdint.h>
extern void halt();
int main(){
    int len_mask = 0xff;
    int addr = 0x0f000000;
    //malloc(0x17FF);
    for(int i = 0; i < 0x17FF; i++){
        *((volatile uint8_t  *)(addr) + i ) = (addr + i) & len_mask;
    }
    for(int i = 0; i < 0x17FF; i++){
        if(*((volatile uint8_t  *)(addr) + i ) != ( (addr + i) & len_mask) ){
            //printf("1");
            halt();
        }
    }

    len_mask = 0xffff;
    for(int i = 0; i < 0x17FF/2; i++){
        *((volatile uint16_t  *)(addr) + i ) = (addr + 2*i) & len_mask;
    }
    for(int i = 0; i < 0x17FF/2; i++){
        if(*((volatile uint16_t  *)(addr) + i ) != ( (addr +2*i) & len_mask) ){
            //printf("2");
            halt();
        }
    }

    len_mask = 0xffffffff;
    for(int i = 0; i < 0x17FF/4; i++){
        *((volatile uint32_t  *)(addr) + i ) = (addr + 4*i) & len_mask;
    }
    for(int i = 0; i < 0x17FF/4; i++){
        if(*((volatile uint32_t  *)(addr) + i ) != ( (addr + 4*i) & len_mask) ){
            //printf("3");
            halt();
        }
    }
    return 0;
    //printf("mem-test success!");
}
