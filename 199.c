#include <stdio.h>
main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int i, fact;
    fact = 1;
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("\nFactorial of the number : %d\n", fact);
}
