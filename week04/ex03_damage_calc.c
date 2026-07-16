#include <stdio.h>
#include <math.h>

int main()
{
    float playerAttack;
    float enemyDefense;
    int hitNumber;

    printf("\n===Combat Testing===\n");

    printf("Enter Player Attack: ");
    scanf("%f", &playerAttack);

    printf("Enter Enemy Defense: ");
    scanf("%f", &enemyDefense);

    printf("Enter Hit Number: ");
    scanf("%d", &hitNumber);

    float base_damage = playerAttack - enemyDefense;
    int is_critical = (hitNumber % 5 == 0);

    if (is_critical)
    {
        base_damage = (int)ceil((float)(base_damage * 1.5f));
        printf("\nDamage: %.2f *** CRITICAL HIT! x1.5 ***\n", base_damage);
    }
    else

        printf("\nDamage: %.2f (Normal)\n", base_damage);

    return 0;
}
