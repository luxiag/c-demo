
#include <stdio.h>
#include "include/io_utils.h"
#include <errno.h>
#include <string.h>

int main(){
  FILE *file = fopen("CMakeLists.txt","r");
  char buf[8192];
  if (file) {
    setvbuf(file,buf,_IOLBF,8192);

    puts("Open successfully");
    int err = ferror(file);
    PRINT_INT(err);
    int eof = feof(file);
    PRINT_INT(eof);
    fflush(stdout);
    fclose(file);
  } else {
    PRINT_INT(errno);
    puts(strerror(errno));
    perror("fopen");
  }
}