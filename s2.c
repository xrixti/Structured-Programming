#include <stdio.h>
#include <string.h>

int main()
{
    char sen[100]="";
    gets(sen);
    int len=strlen(sen);
    int i;
    for(i=0;i<len;i++)
    {
        if(i==0)
        {
            sen[i]-=32;
        }
        if(sen[i]==' ')
        {
            sen[i+1]-=32;
        }
    }

    puts(sen);
    return 0;
}
