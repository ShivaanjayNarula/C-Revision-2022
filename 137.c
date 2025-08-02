#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    int i, n = 0;
    int item;
    char x[10][12];
    char temp[12];
    printf("Enter Names on separate lines\n\n");
    printf("Type 'END' when done\n\n");
    do
    {
        printf("Name %d : ", n + 1);
        scanf("%s", x[n]);
    } while(strcmp(x[n++], "END"));
    n = n - 1;
    for(item = 0; item < n - 1; ++item)
    {
        for(i = item + 1; i < n; ++i)
        {
            if(strcmp(x[item], x[i]) > 0)
            {
                strcpy(temp, x[item]);
                strcpy(x[item], x[i]);
                strcpy(x[i], temp);
            }
        }
    }
    printf("\nArranged Names : \n\n");
    for(i = 0; i < n; ++i)
    {
        printf("Name %d is : %s\n", i + 1, x[i]);
    }
}
