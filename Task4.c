#include <stdio.h>

int main()
{
    int pin, digit;
    int sum = 0;
    int reverse = 0;

    printf("Enter PIN of 4-6 digits: ");
    scanf("%d", &pin);

    while (pin > 0)
    {
        digit = pin % 10;

        sum = sum + digit;

        reverse = reverse * 10 + digit;

        pin = pin / 10;
    }

    printf("Sum of digits = %d\n", sum);
    printf("Reversed PIN = %d\n", reverse);

    return 0;
}

