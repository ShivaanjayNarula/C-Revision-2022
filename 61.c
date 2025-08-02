#include <stdio.h>
void main()
{
    char ary[5];
    int i;
    printf("Enter a string : ");
    scanf("%s", ary);
    printf("\nThe string is %s\n\n", ary);
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", ary[i]);
    }
}
