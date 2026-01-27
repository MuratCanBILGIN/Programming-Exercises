#include <setjmp.h>
#include <stdio.h>

jmp_buf baglam;

fonk()
{

    puts("Fonksiyona gelindi...");
    longjmp(baglam, 1);

}

int main()
{

    int x;

    x = setjmp(baglam);

    if(x)
    {

        printf("Yerel olmayan dallanma %d ile yapildi. \n", x);
        exit(x);

    }
    puts("Fonksiyon cagrildi...\n");
    fonk();

    return 0;
}