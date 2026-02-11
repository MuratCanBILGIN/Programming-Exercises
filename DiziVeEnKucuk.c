#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *pointer;
    int *BasePointer;

    int GirilenSayi;
    int Kontrol;
    int EnKucuk;
    int *EnkucukPointer;


    srand(time(NULL));

    printf("Dizi boyutu icin bir tamsayi giriniz:");
    scanf("%d", &GirilenSayi);

    pointer = (int*) malloc(GirilenSayi * (sizeof(int)));

    if(pointer == NULL)
    {
        printf("Yer ayrilmadi!");

        return 1;
    }

    BasePointer = pointer;

    for(int i = 0; i < GirilenSayi; i++)
    {
        *pointer = rand();
        printf("Adres: %p, Deger: %d\n",pointer,*pointer);
        pointer++;
    }

    pointer = BasePointer;
    Kontrol = *pointer;
    EnKucuk = *pointer;
    EnkucukPointer = pointer;

    for(int j = 0; j < GirilenSayi; j++)
    {
        if(*pointer < Kontrol)
        {
            Kontrol = *pointer;
            EnKucuk = *pointer;
            EnkucukPointer = pointer;

        }
        pointer++;
    }

    printf("En Kucuk Adres: %p, Deger: %d\n",EnkucukPointer,EnKucuk);

    free(BasePointer);

    return 0;
}