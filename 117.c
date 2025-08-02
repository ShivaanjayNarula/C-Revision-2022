#include <stdio.h>
#include <conio.h>
void main()
{
    int num1, num2;
    num2 = 0;
    do{
        printf("\nEnter a number : ");
        scanf("%d", &num1);
        printf("The No entered is : %d\n", num1);
        num2++;
    }while(num1 != 0);
    printf("\nThe total number entered were %d", --num2);
}
