#include <stdio.h>
#include <conio.h>
void main()
{
    int var = 500, *ptr_var;
    ptr_var = &var;
    printf("\nThe value %d is stored at address %u\n", var, &var);
    printf("\nThe value %u is stored at address %u\n", ptr_var, &ptr_var);
    printf("\nThe value %d is stored at address %u\n", *ptr_var, ptr_var);
}
