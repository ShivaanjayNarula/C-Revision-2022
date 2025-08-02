#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("\n");
    int arr[n];
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Enter Array %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n\nReversed Array : \n\n");
    for(i = n - 1; i >= 0; i--)
    {
        printf("Array %d : %d\n", n - i, arr[i]);
    }
}
