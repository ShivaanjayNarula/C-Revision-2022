#include <stdio.h>
#include <string.h>
void main()
{
    char a, str[81], *ptr;
    printf("\nEnter a sentence : ");
    gets(str);
    printf("\nEnter a character to search for : ");
    a = getchar();
    ptr = strchr(str, a);
    printf("Strings starts at address : %u", str);
    printf("\nFirst occurrence of the characters is at address : %u", ptr);
    printf("\nPosition of first occurrence : %d", ptr-str);
}
