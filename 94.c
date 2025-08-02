#include <stdio.h>
#include <conio.h>
main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    squarer(a);
}
squarer(int x)
{
    int y;
    y = x * x;
    printf("\nThe square of the number : %d\n", y);
    return y;
}
