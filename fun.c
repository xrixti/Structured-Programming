#include<stdio.h>


swap(int* p,int* q);
int main()
{

   int  a,b;
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;


}
int swap(int* p,int*q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    return *p,*q;
}
