#include <stdio.h>
void main()
{
    int a, b, c;
    a = b = c = 0;
    printf("\nEnter 1st integer : ");
    scanf("%d", &a);
    printf("\nEnter 2nd integer : ");
    scanf("%d", &b);
    c = adder(a, b);
    printf("\n\nValue of a in main : %d", a);
    printf("\n\nValue of b in main : %d", b);
    printf("\n\nValue of c in main : %d", c);
    printf("\n");
}
adder(int a, int b)
{
    int c;
    c = a + b;
    a = a * a;
    b = b + 5;
    printf("\n\nValue of a in adder : %d", a);
    printf("\n\nValue of b in adder : %d", b);
    printf("\n\nValue of c in adder : %d", c);
    printf("\n");
    return(c);
}
