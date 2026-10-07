#include <stdio.h>

int main()
{
    int stock[10];
    int i, search;
    int found = 0;

    
    printf("Enter stock count for 10 shelves:\n");

    for (i = 0; i < 10; i++)
    {
        printf("Shelf %d: ", i);
        scanf("%d", &stock[i]);
    }

    
    printf("\nStock levels in reverse order:\n");

    for (i = 9; i >= 0; i--)
    {
        printf("Shelf %d: %d\n", i, stock[i]);
    }

    
    printf("\nEnter stock count to search: ");
    scanf("%d", &search);

    
    for (i = 0; i < 10; i++)
    {
        if (stock[i] == search)
        {
            printf("Stock count %d is found at shelf index %d.\n", search, i);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("Stock count %d does not exist in the array.\n", search);
    }

    return 0;
}

