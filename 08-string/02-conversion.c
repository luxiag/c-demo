#include "include/io_utils.h"
#include <errno.h>
#include <stdlib.h>

int main(){
  PRINT_INT(atoi("1234"));
  PRINT_INT(atoi("-1234"));
  PRINT_INT(atoi("   1234abcd"));
  PRINT_INT(atoi("0x10"));

  PRINT_DOUBLE(atof("12.34"));
  PRINT_DOUBLE(atof("-12e34"));
  PRINT_DOUBLE(atof("    1.234abcd"));
  PRINT_DOUBLE(atof("0x10"));
  PRINT_DOUBLE(atof("0x10p3.9"));

  char const *const kInput = "1 20000000000000000000000000000 3 -4 5abcd bye";
  PRINTLNF("Parse: %s",kInput);

  char const *start = kInput;
  char *end;

  while(1) {
    errno = 0;

    const long i = strtol(start,&end,10);

    if(start == end) {
      break;
    }
    printf("'%.*s'\t ==> %ld.",(int)(end - start),start,i);
    if(errno == ERANGE) {
      perror("");
    }
    putchar('\n');
    start = end;
  }

  return 0;
}