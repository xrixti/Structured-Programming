#include<stdio.h>

int f(int n);

int main()
{
    int n;

    scanf("%d",&n);
    int avg=f(n)/n;


   printf("%d",avg);

    return 0;
}
int f(int n)
{
  if(n==1) return n;
   return  n+f(n-1);

}
