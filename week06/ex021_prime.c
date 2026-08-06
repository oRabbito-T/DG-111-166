#include <stdio.h>

int main()
{
    int isPrime = 1;
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime && n > 1)
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}