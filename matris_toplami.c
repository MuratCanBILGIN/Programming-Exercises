#include <stdio.h>

int main()
{

    int i, j, row = 2, column = 3;
    int diziA[2][3], diziB[2][3], diziS[2][3];

    for(i = 0; i < row; i++)
    {

        for(j = 0; j < column; j++)
        {
            printf("diziA elemani giriniz: ");
            scanf("%d",&diziA[i][j]);
            printf("\n");
        }

    }

    for(i = 0; i < row; i++)
    {

        for(j = 0; j < column; j++)
        {
            printf("diziB elemani giriniz: ");
            scanf("%d",&diziB[i][j]);
            printf("\n");
        }

    }


    for(i = 0; i < row; i++)
    {

        for(j = 0; j < column; j++)
        {
            diziS[i][j] = diziA[i][j] + diziB[i][j];
            printf("%d + %d = %d\t", diziA[i][j], diziB[i][j], diziS[i][j]);
        }
        printf("\n");
    }

    return 0;
}