#include<stdio.h>

int main()
{
    int a[5] ={1,2,4,5,6};
    int i,e,flag=0;


    printf("input element to be searched: ");
    scanf("%d",&e);

    for(i=0; i<5; i++)
    {  if(e==a[i]){
        printf("\nfound at index %d\n",i);
        flag=1;
        break;
    }}
    if(flag==0)
    {

        printf("not found !\n");
    }

    return 0;
}
