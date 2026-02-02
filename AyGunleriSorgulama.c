#include <stdio.h>

int main()
{

    int Aylar[12];

    Aylar[1] = 28;

    int i;

    for(i = 0; i < 12; i++)
    {

        if(i == 1) continue;

        if(i % 2 == 0 && i < 8)
        {
            Aylar[i] = 31;
        }else
        {
            Aylar[i] = 30;
        }

        if(i % 2 == 0 && i >= 8)
        {
            Aylar[i] = 30;
        }else
        {
            Aylar[i] = 31;
        }


    }


    int gecici;

    printf("Bir ay seciniz(1-12): ");
    scanf("%d", &gecici);

    i = gecici - 1;

    printf("Bu ay: %d gundur.", Aylar[i]);

    return 0;
}