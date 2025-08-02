#include <stdio.h>
int main()
{
    int a, b;
    printf("Please enter the value of a : ");
    scanf("%d", &a);
    printf("\nPlease enter the value of b : ");
    scanf("%d", &b);
    int sum;
    sum = a + b;
    printf("\nThe sum is : %d", sum);
    int dif;
    dif = a - b;
    printf("\nThe difference is : %d", dif);
    int mul;
    mul = a * b;
    printf("\nThe product is : %d", mul);
    float div;
    div = (float)a / b;
    printf("\nThe quotient is : %f\n", div);
}
