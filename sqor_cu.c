#include<stdio.h>


int main()
{
    int n;
    printf("input a number: ");
    scanf("%d",&n);

    if(n&1)
    {
        n=n*n*n;
        printf("%d",n);
    }
    else

        n=n*n;
        printf("%d",n);

    return 0;
}
