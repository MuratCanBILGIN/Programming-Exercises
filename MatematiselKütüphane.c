#include <stdio.h>
#include <math.h>

int main()
{

    double x;

    double toplam = 0;

    int i;

    printf("Bir sayi giriniz: ");
    scanf("%lf", &x);

    for(i = 0; i <= 4; i++)
    {

        toplam = toplam + pow(x, i);

    }

    printf("E(%.2lf) = %.2lf^4 + %.2lf^3 + %.2lf^2 + %.2lf^1 + %.2lf^0 = %.2lf", x, x, x, x, x, x, toplam);

    return 0;
}