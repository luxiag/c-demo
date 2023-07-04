#include <stdarg.h>
#include <stdio.h>

void Printlnf(const char *format, ...) {
  va_list args;
  va_start(args, format);
  vprintf(format, args);
  printf("\n");
  va_end(args);
}

#define PRINTLNE(format, ...) printf("("__FILE__":%d) %s : " format "\n",__LINE__,__FUNCTION__ , ##__VA_ARGS__)

#define PRINT_INT(value) PRINTLNE(#value":%d",value)

int main() {

  int value = 2;
  Printlnf("hello world! %d", value);
  PRINTLNE("Hello world! %d", value);
  PRINTLNE("Hello world!");

  PRINT_INT(value);

  int x = 3;
  PRINT_INT(x);

  PRINT_INT(3+4);
  return 0;
}