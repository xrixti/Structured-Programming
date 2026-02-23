#include <stdio.h>
#include <string.h>

void  fun( char n []);

int main()
{

    char n[1000];
    gets(n);
    fun(n);

    return 0;

}
void fun(char n[])

{



    int i,j=0,sum=0;

    char u[100]="";

    int  s=strlen(n);
    for(i=0; i<s; i++)
    {
        sum+=n[i]-'0';
    }

    for(i=s-1; i>=0; i--)
    {
        u[j++]=n[i];

    }


    printf("sum: %d count: %d rev %s\n",sum,s,u);
}
