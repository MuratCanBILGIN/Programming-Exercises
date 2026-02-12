#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int x = rand();

    int *p = &x;

    printf("Baslangic adresi: %p\n",p);

    printf("Yeni adres: %p", (p+5));


    return 0;
}
