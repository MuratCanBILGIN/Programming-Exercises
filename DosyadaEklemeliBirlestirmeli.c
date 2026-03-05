#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <direct.h>

int main(int argc, char *argv[])
{

    if (argc < 2)
    {
        printf("Kullanim: %s dosya1.txt dosya2.txt ...\n", argv[0]);
        return 1;
    }

    int karakter;
    FILE *eklen, *kaynak;
    char DosyaAdi[100];

    printf("Su an canim.txt dosyasina yazmaya hazirlaniyorum...\n");
    eklen = fopen("cancin.txt", "r");

    if(eklen == NULL)
    {
        printf("Dosya yazma icin acilamadi !\n");
        return 1;
    }

    for(int i = 1; i < argc; i++)
    {
        printf("Su an islenen dosya: %s\n", argv[i]);
        kaynak = fopen(argv[i], "r");

        if(kaynak == NULL)
        {
            printf("Uyari: %s dosyasi bulunamadi.\n", argv[i]);
            continue;
        }

        while((karakter = fgetc(kaynak)) != EOF)
        {
            fputc(karakter, eklen);
        }

        fclose(kaynak);
    }

    fflush(eklen);
    fclose(eklen);

    char path[256];
_getcwd(path, 256);
printf("Dosya su klasorde araniyor/olusturuluyor: %s\n", path);
    

    return 0;
}