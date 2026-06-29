#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>
//#include <riscv/riscv.h>
#define SDRAM_BASE 0xa0000000

int inw(int addr){return *(volatile int*)addr;}
void outw(int addr, int data){*(volatile int*) addr = data;}

char inb(int addr){return *(volatile char*)addr;};
void outb(int addr, char data){*(volatile char*) addr = data;};

uint16_t inh(int addr){return *(volatile uint16_t*)addr;};
void outh(int addr, uint16_t data){*(volatile uint16_t*)addr = data;};

#define start_addr 5000
#define end_addr 10000

int main(){
    printf("start\n");
    for(int i = start_addr; i < end_addr; i++){
        //outw(SDRAM_BASE + 4*i , (uint32_t)i);
        outb(SDRAM_BASE + i,(uint8_t)i);
        //  if(i%(1024)==0)
        //     printf("now write at %d kb\n",i);
        //outw(SDRAM_BASE  , 123456789);
    }
    int data;
    int error = 0;
    int i =  start_addr;
    for(; i < end_addr; i++){
        //data = inw(SDRAM_BASE + 4*i);
        data= inb(SDRAM_BASE+i);
        
        //data = inw(SDRAM_BASE);
        // if(i%(1024)==0)
        //     printf("now read at %d kb\n",i);
        //if((data<<16 | data>>16) != i){
        //if(data != 123456789){
        if(data != (uint8_t)i){
            error = 1;
            break;
        }
    }
    if(!error){
        printf("good!\n");
        return 0;
    }
    else{
        printf("%d,%d",data,i);
        return -1;
    }
}