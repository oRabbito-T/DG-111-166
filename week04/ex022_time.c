#include <stdio.h>

int main()
{
    int hours, minutes, seconds;
    int total_seconds = 3723;

    printf("Input seconds: %d\n", total_seconds);

    int seconds_to_hours = total_seconds / 3600;

    int seconds_to_minutes = (total_seconds % 3600) / 60;

    int remaining_seconds = total_seconds % 60;

    printf("Total time : %d:%02d:%02d\n", seconds_to_hours, seconds_to_minutes, remaining_seconds);

    return 0;
}