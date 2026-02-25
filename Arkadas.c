#include <stdio.h>
#include <stdio.h>

typedef struct 
{
    char isim[50];
    float boy;
    float kilo;
}ARKADAS;

int main()
{


    ARKADAS birinci;

    strcpy(birinci.isim, "Can");

    birinci.boy = 1.78;

    birinci.kilo = 78;

    printf("%s, %.2f, %.2f",birinci.isim, birinci.boy, birinci.kilo);







    return 0;
}