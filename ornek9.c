#include <stdio.h>

int main()
{

    int x;
    int toplam = 1;
    int i;

    printf("Bir sayi giriniz: ");
    scanf("%d", &x);

    for(i = 1; i<=x; i++)
    {
    
    toplam = toplam * i;

    }

    printf("!%d = %d",x ,toplam);

    return 0;
}