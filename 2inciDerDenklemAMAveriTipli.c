#include <stdio.h>
#include <math.h>

typedef struct
    {
    float a;
    float b;
    float c;
    }IkinciDereceDenklem;

    typedef struct 
    {
        float kok1;
        float kok2;
    }kok;

void IkinciDerDenklemHesaplayici(kok *sonuc)
{
    

    IkinciDereceDenklem x;

    float Delta;


    printf("Bir a katsayisi giriniz: ");
    scanf("%f", &x.a);

    printf("Bir b katsayisi giriniz: ");
    scanf("%f", &x.b);

    printf("Bir c katsayisi giriniz: ");
    scanf("%f", &x.c);

    Delta = x.b*x.b- 4 * x.a * x.c;

    if(Delta == 0)
    {
        sonuc->kok1 = (-x.b) / (2 * x.a);
        sonuc->kok2 = sonuc->kok1;
        printf("Ortak kok: %.2f",sonuc->kok1);
    }else if(Delta < 0)
    {
        printf("Kok Yoktur");
    }else
    {
    sonuc->kok1 = (-x.b + sqrt(Delta))/ (2 * x.a);
    sonuc->kok2 = (-x.b - sqrt(Delta))/ (2 * x.a);
    
    printf("Birinci kok: %.2f\nIkinci kok: %.2f", sonuc->kok1, sonuc->kok2);
    }
}

int main()
{
    kok sonucum;

    IkinciDerDenklemHesaplayici(&sonucum);


    return 0;
}