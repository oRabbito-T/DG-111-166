#include <stdio.h>

int main()
{

    char name[50];
    int age;
    float GPA;
    char favorite[50];

    printf("\n===Enter Data===\n");
    printf("Name: ");
    scanf("%s", &name);
    printf("Age: ");
    scanf("%d", &age);
    printf("GPA: ");
    scanf("%f", &GPA);

    printf("FavoriteSubject: ");
    scanf("%s", &favorite);

    printf("\n--- Personal Information ---\n");
    printf("┌──────────────────────────┐\n");
    printf("| %-8s : %-13s |\n", "Name", name);
    printf("| %-8s : %-13d |\n", "Age", age);
    printf("| %-8s : %-13f |\n", "GPA", GPA);
    printf("| %-8s : %-13s |\n", "Favorite", favorite);
    printf("└──────────────────────────┘\n");

    return 0;
}
