#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j ,k;
    i = 0;
    printf("Enter No of rows : ");
    scanf("%d", &i);
    for(j = 0; j < i; j++)
    {
        for(k = 0; k < j; k++)
        {
            printf("%d", k + 1);
        }
        printf("\n");
    }
}
