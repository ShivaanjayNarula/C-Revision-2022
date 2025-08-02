#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    for(i = 1; i < 10; i++)
    {
        printf("\nSquarer of %d is %d\n", i, squarer(i));
    }
}
squarer(int x)
{
    int j;
    j = x * x;
    return j;
}
