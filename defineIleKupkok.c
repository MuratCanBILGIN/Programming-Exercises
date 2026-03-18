#include <stdio.h>
#define kupKok kupKokHesapla

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

int main(){

    printf("%.2f",kupKok(64));

    return 0;
}