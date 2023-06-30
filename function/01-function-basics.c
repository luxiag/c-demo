#include <stdio.h>

double f(double x)
{
    return x * x + x + 1;
}

double g(double x, double y, double z)
{
    return x + y + z;
}

int main(void)
{
    double result = f(10);
    printf("r %f", result);
    return 0;
}