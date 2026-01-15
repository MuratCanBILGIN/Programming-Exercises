#include <stdio.h>

int main()
{

    int x, y;

    printf("Bir sayi giriniz: ");
    scanf("%d", &x);

    if(x%2==0)
    {
    printf("cifttir");
    }else
    {
        printf("Tektir");
    }

    return 0;
}