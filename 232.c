#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter No of rows : ");
    scanf("%d", &row);
    printf("Enter No of columns : ");
    scanf("%d", &col);
    int i, j;
    int A[row][col], B[row][col], C[row][col];
    printf("\n\nEnter the value of MATRIX - A : \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < row; j++)
        {
            printf("\nEnter a No at [%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n\nEnter the value of Matrix - B : \n");
    for(i = 0; i< row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("\nEnter a No at [%d][%d] : ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\n\nThe value of MATRIX - A : \n\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("\t%d", A[i][j]);
        }
        printf("\n");
    }
    printf("\n\nThe value of MATRIX - B : \n\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("\t%d", B[i][i]);
        }
        printf("\n");
    }
    printf("\n\nThe value of MATRIX - C : \n\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("\t%d", C[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
