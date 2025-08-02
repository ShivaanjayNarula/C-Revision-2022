#include <stdio.h>
#include <conio.h>
void main()
{
    int age, i;
    char name[20];
    printf("Enter Name : ");
    scanf("%s", &name);
    printf("Enter Age : ");
    scanf("%d", &age);
    for(i = 0; i < age; i++)
    {
        printf("\n%s\n", name);
    }
    return 0;
}
