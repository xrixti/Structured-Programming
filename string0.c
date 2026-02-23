#include<stdio.h>
#include<string.h>

int main( )
{
    int n;
    printf("num:  \n");
    scanf("%d ",&n);


    char name[n];

    printf("enter your name:   \n");

    gets(name);


    puts(name);



    return 0;
}
