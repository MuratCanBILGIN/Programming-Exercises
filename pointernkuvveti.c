#include <stdio.h>

void nincikuvvet(int us, int taban, int *sonuc_adresi)
{
    int i;
    int sonuc = 1;

    for(i=1; i<=us; i++)
    {

        sonuc *= taban;

    }

    *sonuc_adresi = sonuc;

    printf("%d", *sonuc_adresi);
}

int main()
{

    int a; 
    int b;

    printf("Bir us giriniz:");
    scanf("%d",&a);

    printf("Bir taban giriniz:");
    scanf("%d",&b);

    nincikuvvet(a,b);

    return 0;
}