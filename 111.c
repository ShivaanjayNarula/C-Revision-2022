#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k;
    i = 0;
    printf("Enter the No of rows : ");
    scanf("%d", &i);
    printf("\n");
    for(j = 0; j < i; j++)
    {
        for(k = 1; k < j + 2; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
}
