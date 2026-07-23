#include <stdio.h>

int main()

{

    int score;

    printf("\n===Grade Calculator===\n");

    printf("Enter Score: ");

    scanf("%d", &score);

    if (score >= 80)
    {
        printf("Score: %d Grade: A   (4.0) ", score);
    }
    else if (score >= 75)
    {
        printf("Score: %d Grade: B+   (3.5) ", score);
    }
    else if (score >= 70)
    {
        printf("Score: %d Grade: B   (3.0) ", score);
    }
    else if (score >= 65)
    {
        printf("Score: %d Grade: C+   (2.5) ", score);
    }

    else if (score >= 60)
    {
        printf("Score: %d Grade: C   (2.0) ", score);
    }

    else if (score >= 55)
    {
        printf("Score: %d Grade: D+   (1.5) ", score);
    }

    else if (score >= 50)
    {
        printf("Score: %d Grade: D   (1.0) ", score);
    }
    else
    {
        printf("Score: %d Grade: F   (0.0) ", score);
    }

    if (score >= 50)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }

    return 0;
}