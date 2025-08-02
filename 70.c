#include <stdio.h>
void main()
{
    int var = 500, *ptr_var;
    ptr_var = &var;
    printf("The value %d is stored at %u\n", var, &var);
    printf("The value %u is stored at %u\n", ptr_var, &ptr_var);
    printf("The value %d is stored at %u\n", var, *ptr_var);
}
