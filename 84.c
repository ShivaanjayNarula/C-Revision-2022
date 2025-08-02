#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    char str[100];
    char *p;
    int vow_count = 0, con_count = 0;
    printf("Enter any string : ");
    fgets(str, 100, stdin);
    p = str;
    while(*p != '\0')
    {
        if((*p == 'A')||(*p == 'E')||(*p == 'I')||(*p == 'O')||(*p == 'U')||(*p == 'a')||(*p == 'e')||(*p == 'i')||(*p == 'o')||(*p == 'u'))
        {
            vow_count++;
        }
        else
        {
            con_count++;
        }
        p++;
    }
    printf("\nThe string is %s", str);
    printf("\nThe No of vowels are : %d", vow_count);
    printf("\nThe No of consonants are : %d", con_count - 1);
    return 0;
}
