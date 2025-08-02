#include <stdio.h>
#include <conio.h>
void main()
{
    int x, y, *px, *py;
    x = 15;
    y = 20;
    px = &x;
    py = &y;
    printf("\n\nBefore interchanging : ");
    printf("\n\nx = %d", x);
    printf("\n\ny = %d", y);
    printf("\n");
    swap(px, py);
    printf("\n\nAfter interchanging : ");
    printf("\n\nx = %d", x);
    printf("\n\ny = %d", y);
    printf("\n");
}
swap(int *u, int *v)
{
    int temp;
    temp = *u;
    *u = *v;
    *v = temp;
    return;
}
