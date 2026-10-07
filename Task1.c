#include <stdio.h>
int main(){
    int ticketprice = 500;
    int i = 1;
    for (i = 1; i <=10 ; i++)
    {
        printf("The ShowNumber is %d and Price for the ticket is %d\n", i , ticketprice);
        ticketprice = ticketprice + 50;
    }
    


    return 0;
}    