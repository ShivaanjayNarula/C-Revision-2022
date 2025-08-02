#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if(num % 2 == 0)
    {
        printf("\nThe number entered is even\n");
    }
    else
    {
        printf("\nThe number entered is odd\n");
    }
}
