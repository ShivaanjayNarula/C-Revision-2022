#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k;
    int a, b;
    i = 0;
    j = 1;
    printf("%d\n", i);
    printf("%d\n", j);
    for(k = 0; k < 10; k++)
    {
        a = i + j;
        i = j;
        j = a;
        printf("%d\n", a);
    }
}
