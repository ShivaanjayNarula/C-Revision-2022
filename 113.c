#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, k;
    i = 0;
    printf("Enter the No of rows : ");
    scanf("%d", &i);
    printf("\n");
    for(j = 0; j < i; j++)
    {
        for(k = i; k > j; k--)
        {
            printf("%d", i - k + 1);
        }
        printf("\n");
    }
}
