#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
    int a;
    char b[20];
    printf("Enter the name of person : ");
    scanf("%s", &b);
    printf("\nEnter the age of the person : ");
    scanf("%d", &a);
    while(a >= 1)
    {
        printf("\nThe name of person is %s\n", b);
        a = a - 1;
    }
}
