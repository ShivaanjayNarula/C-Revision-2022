#include <stdio.h>
int main()
{
    int x, total;
    x = 5;
    total = sum(x);
    printf("Total = %d\n", total);
}
sum(int x)
{
    if(x <= 1)
    {
        return 1;
    }
    return x + sum(x - 1);
}
