#include <stdio.h>
int main()
{
    char hotelname1[25] = "Sea View";
    char hotelname2[25] = "Sea Breeze";
    printf("\nThe old name is : %s\n", hotelname1);
    strcpy(hotelname1, hotelname2);
    printf("\nThe new name is : %s\n", hotelname2);
}
