#include <stdio.h>

#define ROWS 8
#define COLS 12

// 0 = floor, 1 = wall, 2 = water, 3 = player_start
int tilemap[ROWS][COLS] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 3, 0, 0, 2, 2, 1, 0, 0, 0, 0, 1},
    {1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1},
    {1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};

// Print the whole tilemap
void draw(int playerCol, int playerRow)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (i == playerRow && j == playerCol)
            {
                printf("@"); // PLAYER
            }
            else if (tilemap[i][j] == 1)
            {
                printf("#"); // WALL
            }
            else if (tilemap[i][j] == 2)
            {
                printf("~"); // WATER
            }
            else
            {
                printf("."); // FLOOR
            }
        }

        printf("\n");
    }
}

int main()
{
    int playerCol = 1;
    int playerRow = 1;

    char move;

    while (1)
    {
        draw(playerCol, playerRow);

        printf("Move (wasd) or Quit [q]: ");
        scanf(" %c", &move);

        if (move == 'q')
        {
            break;
        }

        // Compute tentative next position
        int nextCol = playerCol;
        int nextRow = playerRow;

        if (move == 'w')
        {
            nextRow--; // Up
        }

        if (move == 's')
        {
            nextRow++; // Down
        }

        if (move == 'a')
        {
            nextCol--; // Left
        }

        if (move == 'd')
        {
            nextCol++; // Right
        }

        // Collision and boundary check
        // Move only if destination is inside the map
        // and is not a wall (tile = 1)
        if (nextRow >= 0 && nextRow < ROWS &&
            nextCol >= 0 && nextCol < COLS &&
            tilemap[nextRow][nextCol] != 1)
        {
            playerCol = nextCol;
            playerRow = nextRow;
        }
    }

    return 0;
}
