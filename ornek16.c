#include <stdio.h>

void tekmi_ciftmi(int sayi)
{

    if(sayi % 2 == 0)
    {

        printf("Sayi cifttir");

    }else
    {

        printf("Sayi tektir");

    }
}

int main()
{
    tekmi_ciftmi(2);

    printf("\n");

    tekmi_ciftmi(5);

    return 0;
}