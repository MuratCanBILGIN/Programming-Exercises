#include <stdio.h>

hsirala(int dizi[], int sol, int sag)
{
    int i;

    register int k, j;

    int ortadaki, gecici;

    k = sol;

    j = sag;

    ortadaki = dizi[(sol + sag) / 2];

    do
    {
        while(dizi[k] < ortadaki && k < sag) k++;
        while(ortadaki < dizi[j] && j > sol) j--;
        if(k <= j)
        {

            gecici = dizi[k];
            dizi[k] = dizi[j];
            dizi[j] = gecici;
            k++; j--;

        }

    }while(k <= j);
    if(sol < j) hsirala(dizi, sol, j);
    if(k < sag) hsirala(dizi, k, sag);

}


int main()
{
    int sayilar[7] = {1, 15, 42, 32, 22, 81, 11};


    hsirala(sayilar, 1 , 6);


    return 0;
}