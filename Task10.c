#include <stdio.h>
int main(){
    int usernameCount;
    char username[20];
    int consonentsCount , vowelsCount;
    printf("How many Letters in your UserName : \n");
    scanf("%d",&usernameCount);
    printf("Enter Your UserName : \n");
    scanf("%s", &username);
    
    
    for (int i = 0; i < usernameCount; i++)
    {
        if (username[i] == 'a' || username[i] == 'e' || username[i] == 'o' || username[i] == 'i'|| username[i] == 'u')
        {
            vowelsCount += 1;
        }else{
            consonentsCount = usernameCount - vowelsCount;
        }
       
    }
    printf("Vowels Count is %d\n Consonent Count is %d", vowelsCount, consonentsCount);
    return 0;

}