#include <stdio.h>
void main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("\nThe year entered is a leap year\n");
    }
    else
    {
        printf("\nThe year entered is not a leap year\n");
    }
}
