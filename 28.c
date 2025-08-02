#include <stdio.h>
void main()
{
    int a, b;
    float amount;
    printf("Customer No = ");
    scanf("%d", &a);
    printf("Unit Consumed = ");
    scanf("%d", &b);
    if(b <= 200)
    {
        amount = b * 0.50;
    }
    if(b > 200 && b <= 400)
    {
        amount = (200 * 0.5) + ((b - 200) * 0.65) + 100;
    }
    if(b > 400 && b <= 600)
    {
        amount = (200 * 0.5) + (200 * 0.65) + ((b - 400) * 0.80) + 230;
    }
    if(b > 600)
    {
        amount = (200 * 0.5) + (200 * 0.65) + (200 * 0.80) + ((b - 600) * 1) + 390;
    }
    printf("Charges = Rs %f", amount);
}
