#include <stdio.h>
int main()
{
    int i;
    for(i = 1; i <= 1000; i++)
    {
        printf("\nSquare of %d is %d\n", i, squarer(i));
    }
}
squarer(int x)
{
    int y;
    y = x * x;
    return (y);
}
