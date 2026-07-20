#include <stdio.h>

int main()
{
    int item;
    int Health_Potion = 50;
    int Mana_Potion = 80;
    int Iron_Sword = 500;
    int Leather_Armor = 300;
    int gold = 1000;

    printf("=== ITEM SHOP ===\n");
    printf("Gold: %d\n\n", gold);
    printf("1. Health Potion - %d Gold (+50 HP)\n", Health_Potion);
    printf("2. Mana Potion - %d Gold (+30 MP)\n", Mana_Potion);
    printf("3. Iron Sword - %d Gold (+20 ATK)\n", Iron_Sword);
    printf("4. Leather Armor - %d Gold (+15 DEF)\n", Leather_Armor);
    printf("5. Exit\n\n");

    printf("Select item: ");
    scanf("%d", &item);

    switch (item)
    {
    case 1:
        printf("\n");
        printf("=== Purchase ===\n");
        if (gold >= Health_Potion)
        {
            gold -= Health_Potion;
            printf("Health Potion: %d Gold\n", Health_Potion);
            printf("Remaining: %d Gold\n", gold);
            printf("HP Bonus: +50\n\n");
            printf("Item purchased successfully🤑 ✓");
        }
        else
            printf("Not enough gold!\n");
        break;

    case 2:
        printf("\n");
        printf("=== Purchase ===\n");
        if (gold >= Mana_Potion)
        {
            gold -= Mana_Potion;
            printf("Mana Potion: %d Gold\n", Mana_Potion);
            printf("Remaining: %d Gold\n", gold);
            printf("MP Bonus: +30\n\n");
            printf("Item purchased successfully🤑 ✓");
        }
        else
            printf("Not enough gold!\n");
        break;

    case 3:
        printf("\n");
        printf("=== Purchase ===\n");
        if (gold >= Iron_Sword)
        {
            gold -= Iron_Sword;
            printf("Iron Sword: %d Gold\n", Iron_Sword);
            printf("Remaining: %d Gold\n", gold);
            printf("ATK Bonus: +20\n\n");
            printf("Item purchased successfully🤑 ✓");
        }
        else
            printf("Not enough gold!\n");
        break;

    case 4:
        printf("\n");
        printf("=== Purchase ===\n");
        if (gold >= Leather_Armor)
        {
            gold -= Leather_Armor;
            printf("Leather Armor: %d Gold\n", Leather_Armor);
            printf("Remaining: %d Gold\n", gold);
            printf("DEF Bonus: +15\n\n");
            printf("Item purchased successfully🤑 ✓");
        }
        else
            printf("Not enough gold!\n");
        break;

    case 5:
        printf("\n");
        printf("Leave...");
        break;

    default:
        printf("\n");
        printf("what");
        break;
    }

    return 0;
}