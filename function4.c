#include<stdio.h>

  void check(int n);


 int main()
{
    int n;
    scanf("%d",&n);
    check(n);

    return 0;
}
 void check(int n )
 {
     if(n & 1 == 1)
     printf("%d is odd ",n);

     else
    printf("%d is even",n);


 }

