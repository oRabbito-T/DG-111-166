#include <stdio.h>
int main()
{
    char name[50];
    int HP;
    int ATK;
    int DEF;
    int Lv;

    printf("\n===Create Character===\n");
    printf("Name:  ");
    scanf("%s", &name);

    printf("Max HP:");
    scanf("%d", &HP);

    printf("Attack Power:");
    scanf("%d", &ATK);

    printf("Defense Power:");
    scanf("%d", &DEF);

    printf("Level:");
    scanf("%d", &Lv);

    printf("\n--- Character Summary ---\n");
    printf("Name: %s\n", name);
    printf("Max HP: %d\n", HP);
    printf("Attack Power: %d\n", ATK);
    printf("Defense Power: %d\n", DEF);
    printf("Level: %d\n", Lv);
    return 0;
}