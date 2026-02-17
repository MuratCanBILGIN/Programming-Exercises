#include <stdio.h>
#include <stdlib.h>

void KatarArayan(char *katar, char *aranan, int katarboyutu, int arananboyutu)
{

    int i;
    int j;
    int kontrol = 0;


    for(i = 0; i < katarboyutu - arananboyutu; i++)
    {

        if(katar[i] == aranan[0])
        {
            for(j = 0; j < arananboyutu; j++)
            {
                if(katar[i+j] == aranan[j])
                {
                    kontrol = 1;
                }else
                {
                    kontrol = 0;
                    break;
                }
            }
        }

        if(kontrol == 1)
        {
            break;
        }

    }

    if(kontrol == 1)
    {
        printf("buldum");
    }else
    {
        printf("yok bulamadim");
    }



}




int main()
{


    char *metin;

    char *arananmetin;

    int size1;

    int size2;


    printf("Aranacak katarin ve metnin boyutunu girin: ");
    scanf("%d %d",&size1, &size2);

    metin = malloc(size1 + 1);

    arananmetin = malloc(size2 + 1);

        if(metin == NULL || arananmetin == NULL)
    {
        return 1;
    }

    printf("Bir metin ve aranacak metin girin: ");
    scanf("%s %s",metin, arananmetin);


    KatarArayan(metin, arananmetin, size1, size2);

    free(metin);
    free(arananmetin);


    return 0;
}