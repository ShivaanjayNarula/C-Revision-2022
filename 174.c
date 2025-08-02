#include <stdio.h>
void main()
{
    int i, j;
    printf("\nEnter the number : ");
    scanf("%d", &i);
    j = squarer(i);
    printf("\nThe square of number %d : %d\n", i, j);
}
squarer(int a)
{
    int b;
    b = a * a;
    return(b);
}
