#include<stdio.h>


int main()
{
   int d;
   float drate= 77.5,tk,remaining;
   scanf("%f",&tk);
   d=tk/drate;
   remaining=tk-drate*d;
   printf("US dollar with remaining BDT:%d %f",d,remaining);










    return 0;
}
