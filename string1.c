#include<stdio.h>
#include<string.h>

int main()
{



     char name[1000];

    printf("enter your name:   \n");

      gets(name);


      int size= strlen (name);


    printf("%d",size);




    return 0;
}
