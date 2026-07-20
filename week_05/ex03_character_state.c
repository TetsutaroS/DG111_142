#include <stdio.h>

int main()
{
    int max_hp;
    int damage_taken;
    int is_poison;
    _Bool poison;
    int attack_count;

    printf("Max HP: ");
    scanf("%d", &max_hp);

    printf("Damage Taken: ");
    scanf("%d", &damage_taken);

    printf("Poisoned (0/1): ");
    scanf("%d", &poison);
    if (poison != 1 && poison != 0)
    {
        return 1;
    }
    is_poison = poison ? 1 : 0;

    printf("Attack Count:");
    scanf("%d", &attack_count);

    int hp = max_hp - damage_taken;
    if (hp < 0)
        hp = 0;

    printf("\n");
    printf("=== Character Status ===\n");

    if (hp <= 0)
    {
        printf("State: DEAD\n");
    }

    else if ((hp * 100) < (max_hp * 25))
    {
        printf("State: CRITICAL\n");
    }

    else if (is_poison)
    {
        printf("State: POISONED\n");
    }

    else
    {
        printf("State: NORMAL\n");
    }

    if (attack_count > 0 && attack_count % 5 == 0)
    {
        printf("Ultimate Ready!\n");
    }

    return 0;
}