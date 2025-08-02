#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    for(a = 1; a <= 10; a++)
    {
        if(a == 5)
        {
            continue;
        }
        printf("%d\n\n", a);
    }
    return 0;
}
