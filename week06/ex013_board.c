#include <stdio.h>

int main()
{
    int rows = 3; // Number of rows for the triangle pattern
    int cols = 5; // Number of columns for the square pattern
    int count = 1;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("+---");
        printf("+\n");

        for (int j = 0; j < cols; j++)
            printf("|%2d ", count++);
        printf("|\n");
    }

    for (int j = 0; j < cols; j++)
        printf("+---");
    printf("+\n");

    return 0;
}
