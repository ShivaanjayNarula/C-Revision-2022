#include <stdio.h>
int main()
{
    int i, j, k;
    printf("Enter No of rows : ");
    scanf("%d", &i);
    for(j = 0; j < i + 1; j++)
    {
        for(k = 0; k < j; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
