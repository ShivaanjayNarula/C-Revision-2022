#include <stdio.h>
#include <conio.h>
void main()
{
    int x, y;
    x = 15;
    y = 20;
    printf("\n\nBefore interchanging : ");
    printf("\n\nx = %d", x);
    printf("\n\ny = %d", y);
    swap(x, y);
    printf("\n");
    printf("\n\nAfter interchanging : ");
    printf("\n\nx = %d", x);
    printf("\n\ny = %d", y);
    printf("\n");
}
swap(int u, int v)
{
    int temp;
    temp = u;
    u = v;
    v = temp;
    return;
}
