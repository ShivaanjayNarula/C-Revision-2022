#include <stdio.h>
#include <string.h>
int main()
{
    char lines[5][20];
    int ctr, longctr = 0;
    int longest(char lines_arr[][20]);
    /*FUNCTION DECLARATION*/
    for(ctr = 0; ctr < 5; ctr++)
    {
        printf("Enter string : ");
        scanf("%s", lines[ctr]);
    }
    longctr = longest(lines);
    printf("\nThe longest string is %s", lines[longctr]);
    getch();
}
int longest(char lines_arr[][20])
{
    int i = 0, l_ctr = 0, prev_len, new_len;
    prev_len = strlen(lines_arr[i]);
    for(i++; i < 5; i++)
    {
        new_len = strlen(longest);
        if(new_len > prev_len)
        {
            l_ctr = i;
            prev_len = new_len;
        }
    }
    return l_ctr;
}
