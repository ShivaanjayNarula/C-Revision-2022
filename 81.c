#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    char my_string1[100], my_string2[100];
    int i = 0, c;
    int j;
    printf("Enter the String : ");
    scanf("%s", &my_string1);
    c = strlen(my_string1);
    j = c;
    for(i = 0; i < c; i++)
    {
        j = j - 1;
        my_string2[i] = my_string1[j];
    }
    printf("\nString 1 : %s\n", my_string1);
    printf("\nString 1 length : %d\n", c);
    printf("\nString 2 : %s\n", my_string2);
    printf("\nString 2 length : %d\n", strlen(my_string2));
    if(strcmp(my_string1, my_string2) == 0)
    {
        printf("\nThe String is PALINDROME\n");
    }
    else
    {
        printf("\nThe String is NOT PALINDROME\n");
    }
}
