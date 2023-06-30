#include <stdio.h>

int main()
{

#define MAGIC_NUMBER 10
    int user_input;
    printf("please input a number: \n");
    scanf("%d", &user_input);
    if (user_input > MAGIC_NUMBER)
    {
        printf("your number is bigger!");
    }
    else if (user_input < MAGIC_NUMBER)
    {
        printf("your number is smaller!");
    }
    else
    {
        printf("yes you got it!");
    }
    return 0;
}