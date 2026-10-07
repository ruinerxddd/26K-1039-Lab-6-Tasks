#include <stdio.h>
int main(){
    int n, i,total=0,score;
    float avg;
    printf("Enter Number of Students : ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        printf("Enter Students Score out of 100 : ");
        scanf("%d",&score);
        total += score;
    }
    avg = total/n;
    printf("Total Score of the Class is %d\n",total);
    printf("Average Score of the Class is %.2f",avg);


    return 0;       
}