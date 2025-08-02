#include <stdio.h>
void main()
{
    int ary[10];
    int i, total, high;
    for(i = 0; i < 10; i++)
    {
        printf("Enter the value of %d : ", i + 1);
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
    printf("\nHighest value entered was %d", high);
    for(i = 0, total = 0; i < 10; i++)
    {
        total = total + ary[i];
    }
    printf("\n\nThe average of the elements is %d\n", total / i);
}
