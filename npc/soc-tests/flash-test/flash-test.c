#include <am.h>
#include <klib-macros.h>
#include <riscv/riscv.h>
int main(){
    uint32_t data;
    data = inl(0x30000000);
    if(data == 0x00000413)
        return 0;
    else 
        return 1;
}