#include <stdio.h>

int main() {
    int sayi, i;
    // Asal durumunu tutan değişken. 
    // 1 = ASAL (doğru), 0 = ASAL DEĞİL (yanlış). 
    // Başlangıçta 1 (ASAL) kabul ediyoruz.
    int asalMi = 1; 

    printf("Bir sayi giriniz: ");
    
    // Kullanıcıdan tamsayı girişini al.
    if (scanf("%d", &sayi) != 1) {
        printf("Gecersiz giris yaptiniz.\n");
        return 1; // Hata kodu ile çıkış
    }

    // 1 ve 1'den küçük sayılar asal değildir.
    if (sayi <= 1) {
        asalMi = 0; // Asal değil
    } 
    // Sadece çift olan 2 hariç diğer çift sayılar asal değildir.
    else if (sayi % 2 == 0 && sayi != 2) {
        asalMi = 0;
    }
    // 2 dışındaki tüm tek sayılar için kontrol.
    else {
        // Kontrolü 3'ten başlatıyoruz (2'yi zaten yukarıda kontrol ettik).
        // Sadece tek bölenleri kontrol ederek performansı biraz artırıyoruz (i+=2).
        // Kontrol sınırımız yine sayi / 2 olacak.
        for (i = 3; i <= sayi / 2; i = i + 2) {
            // Eğer sayı, 'i'ye tam bölünüyorsa (kalan 0 ise), asal değildir.
            if (sayi % i == 0) {
                asalMi = 0; // Asal değil
                break;      // Bir bölen bulduğumuz an döngüyü sonlandırabiliriz.
            }
        }
    }

    // Sonucu ekrana yazdırıyoruz
    if (asalMi == 1) {
        printf("%d sayisi ASALDIR.\n", sayi);
    } else {
        printf("%d sayisi ASAL DEGILDIR.\n", sayi);
    }

    return 0;
}
