#include <stdio.h>
void main()
{
    int a, b, c;
    a = 10;
    b = 5;
    c = a + b;
    a = c - a;
    b = c - b;
    printf("%d, %d", a, b);
}
