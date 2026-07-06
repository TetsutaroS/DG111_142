#include <stdio.h>

int main()
{
    char name[40];
    int age;
    float GPA;
    char favorite_subject[50];
    char i = '|';

    printf("ชื่อ: ");
    scanf("%s", name);

    printf("อายุ: ");
    scanf("%d", &age);

    printf("GPA: ");
    scanf("%f", &GPA);

    printf("วิชาโปรด: ");
    scanf("%s", favorite_subject);

    printf("=== PERSONAL CARD === \n");
    printf("┌────────────────────────────────────┐\n");
    printf("│  ชื่อ: %9s", name);
    printf("%22c\n", i);
    printf("│  อายุ: %9d", age);
    printf("%21c\n", i);
    printf("│  GPA: %9.2f", GPA);
    printf("%21c\n", i);
    printf("│  วิชาโปรด: %5s", favorite_subject);
    printf("%21c\n", i);
    printf("└────────────────────────────────────┘\n");
}