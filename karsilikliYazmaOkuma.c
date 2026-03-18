#include <stdio.h>
#include <dos.h>
#include <conio.h>

int main(){

    int user = -1;
    char kr;
    char c = 'H';

    while(user != 0 && user != 1){
    printf("Kacinci kullanicisiniz ?: (0 gonderici/1 alici)");
    scanf("%d",&user);
    }

    outportb(0x3FB, 0x80); // Hız ayar kapısını aç (DLAB = 1)
    outportb(0x3F8, 0x0C); // 9600 baud hızını ayarla (Alt byte)
    outportb(0x3F9, 0x00); // 9600 baud hızını ayarla (Üst byte)
    outportb(0x3FB, 0x1B); // Kapıyı kapat ve protokolü seç (8-bit, Çift Eşlik)

    if(user == 0){


        while(c != 'E'){
        kr = getche();
        while((inportb(0x3FD) & 0x20) == 0);
        outportb(0x3F8, kr);
        printf("Duralim mi ?: (E)");
        scanf(" %c",&c);
        }
    }

    if(user == 1){

        while(c != 'E'){
        while((inportb(0x3FD) & 0x01) == 0);
        kr = inportb(0x3F8);
        printf("%c",kr);
        printf("Duralim mi ?: (E)");
        scanf(" %c",&c);
        }
    }

    return 0;
}