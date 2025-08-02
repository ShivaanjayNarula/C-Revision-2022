#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char s[100];
    int i, vow, cons;
    vow = 0;
    cons = 0;
    printf("Enter the string : ");
    scanf("%s", &s);
    for(i = 0; s[i]; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            vow++;
        }
        else
        {
            cons++;
        }
    }
    printf("\nNo of Vowels = %d\n", vow);
    printf("\nNo of Consonants = %d\n", cons);
}
