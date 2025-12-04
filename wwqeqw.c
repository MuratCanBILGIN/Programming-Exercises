#include <stdio.h>

int main(int argc, char *argv[]) // Değişken adı argcv yerine standart 'argc' kullanıldı.
{
    // 1. Argüman Kontrolü EKLEMEK ZORUNLU!
    if (argc < 2) {
        printf("Kullanım: ./program_adi <mesaj>\n");
        printf("Hata: Lütfen sayılacak bir mesaj girin.\n");
        return 1; // Hata kodu ile çık
    }

    // 2. Mesajı al (SADECE komut satırı argümanından)
    char *mesaj = argv[1]; 

    int a_sayisi = 0;
    int i = 0;

    // ... (Sayma döngüsü aynı kalır)
    while(mesaj[i] != '\0')
    {
        char karakter = mesaj[i];

        if(karakter == 'a' || karakter == 'A')
        {
            a_sayisi++;
        }

        i++;
    }

    // ... (Sonuç çıktısı)
    printf("Girilen mesaj: '%s'\n", mesaj);
    printf("Toplam 'a' veya 'A' harfi sayisi: %d\n", a_sayisi);

    return 0;
}