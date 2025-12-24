#include <stdio.h>

void hsirala(int dizi[], int sol, int sag)
{

    register int k, j;
    int ortadaki, gecici;

    k = sol;
    j = sag;
    
    ortadaki = dizi[(sol + sag)/2];

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
    int i;

    int sayi[10] = {1, 23, 44, 22, 54, 22, 95, 42, 64, 10};

    hsirala(sayi, 0, 9);

    for(i = 0; i < 10; i++)
    {

        printf("%d ", sayi[i]);

    }

    return 0;

}