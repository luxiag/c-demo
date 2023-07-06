#include "include/io_utils.h"

int main() {
  typedef struct Person {};
  typedef struct {
    char a;
    char b;
//    __attribute((aligned(2))) int c; //4 gcc only
//    _Alignas(2) int c; //4 c11
    int c;
    short d;
    double e;
  } Align;
  Align align = {'a', 'b', 3, .4,  5.0};

  typedef struct {
    char a;
    char b;
    short d;
    int c;
    double e;
  } OptimizedAlign;

  return 0;
}
