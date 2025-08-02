#include <stdio.h>
#include <string.h>
void main()
{
    char a, str[81], *ptr;
    printf("Enter a sentence : ");
    gets(str);
    printf("\nEnter a character to search : ");
    a = getchar();
    ptr = strchr(str, a);
    printf("\nThe strings start at %u\n", str);
    printf("\nFirst occurrence  of the character is at address : %u\n", ptr);
    printf("\nThe position of first occurrence : %d\n", ptr - str);
}
