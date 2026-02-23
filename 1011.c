#include<stdio.h>

int main ()
{
   double x;
   scanf("%lf",&x);
  double pi=3.14159;
  double a=4*pi*(x*x*x/(3));
  printf("VOLUME = %.3lf\n",a);

    return 0;
}
