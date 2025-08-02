#include <stdio.h>
int main()
{
    int ary[10];
    int i, total, high;
    for(i = 0; i < 10; i++)
    {
        printf("\nEnter value %d : ", i + 1);
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
    printf("\nHighest Value Entered : %d\n", high);
    total = 0;
    for(i = 0; i < 10; i++)
    {
        total = total + ary[i];
    }
    printf("\nThe average of No entered : %d\n", total/i);
}
