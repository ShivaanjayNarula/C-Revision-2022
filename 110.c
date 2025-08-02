#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k;
    i = 0;
    printf("Enter No of rows : ");
    scanf("%d", &i);
    printf("\n");
    for(j = 0; j < i; j++)
    {
        for(k = 0; k < j + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
