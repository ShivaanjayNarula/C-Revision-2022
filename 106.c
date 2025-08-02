#include <stdio.h>
#include <string.h>
main()
{
    int i, j;
    char str_arr[5][20];
    char str[20];
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter String %d : ", i + 1);
        scanf("%s", str_arr[i]);
    }
    for(i = 0; i < 5; i++)
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
    printf("\nThe strings in the descending order are : ");
    for(i = 0; i < 5; i++)
    {
        printf("\n%s",str_arr[i]);
    }
}
