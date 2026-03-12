#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    FILE *Dosya, *Yazici;
    char karakter;

    if(argc < 2)
    {
        return 1;
    }

    Dosya = fopen(argv[1], "r");
    if(Dosya == NULL)
    {
        return 1;
    }

    Yazici = fopen("LPT1", "w");
    if(Yazici == NULL)
    {
        return 1;
    }

    fprintf(Yazici, "%c%c", 27, '4');

    while((karakter = fgetc(Dosya)) != EOF)
    {
        fputc(karakter, Yazici);
    }

    fprintf(Yazici, "%c%c", 27, '5');

    fputc(12, Yazici);

    fclose(Dosya);
    fclose(Yazici);

    return 0;
}