#include <stdio.h>
#include <conio.h>
void main()
{
    int num, count;
    num = 0;
    count = 0;
    do
    {
        printf("\nEnter a number : ");
        scanf("%d", &num);
        printf("The number entered is : %d", num);
        count++;
    printf("\n");
    } while(num != 0);
    printf("\nThe total numbers entered were : %d\n", --count);
    return 0;
}
