#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t count = 0;
  for(; *(s)!= '\0'; s++, count++);
  return count;
  panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
  int i = 0;
  for(; src[i] != '\0'; i++){
    dst[i] = src[i];
  }
  dst[i] = '\0';
  return dst;
  panic("Not implemented");
}

char *strncpy(char *dst, const char *src, size_t n) {
  // int i = 0;
  // int j = 0;
  // for(; src[j] != '\0'; j++);
  // for(; i < n; i++){
    // if(j > n || j ==n)
    //   dst[i] = src[i];
    // else{
    //   if(i < j - 1 || i == j -1)
    //     dst[i] = src[i];
    //   else 
    //     dst[i] = '\0';
    // }
  // }
  int32_t i = 0;
  for(; src[i] != '\0' && i < n; i++)
    dst[i] = src[i];
  for(; i < n; i++)
    dst[i] = '\0';
  return dst;
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {

  // int i, j;
  // for(i = 0; dst[i] != '\0'; i++);
  // for(j = 0; src[j] != '\0'; j++);
  // int b = i + j + 1;
  // char temp[b];

  // int a = 0;
  // while(1)
  // {
  //   if(a < i)
  //       temp[a] = dst[a];
  //   else if(a < i + j){
  //       temp[a] = src[a-i];
  //   }
  //   else{
  //       temp[a] = '\0';
  //       break;
  //   }
  //   a++;
  // }
  char *p = dst;
  while(*p)
    p++;

  const char *s = src;
  while(*s){
    *p = *s;
    p++;
    s++;
  }
  *p = '\0';
  return dst;
  panic("Not implemented");
}

int strcmp(const char *s1, const char *s2) {
  int a = 0;
  while(1){
    if(s1[a] < s2[a]){
      return -1;
    }
    else if(s1[a] > s2[a]){
      return 1;
    }
    else{
      a++;
    }
    if(s1[a] == '\0' && s2[a] == '\0')
      return 0;
  }

  panic("Not implemented");
}

int strncmp(const char *s1, const char *s2, size_t n) {
  for(int a = 0; a < n; a++){
   if(s1[a] < s2[a]){
      return -1;
    }
    else if(s1[a] > s2[a]){
      return 1;
    }
    else{
      if(a == n-1)
        return 0;
    }
    if(s1[a] == '\0' && s2[a] == '\0')
      return 0;
  }
  return 0;
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  unsigned char *p = (unsigned char *) s;
  for(int i = 0; i < n; i++){
    p[i] = (unsigned char)c;
  }
  return s;
  panic("Not implemented");
}

void *memmove(void *dst, const void *src, size_t n) {
  unsigned char* dest = (unsigned char*) dst;
  unsigned char* src1 = (unsigned char*) src;

  if(dest > src1){
    while(--n){
      dest[n] = src1[n];
    }
    dest[0] = src1[0];
  }
  else{
    while(n--){
      *dest = *src1;
      dest++;
      src1++;
    }
  }
  return dst;
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {

  unsigned char* dst = (unsigned char *)out;
  unsigned char* src = (unsigned char *)in;
  int i = 0;
  for(; i < n; i++){
    dst[i] = src[i];
  }
  return dst;
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {

  unsigned char *a1, *a2;
  a1 = (unsigned char*)s1;
  a2 = (unsigned char*)s2;
  for(int a = 0; a < n; a++){
   if(a1[a] < a2[a]){
      return -1;
    }
    else if(a1[a] > a2[a]){
      return 1;
    }
    else{
      if(a == n-1)
        return 0;
    }
  }
  panic("Not implemented");
}

#endif
