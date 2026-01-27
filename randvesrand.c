#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

    srand(time(NULL));

    int RastgeleSayi = rand() %100;

    printf("Uretilen sayi: %d", RastgeleSayi);

    return 0;
}