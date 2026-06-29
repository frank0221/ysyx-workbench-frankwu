#include <am.h>
#include <klib-macros.h>
#define SPI_BASE 0x10001000
void outb(int addr,int data) {*(volatile char*)addr = data;}
void outw(int addr,int data) {*(volatile unsigned int*)addr = data;}
int inb(int addr) {return *(volatile char*)addr;}
int inw(int addr) {return *(volatile unsigned int*)addr;}
int main(){
    outw(SPI_BASE + (0x05<<2),2000);
    outw(SPI_BASE + (0x06<<2),0x80);
    //outw(SPI_BASE + (0x04<<2),0x048e);
    outb(SPI_BASE,0xa4);
    outw(SPI_BASE + (0x04<<2),0x0910);

    while((inw(SPI_BASE + (0x04<<2)) | ~0x0100) != ~0x0100);
    //inb(SPI_BASE);
    return 0;
}