#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    FILE *Dosya = NULL;

    if(argc < 2)
    {
        return 1;
    }

    Dosya = fopen("Yazmalik.txt", "w");
    if(Dosya == NULL)
    {
        return 1;
    }


    fprintf(Dosya, "%s",argv[1]);

    fclose(Dosya);


    return 0;
}