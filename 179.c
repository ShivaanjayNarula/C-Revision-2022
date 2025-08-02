#include <stdio.h>
#include <string.h>
void main()
{
    char str1[20] = "NewYork";
    char str2[20] = "Washington";
    char chr = 'a';
    char loc;
    loc = strchr(chr, str1);
    if(loc != NULL)
    {
        printf("\n%c occurs in %s\n", chr, str1);
    }
    else
    {
        printf("\n%c does not occurs in %s\n", chr, str1);
    }
    loc = strchr(chr, str2);
    if(loc != NULL)
    {
        printf("\n%c occurs in %s", chr, str2);
    }
    else
    {
        printf("\n%c does not occurs in %s\n");
    }
}
