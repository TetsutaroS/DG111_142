#include <stdio.h>

int main()
{
    printf("โจทย์ 1: Triangle\n");
    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("โจทย์ 2: Square (n=4)\n");
    for (int i = 1; i <= 4; i++)
    {

        for (int j = 1; j <= 4; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("โจทย์ 3: Square (n=3)\n");
    int n = 3;
    int space = 0;
    for (int i = 1; i <= n; i++)
    {
        space = n - i;
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--)
    {
        space = n - i;
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
