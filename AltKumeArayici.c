#include <stdio.h>

int main()
{

    int DiziB[100000];

    int DiziK[100000];

    int m;

    int n;

    int HataKontrolSayisi = 1;

    printf("Sirayla buyuk ve kucuk dizilerin boyutunu belirleyin: ");
    scanf("%d %d", &m, &n);

    for(int j = 0; j < m; j++)
    {
    printf("Buyuk dizinin elemanlarini giriniz(sayi olarak): ");
    scanf("%d",&DiziB[j]);
    }

    for(int k = 0; k < n; k++)
    {
    printf("Kucuk dizinin elemanlarini giriniz(sayi olarak): ");
    scanf("%d",&DiziK[k]);
    }

    for(int l = 0; l < n; l++)
    {
    for(int i = 0; i < m; i++)
    {
        HataKontrolSayisi = -1;

        if(DiziK[l] == DiziB[i])
        {
           HataKontrolSayisi = 1;
           break;
            

        }
       
    }

     if(HataKontrolSayisi == -1)
        {break;}

    }


    if(HataKontrolSayisi == 1)
    {
        printf("Alt kumedir!");
    }else
    {
        printf("ALTKUMESI DEGIL!");
    }

    return 0;

}