#include <stdio.h>
#include<math.h>

int main() {

   double a,b,c,x,R1,R2;
   scanf("%lf %lf %lf",&a,&b,&c);
   x=sqrt(b*b-4*a*c);
   R1=(-b+x)/(2*a);
   R2=(-b-x)/(2*a);
   if(((b*b)-(4*a*c))<0||a==0){
       printf("Impossivel calcular");
   }
   else{
   printf("R1= %.5lf\nR2= %.5lf",R1,R2);
}


    return 0;
}
