#include <stdio.h>
#include "include/io_utils.h"

int main(){
  int a;
  scanf("%d",&a);

  int *p = &a;
  PRINT_HEX(p);
  PRINT_INT(sizeof(int *));

  PRINT_INT(*p);
  PRINT_INT(a);
  return 0;
}