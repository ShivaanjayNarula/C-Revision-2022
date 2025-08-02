#include <stdio.h>
#include <string.h>
void main()
{
    char firstname[20];
    char lastname[20];
    printf("\nEnter your first name : ");
    scanf("%s", &firstname);
    printf("\nEnter your last name : ");
    scanf("%s", &lastname);
    strcat(firstname, lastname);
    printf("\nThe complete name : %s\n", firstname);
}
