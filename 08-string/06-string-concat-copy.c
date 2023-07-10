#include "include/io_utils.h"
#include <string.h>

int main() {
  char src[] = "HelloWorld";
  char dest[20] = "C said:";
  //  strcat()：用于将一个字符串追加到另一个字符串的末尾。
//  strcat(src, dest);
  puts(dest);
  //  strcpy()：用于将一个字符串复制到另一个字符串中。

  strcpy(dest + strlen(dest), src);
  puts(dest);
  return 0;
}