#include <stdio.h>
int main()
{
    char ary[15];
    int i;
    printf("Enter String : ");
    scanf("%s", &ary);
    printf("\nThe String entered : %s\n\n", ary);
    for(i = 0; i < 15; i++)
    {
        printf("\t%c", ary[i]);
    }
    printf("\n");
}
