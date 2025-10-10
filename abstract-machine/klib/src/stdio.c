#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  const char *src = fmt;
  int k = 0;

  int j = 0;
  for(; *(src + j) != '\0'; j++){

    if(*(src + j) != '%'){
      out[k] = *(src +j);
      k++;
    }

    if(*(src + j) == '%'){
      if(*(src + j + 1) == 's'){
        char *temp = va_arg(args,char*);
        while(*temp){
        out[k] = *temp;
        k++;
        temp++;
        }
        j = j + 1;
      }

      if(*(src + j + 1) == 'd'){
        int temp1 = va_arg(args,int);
        char a[sizeof(int) * 3 + 2];
        int i = 0;

        if(temp1 == 0){
          a[i] = '0';
          i++;
          a[i] = '\0';
        }
        else if(temp1 >0){
          do{
            a[i] = temp1 % 10 + '0'; 
            temp1 = temp1 /10;
            i++;
          }while(temp1 > 0);
          a[i] = '\0';

          for(int h =0; h < i/2; h++){
            char tmp = a[h];
            a[h] = a[i-1-h]; 
            a[i-1-h] = tmp;
          }
        }
        else{
          unsigned int val = -temp1;
          a[i++] = '-';
          do{
            a[i] = val % 10 + '0'; 
            val = val /10;
            i++;
          }while(val > 0);
          a[i] = '\0';

          int left = 1;
          int right = i - 1;  
          while (left < right) {
              char tmp = a[left];
              a[left] = a[right];
              a[right] = tmp;
              left++;
              right--;
          }
        }
        int b = 0;
        while(a[b] != '\0'){
          out[k] = a[b];
          k++;
          b++;
        }
        j++;

      }
    }
  }
  out[k] = '\0';
  return k;
  //panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
