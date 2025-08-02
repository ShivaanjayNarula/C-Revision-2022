#include <stdio.h>
void main()
{
    int i;
    for(i = 0; i < 5; i++)
    {
        incre();
    }
}
incre()
{
    char var = 65;
    printf("The character stored in variable is %c\n\n", var++);
}
