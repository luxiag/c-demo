#define __STDC_WANT_LIB_EXT1__ 1
#include "include/io_utils.h"
#include <string.h>
#include <stdlib.h>


int main(){
#ifdef __STDC_LIB_EXT1__
  puts("support C11 safe version");
#else
  puts("No support for C11 safe version");
#endif
  char dst[2];
//  int error_no = strcpy_s(dst,2,"Too long!");
}