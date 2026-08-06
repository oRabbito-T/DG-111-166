#include <stdio.h>

// For Loops//
int main()
{
    int i;
    int sum;

    printf("For Loop Example:\n");
    sum = 0;
    for (i = 1; i <= 10; i++)
    {
        sum += i;
        printf("Number %d\n", i);
    }
    printf("Sum: %d\n\n", sum);

    printf("While Loop Example:\n");
    i = 1;
    sum = 0;
    while (i <= 10)
    {
        sum += i;
        printf("While Loop number: %d\n", i);
        i++;
    }
    printf("Sum: %d\n\n", sum);

    printf("Do-While Loop Example:\n");
    i = 1;
    sum = 0;
    do
    {
        sum += i;
        printf("Do-While Loop number: %d\n", i);
        i++;
    } while (i <= 10);
    printf("Sum: %d\n", sum);

    return 0;
}
