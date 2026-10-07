#include <stdio.h>
int main(){
    float money, rate = 1.10;
    int years;
    printf("Enter Money : ");
    scanf("%f", &money);
    printf("Enter Years : ");
    scanf("%d",&years);
    for (int i = 1; i <= years; i++)
    {
        money = money * rate;
        printf("Year %d: %.2f\n", i, money);
    }
    printf("Final amount = %.2f\n", money);


    return 0;
}