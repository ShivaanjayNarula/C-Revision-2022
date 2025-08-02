#include <stdio.h>
void main()
{
    int x, y, *px, *py;
    px = &x;
    py = &y;
    x = 15;
    y = 20;
    printf("Before interchanging : ");
    printf("\n\nx = %d\ny = %d\n", x, y);
    swap(px, py);
    printf("\n\nAfter interchanging : ");
    printf("\n\nx = %d\ny = %d\n");
}
swap(int *u, int *v)
{
    int temp;
    temp = *u;
    *u = *v;
    *v = temp;
    return;
}
