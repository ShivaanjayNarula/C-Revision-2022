#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    printf("The even numbers from 1 to 25 are : \n");
    for(i = 2; i <= 25; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
}
