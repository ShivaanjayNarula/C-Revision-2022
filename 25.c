#include <stdio.h>
#include <ctype.h>
void main()
{
    char a;
    a = getchar();
    if (isalpha(a))
    {
        printf("\nYou have entered an alphabet\n");
    }
}
