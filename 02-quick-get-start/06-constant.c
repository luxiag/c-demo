#include <stdio.h>

#define COLOR_RED 0xFF0000

int main()
{
    // const readonly variable
    const int kRed = 0xFF0000;
    const int kGreen = 0x00FF00;
    const int kBlue = 0x0000FF;

    printf("kRed: %d\n", kRed);

    int *p_k_red = &kRed;
    *p_k_red = 0;

    printf("kRed: %d\n", kRed);

    printf("COLOR_RED:%d\n", COLOR_RED);

    return 0;
}