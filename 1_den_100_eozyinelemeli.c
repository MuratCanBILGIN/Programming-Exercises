#include <stdio.h>

void toplam_hesaplama()
{

    int a;
    int b;
    int toplam = 3;

    for(a = 4; a < 100; a++)
    {

        toplam = toplam + a;

        for(b = 2; b < a; b++)
        {


            if(a % b == 0)
            {
                toplam = toplam - a;

                break;

            }



        }

    }

    printf("%d", toplam);

    return;
}

int main()
{

    toplam_hesaplama();

    return 0;
}