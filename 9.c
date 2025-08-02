#include <stdio.h>
int main()
{
    int a = 10;
    int b = 3;
    int y, z;
    y = a, b;
    z = (a, b);
    printf("%d is y", y);
    printf("\n%d is z", z);
}
