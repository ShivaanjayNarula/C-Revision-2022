#include <stdio.h>
int main()
{
    int i, j, k;
    printf("Enter the No of rows : ");
    scanf("%d", &i);
    for(j = 0; j < i; j++)
    {
        for(k = 0; k < j; k++)
        {
            printf("%d", k + 1);
        }
        printf("\n");
    }
    return 0;
}
