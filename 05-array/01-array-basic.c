#include <stdio.h>
//#include "io_utils.h"
#define ARRAY_SIZE 10

int main() {
  int array[ARRAY_SIZE];
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    array[i] = i;
    //  PRINT_INT(array[i]);
  }
  int array_2[ARRAY_SIZE] = {0,1,2,3,4,5,6,7,8.9};
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    printf("array_2[%d],%d\n",i,array_2[i]);
  }
  double array_double[5] = {0.1,2.3};
  //c99
  char array_char[5] = {[2] = 'o','l','l'};
  for (int i = 0; i < 5; ++i) {
    printf("array_char[%d] = %c\n",i,array_char[i]);
  }
  return 0;
}