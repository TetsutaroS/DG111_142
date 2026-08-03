#include <stdio.h>

int main()
{
    int item;
    int Health_Potion = 50;
    int Mana_Potion = 80;
    int Iron_Sword = 500;
    int Leather_Armor = 300;
    int gold = 1000;
    int selection;
    int total = 0;
    _Bool boughtSword = 0, boughtArmor = 0, leaveShop = 0;

    printf("=== ITEM SHOP ===\n");
    printf("Gold: %d\n\n", gold);
    printf("1. Health Potion - %d Gold (+50 HP)\n", Health_Potion);
    printf("2. Mana Potion - %d Gold (+30 MP)\n", Mana_Potion);
    printf("3. Iron Sword - %d Gold (+20 ATK)\n", Iron_Sword);
    printf("4. Leather Armor - %d Gold (+15 DEF)\n", Leather_Armor);
    printf("5. Checkout\n\n");
    do
    {
        printf("Select item: ");
        scanf("%d", &item);

        switch (item)
        {
        case 1:
            if (total + 50 > gold)
                printf("Not enough Gold!\n");
            else
            {
                total += 50;
                printf("Health Potion: %d Gold\n", Health_Potion);
            }
            break;

        case 2:
            if (total + 80 > gold)
                printf("Not enough Gold!\n");
            else
            {
                total += 80;
                printf("Mana Potion: %d Gold\n", Mana_Potion);
            }
            break;

        case 3:
            if (total + 500 > gold)
                printf("Not enough Gold!\n");
            else
            {
                total += 500;
                boughtSword = 1;
                printf("Iron Sword: %d Gold\n", Iron_Sword);
            }
            break;

        case 4:
            if (total + 300 > gold)
                printf("Not enough Gold!\n");
            else
            {
                total += 300;
                boughtArmor = 1;
                printf("Leather Armor: %d Gold\n", Leather_Armor);
            }
            break;

        case 5:
            printf("\n");
            printf("=== Checkout ===\n");
            leaveShop = 1;
            break;

        default:
            printf("Invalid selection!\n");
        }
    } while (!leaveShop);
    printf("Total: %d Gold\n", total);

    if (boughtSword && boughtArmor)
    {
        total = total * 90 / 100; // ลด 10%
        printf("Warrior Bundle! (-10%%)\n");
    }
    printf("Total: %d Gold\n", total);
    printf("Remaining: %d Gold\n", gold - total);

    return 0;
}