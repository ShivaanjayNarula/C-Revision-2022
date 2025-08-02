#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j;
    unsigned int fact = 1;
    printf("Enter a number : ");
    scanf("%d", &i);
    for(j = 1; j <= i; j++)
    {
        fact = fact * j;
    }
    printf("\nThe Factorial of the number : %u\n", fact);
}
