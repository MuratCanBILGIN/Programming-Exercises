#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void PolinomCozumle(char *polinom) {
    char *terim;
    // Polinomu + veya - işaretlerine göre terimlere ayırıyoruz
    terim = strtok(polinom, "+-");

    while (terim != NULL) {
        char *x_konumu = strchr(terim, 'x');
        
        if (x_konumu != NULL) {
            // Katsayıyı al (x'ten önceki kısım)
            *x_konumu = '\0'; // x'i geçici olarak sonlandırıcı yap
            int katsayi = (strlen(terim) == 0) ? 1 : atoi(terim);
            
            // Üssü al (x^ kısmından sonraki kısım)
            char *us_kismi = strchr(x_konumu + 1, '^');
            int us = (us_kismi != NULL) ? atoi(us_kismi + 1) : 1;

            printf("Terim: %sx... -> Katsayi: %d, Us: %d\n", terim, katsayi, us);
        } else {
            // Sabit terim durumu (x içermeyen)
            printf("Sabit Terim: %d\n", atoi(terim));
        }

        terim = strtok(NULL, "+-");
    }
}

int main() {
    char BirinciPolinom[100];

    printf("Polinomu giriniz (Örn: 3x^2+5x^1+2): ");
    fgets(BirinciPolinom, sizeof(BirinciPolinom), stdin);
    
    // Satır sonu karakterini temizle
    BirinciPolinom[strcspn(BirinciPolinom, "\n")] = 0;

    PolinomCozumle(BirinciPolinom);

    return 0;
}