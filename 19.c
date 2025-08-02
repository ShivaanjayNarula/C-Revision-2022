#include <stdio.h>
void main()
{
    int a, b, c, j;
    b = 5;
    printf("Please enter the value of a : ");
    scanf("%d", &a);
    c = a;
    for (j = 0; j < b - 1; j++)
    {
        c = a + c;
    }
    printf("\na * 5 = %d\n", c);
}
