/*Çift Sayıları Toplama

1'den 50'ye kadar olan(1 ve 50 dahil) çift sayıların toplamını hesaplayan bir program yazınız*/

#include <stdio.h>

int main()
{
    
    int sayac;

    int toplam = 0;

    for(sayac = 2; sayac <= 50; sayac = sayac + 2)//1 tek sayi oldugu icin sayac'i 2 den baslattik.
    {
     
        toplam = toplam + sayac;
    }
    //1 ve 50 arasindaki cift sayilarin toplamini bulmak icin 2'den baslayan ve her seferinde sayaci 2 arttiran bir for dongusu kullandik.


    printf("1'den 50'ye kadar olan(1 ve 50 dahil) cift sayilarin toplami: %d", toplam);

    return 0;
}