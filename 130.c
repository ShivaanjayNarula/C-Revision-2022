#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k;
    printf("Enter the number : ");
    scanf("%d", &i);
    for(j = 1; j < 11; j++)
    {
        k = i * j;
        printf("\n%d X %d = %d\n", i, j, k);
    }
}
