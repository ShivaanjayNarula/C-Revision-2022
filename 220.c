#include <stdio.h>
void main()
{
    int i, j, k;
    printf("\nEnter the No of rows : ");
    scanf("%d", &i);
    for(j = 0; j < i; j++)
    {
        printf("\n");
        for(k = 0; k <= j; k++)
        {
            printf("*");
        }
    }
    printf("\n");
    return 0;
}
