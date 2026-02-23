#include<stdio.h>


main ()
{
    int a,b;
    printf("Input two number:   ");
    scanf("%d %d",&a,&b);

    int quotient= a/b;
    int x= quotient*b;
    int reminder= a-x;
    printf("Quotient and Reminder:%d & %d",quotient,reminder);
    return 0;
}

