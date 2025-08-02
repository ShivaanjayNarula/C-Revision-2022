#include <stdio.h>
#include <string.h>
void main()
{
    int num[5], ctr, sum = 0;
    int sum_arr(int num_arr[]);
    for(ctr = 0; ctr < 5; ctr++)
    {
        printf("\nEnter a number : ");
        scanf("%d", &num[ctr]);
    }
    sum = sum_arr(num);
    printf("\nThe sum of the array is %d\n", sum);
}
int sum_arr(int num_arr[])
{
    int i, total;
    for(i = 0, total = 0; i < 5; i++)
    {
        total = total + num_arr[i];
    }
    return total;
}
