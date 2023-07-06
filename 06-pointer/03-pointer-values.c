#include "include/io_utils.h"
#include <stdio.h>


/*
 * 不要将硬编码赋值给指针
 * 空指针NULL的用法
 * 注意避免产生野指针
 *
 * */
int main(){
  int *p = (int *)100;
//  int *p = (int *)ox65fe18; danger
  PRINT_INT(p);
  PRINT_HEX(&p);
  PRINT_INT(*p);

  int *b = NULL;
  //*b = 3 error
  return 0;
}