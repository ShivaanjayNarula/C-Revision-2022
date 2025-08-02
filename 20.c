#include <stdio.h>
void main()
{
    int a, b;
    printf("Please enter the value of a : ");
    scanf("%d", &a);
    b = (a<<3) + (a<<1);
    printf("\na * 10 = %d\n", b);
}
