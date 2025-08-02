#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    for(a = 1; a <= 10; a++)
    {
        if(a == 5)
        {
            break;
        }
        printf("%d\n\n", a);
    }
}
