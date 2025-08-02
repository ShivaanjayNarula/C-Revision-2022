#include <stdio.h>
#include <string.h>
void main()
{
    char name1[20] = "Purnima";
    char name2[20] = "Hell";
    char name3[20] = "Aadya";
    char name4[20] = "Purnima";
    int i;
    i = strcmp(name1, name2);
    printf("\n%s compared with %s returned %d\n", name1, name2, i);
    i = strcmp(name1, name3);
    printf("\n%s compared with %s returned %d\n", name1, name3, i);
    i = strcmp(name1, name4);
    printf("\n%s compared with %s returned %d\n", name1, name4, i);
}
