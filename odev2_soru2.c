/*asal sayi kontrolu
kullanicidan bir pozitif tam sayi girmesini isteyin. girilen sayinin asal olup olmadigini kontrol eden bir C programi yazin.
*/
#include <stdio.h>

int main() 
{

    // Kullanicidan alinan sayinin bolunebilme kurallarini kontrol etmek icin for dongusu kullandik
    // Dongu 2'den baslar ve girilen sayiya kadar bolunebilmeyi kontrol eder
    // Eger bolunebilen bir sayi bulamaz ise sayi bolunebilme kontrol sayisini degistirir
    // Program dongu sonunda kontrol sayisina bagli olarak asal olup olmadigini yazar

    int bolunebilme_kontrol_sayisi;

    int asal_sorgulama_degiskeni = 0;

    int kullanicidan_alinan_sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d", &kullanicidan_alinan_sayi);



    for(bolunebilme_kontrol_sayisi = 2; bolunebilme_kontrol_sayisi < kullanicidan_alinan_sayi ;bolunebilme_kontrol_sayisi++)
{

  if(kullanicidan_alinan_sayi % bolunebilme_kontrol_sayisi == 0)
  {

    asal_sorgulama_degiskeni = 0;
    break;

  }else
  {

    asal_sorgulama_degiskeni = 1;

  }

}

if(asal_sorgulama_degiskeni == 1 || kullanicidan_alinan_sayi == 2)//Eger kullanicinin girdigi sayi 2 ise ekrana direkt "Sayi asaldir" mesaji 
{                                                                 //yazdirilir, boylece ozel bir durum olan 2 icin sistem karmasiklastirilmaz

    printf("Sayi asaldir");
    
}else
{

   printf("Sayi asal degildir");

}

return 0;

}