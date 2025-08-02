#include <stdio.h>
void main()
{
    int a, b, c, sum;
    printf("Enter 1st Number : ");
    scanf("%d", &a);
    printf("Enter 2nd Number : ");
    scanf("%d", &b);
    printf("Enter 3rd Number : ");
    scanf("%d", &c);
    sum = calculatesum(a, b, c);
    printf("\nSum = %d\n", sum);
}
calculatesum(int x, int y, int z)
{
    int d;
    d = x + y + z;
    return(d);
}
