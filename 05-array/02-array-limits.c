#include <stdio.h>

#define ARRAY_SIZE 5

int main() {
  int array[ARRAY_SIZE];

  printf("array[0] = %d\n", array[0]);
  printf("array[5] = %d\n", array[5]);

  int value = 2;
  /*
   * 变长数字（VLA）
   * 数组的长度可以用变量来声明的数组
   * C语言标志从C99开始支持该特性
   * GCC提供了相应的扩展；MSVC不支持
   * */
  int array_size_of_value[value];

  const int kSize = 5; //C++支持 常量
  int array_size_of_const[kSize]; //C99支持

  return 0;
}