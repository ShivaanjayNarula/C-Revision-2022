#include <stdio.h>
#include <string.h>
void main()
{
    char first_name[25];
    char last_name[25];
    printf("\nEnter your First Name : ");
    scanf("%s", &first_name);
    printf("\nEnter your Last Name : ");
    scanf("%s", &last_name);
    strcat(first_name, last_name);
    printf("\nFirst Name = %s\n", first_name);
}
