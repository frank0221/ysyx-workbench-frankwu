#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#define GPIO_BASE 0x10002000
int inw(int addr){return *(volatile int*)addr;}
void outw(int addr, int data){*(volatile int*) addr = data;}

int main(){
    //outw(GPIO_BASE,0x04);
    outw(GPIO_BASE+8,0x01234567);
    //int b;
     printf("Hello World\n");
    while(1){
        // static unsigned char i;
        // outw(GPIO_BASE,0x01<<i);
        // i = (i+1) %16;
        // if((b= inw(GPIO_BASE+4))==0x1100){
        //     printf("right\n");
        //     //a = inw(GPIO_BASE+4);
        // }
       
        outw(GPIO_BASE,inw(GPIO_BASE+4));
    }
}