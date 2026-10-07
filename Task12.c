#include <stdio.h>

int main()
{
    int accessCode[10];
    int accepted = 0, flagged = 0;
    int highest;

    
    for (int i = 0; i < 10; i++)
    {
        printf("Enter access code for employee %d (1-255): \n");
        scanf("%d", &accessCode[i]);
    }

    
    highest = accessCode[0];

    printf("Access Code Details\n");

    
    for (int i = 0; i < 10; i++)
    {
        int leftShift = accessCode[i] << 2;
        int rightShift = accessCode[i] >> 1;

        printf("\nEmployee %d\n", i + 1);
        printf("Original Code: %d\n", accessCode[i]);
        printf("Left Shifted Value: %d\n", leftShift);
        printf("Right Shifted Value: %d\n", rightShift);

        
        if (leftShift > 100 && rightShift % 2 == 0)
        {
            printf("Status: Accepted\n");
            accepted++;
        }
        else
        {
            printf("Status: Flagged\n");
            flagged++;
        }

        
        if (accessCode[i] > highest)
        {
            highest = accessCode[i];
        }
    }

    
    printf("Summary\n");
    printf("Total Accepted Codes: %d\n", accepted);
    printf("Total Flagged Codes: %d\n", flagged);
    printf("Highest Original Access Code: %d\n", highest);

    
    printf("Original codes whose right-shifted value is greater than 20:\n");

    for (int i = 0; i < 10; i++)
    {
        int rightShift = accessCode[i] >> 1;

        if (rightShift > 20)
        {
            printf("%d ", accessCode[i]);
        }
    }

    printf("\n");

    return 0;
}