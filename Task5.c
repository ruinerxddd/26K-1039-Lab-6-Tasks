#include <stdio.h>

int main()
{
    int level, hours = 0;

    printf("Enter starting water level: ");
    scanf("%d", &level);

    printf("Starting level: %d\n", level);

    while (level != 1)
    {
        if (level % 2 == 0)
        {
            level = level / 2;
        }
        else
        {
            level = 3 * level + 1;
        }

        hours++;

        printf("Hour %d: %d liters\n", hours, level);
    }

    printf("Total hours = %d\n", hours);

    return 0;
}


