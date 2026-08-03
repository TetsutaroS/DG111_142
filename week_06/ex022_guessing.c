#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int guess;

    srand(time(NULL));
    int target = rand() % 100 + 1;
    int attempts = 0;

    printf("=== Number Guessing Game (1-100) ===\n");
    do
    {
        attempts++;
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < target)
        {
            printf("Too low!\n\n");
        }
        else if (guess > target)
        {
            printf("Too high!\n\n");
        }
        else if (guess == target)
        {
            printf("Correct! You guessed it in %d attempts.\n", attempts);
        }
    } while (guess != target);

    return 0;
}