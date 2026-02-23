#include<stdio.h>


int main()
{



    char a[100];
    int i,flag=0;
    char s;

    printf("enter elements of string:   ");
    gets(a);

    printf("enter element to be searched:   ");
    scanf("%c",&s);
     int n= strlen(a);

    for(i=0; i<n; i++)


        if(s==a[i])
        {
            printf("element present in the string %c at index %d\n",a[i],i);
            flag=1;

        }


    if (flag==0)
    {

        printf("Not found!\n");
    }
    return 0;
}
