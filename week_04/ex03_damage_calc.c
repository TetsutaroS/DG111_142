#include <stdio.h>
#include <math.h>

int main()
{
    int Player_Attack;
    int Enemy_Defense;
    int Hit_Number;
    int Damage;
    int Base_Damage;

    printf("=== COMBAT SIMULATOR ===\n");

    printf("Player Attack : ");
    scanf("%d", &Player_Attack);

    printf("Enemy Defense : ");
    scanf("%d", &Enemy_Defense);

    printf("Hit_Number    : ");
    scanf("%d", &Hit_Number);

    Base_Damage = (Player_Attack - Enemy_Defense);
    Damage = (int)ceil((float)Base_Damage * 1.5f);

    if (Hit_Number % 5 == 0)
        printf("Damage = %d *** Critical Hit!!!! ***\n", Damage);
    else
        printf("Damage = %d (Normal)\n", Base_Damage);

    return 0;
}