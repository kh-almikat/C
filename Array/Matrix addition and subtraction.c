#include<stdio.h>

int main()
{
    int A[10][10], B[10][10], C[10][10], D[10][10];
    int i, j, row, col;

    // Input size of matrix
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    // Input first matrix
    printf("Enter elements of Matrix A:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of Matrix B:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Addition and Subtraction
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            C[i][j] = A[i][j] + B[i][j];  // addition
            D[i][j] = A[i][j] - B[i][j];  // subtraction
        }
    }

    // Print Result
    printf("\nMatrix Addition (A+B):\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix Subtraction (A-B):\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ", D[i][j]);
        }
        printf("\n");
    }

    return 0;
}

