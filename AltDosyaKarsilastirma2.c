#include <stdio.h>
#include <time.h>
#include <fcntl.h>   // open, O_WRONLY, O_CREAT için
#include <io.h>  // write, close için
#include <process.h>
#include <stdlib.h>

int main()
{
    clock_t baslangic, bitis;
    double gecen_sure;

    baslangic = clock();

    /*char mesaj[] = "Hello World!";
    FILE *file;

    file = fopen("Hello.txt", "w");

    if( file == NULL)
    {
        return 1;
    }

    fprintf(file, "%s", mesaj);

    fclose(file);*/

    FILE *file;
    char *tampon = NULL;

    file = fopen("high level bin.txt", "wb");
    if(file == NULL)
    {
        return 1;
    }

    tampon = malloc(1024 * 1024 * 100);

    for(int i = 0; i < 100; i++)
    {
        fwrite(tampon, 1, 1024 * 1024, file);
    }

    fclose(file);
    free(tampon);

    bitis = clock();

    gecen_sure = (double)(bitis - baslangic) / CLOCKS_PER_SEC;

    printf("Programin calisma suresi: %.6f", gecen_sure);


    return 0;
}