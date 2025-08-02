#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    char string1[25];
    int i, length;
    int flag = 0;
    printf("Enter a string : ");
    scanf("%s", &string1);
    length = strlen(string1);
    for(i = 0; i < length; i++)
    {
        if(string1[i] != string1[length - i - 1]);
        {
            flag = 1;
            break;
        }
    }
    if(flag)
    {
        printf("\n%s is not palindrome\n", string1);
    }
    else
    {
        printf("\n%s is palindrome\n", string1);
    }
    return 0;
}
