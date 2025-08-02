#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k;
    i = 0;
    printf("Enter the numbers of rows : ");
    scanf("%d", &i);
    printf("\n");
    for(j = 0; j < i; j++)
    {
        for(k = i; k > j; k--)
        {
            printf("*");
        }
        printf("\n");
    }
}
