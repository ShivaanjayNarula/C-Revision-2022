#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, max;
    printf("Please enter the maximum value for which a table can be printed : ");
    scanf("%d", &max);
    for(i = 0, j = max; i <= max; i++, j--)
    {
        printf("%d + %d = %d\n", i, j, max);
    }
}
