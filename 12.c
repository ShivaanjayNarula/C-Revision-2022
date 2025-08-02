#include <stdio.h>
#define PI 3.14
int main()
{
    float b, c;
    printf("Please enter the value of radius : ");
    scanf("%f", &b);
    c = PI * b * b;
    printf("\nThe area of circle is : %f\n", c);
}
