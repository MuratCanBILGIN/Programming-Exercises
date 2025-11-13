#include <stdio.h>

int main()
{
    int girilensayi;
    int i;
    int sayac=3;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &girilensayi);

    if(girilensayi<2)
    {
        printf("girilen sayi asal degildir");
    }else if(girilensayi==2 || girilensayi==3)
    {
         printf("girilen sayi asaldir");
    }else {
        for(i=2; i<=girilensayi/2; i++){
            if(girilensayi%i==0){
                sayac = 1;
                break;
            }else{
                sayac = 0;
            }
        }
    }

     if(sayac == 1){
                printf("girilen sayi asal degildir");
            }else if(sayac == 0){
                printf("girilen sayi asaldir");
            }

    return 0;
}