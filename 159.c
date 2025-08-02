#include <stdio.h>
void main()
{
    int i, j;
    int row, col;
    printf("Enter the No of rows : ");
    scanf("%d", &row);
    printf("Enter the No of columns : ");
    scanf("%d", &col);
    int A[10][10], B[10][10], C[10][10];
    printf("\nEnter the value of Matrix A : \n\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("\nA[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n\nEnter the value of Matrix B : \n\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("\nB[%d][%d] : ", i, j);
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
    printf("\n\nThe Matrix C is : \n\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
}
