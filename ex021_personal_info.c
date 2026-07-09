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
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", GPA);
    printf("Favorite: %s\n", favorite);
    return 0;
}
