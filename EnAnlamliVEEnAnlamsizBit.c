#include <stdio.h>

typedef struct EnAnlamliVEEnAnlamsizBit
{
    unsigned int onaltilik: 16;
}bit;


void AksilikKontrol()
{
    bit x;

    int atama;

    printf("Bir sayi giriniz: ");
    scanf("%d",&atama);

    x.onaltilik = atama;

    if((x.onaltilik & 1 << 15) && (x.onaltilik & 1 << 0))
    {
        printf("Aksilik yok");
    }else
    {
        printf("Hata oldu");
    }
}

int main()
{

    AksilikKontrol();

    return 0;
}