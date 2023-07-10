#include <stdio.h>

int main(){
//  char ch= 'a';
//  int a= (int)ch;
//  printf ("%d %c\n", a, ch);

  int add = 0x12345678;
  int *p = (int*)add;

  printf("%c %c \n",add,*p);

  return 0;

}