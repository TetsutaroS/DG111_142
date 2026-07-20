#include <stdio.h>

int main()
{
    int Day;

    printf("Enter Day (1-7): ");
    scanf("%d", &Day);

    switch (Day)
    {
    case 1:
        printf("1 --> Monday (Weekday)");
        break;

    case 2:
        printf("2 --> Tuesday (Weekday)");
        break;

    case 3:
        printf("3 --> Wednesday (Weekday)");
        break;

    case 4:
        printf("4 --> Thursday (Weekday)");
        break;

    case 5:
        printf("5 --> Friday (Weekday)");
        break;

    case 6:
        printf("6 --> Saturday (Weekend🤑🤑🤑)");
        break;

    case 7:
        printf("7 --> Sunday (Weekend🤑🤑🤑)");
        break;

    default:
        printf("Invalid Input😡");
        break;
    }

    return 0;
}