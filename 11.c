#include <stdio.h>
int main()
{
    float a, b, c, d, e;
    a = 3.14;
    d = 2.00;
    printf("Please enter the value of radius : ");
    scanf("%f", &b);
    c = a * b * b;
    printf("\nThe area of circle is : %f\n", c);
    e = d * a * b;
    printf("\nThe circumfrence of circle is : %f\n", e);
}
