#include <stdio.h>
#include <string.h>
main()
{
    char s1[80];
    char s2[80];
    int (*p)();
    p = strcmp;
    printf("Enter the 1st string : ");
    gets(s1);
    printf("Enter the 2nd string : ");
    gets(s2);
    check(s1, s2, p);
}
void check(char *a, char *b, int (*cmp)())
{
    printf("\nTesting for equality : ");
    if(!(*cmp)(a, b))
    {
        printf("The Strings are EQUAL\n");
    }
    else
    {
        printf("The Strings are NOT EQUAL\n");
    }
}
