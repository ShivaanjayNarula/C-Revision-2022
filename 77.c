#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    int number;
    int *ptr;
    int i;
    printf("Enter the Number of integers to be stored : ");
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
            printf("\n%d\n", *(ptr + (i - 1)));
        }
        free(ptr);
        return 0;
    }
    else
    {
        printf("\nMemory allocation failed - NOT ENOUGH MEMORY\n");
        return 1;
    }
}
