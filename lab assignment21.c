#include<stdio.h>


 int main()
 {
     int n;
     printf("Input three digits number: ");
     scanf("%d", &n);
     int f= n/100;
      int l= n%10;

     printf("Square of %d is %d and square of %d is %d \n",f,f*f,l,l*l);
     return 0;

 }

