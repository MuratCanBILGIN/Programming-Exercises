#include <stdio.h>

void Fonksiyon(int Dizi[], int boyut)
{
    
    int *p = Dizi;

    int enkucuk= *p;
    int enbuyuk = *p;
    float toplam = 0;
    int ortalama;

    

    for(int i = 0; i < boyut; i++)
    {

        if(*p < enkucuk)
        {
            enkucuk = *p;
        }

        if(*p > enbuyuk)
        {
            enbuyuk = *p;
        }

        toplam = toplam + *p;

        p++;

    }

    ortalama = (float)toplam / boyut;

    printf("En kucuk deger: %d\n",enkucuk);
    printf("En buyuk deger: %d\n",enbuyuk);
    printf("Ortalama: %d",ortalama);


}

int main()
{

    int diziA[5] = {12, 43, 61, 2, 79};

    int diziboyutu = 5;

    Fonksiyon(diziA, diziboyutu);




    return 0;
}