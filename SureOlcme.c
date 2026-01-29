#include <stdio.h>
#include <time.h>

int main()
{

    clock_t start = clock();

    for(int i = 0; i <1000000000; i++){}

    clock_t finish = clock();
    double sure = (double)(finish - start)/CLOCKS_PER_SEC;

    printf("Programin calisma suresi: %lf", sure);

    return 0;
}