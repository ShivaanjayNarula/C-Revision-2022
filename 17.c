#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c, d;
    printf("Please enter a number : ");
    scanf("%d", &a);
    b = a % 2;
    if (b == 0)
    {
        printf("\nThe number entered is even");
        c = a % 4;
        if (c == 0)
        {
            printf("\n\nThe number entered is divisible by 4\n");
        }
        else if (c != 0)
        {
            printf("\n\nThe number entered is not divisible by 4\n");
        }
    }
    else if (b != 0)
    {
        printf("\nThe number entered is odd");
        d = a % 3;
        if (d == 0)
        {
            printf("\n\nThe number entered is divisible by 3\n");
        }
        else if (d != 0)
        {
            printf("\n\nThe number entered is not divisible by 3\n");
        }
    }
}
