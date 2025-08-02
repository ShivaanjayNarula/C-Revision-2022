#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    char *ptr;
    char word[10];
    int i, vow_count = 0;
    printf("\nEnter a word : ");
    scanf("%s", &word);
    ptr = word[0];
    for(i = 0; i < strlen(word); i++)
    {
        if((*ptr == 'a') || (*ptr == 'e') || (*ptr == 'i') || (*ptr == 'o') || (*ptr == 'u') || (*ptr == 'A') || (*ptr == 'E') || (*ptr == 'I') || (*ptr == 'O') || (*ptr == 'U'))
        {
            vow_count++;
        }
        ptr++;
    }
    printf("\nThe word is %s\n", word);
    printf("\nThe No of vowels in the word is : %d\n", vow_count);
}
