#include <stdio.h>

int main()
{

    int i, j, k, row = 2, column = 3;
    int diziA[2][3], diziB[2][3], diziM[2][3];

    for(i = 0; i < row; i++)
    {

        for(j = 0; j < column; j++)
        {

            printf("diziA icin eleman girin:\n");
            scanf("%d", &diziA[i][j]);

        }

    }

    for(i = 0; i < row; i++)
    {

        for(j = 0; j < column; j++)
        {

            printf("diziB icin eleman girin:\n");
            scanf("%d", &diziB[i][j]);

        }

    }

    for(i = 0; i < row; i++)
    {

        for(j = 0; j < column; j++)
        {

            for(k = 0; k < j; k++)
            {
            
            diziM[i][j] = diziA[i][k] * diziB[k][j];

            printf("%d\t", diziM[i][j]);

            }
            printf("\n");
        }

    }

    return 0;
}