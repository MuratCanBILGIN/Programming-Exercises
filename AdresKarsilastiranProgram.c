#include <stdio.h>

void Karsilastirma(int x, int y)
{

    printf("\n");
    printf("%p\n",&x);
    printf("%p\n",&y);

    if(&x > &y)
    {

        printf("%d",x);

    }else
    {

        printf("%d",y);

    }

}

int main()
{
    int Sayi1;
    int Sayi2;

    printf("Iki esit olmayan sayi giriniz: ");
    scanf("%d %d",&Sayi1,&Sayi2);

    Karsilastirma(Sayi1,Sayi2);


    return 0;
}