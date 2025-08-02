#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int *ptr;
    int i;
    ptr = (int *) calloc(5, sizeof(int));
    if(ptr != NULL)
    {
        *ptr = 1;
        *(ptr + 1) = 2;
        ptr[2] = 4;
        ptr[3] = 8;
        ptr[4] = 16;
        ptr = (int *) realloc(ptr, 7 * sizeof(int));
        if(ptr != NULL)
        {
            ptr[5] = 32;
            ptr[6] = 64;
            for(i = 0; i < 7; i++)
            {
                printf("ptr[%d] holds %d\n\n", i, ptr[i]);
            }
            free(ptr);
            return 0;
        }
        else
        {
            printf("\nNot enough memory - realloc failed\n");
        }
    }
    else
    {
        printf("\nNot enough memory - calloc faied\n");
    }
}
