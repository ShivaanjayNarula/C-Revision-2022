#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    char *ptr;
    char word[10];
    int i, vowcnt = 0;
    printf("Enter a string : ");
    scanf("%s", &word);
    ptr = &word[0];
    for(i = 0; i < strlen(word); i++)
    {
        if((*ptr == 'a') || (*ptr == 'e') || (*ptr == 'i') || (*ptr == 'o') || (*ptr == 'u') || (*ptr == 'A') || (*ptr == 'E') || (*ptr == 'I') ||(*ptr == 'O') || (*ptr == 'U'))
        {
            vowcnt++;
        }
        ptr++;
    }
    printf("\nThe word is : %s\n", word);
    printf("\nThe No of vowels : %d\n", vowcnt);
}
