#include <stdio.h>
int main(){
    int choice;
    //printf("Enter Your Choice : ");
    //scanf("%d", &choice);
    do
    {
        printf(" 1) Add Item \n 2) Remove Item \n 3) View Total \n 4) Checkout\n");
        printf("Enter Your Choice : \n");
        scanf("%d", &choice);
    } while (choice != 4 );
    


    return 0;
}