#include <stdio.h>
#include <stdlib.h>

int FarkliKarakterBulma(char *word, int size)
{

   int farklisayisi = 0;

    for(int i = 0; i < size; i++)
    {
    
        int bulundu = 0;

        for(int j = 0; j < i; j++)
        {
            if(word[i] == word[j])
            {
                bulundu = 1;
                break;
            }

        }

        if(bulundu == 0)
        {
            farklisayisi++;
        }
        
    }

    return farklisayisi;


}

int main()
{


    char kelime[100];

    int boyut = 0;

    printf("Bir kelime giriniz: ");
    scanf("%s",kelime);

    while(kelime[boyut] != '\0')
    {
        boyut++;
    }

    printf("%d",FarkliKarakterBulma(kelime, boyut));



    return 0;
}