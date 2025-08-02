#include <stdio.h>
#include <string.h>
void main()
{
    char name1[15] = "Java";
    char name2[15] = "Python";
    char name3[15] = "C++";
    char name4[15] = "Java";
    int i;
    i = strcmp(name1, name2);
    printf("\n%s compared with %s returned %d\n", name1, name2, i);
    i = strcmp(name1, name3);
    printf("\n%s compared with %s returned %d\n", name1, name3, i);
    i = strcmp(name1, name4);
    printf("\n%s compared with %s returned %d\n", name1, name4, i);
}
