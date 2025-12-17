#include <stdio.h>

void kabarcik_siralama(int dizi[], int n)
{
    int i, j, gecici;

    for(i = n - 1; i > 0; i--)
    {
        for(j = 0; j < i; j++)
        {
            if(dizi[j] > dizi[j + 1])
            {
                gecici = dizi[j];

                dizi[j] = dizi[j + 1];

                dizi[j + 1] = gecici;
            }
        }
    }

}

int main()
{
    int dizikarmasik[10] = {12, 33, 54, 2, 44, 22, 19, 91, 4, 10};

    int a = 10;

    int i = 0;

    for(i; i < 10; i++)
    {
        
    printf("%d ", dizikarmasik[i]);
    
    }

    kabarcik_siralama(dizikarmasik, a);

    printf("\n");

    for(i = 0; i < 10; i++)
    {
        
    printf("%d ", dizikarmasik[i]);
    
    }

    return 0;
}