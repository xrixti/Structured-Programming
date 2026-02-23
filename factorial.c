#include<stdio.h>

int fact(int *p);
int main()
{

    int n;
     scanf("%d",&n);
    printf("%d",fact(&n));




    return 0;
}


int fact(int *p)
{

    if(*p==1) return *p;
    return *p*(*p-1);





}
