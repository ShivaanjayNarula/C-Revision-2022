#include <stdio.h>
void main()
{
    int num;
    for(num = 1; num <= 1000; num++)
    {
        if(num % 9 == 0)
        {
            continue;
        }
        printf("%d\t", num);
    }
}
