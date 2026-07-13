#include <stdio.h>

int main()
{
    int weight_kg;
    int height_cm;
    float height_m;
    float bmi;

    printf("Input Weight (kg): ");
    scanf("%d", &weight_kg);

    printf("Input Height (cm): ");
    scanf("%d", &height_cm);

    height_m = (float)height_cm / 100.0;

    bmi = (float)weight_kg / (height_m * height_m);
    printf("Output BMI: %.2f", bmi);

    if (bmi < 18.5)
        printf(" --> Underweight");

    else if (bmi >= 18.5 && bmi < 25)
        printf(" --> Normal weight");

    else if (bmi >= 25 && bmi < 30)
        printf(" --> Overweight");

    else if (bmi >= 30)
        printf(" --> Obese");

    return 0;
}