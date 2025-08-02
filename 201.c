#include <stdio.h>
int main()
{
    int ary[9];
    int i, total, high;
    for(i = 0; i < 9; i++)
    {
        printf("\nEnter the value : %d : ", i + 1);
        scanf("%d", &ary[i]);
    }
    high = ary[0];
    for(i = 0; i < 9; i++)
    {
        if(ary[i] > high)
        {
            high = ary[i];
        }
    }
    printf("\nHighest value entered : %d\n", high);
    total = 0;
    for(i = 0; i < 9; i++)
    {
        total = total + ary[i];
    }
    printf("\nThe total of values entered : %d\n", total);
    printf("\nThe average of values : %d\n", total / 9);
}
