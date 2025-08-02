#include <stdio.h>
int main()
{
    int i, j, k;
    printf("\nEnter value 1 : ");
    scanf("%d", &i);
    printf("\nEnter value 2 : ");
    scanf("%d", &j);
    printf("\nEnter value 3 : ");
    scanf("%d", &k);
    if(i > j && i > k)
    {
        printf("\nThe largest number : %d\n", i);
    }
    if(j > i && j > k)
    {
        printf("\nThe largest number : %d\n", j);
    }
    if(k > i && k > j)
    {
        printf("\nThe largest number : %d\n", k);
    }
    if(i == j && i == k)
    {
        printf("\nAll the numbers are equal\n");
    }
    return 0;
}
