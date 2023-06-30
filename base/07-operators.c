#include <stdio.h>

int main()
{
    int first = 0;
    int second;
    int third;

    third = second = first;

    int left, right;
    left = 2;
    right = 3;

    int sum;
    sum = left + right;
    int diff = left - right;
    int product = left * right;
    int quotient = left / right;

    int remainder = left % right;

    // > < >= <= == !=


    //位运算

    #define FLAG_VISIBLE 0x1 // 1<<0 2^0 0001
    #define FLAG_TRANSPARENT 0x2 //1<<1 2^1 0010
    #define FLAG_RESIZABLE 0x4 //1<<2 2^2 0100
    int window_flags = FLAG_RESIZABLE | FLAG_TRANSPARENT;
    int resizable = window_flags & FLAG_RESIZABLE;
    int visible = window_flags & FLAG_VISIBLE;
    
    /*
    int x =1000;
    x * 2;
    x << 1;

    x / 2;
    x >> 1;
    左移*2
    
    右移 /2 

    
    */



    return 0;
}