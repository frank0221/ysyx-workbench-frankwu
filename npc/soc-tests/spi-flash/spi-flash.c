#include <am.h>
#include <klib-macros.h>
//#include <riscv/riscv.h>
//是riscv.h中in，out函数的问题？
void outb(int addr,int data) {*(volatile char*)addr = data;}
void outw(int addr,int data) {*(volatile unsigned int*)addr = data;}
int inb(int addr) {return *(volatile char*)addr;}
int inw(int addr) {return *(volatile unsigned int*)addr;}
#define SPI_BASE 0x10001000
#define UART_BASE 0x10000000L
#define UART_TX   0x0L
//#define xip
int flash_read(int addr);
int flash_xip(int addr);

int main(){
  #ifndef xip
    // int inst;
    // int size = flash_xip(0x30000000);
    //flash_read(0x30000000);
    //flash_read(0x30000008);
    // for(int i = 0; i < size/4; i++){
    //     inst = flash_xip(0x30000004+4*i);
    //     outw(0x0f0000f0+4*i,inst);
    // }
    *(volatile char *)(UART_BASE + UART_TX) = 'B';
    int addr = 0x30000000;
    __asm__ volatile (
    "jalr x0, %0, 0\n"
    :
    : "r"(addr)
    : 
  );
  //return 0;
  #else
    //flash_read(0x30000004);
    flash_xip(0x30000004);
    return 0;
  #endif
}

static inline int bswap32(int x) {
  return ((x & 0x000000FFu) << 24) |
         ((x & 0x0000FF00u) <<  8) |
         ((x & 0x00FF0000u) >>  8) |
         ((x & 0xFF000000u) >> 24);
}

int flash_read(int addr){
    int data = 0x03000000 | (addr & 0x00ffffff);  
    outw(SPI_BASE + (0x05<<2),2000);
    outw(SPI_BASE + (0x06<<2),0x01);
    outw(SPI_BASE+ (0x01<<2),data);
    //outw(SPI_BASE,addr);
    outw(SPI_BASE + (0x04<<2),0x0140);
    
    while((inw(SPI_BASE + (0x04<<2)) | ~0x0100) != ~0x0100);
    outw(SPI_BASE + (0x06<<2),0x00);
    return bswap32(inw(SPI_BASE));
}

int flash_xip(int addr){
  return inw(addr);
}
