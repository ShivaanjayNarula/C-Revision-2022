#include <stdio.h>
#include <conio.h>
void main()
{
    int num;
    printf("\nThe even numbers between 1 and 30 are : \n");
    for(num = 2; num <= 30; num = num + 2)
    {
        printf("\n%d\n", num);
    }
}
