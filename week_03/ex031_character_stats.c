#include <stdio.h>

int main()
{
    char name[40];
    int HP;
    int Attack_Power;
    int Defense;
    int Level;

    printf("=== สร้างตัวละคร === \n");
    printf("ชื่อตัวละคร: ");
    scanf("%s", name);

    printf("HP สูงสุด: ");
    scanf("%d", &HP);

    printf("Attack Power: ");
    scanf("%d", &Attack_Power);

    printf("Defense: ");
    scanf("%d", &Defense);

    printf("Level: ");
    scanf("%d", &Level);

    printf("=== สรุปข้อมูลตัวละคร === \n");
    printf("ชื่อตัวละคร: %s\n", name);
    printf("HP สูงสุด: %d\n", HP);
    printf("Attack Power: %d\n", Attack_Power);
    printf("Defense: %d\n", Defense);
    printf("Level: %d\n", Level);
}