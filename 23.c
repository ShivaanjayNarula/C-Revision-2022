#include <stdio.h>
void main()
{
    int a, b, temp;
    a = 10;
    b = 11;
    temp = a;
    a = b;
    b = temp;
    printf("%d, %d", a, b);
}
