#include <stdio.h>


int MatrisDeterminantiHesaplayici(int Dizi2B[4], int Dizi3B[9])
{

    if(Dizi2B != NULL)
    {
    int determinant2B = (Dizi2B[0] * Dizi2B[3]) - (Dizi2B[1] * Dizi2B[2]);


    return determinant2B;
    }

    if(Dizi3B != NULL)
    {
    int determinant3B = ((Dizi3B[0] * Dizi3B[4] * Dizi3B[8]) + (Dizi3B[3] * Dizi3B[7] * Dizi3B[2]) + (Dizi3B[6] * Dizi3B[1] * Dizi3B[5]) )-

    ((Dizi3B[2] * Dizi3B[4] * Dizi3B[6]) + (Dizi3B[5] * Dizi3B[7] * Dizi3B[0]) + (Dizi3B[8] * Dizi3B[1] * Dizi3B[3]));


    return determinant3B;
    }

}

int main()
{
    int dizi2B_Deneme[4] = {1,2,3,4};

    int dizi3B_Deneme[9] = {1,2,3,4,5,6,7,8,9};


    printf("%d\n", MatrisDeterminantiHesaplayici(dizi2B_Deneme, NULL));

    printf("%d", MatrisDeterminantiHesaplayici(NULL, dizi3B_Deneme));




    return 0;
}