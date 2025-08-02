#include <stdio.h>
#include <stdlib.h>
void main()
{
    int number;
    int *ptr;
    int i;
    printf("Enter the No of int to be stored : ");
    scanf("%d", &number);
    ptr = (int *) malloc (number * sizeof(int));
    if(ptr != NULL)
    {
        for(i = 0; i < number; i++)
        {
            *(ptr + i) = i;
        }
        for(i = number; i > 0; i--)
        {
            printf("%d\n", *(ptr + (i - 1)));
        }
    }
    free(ptr);
    return 0;
}
