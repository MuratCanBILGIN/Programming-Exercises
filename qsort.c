#include <stdio.h>
#include <stdlib.h>
#include <string.h>

sinama(a, b)
int *a, *b;
{

    return(*a - *b);

}

karsilastir(ktr1, ktr2)
char **ktr1, **ktr2;
{

    return(strcmp(*ktr1, *ktr2));

}

int main()
{
    int k;

    int sinama(int *, int *), karsilastir(char **, char **);

    int A[10] = {62, 48, 23, 31, 19, 27, 3, 89, 92, 1};

    char *B[6] = {"mine", "alev", "sibel", "emine", "muge", "aysen"};


    qsort(A, 10, sizeof(int), sinama);

    qsort(B, 6, sizeof(B[0]), karsilastir);


    for(k = 0; k < 10; k++)
    printf("A[%d] = %d\n", k, A[k]);
    printf("\n");

    for(k=0; k<6; k++)
    printf("B[%d] = %s\n", k, B[k]);



    return 0;
}

