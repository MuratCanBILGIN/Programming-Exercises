#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    unsigned char ch;
    int adet;
} Veri;


int main(int argc, char *argv[])
{

    if(argc < 2)
    {
        return 1;
    }

    FILE *dosya;

    dosya = fopen(argv[1], "r");

    if(dosya == NULL)
    {
        return 1;
    }

    int sayac[256] = {0};
    int c;

    while((c = fgetc(dosya)) != EOF)
    {
        sayac[(unsigned char)c]++;
    }

    fclose(dosya);

    Veri Liste[256];
    int FarkliKarakterSayisi = 0;
    for(int i = 0; i < 256; i++)
    {
        if(sayac[i] > 0)
        {
            Liste[FarkliKarakterSayisi].ch = (unsigned char)i;
            Liste[FarkliKarakterSayisi].adet = sayac[i];
            FarkliKarakterSayisi++;
        }
    }

    for(int i = 0; i < FarkliKarakterSayisi - 1; i++)
    {
        for(int j = 0; j < FarkliKarakterSayisi - i - 1; j++)
        {
            if(Liste[j].adet < Liste[j + 1].adet)
            {
                Veri gecici = Liste[j];
                Liste[j] = Liste[j + 1];
                Liste[j + 1] = gecici;
            }
        }
    }

    printf("-----En fazla kullanilan ilk 10 karakter-----\n");
    int limit;
    if(FarkliKarakterSayisi < 10)
    {
        limit = FarkliKarakterSayisi;
    }else
    {
        limit = 10;
    }

    char GorunurKarakter;

    for(int i = 0; i < limit; i++)
    {
        if(Liste[i].ch < 32)
        {
            GorunurKarakter = ' ';
        }else
        {
            GorunurKarakter = Liste[i].ch;
        }

        printf("'%c' (ASCII %d): %d tane\n", GorunurKarakter, Liste[i].ch, Liste[i].adet);
    }

    return 0;
}