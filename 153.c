#include <stdio.h>
#include <conio.h>
void main()
{
    incre();
    incre();
    incre();
}
incre()
{
    static char var = 65;
    printf("\nThe character stored in %c\n", var++);
}
