#include <stdio.h>

int main() {
    int codes[10];
    int left, right;
    int accepted = 0, flagged = 0;
    int highest;

    printf("Enter 10 access codes (1-255):\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &codes[i]);
    }

    highest = codes[0];

    printf("\nCode\tLeft Shift\tRight Shift\tStatus\n");

    for (int i = 0; i < 10; i++) {
        left = codes[i] << 2;
        right = codes[i] >> 1;

        if (left > 100 && right % 2 == 0) {
            printf("%d\t%d\t\t%d\t\tAccepted\n", codes[i], left, right);
            accepted++;
        } else {
            printf("%d\t%d\t\t%d\t\tFlagged\n", codes[i], left, right);
            flagged++;
        }

        if (codes[i] > highest) {
            highest = codes[i];
        }
    }

    printf("\nTotal Accepted: %d\n", accepted);
    printf("Total Flagged: %d\n", flagged);
    printf("Highest Original Access Code: %d\n", highest);

    printf("Codes whose right-shifted value is greater than 20: ");

    for (int i = 0; i < 10; i++) {
        right = codes[i] >> 1;

        if (right > 20) {
            printf("%d ", codes[i]);
        }
    }

    return 0;
}
