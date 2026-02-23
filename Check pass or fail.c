//Cheak pass or fail

#include<stdio.h>

int main(void){
int marks;
printf("Enter marks :");
scanf("%d",&marks);
if(marks>=40)
    printf("\nResult is pass");
    else
        printf("\nResult is fail");
    return 0;
}
