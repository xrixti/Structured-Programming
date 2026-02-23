#include <stdio.h>
#include <string.h>


void f(char n[]);

int main ()
{
   char  n[1000];

   gets(n);
   f(n);

   return 0;
}

void f(char n[])
{

    int i,sum=0,temp,j=0;

    char u[1000]="";

    int s=strlen(n);

    for(i=0;i<s;i++)
    {
        sum+=(n[i]- '0');
    }
    for(i=s-1;i>=0;i--)
    {
        u[j++]= n[i];
    }


      printf("sum of the digits %d\t count of the digits %d\t reverse  of numbers %s \n",sum,s,u);


}
