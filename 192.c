#include <stdio.h>
#include <conio.h>
void main()
{
    int num1, num2, res;
    char op;
    printf("\nEnter 1st number : ");
    scanf("%d", &num1);
    printf("\nEnter 2nd number : ");
    scanf("%d", &num2);
    printf("\nEnter the operation : ");
    op = getch();
    switch(op)
    {
    case '+':
        res = num1 + num2;
        printf("\n\nThe Sum is %d\n", res);
        break;
    case '-':
        res = num1 - num2;
        printf("\n\nThe Difference is %d\n", res);
        break;
    case '*':
        res = num1 * num2;
        printf("\n\nThe Product is %d\n", res);
        break;
    case '/':
        res = num1 / num2;
        printf("\n\nThe Quotient is %d\n", res);
        break;
    case '%':
        res = num1 % num2;
        printf("\n\nThe Remainder is %d\n", res);
        break;
    default:
        printf("\n\nINVALID SELECTION", res);
        break;
    }
}
