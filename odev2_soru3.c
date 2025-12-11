/*3. Mükemmel Sayı Kontrolü 
Kullanıcıdan bir pozitif tam sayı girmesini isteyin. Girilen sayının mükemmel sayı 
olup olmadığını kontrol eden bir C programı yazınız.  
(Mükemmel sayı: Kendisi haric pozitif tam bölenlerinin toplamı kendisine eşit olan 
sayıdır. Örnek: 6 = 1 + 2 + 3)*/

#include <stdio.h>

int main()
{

    int kullanicinin_girdigi_sayi = 0;
    int toplam = 0;

    while(kullanicinin_girdigi_sayi <= 0)//Sayının pozitif olup olmadığını kontrol eden while dongusu. Sayi pozitif degilse tekrar sayi
    {                                    //girilmesini ister.

    printf("Lutfen pozitif bir tamsayi giriniz:");
    scanf("%d", &kullanicinin_girdigi_sayi);

    }

    int pozitif_tam_bolen;

    for(pozitif_tam_bolen = 1; pozitif_tam_bolen < kullanicinin_girdigi_sayi; pozitif_tam_bolen++)//Sayinin kendisi haric pozitif tam bölenlerini 
    {                                                                                             //bulan for dongusu.
        
        if(kullanicinin_girdigi_sayi % pozitif_tam_bolen == 0)
        {
        
            toplam = toplam + pozitif_tam_bolen;

        }

    }

    if(toplam == kullanicinin_girdigi_sayi)//Kendisi haric pozitif tam bolenlerinin toplamini kaydeden, 'toplam' isimli degiskene gore kullaniciya  
    {                                      //sayisinin mukemmel olup olmadigini soyleyen if/else yapisi.

        printf("Girdiginiz sayi mukemmel bir sayidir.  <3  ");

    }else
    {

        printf("Girdiginiz sayi mukemmel bir sayi degildir.  :(   ");

    }

    return 0;
}