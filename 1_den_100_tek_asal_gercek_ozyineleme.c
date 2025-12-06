#include <stdio.h>

   int toplam = 0;

   int tutangac = 0;

   int asal_kontrol(int a)
    {
        int i;

        int asal_mi = 0;

        for(i = 2; i < a; i++)
        {

            if(a % i == 0)
            {

                asal_mi = 0;
                break;
            
            }

            asal_mi = 1;
        }

        if(asal_mi == 1)
        {

        printf("%d\n", a);
        return a;

        }else
        {

        return 0;

        }
    }




    int toplama_fonksiyonu(int n)
    {

        tutangac = asal_kontrol(n);

       

        toplam = toplam + tutangac;

        if(n==100)
        {
            
            return toplam;
        }

        toplama_fonksiyonu(n+1);
    }

int main()
{

    printf("%d", toplama_fonksiyonu(3));
 

    return 0;
}