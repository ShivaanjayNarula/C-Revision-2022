#include <stdio.h>
#include <conio.h>
void main()
{
    int n = 1;
    while(n <= 10000)
    {
        printf("%d %d\t", n, n);
        n = n + 1;
    }
}
