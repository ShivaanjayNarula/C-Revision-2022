#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char a, str[81], *ptr;
    printf("\nEnter a string : ");
    scanf("%s", str);
    printf("\nEnter character to search for : ");
    a = getche();
    ptr = strchr(str, a);
    printf("\n\nString starts at address : %u\n", str);
    printf("\nFirst occurrence of the character : %u\n", ptr);
}
