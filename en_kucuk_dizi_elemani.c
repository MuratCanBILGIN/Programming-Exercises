#include <stdio.h>

int enkucukbul(int dizi[])
{
    int i = 0;
    int enkucuk = dizi[i];
    

    for(i; i < 10; i++)
    {

       if(dizi[i] < enkucuk)
       {

        enkucuk = dizi[i];

       }

    }

    return enkucuk;
}

int main()
{
    int z;

    int notdizisi[10] = {23, 56, 34, 12, 22, 67, 98, 87, 88, 85};

    z = enkucukbul(notdizisi);

    printf("En kucuk sayi = %d", z);

    return 0;
}