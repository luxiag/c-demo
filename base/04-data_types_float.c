#include <stdio.h>;

int main()
{
    float a_float = 3.14f; // 精度6位数字 范围  -10^37 ~ 10^37
    printf("size of float: %d\n", sizeof(float));
    double a_double = 3.14; // 精度 15~16
    printf("size of double: %d\n", sizeof(double));

    float lat = 39.9081f;
    printf("%f",39.908156f - lat);
    /*
    12345;
    1.2345e4
    */
   float money = 3.14f; //error 精度损失
    return 0;
}