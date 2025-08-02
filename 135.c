#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j;
    printf("Enter the No of rows : ");
    scanf("%d", &i);
    printf("Enter the No of columns : ");
    scanf("%d", &j);
    int arr[i][j];
    int row, col;
    printf("\n");
    for(row = 0; row < i; row++)
    {
        for(col = 0; col < j; col++)
        {
            printf("Enter the Number at [%d][%d] : ", row, col);
            scanf("%d", &arr[row][col]);
        }
    }
    printf("\nThe matrix is : \n\n");
    for(row = 0; row < i; row++)
    {
        for(col = 0; col < j; col++)
        {
            printf("%d\t", arr[row][col]);
        }
        printf("\n");
    }
}
