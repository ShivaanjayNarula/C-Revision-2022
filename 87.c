#include <stdio.h>
void main()
{
    int i;
    for(i = 0; i < 26; i++)
    {
        narula();
    }
}
narula()
{
    static char var = 65;
    printf("\nThe character stored in variable is %c\n", var++);
}
