#include<stdio.h>


int main()
{
    int n_days,y,m,d;
    printf("Enter number of days: ");
    scanf("%d",&n_days);
    y=n_days/365;
    m= (n_days-y*365)/30;
    d=n_days-y*365-m*30;

    printf("Years,months and day:%d ,%d & %d",y,m,d);


    return 0;










}
