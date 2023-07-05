#include <stdio.h>

#define LENGTH 10

int SumIntArray(int array[], int length) {
  int sum = 0;
  for (int i = 0; i < length; ++i) {
    sum +=array[i];
  }
  return sum;
}

int main(){
  int array[LENGTH] = {1,4,5,6,23,12,2323,43};
  printf("SumIntArray(array) = %d\n", SumIntArray(array,7));
  return 0;
}