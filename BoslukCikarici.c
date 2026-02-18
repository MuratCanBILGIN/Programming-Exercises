#include <stdio.h>
#include <ctype.h>
#include <string.h>

void Cikartici(char *pointer)
{

    int i = 0;

    int j = 0;

    while(pointer[i] != '\0')
    {

        if(!isspace(pointer[i]))
        {
            pointer[j] = pointer[i];
            j++;
        }

        i++;
    }

    pointer[j] = '\0';

}


int main()
{

    char cumle[100];

    printf("Bir cumle giriniz: ");
    fgets(cumle,sizeof(cumle),stdin);


    Cikartici(cumle);

    printf("%s",cumle);




    return 0;
}