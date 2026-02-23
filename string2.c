#include<stdio.h>
#include<string.h>

int main()
{
    char name[1000];

    printf("enter your name:   \n");

    gets(name);


    int i;
    for(i=0; name[i]; i++)
        printf("%d %c\n",i,name[i]);

    return 0;
}



