#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Countdown : \n");
    while (a >= 0)
    {
        printf("%d\n", a);
        a = a - 1;
    }
}
