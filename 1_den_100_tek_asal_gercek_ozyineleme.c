#include <stdio.h>

int toplam;

int tek_asal_mi(int n)
{

    int a;

    if(n>100)
    {

        return toplam;
    }

    for(a = 2; a < n; a++)
    {

        if(n % a == 0)
        {

            break;

        }

    }

    int toplam = tek_asal_mi(n+1);

}


int main()
{

    int z;

    z = tek_asal_mi(3);

    printf("%d",toplam);

    return 0;
}