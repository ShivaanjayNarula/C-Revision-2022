#include <stdio.h>
void main()
{
    int a, b, c, d;
    printf("Please enter 1st number : ");
    scanf("%d", &a);
    printf("\nPlease enter 2nd number : ");
    scanf("%d", &b);
    printf("\nPlease enter 3rd number : ");
    scanf("%d", &c);
    d = (a > b && a > c? a:b>c? b:c);
    printf("\nThe largest digit is %d\n", d);
}
