#include <stdio.h>

int main()
{

    int x;

    printf("Bir sayi giriniz: ");
    scanf("%d", &x);

    if(x%3==0 || x%7==0)
    {

    printf("x 3 veya 7 ye bolunebilir");

    }else
    {

    printf("x 3 veya 7 ye bolunemez");

    }

    return 0;
}