#include <stdio.h>

void girilen_metni_birkackez_yazdir(int kackez, char metin[])
{

    int i;

    for(i = 0; i < kackez; i++)
    {

        printf("%s", metin);
        printf("\n");

    }

}

int main()
{
   int sayi;
   char kelime[100];

    printf("Ne yazdiralim: ? ");
    scanf("%s", &kelime);

    printf("Kac kere: ? ");
    scanf("%d", &sayi);

    girilen_metni_birkackez_yazdir(sayi, kelime);

    return 0;
}