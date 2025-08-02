#include <stdio.h>
void main()
{
    int ary[10];
    int i, high, total;
    for(i = 0; i < 10; i++)
    {
        printf("\nEnter the value of %d : ", i + 1);
        scanf("%d", &ary[i]);
    }
    high = ary[0];
    for(i = 1; i < 10; i++)
    {
        if(ary[i] > high)
        {
            high = ary[i];
        }
    }
    printf("\nHigh value entered was %d", high);
    for(i = 0, total = 0; i < 10; i++)
    {
        total = total + ary[i];
    }
    printf("\nThe Total is %d", total);
}
