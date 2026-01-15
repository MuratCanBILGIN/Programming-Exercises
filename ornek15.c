#include <stdio.h>

int faktoriyel(int sayi)
{

    int toplam = 1;

    int i;

    for(i = 1; i <= sayi; i++)
    {

        toplam = toplam * i;

    }

    return toplam;
}


int main()
{
    int girilensayi;

    printf("Bir sayi giriniz: ");
    scanf("%d",&girilensayi);

    printf("%d", faktoriyel(girilensayi));

    return 0;

}