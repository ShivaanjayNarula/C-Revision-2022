#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    int i, j;
    int row, col;
    printf("Enter the No of rows : ");
    scanf("%d", &i);
    printf("Enter the No of columns : ");
    scanf("%d", &j);
    int arr[i][j];
    for(row = 0; row < i; row++)
    {
        for(col = 0; col < j; col++)
        {
            printf("\nEnter the value at [%d][%d] : ", row, col);
            scanf("%d", &arr[row][col]);
        }
    }
    for(row = 0; row < i; row++)
    {
        for(col = 0; col < j; col++)
        {
            printf("\n\nThe value at [%d][%d] : [%d]", row, col, arr[row][col]);
        }
    }
    printf("\n\nThe value of matrix is : \n\n");
    for(row = 0; row < i; row++)
    {
        for(col = 0; col < j; col++)
        {
            printf("%d\t", arr[row][col]);
        }
        printf("\n");
    }
}
