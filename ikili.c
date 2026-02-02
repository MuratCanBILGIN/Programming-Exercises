#include <stdio.h>

float IkiliArama(float A[], int n, float aranan)
{

    int sol, sag, orta;

    sol = 0;
    sag = n-1;

    while( sol <= sag )
    {

        orta = (sol + sag) / 2;
        if( aranan == A[orta] )
        {
            return orta;

        }else if(aranan > A[orta])
        {
            sol = orta + 1;

        }else
        {
            sag = orta -1;
        }

    }

    return -1;

}

int main()
{
    float dizi[] = {1, 2, 3, 4, 5, 6, 7, 8};

    float n = 8;

    float arama = 3;
    

    if(IkiliArama(dizi, n, arama) != -1)
    {

    printf("Buldu");

    }else
    {

        printf("Bulamadi");
    }


    return 0;
}