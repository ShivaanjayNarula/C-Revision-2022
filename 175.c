#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j;
    printf("\nEnter the number : ");
    scanf("%d", &i);
    j = factorial(i);
    printf("\nFactorial is : %d\n", j);
}
factorial(int a)
{
    int b;
    int fact = 1;
    for(b = a; b > 1; b--)
    {
        fact = fact * b;
    }
    return(fact);
}
