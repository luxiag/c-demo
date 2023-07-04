#include <stdio.h>

/**
 * This program calculate summary from 0 to 9.
 * @param argc parameter count
 * @param argv parameters
 * @return 0
 * */
int main(int argc, char **argv) {
  int sum = 0;
  int i = 0;
  while (i < 10) {
    sum += i;
    i++;
  }
  return 0;
}

/*
 * 好的命名
 * Editor-》 code style -> c/c++
 * Set from Google
 *
 * 设置内容更改
 * settings -> Editor -> Inspections
 *
 * */