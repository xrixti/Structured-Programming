#include<stdio.h>


int main()
{
     int a[7],i,size,item,pos,flag=0;


     printf("enter the size of an array: \n");
     scanf("%d",&size);
     printf("enter the elements of an array: \n");

     for(i=0;i<size;i++)
     {
         scanf("%d",&a[i]);
     }
     printf("enter the items to be searched of an array: \n");
     scanf("%d",&item);
     for(i=0;i<=size;i++)
     {
         if(item==a[i]){
            printf("found at index:%d \n",i);
            flag=1;break;
         }
     }
     if(flag==0){

        printf("not found!\n");
     }



    return 0;
}
