#include <stdio.h>

int main(int argcv, char *argv[])
{

    if (argcv < 2) {
        printf("Kullanim: ./program_adi <mesaj>\n");
        printf("Hata: Lütfen sayilacak bir mesaj girin.\n");
        return 1; // Hata kodu ile çık
    }

    printf("mesaj giriniz:");

    char *mesaj = argv[1];

    int a_sayisi = 0;

    int i = 0;

    while(mesaj[i] != '\0')
    {
        char karakter = mesaj[i];

        if(karakter == 'a' || karakter == 'A')
        {
            a_sayisi++;
        }

        i++;

    }


        printf("Girilen mesaj: '%s'\n", mesaj);
        printf("Toplam 'a' veya 'A' harfi sayisi: %d\n", a_sayisi);


    return 0;
}