#include <stdio.h>
#include <string.h>
void main()
{
    char compname[25] = "Microsoft";
    int len, ctr;
    len = strlen(compname);
    for(ctr = 0; ctr < len; ctr++)
    {
        printf("%c * ", compname[ctr]);
    }
    printf("\n");
}
