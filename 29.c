#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 0;
    count:
        i = i + 1;
        printf("%d\t", i);
        if(i < 1000)
        {
            goto count;
        }
}
