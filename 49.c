#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    a = b = 0;
    do
    {
        printf("\nEnter a number : ");
        scanf("%d", &a);
        printf("\nNumber entered is %d\n\n", a);
        b++;
    }while(a != 0);
    printf("\nThe total numbers entered were %d\n", --b);
}
