#include <stdio.h>

typedef struct bitkontrol
{
    unsigned int sekiz: 8;
}bit;

int KontrolFonk(int atama)
{
    bit x;

    int toplam = 0;

    int i;


    x.sekiz = atama;
    
    for(i = 0; i < 8; i++)
    {

        if(x.sekiz & (1 << i))
        {
            toplam = toplam + 1;
        }
    }

    return(toplam % 2 != 0);
    


}

int main()
{
    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);

    printf("%d",KontrolFonk(sayi));

    return 0;
}