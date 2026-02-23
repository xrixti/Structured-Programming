
#include<stdio.h>


 int main()
 {
     int n;
     scanf("%d", &n);
     int first= n/100;
      int last = n%10;
     int sum = first+last ;
     printf("sum of first and last numbers: %d \n",sum);
     return 0;

 }
