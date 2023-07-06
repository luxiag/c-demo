#include <stdio.h>

int main() {
  int a;
  int *const cp = &a;
  *cp = 2;
  //  cp = &b; ERROR
  int const *const ccp = &a;
  //  ccp = &b; ERROR
  //  *ccp = 2; ERROR
  return 0;
}