#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    int i, n = 0;
    int name;
    char x[10][12];
    char temp[12];
    printf("Enter the names on new line\n\n");
    printf("Type 'END' when over\n\n");
    do
    {
        printf("String %d : ", n + 1);
        scanf("%s", &x[n]);
    }while (strcmp(x[n++], "END"));
    n = n - 1;
    for(name = 0; name < n - 1; ++name)
    {
        for(i = name + 1; i < n; ++i)
        {
            if(strcmp (x[name], x[i]) > 0)
            {
                strcpy(temp, x[name]);
                strcpy(x[name], x[i]);
                strcpy(x[i], temp);
            }
        }
    }
    printf("The Names in alphabetical order are :\n\n");
    for(i = 0; i < n; ++i)
    {
        printf("\nName %d : %s\n", i + 1, x[i]);
    }
}
