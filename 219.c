#include <stdio.h>
int main()
{
    int i, j, num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("\n\n");
    for(i = 0, j = num; i <= num; i++, j--)
    {
        printf("\n%d + %d = %d\n", i, j, num);
    }
    return 0;
}
