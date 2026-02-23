#include<stdio.h>

int main()
{
    int i,j,N,r,c;
    scanf("%d %d %d \n",N,&r,&c);

     int a[r][c];
     printf("Enter first matrix elements \n");

    for(i=0;i<r;i++){

        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);

        }
    }
    int B[r] [c];
    for(i=0;i<r;i++){

        for(j=0;j<c;j++)
    B[r][c]=N*a[i][j];

        }

        printf("%d",B[r][c]);


    printf("\n");
    return 0;
}
