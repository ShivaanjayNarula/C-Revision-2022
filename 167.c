#include <stdio.h>
void main()
{
    incre();
    incre();
    incre();
}
incre()
{
    char var = 65;
    printf("\nThe character stored in variable is %c\n", var++);
}
