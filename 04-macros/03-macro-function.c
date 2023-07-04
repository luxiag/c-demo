#include <stdio.h>

/*
 *
 *
 * */
#define MAX(a, b) a > b ? a : b
#define MAX2(a, b) (a) > (b) ? (a) : (b)

#define IS_HEX_CHARACTER(ch)                                                   \
  ((ch) >= '0' && (ch) <= '9') || ((ch) >= 'A' && (ch) <= 'F') ||              \
      ((ch) >= 'a' && (ch) <= 'f')

int main() {

  int max = MAX(1, MAX(3, 4));
  int max2 = MAX2(1, MAX2(3, 4));

  printf("max1:%d\n", max);
  printf("max2: %d\n", max2);
  return 0;
}