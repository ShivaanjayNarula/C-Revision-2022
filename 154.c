#include <stdio.h>
void main()
{
    int num, originalNum, remainder, result = 0;
    printf("Enter a three digit integer : ");
    scanf("%d", &num);
    originalNum = num;
    while(originalNum != 0)
    {
        remainder = originalNum % 10;
        result = result + (remainder * remainder * remainder);
        originalNum = originalNum / 10;
    }
    if(result = num)
    {
        printf("\n%d is an Armstrong Number\n", num);
    }
    else
    {
        printf("\n%d is not an Armstrong Number\n", num);
    }
}
