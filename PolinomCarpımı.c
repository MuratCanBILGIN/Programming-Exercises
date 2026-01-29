#include <stdio.h>
#include <math.h>
#include <string.h>

char BirinciPolinom[50];
char ifade1[50];
char taban1[50];
char us1[50];

char IkinciPolinom[50];
char katsayi2[50];
char us2[50];

void PolinomDonusturucu(char Polinom[])
{

    //Katardan gelen veri 'x^'e kadar okunur, parçalanır gerekli değişkenlere sayı biçiminde deoplanır
    char ifade;


    ifade = strtok(Polinom[], "+-");

    // Diğer parçaları döngü ile alıyoruz
    while(ifade != NULL)
    {
        int i;
        for(i = 0; i <3; i++)
        {

        ifade1[i] = ifade;
        
        // Önemli: Sonraki çağrılarda ilk parametre NULL olmalı!
        ifade = strtok(NULL, "+-");

        }
    }

    int j;

    for(j = 0; j < 3; j++)
    {

        ifade = strtok(ifade1[j], "x^");

        while(ifade != NULL)
        {

            taban1[j] = ifade;

            us1[j] = strtok(ifade, " ");

        }

    }


    /*char *durdurulan_yer;
    long sayi1;

    sayi1 = strtol(taban1, &durdurulan_yer, 10);*/
}

int main()
{


   printf("Bir polinom giriniz: ");
   fgets(BirinciPolinom, sizeof(BirinciPolinom), stdin);

    PolinomDonusturucu(BirinciPolinom);

    printf("Bir daha polinom giriniz: ");
   fgets(IkinciPolinom, sizeof(IkinciPolinom), stdin);

    PolinomDonusturucu(IkinciPolinom);

    //Polinomların çarpılması gerçekleştirilir


    return 0;
}