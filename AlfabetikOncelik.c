#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

int karsilastrici(char *BirinciKatar, char *IkinciKatar, int Boyut1, int Boyut2)
{

    int i;

    int j;

    int kontrol = 0;

    int karsilastirici1;

    int karsilastirici2;

    int bakici;

    if(Boyut1 >= Boyut2)
    {
        bakici = Boyut1;
    }else
    {
        bakici = Boyut2;
    }

    for(i = 0; i < bakici; i++)
    {

        karsilastirici1 = tolower(BirinciKatar[i]);
        karsilastirici2 = tolower(IkinciKatar[i]);
       
        if(karsilastirici1 == karsilastirici2)
        {
            kontrol = 1;
        }else
        {
            kontrol = 0;

            if(karsilastirici1 < karsilastirici2)
            {
                return -1;
            }else if(karsilastirici1 > karsilastirici2)
            {
                return 1;
            }
            

        }

    }


    if(kontrol == 1)
    {
        return 0;
    }

}

int main()
{

    int birinciboyutu;

    int ikinciboyutu;

    char *katar1;

    char *katar2;

    int sonuc;





    setlocale(LC_ALL, "Turkish");

    printf("Sirayla birinci ve ikinci katarin boyutlarini giriniz: ");
    scanf("%d %d", &birinciboyutu, &ikinciboyutu);

    katar1 = malloc(birinciboyutu + 1);

    katar2 = malloc(ikinciboyutu + 1);

    if(katar1 == NULL || katar2 == NULL)
    {
        return 1;
    }


    printf("Birinci kelimeyi giriniz: ");
    scanf("%s", katar1);

    printf("Ikinci kelimeyi giriniz: ");
    scanf("%s", katar2);



    sonuc = karsilastrici(katar1, katar2, birinciboyutu, ikinciboyutu);

    printf("%d", sonuc);



    free(katar1);
    free(katar2);

    return 0;
}