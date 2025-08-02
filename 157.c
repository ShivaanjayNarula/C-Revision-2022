#include <stdio.h>
#include <conio.h>
void main()
{
    int x, y, *px, *py;
    px = &x;
    py = &y;
    x = 15;
    y = 20;
    printf("Before interchanging : \n\n");
    printf("x = %d\ny = %d\n\n", x, y);
    swap(px, py);
    printf("After interchanging : \n\n");
    printf("x = %d\ny = %d\n", x, y);
}
swap(int *u, int *v)
{
    int temp;
    temp = *u;
    *u = *v;
    *v = temp;
    return;
}
