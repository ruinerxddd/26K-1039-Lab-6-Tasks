#include <stdio.h>
int main(){
    int temp[3];
    int i;
    int HottestTemp, ColdestTemp, SecondHottest;
    for (i = 1; i <= 3; i++)
    {
        printf("Enter Temperature : ");
        scanf("%d",&temp[i]);
    }
    if (temp[1] > temp[2] && temp[1] > temp[3])
    {
        HottestTemp = temp[1];
    }else if(temp[2] > temp[1] &&  temp[2] > temp[3]){
        HottestTemp = temp[2];
    }else if(temp[3] > temp[1] && temp[3] > temp[2])
    {
        HottestTemp = temp[3];
    }
    if(temp[1] < temp[2] && temp[1] < temp[3])
    {
        ColdestTemp = temp[1];
    }else if(temp[2] < temp[1] &&  temp[2] < temp[3]){
        ColdestTemp = temp[2];
    }else if(temp[3] < temp[1] && temp[3] < temp[2])
    {
        ColdestTemp = temp[3];
    }
    printf("Hottest Temparature is %d\n Coldest Temparature is %d",HottestTemp,ColdestTemp);


    return 0;
}