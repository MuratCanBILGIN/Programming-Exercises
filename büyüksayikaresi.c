#include <stdio.h>

// Komut satırından aktarılan iki gerçel sayıdan büyük olanının karesini ekrana yazan program

int x=0, y = 0, z;

fonk(int a, int b)
{

    if(a >= b)
    {
        printf("%d", a*a);
    }else{
            printf("%d", b*b);
         }

    return a,b;
}

int main()
{

    printf("Iki sayi giriniz:");
    scanf("%d %d", &x, &y );

    z = fonk(x,y);

    return 0;
}