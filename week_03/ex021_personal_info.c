#include <stdio.h>

int main()
{
    char name[40];
    int age;
    float GPA;
    char favorite_subject[50];

    printf("=== ป้อนข้อมูล === \n");
    printf("ชื่อ: ");
    scanf("%s", name);

    printf("อายุ: ");
    scanf("%d", &age);

    printf("GPA: ");
    scanf("%f", &GPA);

    printf("วิชาโปรด: ");
    scanf("%s", favorite_subject);

    printf("\n");
    printf("=== ข้อมูลส่วนตัว === \n");
    printf("ชื่อ: %s\n", name);
    printf("อายุ: %d\n", age);
    printf("GPA: %.2f\n", GPA);
    printf("วิชาโปรด: %s\n", favorite_subject);
}