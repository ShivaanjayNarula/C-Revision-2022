#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    char *ptr;
    char word[20];
    int i;
    int vowcount = 0;
    printf("Enter a word : ");
    scanf("%s", word);
    ptr = &word[0];
    for(i = 0; i < strlen(word); i++)
    {
        if((*ptr == 'a')||(*ptr == 'e')||(*ptr == 'i')||(*ptr == 'o')||(*ptr == 'u')||(*ptr == 'A')||(*ptr == 'E')||(*ptr == 'I')||(*ptr == 'O')||(*ptr == 'U'));
        {
            vowcount++;
        }
        ptr++;
    }
    printf("\nThe word is %s\n", word);
    printf("\nThe No of vowels is the word are : %d\n", vowcount);
}
