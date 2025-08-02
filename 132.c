#include <stdio.h>
#include <conio.h>
void main()
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
    printf("\nThe Highest Value is : %d\n", high);
    for(i = 0, total = 0; i < 10; i++)
    {
        total = total + ary[i];
    }
    printf("\nThe average of the elements of array is : %d\n", total / i);
}
