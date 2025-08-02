#include <stdio.h>
#include <conio.h>
void main()
{
    int a, fact;
    fact = 1;
    printf("Enter a positive number : ");
    scanf("%d", &a);
    if(a > 0)
    {
        while(a >= 1)
        {
            fact = fact * a;
            a = a - 1;
        }
    }
    printf("\nThe factorial is : %d\n", fact);
}
