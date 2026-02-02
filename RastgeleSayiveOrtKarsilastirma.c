#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int OrtalamaHesabi(int dizi[])
{

    int Toplam = 0;
    int a;

    for(a = 0; a < 20; a++)
    {

        Toplam = Toplam + dizi[a];

    }

    return Toplam / 20;
}

void BuyuklukKarsilastirma(int diziA[], int (*islem)(int diziC[]))
{
    int Buyuk = 0;
    int Kucuk = 0;

    int x;

    int ortalama = islem(diziA);

    for(x = 0; x < 20; x++)
    {

        if(diziA[x] == ortalama)
        {
            continue;
        }else if(diziA[x] > ortalama)
        {
            Buyuk++;
        }else
        {
            Kucuk++;
        }

    }

    printf("\n");
    printf("Ortalama: %d\n", islem(diziA));
    printf("Ortalamadan buyuk sayi sayisi: %d\n", Buyuk);
    printf("Ortalamadan kucuk sayi sayisi: %d\n", Kucuk);
}

int main()
{
    int i;

    int A[20];

    srand(time(NULL));

    printf("Dizi:");

    for(i = 0; i < 20; i++)
    {

        int rastgelesayi = (rand() % 101);

        A[i] = rastgelesayi;

        printf(" %d,", A[i]);

        if(i == 9)
        {printf("\n");}
    }

    BuyuklukKarsilastirma(A, OrtalamaHesabi);

    return 0;
}