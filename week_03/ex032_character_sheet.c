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

    printf("Level: ");
    scanf("%d", &Level);

    printf("HP สูงสุด: ");
    scanf("%d", &HP);

    printf("Attack Power: ");
    scanf("%d", &Attack_Power);

    printf("Defense: ");
    scanf("%d", &Defense);

    printf("╔═════════════════════════════╗\n");
    printf("║ %s                        ║\n", name);
    printf("╠═════════════════════════════╣\n");
    printf("║ Level: %d                    ║\n", Level);
    printf("║ HP : %d/%d                ║\n", HP, HP);
    printf("║ ATK: %d                    ║\n", Attack_Power);
    printf("║ DEF: %d                    ║\n", Defense);
    printf("╠═════════════════════════════╣\n");
    printf("║ HP Bar: [██████████] 100    ║\n");
    printf("╚═════════════════════════════╝\n");
}