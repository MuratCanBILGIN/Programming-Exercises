#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int *dizi1 = malloc(3 * sizeof(int));

    int *dizi2 = malloc(3 * sizeof(int));


    if( dizi1 == NULL || dizi2 == NULL)
    {

        printf("Bellek ayrilmadi!");

        return 1;
    }


    dizi1[0] = 10, dizi1[1] = 20, dizi1[2] = 30;

    dizi2[0] = 40, dizi2[1] = 50, dizi2[2] = 60;

    for(int i = 0; i < 3; i++)
    {

        printf("%d, ", dizi1[i]);

    }

    dizi1 = realloc(dizi1, 6 * sizeof(int));

    memcpy(dizi1 + 3, dizi2, 3 * sizeof(int));

    printf("\n");

    for(int i = 0; i < 6; i++)
    {

        printf("%d, ", dizi1[i]);

    }

    free(dizi1);
    free(dizi2);

    return 0;
}