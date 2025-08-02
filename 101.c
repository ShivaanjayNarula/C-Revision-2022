#include <stdio.h>
#include <string.h>
void main()
{
    char hotelname1[15] = "Sea View";
    char hotelname2[15] = "Sea Breeze";
    printf("\nThe old name is %s\n", hotelname1);
    strcpy(hotelname1, hotelname2);
    printf("\nThe new name is %s\n", hotelname2);
}
