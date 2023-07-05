#include <stdio.h>

int main(){
  char string[11] = "hello world";

  for (int i = 0; i < 11; ++i) {
    printf("string[%d] = %c\n",i,string[i]);
  }
  printf("string = %s\n",string);

  char string_zh[] = "你好";

//  wchar_t ws[] =
  return 0;
}