#include<stdio.h>

int main()
{
    int r1,c1;
    printf("r1:  ");
    scanf("%d",&r1);
    printf("c1:");
    scanf("%d",&c1);



        int a[r1][c1],m[r1][c1],i,j,k;
        printf("Enter elements of array:   ");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        int n;
        printf(" enter a number: ");
        scanf("%d",&n);


        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
            m[i][j]=n*a[i][j];


            {printf("%d\t",m[i][j]);}
        }
            printf("\n");



        }





    return 0;
}
