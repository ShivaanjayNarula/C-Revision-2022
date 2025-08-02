#include <stdio.h>
int main()
{
    int a, b;
    printf("Please enter a positive integer : ");
    scanf("%d", &a);
    b = a % 2;
    if (b == 0)
    {
        printf("\nThe number entered is even\n");
    }
    else
    {
        printf("\nThe number entered is odd\n");
    }
}
