
#include<stdio.h>
#include<string.h>

int main()
{
    char name[1000];
     char eman[100];

    printf("enter your name:   ");

    gets(name);

    int si=strlen(name);
    int i,j=0;
    for(i=si-1; i>=0; i--){

        eman[j++]=name[i];
    }


    puts(eman);

    return 0;
}

