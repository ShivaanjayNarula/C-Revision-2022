#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[2][3];
    int row, col;
    for(row = 0; row < 2; row++)
    {
        for(col = 0; col < 3; col++)
        {
            printf("\nEnter a Number at [%d] [%d] : ", row, col);
            scanf("%d", &arr[row][col]);
        }
    }
    for(row = 0; row < 2; row++)
    {
        for(col = 0; col < 3; col++)
        {
            printf("\nThe number at[%d][%d] is %d", row, col, arr[row][col]);
        }
    }
}
