#include <stdio.h>

int Gonderici(char *x, char *y)
{

    if(x == y)
    {

        return 0;

    }else if (x > y)
    {
        return 1;
    }else
    {
        return -1;
    }
    


}

int main()
{

    char Sembol1;
    char Sembol2;

    printf("Iki karakter giriniz: ");
    scanf("%c %c", &Sembol1, &Sembol2);

    int sonuc = Gonderici(&Sembol1,&Sembol2);

    printf("%d",sonuc);


    return 0;
}