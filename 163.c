#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    float *calloc1, *calloc2;
    int i;
    calloc1 = (float *) calloc(3, sizeof(float));
    calloc2 = (float *) calloc(3, sizeof(float));
    if(calloc1 != NULL && calloc2 != NULL)
    {
        for(i = 0; i < 5; i++)
        {
            printf("\ncalloc1[%d] holds %05.5f\n", i, calloc1[i]);
            printf("\ncalloc2[%d] holds %05.5f\n", i, calloc2[i]);
        }
        free(calloc1);
        free(calloc2);
        return 0;
    }
    else
    {
        printf("\nNOT ENOUGH MEMORY\n");
        return 1;
    }
}
