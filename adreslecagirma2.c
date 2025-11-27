#include <stdio.h>

void ortalama(int *a, int *b, int *z)
{

    *z = (*a + *b)/2;

}

int main() 
{
    int sayi1, sayi2, sonuc;

    printf("Iki sayi giriniz:");     
    scanf("%d %d", &sayi1, &sayi2);
    
    ortalama(&sayi1, &sayi2, &sonuc);

    printf("Ortalama: %d ", sonuc);

    return 0;
}