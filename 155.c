#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    a = b = c = 0;
    printf("\nEnter 1st integer : ");
    scanf("%d", &a);
    printf("\nEnter 2nd integer : ");
    scanf("%d", &b);
    c = adder(a, b);
    printf("\n\na & b in main() are : %d, %d", a, b);
    printf("\n\nc in main() is : %d\n", c);
}
adder(int a, int b)
{
    int c;
    c = a + b;
    a = a * a;
    b = b + 5;
    printf("\n\na & b in adder() are : %d, %d", a, b);
    printf("\n\nc in adder() is : %d", c);
    return(c);
}
