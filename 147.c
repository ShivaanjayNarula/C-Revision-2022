#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int *a, i, n, sum = 0;
    printf("\n%s%s", "An Array will be created dynamically.\n\n", "Input an array size : ");
    scanf("%d", &n);
    a = (int *) calloc(n, sizeof(int));
    for(i = 0; i < n; i++)
    {
        printf("\nEnter %d value : ", i + 1);
        scanf("%d", a + i);
    }
    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    free(a);
    printf("\nNo of elements : %d\n\n", n);
    printf("Sum of elements : %d\n\n", sum);
}
