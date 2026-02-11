#include <stdio.h>

int *BuyukAdres(int *p1, int *p2)
{
    
    
    if(*p1 > *p2)
    {
        *p2 = *p1;
        p1 = p2;
        
        return p2;
    }else
    {
        *p1 = *p2;
        p2 = p1;
       
        return p1;
    }

}

int main()
{
    int Sayi1, Sayi2;

    printf("Esit olmayan iki sayi giriniz:");
    scanf("%d %d",&Sayi1, &Sayi2);

    printf("1.Sayi Adresi: %p ve Degeri: %d\n2.Sayi Adresi: %p ve Degeri: %d\n", &Sayi1, Sayi1, &Sayi2, Sayi2);

    int *Sonuc = BuyukAdres(&Sayi1, &Sayi2);

    
    printf("Yeni Adres: %p, Deger: %d", Sonuc, *Sonuc);

    return 0;
}