#include<stdio.h>

int main()
{
   int rows, cols, rowCounter, colCounter, scalar;
N     int inputMatrix[50][50];


    printf("Enter Rows and Columns of Matrix\n");
    scanf("%d %d", &rows, &cols);
     
    printf("Enter Matrix of size %dX%d\n", rows, cols);
    
    for(rowCounter = 0; rowCounter < rows; rowCounter++){
        for(colCounter = 0; colCounter < cols; colCounter++){
            scanf("%d", &inputMatrix[rowCounter][colCounter]);
        }
    }

printf("Enter a number to multiply with matrix \n");
    scanf("%d", &scalar);
    /* Multiply each element of matrix with scalar*/
    for(rowCounter = 0; rowCounter < rows; rowCounter++){
        for(colCounter = 0; colCounter < cols; colCounter++){
            inputMatrix[rowCounter][colCounter] = inputMatrix[rowCounter][colCounter]*scalar;
        }
    }
     
    printf("Product Matrix\n");
    for(rowCounter = 0; rowCounter < rows; rowCounter++){
        for(colCounter = 0; colCounter < cols; colCounter++){
            printf("%d ", inputMatrix[rowCounter][colCounter]);
        }
        printf("\n");
    }
    
    return 0;
}





