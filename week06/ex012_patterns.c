#include <stdio.h>

// row loop ควบคุมจำนวนแถว //
// col loop ควบคุมสิ่งที่พิมพ์ในแต่ละแถว//

void print_triangle(int n);
void print_square(int n);
void print_diamond(int n);

void print_triangle(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
            putchar('*');
        putchar('\n');
    }
}

void print_square(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
            putchar('*');
        putchar('\n');
    }
}

void print_diamond(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 0; col < n - row; col++)
            putchar(' ');
        for (int col = 0; col < 2 * row - 1; col++)
            putchar('*');
        putchar('\n');
    }

    for (int row = n - 1; row >= 1; row--)
    {
        for (int col = 0; col < n - row; col++)
            putchar(' ');
        for (int col = 0; col < 2 * row - 1; col++)
            putchar('*');
        putchar('\n');
    }
}

int main(void)
{
    printf("Triangle\n");
    print_triangle(5);

    printf("\nSquare (n=4)\n");
    print_square(4);

    printf("\nDiamond (n=3)\n");
    print_diamond(3);

    return 0;
}