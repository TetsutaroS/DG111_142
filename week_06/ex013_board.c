#include <stdio.h>

int main()
{
    int count = 1;

    for (int i = 1; i <= 3; i++)
    {
        printf("+---+---+---+---+---+\n");
        for (int j = 1; j <= 5; j++)
        {
            printf("|%2d ", count);
            count++;
        }
        printf("|\n");
    }
    printf("+---+---+---+---+---+\n");

    return 0;
}