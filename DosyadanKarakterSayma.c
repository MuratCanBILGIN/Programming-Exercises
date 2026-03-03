#include <stdio.h>
#include <stdlib.h>

int DosyadaKarakterArayanFonksiyon(FILE *x, char DosyaIsmi[], char ArananKarakter, char *DosyadakiIcerik)
{
    int sayac = 0;
    int ch;

    rewind(x);

    while((ch = fgetc(x)) != EOF)
    {
        if(ch == ArananKarakter)
        {
            sayac++;
        }
    }

    return sayac;
}

int main(int argc, char *argv[])
{
    FILE *di;
    char DosyaAdi[50];
    char *DosyaIcerigi = "Araba";
    char AranacakKarakter;



    printf("%d ",argc);

    if(argc < 1) {
    printf("Dosya adini girmeyi unuttun!");
    return 1;
}

    printf("Aranacak bir karakter giriniz: ");
    scanf(" %c",&AranacakKarakter);

    if((di = fopen(argv[1], "r")) == NULL)
    {
        printf("Dosya yazma icin acilamadi !\n");
        exit(0);
    }

    fputs(DosyaIcerigi, di);

    int sonuc = DosyadaKarakterArayanFonksiyon(di, DosyaAdi, AranacakKarakter, DosyaIcerigi);

    printf("%d",sonuc);

    fclose(di);
    
}