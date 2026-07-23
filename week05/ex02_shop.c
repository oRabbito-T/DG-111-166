#include <stdio.h>

int main()
{
    int gold;
    int choice;
    int purchased = 0; // 0 = failed, 1 = success
    int item = 0;      // 1 = Health Potion, 2 = Mana Potion, 3 = Sword, 4 = Leather Armor

    printf("\n===Shop===\n");
    printf("Enter the amount of gold you have: ");
    scanf("%d", &gold);

    printf("1. Health Potion - 50 Gold (+50 HP)\n");
    printf("2. Mana Potion - 30 Gold (+30 MP)\n");
    printf("3. Sword - 100 Gold (+10 Attack)\n");
    printf("4. Leather Armor - 80 Gold (+10 Defense)\n");

    printf("\nEnter your choice (1-4): ");
    scanf("%d", &item);

    switch (item)
    {
    case 1:
        if (gold >= 50)
        {
            gold -= 50;
            purchased = 1;
            item = 1;
            printf("You bought a Health Potion! Remaining Gold: %d\n", gold);
        }
        else
        {
            printf("Not enough gold for Health Potion.\n");
        }
        break;
    case 2:
        if (gold >= 30)
        {
            gold -= 30;
            purchased = 1;
            item = 2;
            printf("You bought a Mana Potion! Remaining Gold: %d\n", gold);
        }
        else
        {
            printf("Not enough gold for Mana Potion.\n");
        }
        break;
    case 3:
        if (gold >= 100)
        {
            gold -= 100;
            purchased = 1;
            item = 3;
            printf("You bought a Sword! Remaining Gold: %d\n", gold);
        }
        else
        {
            printf("Not enough gold for Sword.\n");
        }
        break;
    case 4:
        if (gold >= 80)
        {
            gold -= 80;
            purchased = 1;
            item = 4;
            printf("You bought Leather Armor! Remaining Gold: %d\n", gold);
        }
        else
        {
            printf("Not enough gold for Leather Armor.\n");
        }
        break;
    default:
        printf("Invalid choice. Please select a valid item.\n");
    }

    printf("\n===Purchase Summary===\n");
    printf("Remaining Gold: %d\n", gold);
    if (purchased)
    {
        printf("Item purchased: ");

        switch (item)
        {
        case 1:
            printf("Health Potion (+50 HP)\n");
            break;
        case 2:
            printf("Mana Potion (+30 MP)\n");
            break;
        case 3:
            printf("Sword (+10 Attack)\n");
            break;
        case 4:
            printf("Leather Armor (+10 Defense)\n");
            break;
        }

        printf("Item purchased successfully! ✓\n");
    }
    else
    {
        printf("No item purchased.\n");
    }

    return 0;
}