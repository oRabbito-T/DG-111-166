#include <stdio.h>

int main()
{
    _Bool is_poisoned = 0;
    int max_hp, damage, attack_count;
    int poisoned_input;

    printf("Max HP: ");
    scanf("%d", &max_hp);

    printf("Damage Taken: ");
    scanf("%d", &damage);

    printf("Poisoned (0/1): ");
    scanf("%d", &poisoned_input);

    printf("Attack Count: ");
    scanf("%d", &attack_count);

    is_poisoned = poisoned_input;

    int hp = max_hp - damage;
    if (hp < 0)
        hp = 0;

    printf("\n=== Character Status ===\n");

    if (hp == 0)
    {
        printf("State: DEAD\n");
    }
    else if (hp * 100 < max_hp * 25)
    {
        printf("State: CRITICAL\n");
    }
    else if (is_poisoned)
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

    printf("poisoned: %s\n", is_poisoned ? "Yes" : "No");
    printf("Current HP: %d/%d\n", hp, max_hp);
    return 0;
}
