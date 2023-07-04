#include <stdio.h>
#include <stdbool.h>

int main()
{

    _Bool is_enabled = true;
    is_enabled = 10;
    printf("is_enabled: %d\n", is_enabled);
    int grade = 0;
    switch (grade)
    {
    case 0:
        printf("False\n");
    case 1:
        printf("True\n");
        break;
    default:
        printf("Illegal\n");
    }
    int i = 0;
    do
    {
        printf("i is %d\n", i);
        i++;
    } while (i < 10);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d, %d\n", i, j);
            break;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d, %d\n", i, j);
            continue;
        }
    }
    // int is_open = is_enabled && is_visible ? 1 : 0;
}
