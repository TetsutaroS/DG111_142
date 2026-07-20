#include <stdio.h>

int main()
{
    int grade;

    printf("Enter score:");
    scanf("%d", &grade);

    if (grade >= 80 && grade <= 100)
        printf("Score: %d -> Grade: A (4.00) - PASS", grade);

    else if (grade >= 75 && grade <= 79)
        printf("Score: %d -> Grade: B+ (3.50) - PASS", grade);

    else if (grade >= 70 && grade <= 74)
        printf("Score: %d -> Grade: B (3.00) - PASS", grade);

    else if (grade >= 65 && grade <= 69)
        printf("Score: %d -> Grade: C+ (2.50) - PASS", grade);

    else if (grade >= 60 && grade <= 64)
        printf("Score: %d -> Grade: C (2.00) - PASS", grade);

    else if (grade >= 55 && grade <= 59)
        printf("Score: %d -> Grade: D+ (1.50) - PASS", grade);

    else if (grade >= 50 && grade <= 54)
        printf("Score: %d -> Grade: D (1.00) - PASS", grade);

    else if (grade >= 0 && grade <= 49)
        printf("Score: %d -> Grade: F (0.00) - FAIL", grade);

    return 0;
}