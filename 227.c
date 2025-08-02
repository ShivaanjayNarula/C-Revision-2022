#include <stdio.h>
void main()
{
    int i, num, fact;
    printf("\nEnter a No : ");
    scanf("%d", &num);
    fact = 1;
    for(i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("\nFactorial of No : %d\n", fact);
}
