#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("Enter the value of radius : ");
    scanf("%d", &a);
    area(a);
    perimeter(a);
}
area(int x)
{
    float ar;
    ar = 3.14 * x * x;
    printf("\nThe Area is %.2f\n", ar);
    return(ar);
}
perimeter(int x)
{
    float perimeter;
    per = 2 * 3.14 * x;
    printf("\nThe Perimeter is %.2f\n", perimeter);
    return(perimeter);
}
