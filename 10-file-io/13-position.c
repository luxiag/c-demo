#include <stdio.h>

int main() {
  FILE *file = fopen("CMakeLists.txt", "rb");

  /*
   *fseek 是 C 语言标准库中的文件定位函数，用于在文件中移动文件指针的位置。
   * 通过 fseek 函数，您可以在文件中进行随机访问，跳转到指定的位置。
   *int fseek(FILE* stream, long offset, int origin);
   * stream：指向要定位的文件的指针。
···*·offset：偏移量，表示要移动的字节数。
···*·origin：起始位置，表示从文件的哪个位置进行偏移。可以使用以下常量之一：
···*·SEEK_SET：从文件开头开始计算偏移。
···*·SEEK_CUR：从当前位置开始计算偏移。
···*·SEEK_END：从文件末尾开始计算偏移。
···*·fseek 函数的返回值为 0 表示成功，非零值表示失败。
   * */
  fseek(file, -20, SEEK_CUR);

  /*
   *
   *int fsetpos(FILE* stream, const fpos_t* position);
   *stream：指向要设置位置的文件的指针。
   *position：指向 fpos_t 类型的指针，表示要设置的位置。
   *
   *
   * */

  // 获取文件指针的当前位置
  fpos_t position;
  fgetpos(file, &position);
  printf("当前位置：%lld\n", position);

  // 设置文件指针到新的位置
  fsetpos(file, &position);

  // 关闭文件
  fclose(file);
  return 0;
}