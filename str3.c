#include<stdio.h>
#include<string.h>

int main()
{
    char name[1000];

    printf("enter your name:   ");

    gets(name);

    int si=strlen(name);
    int i;
    for(i=0; i<si; i++)
    {
        if(i==0)
        {
            name[i]-=32;
        }
        if(name[i]==' ')
        {
            name[i+1] -=32;
        }




    }


    puts(name);

    return 0;
}

