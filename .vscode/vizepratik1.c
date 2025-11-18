#include <stdio.h>

int main()
{

    int x;

    printf("Bir sayi giriniz:");
    scanf("%d",&x);

    if( x % 2==0 || x % 5 == 0)
    {
        printf("x 2 ya da 5 in katidir.");
    }else
    {
        printf("x 2 ya da 5 in kati degildir.");
    }

    return 0;
}
