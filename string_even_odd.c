#include<stdio.h>

int main()
{
    int i,o=0,e=0;
    char name[10000];
    printf("enter name:  ");
    gets(name);
    int n= strlen (name); // loli

    int x =  name[n-1] - '0';
    if(x & 1 == 1)
    {
        printf("%s The number is odd\n",name);
    }

    else
    {
        printf("%s The number is even\n",name);
    }


    return 0;
}
