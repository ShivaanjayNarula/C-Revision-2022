#include <stdio.h>
#include <conio.h>
int main()
{
   int num;
   labell:
       printf("\nEnter a number : ");
       scanf("%d", &num);
       if(num == 1)
       {
           goto test;
       }
       else
       {
           goto labell;
       }
    test:
        printf("\nAll Done\n");
}
