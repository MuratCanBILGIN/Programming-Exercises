#include <stdio.h>

/**
 * @brief Bir sayının asal olup olmadığını kontrol eden yardımcı fonksiyon.
 * Yalnızca stdio.h kullandığı için bool yerine int (1/0) döndürür.
 * @param n Kontrol edilecek sayı.
 * @return 1 (Asal ise) veya 0 (Asal değil ise).
 */
int asal_mi(int n) {
    if (n <= 1) {
        return 0; // 1 ve daha küçük sayılar asal değildir.
    }
    
    // 2'den n-1'e kadar olan sayılarla bölünüp bölünmediğini kontrol et.
    // Optimal kontrol: i*i <= n yerine daha basit bir döngü kullanılır.
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0; // Tam bölen bulundu, asal değil.
        }
    }
    return 1; // Tam bölen bulunmadı, asal.
}

/**
 * @brief 1 ile n arasındaki asal sayılardan tek olanların toplamını rekürsif olarak hesaplar.
 *
 * @param n Üst sınır (Başlangıçta 100).
 * @return int Tek asal sayıların toplamı.
 */
int tek_asal_toplam(int n) {
    // 1. Durma Koşulu (Base Case)
    // En küçük tek asal sayı 3'tür. n 3'ten küçükse toplam 0'dır.
    if (n < 3) {
        return 0;
    }

    // Rekürsif Çağrı: n-1'e kadar olan toplamı bul.
    int toplam = tek_asal_toplam(n - 1);

    // Kontrol ve Toplama Adımı
    // Eğer geçerli sayı (n) asal (asal_mı(n) == 1) VE TEK ise (n % 2 != 0) toplama eklenir.
    if (asal_mi(n) == 1 && (n % 2 != 0)) {
        return toplam + n;
    } else {
        // Asal veya tek sayı değilse, sadece alt sonuç döndürülür.
        return toplam;
    }
}

int main() {
    int ust_sinir = 100;
    
    // Fonksiyonu 100 ile çağırarak hesaplamayı başlatma
    int sonuc = tek_asal_toplam(ust_sinir);
    
    printf("1 ile %d arasındaki tek asal sayıların toplamı: %d\n", ust_sinir, sonuc);
    
    return 0;
}