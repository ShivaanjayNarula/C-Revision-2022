#include <stdio.h>
void main()
{
    int i, num, digit, sum;
    printf("\nThe numbers whose Sum of Cubes of Digits is equal to the number itself are : \n\n");
    for(i = 1; i < 999; i++)
    {
        sum = 0;
        num = i;
        while(num)
        {
            digit = num % 10;
            num = num / 10;
            sum = sum + digit * digit * digit;
        }
        if(sum == i)
        {
            printf("\n%d\n", i);
        }
    }
}
