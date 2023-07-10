#include "include/io_utils.h"
#include <libc.h>
int main(){
  char *string = "Hello World";

  PRINT_INT(strlen(string));
//  PRINT_INT(strnlen_s(string,100));//c11
  PRINT_INT(strnlen(string,100));// gcc

  char *left = "Hello World!";
  char *right = "Hello C Programmers!";

  PRINT_INT(strcmp(left,right));
  PRINT_INT(strncmp(left,right,10));



  return 0;


}