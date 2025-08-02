#include <stdio.h>
void main()
{
    int i, age;
    char name[25];
    printf("\nEnter USER NAME : ");
    scanf("%s", &name);
    printf("\nEnter USER AGE : ");
    scanf("%d", &age);
    for(i = 0; i < age; i++)
    {
        printf("\n%s\n", name);
    }
}
