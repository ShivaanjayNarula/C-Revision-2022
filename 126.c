#include <stdio.h>
#include <conio.h>
void main()
{
    int count;
    for(count = 1; count < 10; count++)
    {
        if(count == 8)
        {
            break;
        }
        printf("%d\n", count);
    }
}
