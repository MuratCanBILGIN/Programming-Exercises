#include <stdio.h>

typedef enum CANLILAR
{
    memeliler, surungenler, kuşlar, amfibiler, bocekler
}x;

int main()
{
    char atmaca = kuşlar;
    char rakun = memeliler;
    char geko = surungenler;
    char kurbağa = amfibiler;
    char kelebek = bocekler;

    int i = 0;

    x y[5] = {memeliler, surungenler, kuşlar, amfibiler, bocekler};

    printf("Bir canli turu secin:  memeliler(1), surungunler(2), kuşlar(3), amfibiler(4), bocekler(5)");
    scanf("%d",&i);

    printf("%s",y[i]);



    return 0;
}