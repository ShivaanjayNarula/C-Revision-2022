#include <stdio.h>
#include <string.h>
void main()
{
    int i;
    char name[5][20];
    void uppername(char name_arr[]);
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter String %d : ", i + 1);
        scanf("%s", &name[i]);
    }
    for(i = 0; i < 5; i++)
    {
        uppername(name[i]);
        printf("\nNew string %d : %s\n", i + 1, name[i]);
    }
}
void uppername(char name_arr[])
{
    int x;
    for(x = 0; x < 5; x++)
    {
        if(name_arr[x] >= 97 && name_arr[x] <= 122)
        {
            name_arr[x] = name_arr[x] - 32;
        }
    }
}
