#include <stdio.h>
#include "include/factorial.h"

int main(){
  printf("3! = %d\n", Factorial(3));
  return 0;
}

/*
 *
 * #include "xxx.h"
 * 1.首先查找当前源文件所在路径
 * 2.查找工程的头文件搜索路径
 *
 * #include <xxx.h>
 * 查找工程的头文件搜索路径
 *
 * 设置搜索路径
 * include_directories("include")
 * */