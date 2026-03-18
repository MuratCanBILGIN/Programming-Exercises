#include <stdio.h>
#define kupKok kupKokHesapla
#define kareKok kareKokHesapla
#define kareKok_M_kupKok_N(m, n) (kareKokHesapla(m) / kupKokHesapla(n))

double kupKokHesapla(double n){
    if(n==0) return 0;

    double x = n;
    double hata = 0.000001;

    while ((x*x*x -n) > hata || (n - x*x*x) > hata)
    {
        x = ((2.0*x + (n/(x*x))) / 3.0);
    }
    
    return x;
}

double kareKokHesapla(double n){
    if(n < 0) return -1;
    if(n == 0) return 0;

    double x = n;
    double hata = 0.000001;

    while((x*x - n) > hata || (n - x*x) > hata){
        x = ((x + (n / (x) ) ) / 2.0);
    }

    return x;
}

int main(){

    printf("%.2f",kareKok_M_kupKok_N(4,8));

    return 0;
}