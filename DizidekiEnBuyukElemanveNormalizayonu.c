#include <stdio.h>
#include <time.h>
#include <stdlib.h>

float DizidekiEnBuyukSayi(float dizi[][6])
{
    int i,j;

    float EnBuyukSayi = 0;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 6; j++)
        {

            if(dizi[i][j] > EnBuyukSayi)
            {

                EnBuyukSayi = dizi[i][j];

            }

        }


    }

    return EnBuyukSayi;

}

void Normalize(float dizi[][6], float(*islem)(float dizi[][6]))
{

    float DiziEnBuyugu = islem(dizi);
    if (DiziEnBuyugu == 0) return;

    int x,y;

    for(x = 0; x < 4; x++)
    {
        for(y = 0; y < 6; y++)
        {

            dizi[x][y] = dizi[x][y] / DiziEnBuyugu;

        }

    }

}

void AsilFonksiyon(float dizi[4][6], float (*islem1)(float[][6]), void (*islem2)(float[][6], float (*)(float[][6])))
{

    islem2(dizi, islem1);

    int x,y;

    printf("Normalize Dizi: ");

    for(x = 0; x < 4; x++)
    {
        for(y = 0; y < 6; y++)
        {

            printf("%.2f, ", dizi[x][y]);
        }

        printf("\n");
    }

}

int main()
{

    srand(time(NULL));

    printf("Dizi:");

    int i, j;

    float Dizi[4][6];

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 6; j++)
        {
        float rastgelesayi = (rand() % 21) + 5;

        Dizi[i][j] = rastgelesayi;

        printf(" %.2f,", Dizi[i][j]);
        }
        printf("\n");
    }



    AsilFonksiyon(Dizi, DizidekiEnBuyukSayi, Normalize);


    return 0;
}