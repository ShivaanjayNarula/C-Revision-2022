#include <stdio.h>
#include <string.h>
void main()
{
    char str1[15] = "New York";
    char str2[15] = "Washington";
    char chr;
    chr = 'a';
    char loc1, loc2;
    loc1 = strchr(str1, chr);
    if(loc1 != NULL)
    {
        printf("%c occurs in %s\n", chr, str1);
    }
    else
    {
        printf("%c does not occur in %s\n");
    }
    loc2 = strchr(str2, chr);
    if(loc2 != NULL)
    {
        printf("\n%c occurs in %s\n", str2, chr);
    }
    else
    {
        printf("%c does not occur in %s\n", str2, chr);
    }
}
