#include<stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   int i,x=3,y=2;
   for(i=1;i<=n;i++)
   {
       if(i%2==1)
          {
            printf("%d",x);
                x=x+3;
          }
       else{ printf("%d",y);
        y=y+2;

        }
   }






    return 0;
}
