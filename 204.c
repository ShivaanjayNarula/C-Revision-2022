#include <stdio.h>
int main()
{
    int row, col;
    printf("\nEnter No of rows : ");
    scanf("%d", &row);
    printf("\nEnter No of columns : ");
    scanf("%d", &col);
    int A[row][col];
    int i, j;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("\nEnter a No at [%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nThe MATRIX is : \n\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
