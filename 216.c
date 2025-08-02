#include <stdio.h>
int main()
{
    int x, y;
    printf("\nEnter the value of x : ");
    scanf("%d", &x);
    printf("\nEnter the value of y : ");
    scanf("%d", &y);
    if(x < 2000 || x > 3000)
    {
        printf("\nValue of x = %d\n", x);
    }
    if(y > 100 && y < 500)
    {
        printf("\nValue of y = %d\n", y);
    }
    return 0;
}
