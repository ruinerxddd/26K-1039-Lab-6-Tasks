#include <stdio.h>
int main(){
    int marks;
    do
    {
        printf("Enter student's mark (0-100)\n");
        scanf("%d", &marks);

        if(marks < 0 || marks > 100){
            printf("Invalid mark! Please enter a mark between 0 and 100.\n");

        }
    } while (marks < 0 || marks > 100);
    if(marks >=50){
        printf("Student Passed\n");


    }else{
        printf("Student Failed\n");

    }


    return 0;
}