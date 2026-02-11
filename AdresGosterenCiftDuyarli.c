#include <stdio.h>

int main()
{

    double diziA[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};

    double *isaretci;

    int i;

    isaretci = diziA;

    for(i=0; i < 10; i++)
    {

    printf("%d adres: %p\n",i+1,(isaretci+i)); // Neden 5. elemanı atladığını ve 10.Adresi iki kere yazdırdığını anlamadım.

    }


    return 0;
}