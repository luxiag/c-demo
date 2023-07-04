#include <stdio.h>

int main()
{
    short int short_int = 0;
    int i = 0;
    long int long_int = 0;
    long long longlong_int = 0;

    printf("short int: %d\n", sizeof(short int));
    printf("int: %d\n", sizeof(int));
    printf("long int: %d\n", sizeof(long int));

    printf("long long: %d\n", sizeof(long long));

    return 0;
}