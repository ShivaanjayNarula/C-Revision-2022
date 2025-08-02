#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    n = 10;
    show(n);
}
show(int x)
{
    if(x < 1)
    {
        return 1;
    }
    printf("%d\t", x);
    show(x - 1);
}
