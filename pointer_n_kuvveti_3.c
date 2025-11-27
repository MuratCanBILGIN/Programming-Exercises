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
    int z;

    printf("Bir taban giriniz:");
    scanf("%d",&b);

    printf("Bir us giriniz:");
    scanf("%d",&a);

    nincikuvvet(a,b,&z);

    return 0;
}