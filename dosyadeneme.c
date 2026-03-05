#include <stdio.h>
#include <stdlib.h>

int DosyadaKarakterArayanFonksiyon(FILE *x, char ArananKarakter)
{
    int sayac = 0;
    int ch;

    // Dosya işaretçisini en başa alıyoruz ki baştan tarasın
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
    char *DosyaIcerigi = "Araba";
    char AranacakKarakter;

    // Argüman kontrolü: Program adı + Dosya adı = 2 argüman olmalı
    if(argc < 2) {
        printf("Kullanim: %s <dosya_adi>\n", argv[0]);
        return 1;
    }

    printf("Aranacak bir karakter giriniz: ");
    scanf(" %c", &AranacakKarakter);

    // "w+" modu: Hem yazma hem okuma sağlar, dosya yoksa oluşturur.
    if((di = fopen(argv[1], "w+")) == NULL)
    {
        printf("Dosya acilamadi!\n");
        return 1;
    }

    // Dosyaya içeriği yazıyoruz
    fputs(DosyaIcerigi, di);

    // Fonksiyonu çağırıyoruz
    int sonuc = DosyadaKarakterArayanFonksiyon(di, AranacakKarakter);

    printf("'%c' karakteri dosyada %d kez geciyor.\n", AranacakKarakter, sonuc);

    fclose(di);
    return 0;
}