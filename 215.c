#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%d", &ch);
    if(ch >= 'a' && ch <= 'z')
    {
        switch(ch)
        {
        case 'a':
            printf("\nThe element entered is a vowel\n");
            break;
        case 'e':
            printf("\nThe element entered is a vowel\n");
            break;
        case 'i':
            printf("\nThe element entered is a vowel\n");
            break;
        case 'o':
            printf("\nThe element entered is a vowel\n");
            break;
        case 'u':
            printf("\nThe element entered is a vowel\n");
            break;
        default:
            printf("\nThe element entered is a consonant\n");
            break;
        }
    }
    else
    {
        printf("\nThe element is not a lower cased alphabet\n");
    }
}
