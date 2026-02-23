#include <stdio.h>


int main()
{
    int A[50][50];
    int num, row, col,r,c;

  printf("Enter Rows and Columns of Matrix; ");
    scanf("%d %d", &r, &c);

    printf("Enter elements in matrix of size %dx%d: \n",r,c);
    for(row=0; row<S1; row++)
    {
        for(col=0; col<S2; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    /* Input multiplier from user */
    printf("Enter any number to multiply with matrix A: ");
    scanf("%d", &num);

    /* Perform scalar multiplication of matrix */
    for(row=0; row<S1; row++)
    {
        for(col=0; col<S2; col++)
        {
            /* (cAij) = c . Aij */
            A[row][col] = num * A[row][col];
        }
    }

    /* Print result of scalar multiplication of matrix */
    printf("\nResultant matrix c.A = \n");
    for(row=0; row<S1; row++)
    {
        for(col=0; col<S2; col++)
        {
            printf("%d ", A[row][col]);
        }
        printf("\n");
    }

    return 0;
}
