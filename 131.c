#include <stdio.h>
#include <conio.h>
void main()
{
    int num[5];
    int i;
    num[0] = 10;
    num[1] = 20;
    num[2] = 30;
    num[3] = 40;
    num[4] = 50;
    for(i = 0; i < 5; i++)
    {
        printf("\nNumber at [%d] is %d\n", i, num[i]);
    }
}
