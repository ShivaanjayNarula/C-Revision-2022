#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, k;
    printf("Enter No of rows : ");
    scanf("%d", &i);
    for(j = 0; j < i; j++)
    {
        for(k = i; k > j; k--)
        {
            printf("*");
        }
        printf("\n");
    }
}
