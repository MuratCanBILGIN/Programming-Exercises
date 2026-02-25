#include <stdio.h>
#include <string.h>

typedef union ortak
{
    int x;
    char y[4];
}bellek;

int main()
{

    bellek veri;

    strcpy(veri.y,"can");

    printf("%s\n",veri.y);

    veri.x = 1;

    printf("%d\n",veri.x);
    printf("%s\n",veri.y);
    printf("%p\n",&veri.x);
    printf("%p\n",&veri.y);




    return 0;
}