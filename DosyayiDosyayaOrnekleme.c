#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya1, *dosya2 = NULL;
    long DosyaBoyutu = 0;
    char *tampon;

    dosya1 = fopen("dosyacigim.txt", "rb");

    if(dosya1 == NULL)
    {
        return 1;
    }

    fseek(dosya1, 0, SEEK_END);
    DosyaBoyutu = ftell(dosya1);
    rewind(dosya1);

    tampon = (char *)malloc(sizeof(char) * DosyaBoyutu);
    if(tampon == NULL)
    {
        fclose(dosya1);
        return 1;
    }

    fread(tampon, 1, DosyaBoyutu, dosya1);
    
    dosya2 = fopen("Dosyacigin.txt", "wb");
    if(dosya2 != NULL)
    {
        fwrite(tampon, 1, DosyaBoyutu, dosya2);
        fclose(dosya2);
    }

    free(tampon);
    fclose(dosya1);

    return 0;
}