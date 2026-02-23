#include<stdio.h>
int main()
{
    int c1,r1,i,j;
    printf("Enter number of rows for First Matrix:\n");
    scanf("%d",&r1);
    printf("Enter number of columns for First Matrix:\n");
    scanf("%d",&c1);



        int m1[r1][c1];
        printf("Enter first matrix elements \n");
        for( i=0;i<r1;i++)
        {
            for( j=0;j<c1;j++)
            {
                scanf("%d",&m1[i][j]);
            }
        }
  int mul[r1][c1];
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)



                    mul[i][j]=2*m1[i][j];


                printf("%d\t",mul[i][j]);

            printf("\n");

        }
    return 0;
}





