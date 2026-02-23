#include<stdio.h>


int main()
{
    int n;
    printf("enter size of array:  ");
    scanf("%d",&n);


    int a[n],i,s,flag=0;

    printf("enter elements of array:   ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element to be searched:   ");
    scanf("%d",&s);


    for(i=0; i<n; i++)


        if(s==a[i])
        {
            printf("found at index  %d at %d \n",i,a[i]);
            flag=1;
            break;
        }


    if (flag==0)
    {

        printf("Not found!\n");
    }
    return 0;
}



