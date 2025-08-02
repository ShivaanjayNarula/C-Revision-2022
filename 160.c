#include <stdio.h>
#include <conio.h>
void main()
{
    int row, col;
    printf("Enter the No of rows : ");
    scanf("%d", &row);
    printf("\nEnter the No of columns : ");
    scanf("%d", &col);
    int i, j;
    int A[10][10], B[10][10], temp[10][10];
    printf("\n\nEnter the value of A matrix : \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("\nA[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n\nEnter the value of matrix B : \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("\nB[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    printf("\n\nThe value of matrix A before swapping : \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("\t%d", A[i][j]);
        }
        printf("\n");
    }
    printf("\nThe value of matrix B before swapping : \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("\t%d", B[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            temp[i][j] = A[i][j];
            A[i][j] = B[i][j];
            B[i][j] = temp[i][j];
        }
    }
    printf("\nThe value of matrix A after swapping : \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("\t%d", A[i][j]);
        }
        printf("\n");
    }
    printf("\nThe value of matrix B after swapping : \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("\t%d", B[i][j]);
        }
        printf("\n");
    }
}
