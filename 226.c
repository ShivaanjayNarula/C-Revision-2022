#include <stdio.h>
void main()
{
    int i, j, k, n;
    i = 0;
    j = 1;
    k = i + j;
    printf("%d\n%d\n", i, j);
    for(n = 0; n < 10; n++)
    {
        i = j;
        j = k;
        k = i + j;
        printf("%d\n", k);
    }
}
