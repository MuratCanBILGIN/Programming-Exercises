#include <stdio.h>
#include <dos.h>

int main(){

    char kr;
    FILE *di;

    /*outportb(0x3FB, 0x80);
    outport(0x3FB, 0x0C);
    outportb(0x3FB, 0x1B);*/

    outportb(0x3FB, 0x80); // Hız ayar kapısını aç (DLAB = 1)
    outportb(0x3FB, 0x0C); // 9600 baud hızını ayarla (Alt byte)
    outportb(0x3FB, 0x00); // 9600 baud hızını ayarla (Üst byte)
    outportb(0x3FB, 0x1B); // Kapıyı kapat ve protokolü seç (8-bit, Çift Eşlik)

    di = fopen("gelen.txt", "w+");

    if(di == NULL)
    {
        return 1;
    }

    /*while(!feof(di))
    {
    while((inportb(0x3FD) & 0x01) == 0)
    {
        kr = inport(0x3FB);
        putc(kr, di);
    }
    }*/

    while(1){

        while((inportb(0x3FD) & 0x01) == 0);

        kr = inportb(0x3F8);

        if(kr == 26){
            break;
        }

        fputc(kr, di);
    }

    fclose(di);

    return 0;
}