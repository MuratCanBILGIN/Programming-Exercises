#include <stdio.h>
#include <signal.h>

 void yenisi(int i)
    {

        puts("\nSIFIRA BOLME VAR !\nPROGRAM SONU (e/h) ?");
        if(getch() == 'e')
        exit(1);
        signal(SIGFPE, yenisi);
        
    }

int main()
{

    int x, y;
    float f;

    signal(SIGFPE, yenisi);
    do
    {

        printf("IKI  SAYI GIRIN : ");
        scanf("%d, %d", &x, &y);
        f = (float) x/y;
        printf("%d/%d = %f\n", x, y, f);
        puts("Tekrar Edecek misin (e/h) ?");

    }while(getch() != 'h');
    

    return 0;

}