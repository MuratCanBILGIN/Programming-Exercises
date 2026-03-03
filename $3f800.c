#include <stdio.h>
//#define Adres (*(volatile unsigned int*)0x3F800) program işletim sisteminin istekleriyle çakışıyor

typedef struct bitlikveri
{
    unsigned int x: 1, y: 1, z: 1, reserved: 5;

}bitlik;

typedef struct veri
{
    unsigned int sekizlik: 8;
}sekizli;

int main()
{
    bitlik a = {0};
    unsigned int gecici;
    unsigned char temiz = {0};

    printf("x biti icin bir veri giriniz: (Sadece 0/1)");
    scanf("%u",&gecici);

    a.x = gecici;

    printf("y biti icin bir veri giriniz: (Sadece 0/1)");
    scanf("%u",&gecici);

    a.y = gecici;

    printf("z biti icin bir veri giriniz: (Sadece 0/1)");
    scanf("%u",&gecici);

    a.y = gecici;

    (temiz |= (a.x << 0));
    (temiz |= (a.y << 1));
    (temiz |= (a.z << 2));

    Adres = temiz;

    printf("\nSeri porta yazilan veri (Desimal): %u\n", temiz);
    printf("Seri porta yazilan veri (Binary): %u%u%u\n", a.z, a.y, a.x);


    return 0;
}