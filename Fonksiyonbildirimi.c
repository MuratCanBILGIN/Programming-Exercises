#include <stdio.h>

int fonk(float a,float b);

int main()
{
    int c;
    int d;

    printf("Iki sayi giriniz:");
    scanf("%d %d", &c, &d);

    int sonuc = fonk(c,d);

    printf("%d",sonuc);
}

int fonk(float a,float b)
{
    int z = a+b;

    return z;
}

