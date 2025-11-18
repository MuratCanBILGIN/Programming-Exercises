#include <stdio.h>

//This Code Busted. Made this when i didnt know how switch-case worked. Chars dont work inside switch parameter control, only integer like number based
//variables.
,

wdasdasd

int main()
{
    char isim[50];

    printf("birsey yaz");
    scanf("%s", &isim);

    switch(isim)
    {
        case "Murat":
            printf("Bu benim ismim");
            break;

        default:

        printf("Bu ne?");


    }

    return 0;
}