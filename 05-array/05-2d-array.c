#include <stdio.h>
#include "io_utils.h"

void SumIntArrays(int rows, int colunms, int array[][colunms], int result[]) {
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < colunms; ++j) {
      result[i] += array[i][j];
    }
    printf("result[%d] = %d\n",i,result[i]);
  }
}

int main() {
  int vehicle_limits[5][2] = {{0, 5}, {1, 6}};

  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 2; ++j) {
      vehicle_limits[i][j] = i + j;
    }

  }

  int scores[5][4] = {
      {123, 234, 123, 123},
      {123, 111, 12, 324},
      {123, 342, 121, 324},
      {111,123,102,124},
      {101,103,105,142}
  };

  int result[5] = {0};
  SumIntArrays(5, 4, scores, result);
  PRINT_INT_ARRAY(result, 5);
  for (int i = 0; i < 5; ++i) {
    printf("result[%d] = %d\n",i,result[i]);
  }
  //   printf("result = %c\n",result);
  return 0;
}