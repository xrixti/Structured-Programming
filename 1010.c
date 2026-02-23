#include<stdio.h>

int main()
{
    int a,b,e,f;
    float c,g;
    scanf("%d %d %f",&a,&b,&c);
    scanf("%d %d %f",&e,&f,&g);
  float  p=(b*c)+(f*g);
     printf("VALOR A PAGAR: R$ %0.2f",p);



    return 0;
}
