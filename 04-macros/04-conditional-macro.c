#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

//....
int Add(int left, int right);
#ifdef __cplusplus
};
#endif
/*
 * 1.#ifdef 如果定义了
 * 2.#ifndef 如果没定义
 * 3.#if 如果..
 *结束
 * #endif
 * */

void dump(char *message) {
#ifdef DEBUG
  puts(message);
#endif
}

int main() {
  dump("main start");
  printf("hello world!");
  dump("main end.");


  printf("__STDC_VERSION__:%ld\n",__STDC_VERSION__);
#if __STDC_VERSION__ >= 201112
  puts("C11");
#elif __STDC_VERSION__ >= 199901

#else
  puts("maybe C90")
#endif
  return 0;
}