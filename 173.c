#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c, sum;
    printf("\nEnter 1st number : ");
    scanf("%d", &a);
    printf("\nEnter 2nd number : ");
    scanf("%d", &b);
    printf("\nEnter 3rd number : ");
    scanf("%d", &c);
    sum = calculatesum(a, b, c);
    printf("\nSum of three numbers : %d\n", sum);
}
calculatesum(int x, int y, int z)
{
    int d;
    d = x + y + z;
    return(d);
}
