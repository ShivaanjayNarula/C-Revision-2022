#include <stdio.h>
#include <string.h>
void main()
{
    char lines[5][20];
    int ctr, longctr = 0;
    int longest(char lines_arr[][20]);
    for(ctr = 0; ctr < 5; ctr++)
    {
        printf("\nEnter string %d : ", ctr + 1);
        scanf("%s", &lines[ctr]);
    }
    longctr = longest(lines);
    printf("\nThe longest string : %s\n", longctr);
}
int longest(char lines_arr[][20])
{
    int i = 0, l_ctr = 0, prev_len = 0, new_len;
    prev_len = strlen(lines_arr[i]);
    for(i = 0; i < 5; i++)
    {
        new_len = strlen(lines_arr[i]);
        if(new_len > prev_len)
        {
            l_ctr = i;
            prev_len = new_len;
        }
    }
    return l_ctr;
}
