#include <stdio.h>
#include <conio.h>
void main()
{
    static int ary[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    for(i = 0; i < 10; i++)
    {
        printf("i = %d, ary[i] = &d, *(ary + i) = %d, &ary[i] = %X, ary + i = %X", i, ary[i], *(ary + i), &ary[i], ary + i);
        printf("\n");
    }
}
