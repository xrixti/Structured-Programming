#include<stdio.h>

int main()
{
  int r1,r2,c1,c2;
  printf("r1:  \n");
  scanf("%d",&r1);
  printf("c1: \n");
   scanf("%d",&c1);
   printf("r2: \n");
   scanf("%d",&r2);
       printf("c2: \n");
   scanf("%d",&c2);
   if(c1!=r2){
    printf("error!");
   }
   else
{

   int m1[r1][c1],m2[r2][c2],m[r1][c2],i,j,k;
   printf("enter first matrix:   \n");
   for(i=1;i<r1;i++){
    for(j=0;j<=c1;j++){
        scanf("%d",&m1[i][j]);}}
    printf("enter 2nd matrix:   \n");
   for(  i=0;i<r2;i++){
    for( j=0;j<=c2;j++){
        scanf("%d",&m2[i][j]);
    }}

   for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
        m[i][j]=0;
        for(k=0;k<c1;k++){
            m[i][j]+=m1[i][k]*m2[k][j];
            }
            printf("%d\t",m[i][j]);

        }
       printf("\n");
    }

   }




    return 0;
}
