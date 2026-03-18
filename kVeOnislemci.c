#include <stdio.h>
#define K 1

int main(){

    #if K != 1
        #error "Hata: K degeri 1 olmalidir! derleme durduruldu."
    #endif

    printf("%d", K);

    return 0;
}