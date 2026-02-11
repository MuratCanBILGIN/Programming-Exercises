#include <stdio.h>

int main()
{   

    int diziA[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *isaretci;

    int i = 0;

    isaretci = diziA;

    for(i; i < 10; i++)
    {

    printf("%d adres: %p\n",*(isaretci + i),(isaretci+i));

    }

    return 0;
}