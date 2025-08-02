#include <stdio.h>
int main()
{
    int n, fact;
    printf("Enter a No : ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("\nThe factorial of the No : %d\n", fact);
}
factorial(int x)
{
    int i, j;
    j = 1;
    for(i = 1; i <= x; i++)
    {
        j = j * i;
    }
    return(j);
}
