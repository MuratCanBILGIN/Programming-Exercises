#include <stdio.h>
#include <ctype.h>

void KucuguBuyugeDonusturen(char *pointer)
{
    
    int i = 0;

    while(pointer[i] != '\0')
    {
        if(islower(pointer[i]))
        {
           pointer[i] = toupper(pointer[i]);
        }
        i++;
    }


}

int main()
{

    char katar[100];

    printf("Bir kelime giriniz: ");
    scanf("%s",katar);

    KucuguBuyugeDonusturen(katar);

    printf("%s",katar);


    return 0;
}