#include<stdio.h>

int main()
 {
     double s,v,t;
   char na;
   scanf("%s",&na);
   scanf("%lf",&s);
   scanf("%lf",&v);
   t=s+v*.15;
   printf("TOTAL = R$ %0.2lf\n",t);

    return 0;
}
