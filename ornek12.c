#include <stdio.h>

int main()
{

    int dizi[] = {23, 45, 12, 67, 34, 89, 56};

    int buyuk;

    int uzunluk = sizeof(dizi)/sizeof(dizi[0]);

    int i;

    for(i = 0; i < uzunluk; i++)
    {
        if(dizi[i] > dizi[i+1])
        {

            buyuk = dizi[i];

            dizi[i] = dizi[i+1];

            dizi[i+1] = buyuk;

        }
        

    }

    for(i = 0; i < uzunluk; i++)
    {

        printf("%d ", dizi[i]);

    }

    return 0;
}