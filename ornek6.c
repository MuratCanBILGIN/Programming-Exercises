#include <stdio.h>

int main()
{

    float x;

    printf("Cemberin yaricapini giriniz: ");
    scanf("%f", &x);

    printf("Cemberin alani: %.2f\nCemberin cevresi: %.2f", 3.14*(x*x), 2*3.14*x);

    return 0;
}