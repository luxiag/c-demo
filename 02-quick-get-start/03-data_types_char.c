#include <stdio.h>

int main()
{
    // ASCII 127
    char a = 'a';      // 97
    char char_1 = '1'; // 49
    char char_0 = '0'; // 48

    char char_1_escape_oct = '\61'; // 49的八进制
    char char_1_escape_hex = '\x31';

    printf("char a: %d\n", a);
    printf("char a: %c\n", a);
    printf("char 1: %c\n", char_1);
    printf("char 1: %c\n", char_1_escape_oct);

    char i = 0; // \0, NULL  \ + 八进制 \ + x十六进制

    // c95增加
    wchar_t zhong = L'中';
    wchar_t zhong_hex = L'\u4E2D';
    // char zhong = '中';
    // Unicode CJK
    char *string = "中";

    return 0;
}