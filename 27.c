#include <stdio.h>
void main()
{
    int num1, num2, res;
    char op;
    printf("Please enter the first number : ");
    scanf("%d", &num1);
    printf("\nPlease enter the second number : ");
    scanf("%d", &num2);
    printf("\nPlease enter the operator : ");
    scanf("%c", &op);
    switch(op)
    {
    case '+':
        res = num1 + num2;
        printf("\nThe sum is %d\n", res);
        break;

    case '-':
        res = num1 - num2;
        printf("\nThe difference is %d\n", res);
        break;
    case '*':
        res = num1 * num2;
        printf("\nThe product is %d\n", res);
        break;
    case '/':
        res = num1 + num2;
        printf("\nThe quotient is %d\n", res);
        break;
    case '%':
        res = num1 % num2;
        printf("\nThe remainder is %d\n", res);
        break;
    default :
        printf("\nInvalid Operator");
    }
}
