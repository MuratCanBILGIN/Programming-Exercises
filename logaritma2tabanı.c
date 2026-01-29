#include <stdio.h>
#include <math.h>

double Taban2Logaritma(double x)
{

    return log(x) / log(2);


}


int main() {
    double sayi;

    printf("Bir sayi giriniz: ");
    scanf("%lf", &sayi);

    printf("Sayinizin 2 tabaninda logaritmik degeri: %lf", Taban2Logaritma(sayi));


    return 0;
}