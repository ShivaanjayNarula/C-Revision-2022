#include <stdio.h>
int main()
{
    int i, j, max;
    printf("Enter the maximum value : ");
    scanf("%d", &max);
    for(i = 0, j = max; i <= max; i++, j--)
    {
        printf("\n%d + %d = %d", i, j, i + j);
    }
    return 0;
}
