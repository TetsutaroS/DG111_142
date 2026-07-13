#include <stdio.h>

int main()
{
    int seconds;
    int hour;
    int minute;
    int secs;

    printf("Input seconds: ");
    scanf("%d", &seconds);

    hour = seconds / 3600;
    minute = (seconds % 3600) / 60;
    secs = seconds % 60;

    printf("Input = %d seconds\n", seconds);
    printf("Output = %d:%02d:%02d\n", hour, minute, secs);

    return 0;
}