#include<stdio.h>

int main()
{
   int a,b,c;
   printf("input 3 sub marks:    ");
   scanf("%d %d %d",&a,&b,&c);
   int total=a+b+c;
   float p= total*100/300;
   if(p>=60)
   printf("%f is first div",p);
   else if(p<=59 && p>=50)
    printf("%f is second div",p);
    else if(p>=49 && p<=40)
    printf("%f is third div",p);
   else
    printf("%f is fail",p);


    return 0;
}
