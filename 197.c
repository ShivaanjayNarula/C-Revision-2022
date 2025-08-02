#include <stdio.h>
void main()
{
    int i, j, k;
    printf("Enter No of rows : ");
    scanf("%d", &i);
    printf("\n");
    for(j = i; j > 0; j--)
    {
        for(k = j; k > 0; k--)
        {
            printf("*");
        }
        printf("\n");
    }
}
