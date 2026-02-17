#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");

    // Türkçe karakterleri içeren bir string tanımlıyoruz
    char alfabe[200] = "abcçdefgğhıijklmnoöprsştuüvyz";
    
    int i = 0;
    while(alfabe[i] != '\0') {
        // %s kullanarak veya özel karakter desteğiyle yazdırıyoruz
        // Not: Bazı konsollarda %c Türkçe karakterlerde sorun çıkarabilir
        printf("%c,\n", alfabe[i]); 
        i++;
    }

    return 0;
}