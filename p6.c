#include<stdio.h>

int main()
{
    int r1,r2,c1,c2;
    printf("r1:  ");
    scanf("%d",&r1);
    printf("c1:");
    scanf("%d",&c1);
    printf("r2: ");
    scanf("%d",&r2);
    printf("c2: ");
    scanf("%d",&c2);
    if(c1!=r2)
    {
        printf("Error!\n");
    }
    else
    {

        int m1[r1][c1],m2[r2][c2],m[r1][c2],i,j,k;
        printf("Enter first matrix:   ");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                scanf("%d",&m1[i][j]);
            }
        }
        printf("Enter 2nd matrix:   ");
        for(  i=0; i<r2; i++)
        {
            for( j=0; j<c2; j++)
            {
                scanf("%d",&m2[i][j]);
            }
        }



        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)

                {
                    m[i][j]=m1[i][j]+m2[i][j];


                }



        }
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("%d\t",m[i][j]);

            }
            printf("\n");
        }


    }




    return 0;
}
