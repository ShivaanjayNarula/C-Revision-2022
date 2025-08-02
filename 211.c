#include <stdio.h>
#include <string.h>
void main()
{
    char str1 = "New York";
    char str2 = "Washington";
    char chr = 'a', loc;
    loc = strchr(str1, chr);
    if(loc != NULL)
    {
        printf("%c occurs in %s\n");
    }
    else
    {
        printf("%c does not occurs in %s\n");
    }
    loc = strchr(str2, chr);
    if(loc != NULL)
    {
        printf("%c occurs in %s\n", chr, str2);
    }
    else
    {
        printf("%c does not occurs in %s", chr, str2);
    }
}
