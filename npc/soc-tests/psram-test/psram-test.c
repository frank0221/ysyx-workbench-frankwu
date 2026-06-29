#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>
//#include <riscv/riscv.h>
#define PSRAM_BASE 0x80000000

int inw(int addr){return *(volatile int*)addr;}
void outw(int addr, int data){*(volatile int*) addr = data;}

char inb(int addr){return *(volatile char*)addr;};
void outb(int addr, char data){*(volatile char*) addr = data;};

uint16_t inh(int addr){return *(volatile uint16_t*)addr;};
void outh(int addr, uint16_t data){*(volatile uint16_t*)addr = data;};

int main(){
    //printf("start");
    for(int i = 0; i < 4 * 1024 *1024; i++){
        outw(PSRAM_BASE + 4*i , (uint32_t)i);
    }
    int data;
    int error = 0;
    int i =0;
    for(; i < 4 * 1024 *1024; i++){
        data = inw(PSRAM_BASE + 4*i);
        if(data != i){
            error = 1;
            break;
        }
    }
    if(!error){
        printf("good!");
        return 0;
    }
    else{
        printf("%d,%d",data,i);
        return -1;
    }
}