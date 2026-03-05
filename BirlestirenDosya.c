#include <stdio.h>

int main()
{

    FILE *dosya1, *dosya2, *dosya3;
    int sayi1, sayi2;

    dosya1 = fopen("tamsayi1.txt", "r");
    dosya2 = fopen("tamsayi2.txt", "r");
    dosya3 = fopen("tamsayi3.txt", "w");


    if (dosya1 == NULL || dosya2 == NULL || dosya3 == NULL) 
    {
        printf("Dosya acilamadi!");
        return 1;
    }


    /*fscanf(dosya1,"%d",&sayitutucu1);
    fscanf(dosya2,"%d",&sayitutucu2);
    fprintf(dosya3, "%d %d", sayitutucu1, sayitutucu2);*/


    int f1dolu = fscanf(dosya1, "%d", &sayi1);
    int f2dolu = fscanf(dosya2, "%d", &sayi2);

    while(f1dolu != EOF && f2dolu != EOF)
    {
        if(sayi1 <= sayi2)
        {
            fprintf(dosya3, "%d", sayi1);
            f1dolu = fscanf(dosya1, "%d", &sayi1);
        }else
        {
            fprintf(dosya3, "%d", sayi2);
            f2dolu = fscanf(dosya2, "%d", &sayi2);
        }
    }

    while(f1dolu != EOF)
    {
        fprintf(dosya3, "%d", sayi1);
        f1dolu = fscanf(dosya1, "%d", &sayi1);
    }

    while(f2dolu != EOF)
    {
        fprintf(dosya3, "%d", sayi2);
        f2dolu = fscanf(dosya2, "%d", &sayi2);
    }

    fclose(dosya1);
    fclose(dosya2);
    fclose(dosya3);


    return 0;
}