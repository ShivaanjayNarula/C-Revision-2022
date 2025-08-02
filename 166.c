#include <stdio.h>
#include <conio.h>
void main()
{
    int i;
    for(i = 1; i < 11; i++)
    {
        printf("\nSquare of %d is %d\n", i, squarer(i));
    }
}
squarer(int x)
{
    int j;
    j = x * x;
    return j;
}
