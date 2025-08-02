#include <stdio.h>
#include <string.h>
#include <malloc.h>
void main()
{
    int *p, n , i, j, temp;
    printf("\nEnter number of elements in the array : ");
    scanf("%d", &n);
    p = (int*)malloc(n*sizeof(int));
    for(i = 0; i < n; ++i)
    {
        printf("Enter element No. %d : ", i + 1);
        scanf("%d", p + i);
    }
    for(i = 0; i < n; ++i)
    {
        for(j = 0; j < i; ++j)
        {
            if(*(p + i) > *(p + j))
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
    for(i = 0; i < n; ++i)
    {
        printf("%d\n", *(p + i));
    }
}
