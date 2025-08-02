#include <stdio.h>
#include <conio.h>
void main()
{
    int A[10][10], B[10][10], C[10][10];
    int row, col;
    int i, j;
    printf("Enter the No of rows : ");
    scanf("%d", &row);
    printf("Enter the No of columns : ");
    scanf("%d", &col);
    printf("\nEnter the values of matrix : ");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("\nA[%d, %d] : ", i, j);
            scanf("%d", &A[i][j]);
            printf("\nB[%d, %d] : ", i, j);
            scanf("%d", &B[i][j]);
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nThe matrix is : \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("\n");
            printf("%d\t", A[i][j]);
            printf("%d\t", B[i][j]);
            printf("%d\t", C[i][j]);
        }
    }
    printf("\n");
}
