#include <stdio.h>
#include <math.h>

double Kupkok(double sayi)
{
    if(sayi == 0){
    
    return 0;
}
    int isaret = (sayi > 0) ? 1: -1;

    return isaret * pow(10, log10(fabs(sayi))/3);


}


int main() 
{
    double GirilenSayi;

    printf("Bir sayi giriniz: ");
    scanf("%lf", &GirilenSayi);

    printf("Sayinizin kupkok degeri: %.2lf", Kupkok(GirilenSayi));


    return 0;
}