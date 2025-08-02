#include <stdio.h>
void main()
{
    int x, y;
    printf("\nEnter the value of x : ");
    scanf("%d", &x);
    printf("\nEnter the value of y : ");
    scanf("%d", &y);
    printf("\n\nBefore interchanging : \n");
    printf("\nx = %d", x);
    printf("\ny = %d", y);
    swap(&x, &y);
    printf("\n\n\nAfter interchanging : \n");
    printf("\nx = %d", x);
    printf("\ny = %d", y);
    printf("\n\n");
}
swap(int *u, int *v)
{
    int temp;
    temp = *u;
    *u = *v;
    *v = temp;
}
