#include <stdio.h>
#include <string.h>
void main()
{
    char *ptr;
    char word[10];
    int i, vow_count = 0;
    printf("Enter a Word : ");
    scanf("%s", &word);
    ptr = &word[0];
    for(i = 0; i < strlen(word); i++)
    {
        if((word[i] == 'a') || (word[i] == 'e') || (word[i] = 'i') || (word[i] == 'o') || (word[i] == 'u'))
        {
            vow_count++;
        }
        ptr++;
    }
    printf("The No of vowels : %d", vow_count);
}
