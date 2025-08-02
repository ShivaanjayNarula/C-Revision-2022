#include <stdio.h>
void main()
{
    int a = 5;
    printf("%d %d %d", a, a--, a--);
    printf("\n%d %d %d", a, --a, --a);
}
