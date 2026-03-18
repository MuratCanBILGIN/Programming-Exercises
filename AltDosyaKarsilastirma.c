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
    int file;

    baslangic = clock();

    //Cok dusuk miktarda islem farki gostermiyor
    /*char mesaj[] = "Hello World!";
    int file;

    file = open("Merhaba.txt", O_WRONLY | O_CREAT, 0644);

    if( file != -1)
    {
        write(file, mesaj, sizeof(mesaj) - 1);
        close(file);
    }else
    {
        return 1;
    }*/

    file = open("low level bin", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if(file == -1)
    {
        return 1;
    }

    char *data = malloc(1024 * 1024 * 100);


    write(file, data, 1024 * 1024 * 100);
    

    close(file);

    bitis = clock();
    free(data);

    gecen_sure = (double)(bitis - baslangic) / CLOCKS_PER_SEC;

    printf("Programin calisma suresi: %.6f", gecen_sure);


    return 0;
}