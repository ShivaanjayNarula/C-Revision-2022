#include <stdio.h>
int main()
{
    int a, b;
    printf("Please enter the amount : ");
    scanf("%d", &a);
    if (a >= 2000)
    {
        b = a / 2000;
        printf("\nThe No of notes of Rs 2000 = %d\n", b);
        a = a % 2000;
    }
    if (a < 2000 && a >= 500)
    {
        b = a / 500;
        printf("\nThe No of notes of Rs 500 = %d\n", b);
        a = a % 500;
    }
    if (a < 500 && a >= 200)
    {
        b = a / 200;
        printf("\nThe No of notes of Rs 200 = %d\n", b);
        a = a % 200;
    }
    if (a < 200 && a >= 100)
    {
        b = a / 100;
        printf("\nThe No of notes of Rs 100 = %d\n", b);
        a = a % 100;
    }
    if (a < 100 && a >= 50)
    {
        b = a / 50;
        printf("\nThe No of notes of Rs 50 = %d\n", b);
        a = a % 50;
    }
    if (a < 50 && a >= 20)
    {
        b = a / 20;
        printf("\nThe No of notes of Rs 20 = %d\n", b);
        a = a % 20;
    }
    if (a < 20 && a >= 10)
    {
        b = a / 10;
        printf("\nThe No of notes of Rs 10 = %d\n", b);
        a = a % 10;
    }
    if (a < 10 && a >= 5)
    {
        b = a / 5;
        printf("\nThe No of notes of Rs 5 = %d\n", b);
        a = a % 5;
    }
    if (a < 5 && a >= 2)
    {
        b = a / 2;
        printf("\nThe No of notes of Rs 2 = %d\n", b);
        a = a % 2;
    }
    if (a < 2 && a >= 1)
    {
        b = a / 1;
        printf("\nThe No of notes of Rs 1 = %d\n", b);
        a = a % 1;
    }
}
