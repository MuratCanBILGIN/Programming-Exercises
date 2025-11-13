#include <stdio.h>

int main()
{

    int a,b,c,d,e,f,g,h,j,k;
    int z;

    printf("10 adet sayi giriniz:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d", &a,&b,&c,&d,&e,&f,&g,&h,&j,&k);

    z = (a+b+c+d+e+f+g+h+j+k)/10;

    printf("sayilarinizin aritmetik ortalamasi: %d", z);

    return 0;
}