#include <stdio.h>
#include <conio.h>
int main()
{
    int year;
    printf("Please enter the year : ");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("\nThe year is a leap year\n");
    }
    else
    {
        printf("\n%d is not a leap year\n", year);
    }
}
