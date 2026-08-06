#include <stdio.h>

int main(void)
{

    int PRICE_HEALTH = 50;
    int PRICE_MANA = 80;
    int PRICE_SWORD = 500;
    int PRICE_ARMOR = 300;

    int boughtSword = 0;
    int boughtArmor = 0;
    int total = 0;
    int choice = 0;
    int gold = 0;

    printf("\n=== Shop ===\n");
    printf("Enter the amount of gold you have: ");
    scanf("%d", &gold);

    while (choice != 5)
    {
        printf("\nGold: %d\n\n", gold);
        printf("1. Health Potion  - %d Gold\n", PRICE_HEALTH);
        printf("2. Mana Potion    - %d Gold\n", PRICE_MANA);
        printf("3. Iron Sword     - %d Gold\n", PRICE_SWORD);
        printf("4. Leather Armor  - %d Gold\n", PRICE_ARMOR);
        printf("5. Checkout\n");
        printf("Select item: ");
        if (scanf("%d", &choice) != 1)
            break;

        if (choice == 1)
        {
            total += PRICE_HEALTH;
            printf("Added Health Potion to cart.\n");
        }
        else if (choice == 2)
        {
            total += PRICE_MANA;
            printf("Added Mana Potion to cart.\n");
        }
        else if (choice == 3)
        {
            total += PRICE_SWORD;
            boughtSword = 1;
            printf("Added Iron Sword to cart.\n");
        }
        else if (choice == 4)
        {
            total += PRICE_ARMOR;
            boughtArmor = 1;
            printf("Added Leather Armor to cart.\n");
        }
        else if (choice < 1 || choice > 5)
        {
            printf("Invalid choice. Please select a valid item.\n");
        }
        else if (choice == 5)
        {
            printf("\n=== Checkout ===\n");
            int final_total = total;
            if (boughtSword && boughtArmor)
            {
                int discount = final_total * 10 / 100;
                final_total -= discount;
                printf("Warrior Bundle! (-10%%)\n");
            }

            if (final_total <= gold)
            {
                printf("Total Paid: %d Gold\n", final_total);
                printf("Remaining : %d Gold\n", gold - final_total);
            }
            else
            {
                printf("Total: %d Gold\n", final_total);
                printf("You don't have enough gold (%d).\n", gold);
            }
            break;
        }
    }

    return 0;
}