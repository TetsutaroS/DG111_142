#include <stdio.h>

int main()
{
    int n;
    int isPrime = 1;
    int divisor = 0;

    printf("Enter positive integer: ");
    scanf("%d", &n);

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            divisor = i;
            break;
        }
    }
    if (isPrime && n > 1)
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is not a prime number. (divisible by %d)\n", n, divisor);
    }
    return 0;
}