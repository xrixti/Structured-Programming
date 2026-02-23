#include <stdio.h>
#include <string.h>

void  fun( char n []);

int main()
{

   char n[1000]="";
  gets(n);
  fun(n);

  return 0;
}
void fun(char n[])
{
    int i;
    int s=strlen(n);
    for(i=0;i<=s;i++)
    {
        if(i==0 )
        {
            n[i]-=32;

        }


        if(n[i]==' ')
        {
            n[i+1]-=32;
     }   }

    puts(n);
    }
