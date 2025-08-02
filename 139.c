#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    int A[10][10], B[10][10], C[10][10];
    int row, col;
    int i, j;
    printf("Enter No of rows : ");
    scanf("%d", &row);
    printf("Enter No of columns : ");
    scanf("%d", &col);
    printf("\nEnter the value of Matrix A\n\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("\nA[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n\nEnter the value of Matrix B\n\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j <col; j++)
        {
            printf("\nB[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    printf("\n\nThe value of Matrix C : \n\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("\nC[%d][%d] = %d\n", i, j, C[i][j]);
        }
    }
    printf("\n\nThe A matrix is : \n\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("\n\nThe B matrix is : \n\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    printf("\n\nThe C matrix is : \n\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
}
