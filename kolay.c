#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct veri
{
    char CharTutanDizi[256];
    char SiralanmisDizi[256];
    char UzunlugaGoreSiralanmisDizi[256];
    int Charsayisi[256][256];
} Veri;


int main(int argc, char *argv[])
{

    if(argc < 2)
    {
        return 1;
    }

    Veri KarakterTutanDizi;

    FILE *dosya;

    dosya = fopen(argv[1], "R");

    if(dosya == NULL)
    {
        return 1;
    }

    int i = 0;

    int j = 0;

    int GirdiBoyu = strlen(KarakterTutanDizi.CharTutanDizi);

    

    while( argv[1] != '\0')
    {
        KarakterTutanDizi.CharTutanDizi[i] = argv[i];
        i++;
    }

    for(i = 0; i < 256; i++)
    {
        for(j = 0; j < 256; j++)
        {
            if(KarakterTutanDizi.CharTutanDizi[i] == KarakterTutanDizi.CharTutanDizi[j])
            {
                KarakterTutanDizi.Charsayisi[i][j]++;
            }
        }
    }

    for(i = 0, j = 0; i < GirdiBoyu; i++)
    {
        printf("Karakter Sayisi: %c, Sayisi: %d\n",KarakterTutanDizi.CharTutanDizi[i], KarakterTutanDizi.Charsayisi[i][j]);
    }


    return 0;
}