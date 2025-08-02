#include <stdio.h>
#include <conio.h>
void main()
{
    static int ary[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    for(i = 0; i < 10; i++)
    {
        printf("\ni = %d, ary[i] = %d, *(ary + i) = %d, ", i, ary[i], *(ary + i));
        printf("&ary[i] = %x, ary + i = %x\n", &ary[i], ary + i);
    }
}
