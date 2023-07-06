#include <stdio.h>

int SumIntArray(int array[],int length) {
  int sum = 0;
  for (int i = 0; i < length; ++i) {
    sum +=array[i];
  }
  /*
   * info registers rbp
   * */
  return sum;
}

int main(){
  return 0;
}