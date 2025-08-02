#include <stdio.h>
#include <string.h>
void main()
{
    int i, j;
    char str_arr[5][20], str[20];
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter string %d : ", i + 1);
        scanf("%s", &str_arr[i]);
    }
    for(i = 0; i < 4; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(strlen(str_arr[i]) < strlen(str_arr[j]))
            {
                strcpy(str, str_arr[i]);
                strcpy(str_arr[i], str_arr[j]);
                strcpy(str_arr[j], str);
            }
        }
    }
    printf("\n\nThe strings in descending orders are : \n");
    for(i = 0; i< 5; i++)
    {
        printf("\n%s\n", str_arr[i]);
    }
}
