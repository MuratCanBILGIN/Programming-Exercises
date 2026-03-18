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

    int x;

    char GorunurKarakter;

    for(int i = 0; i < 256; i++)
    {
        if(sayac[i] >= 32 || i != 127)
        {
            GorunurKarakter = (char)i;
        }

        if(sayac[i] > 0)
        {
            x = sayac[i];
            printf("'%c' (ASCII %3d): %d tane\n", GorunurKarakter, i, sayac[i]);
        }
    }

    return 0;
}

