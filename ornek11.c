#include <stdio.h>

int main()
{

    int i;
    int j;
    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    for(i = 1; i <= sayi; i++)
    {

        for(j = 0; j < i; j++)
        {

            printf("*");

        }

        printf("\n");

    }

    return 0;
}