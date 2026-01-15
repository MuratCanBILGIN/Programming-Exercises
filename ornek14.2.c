#include <stdio.h>

int main()
{

    int diziA[2][2] = {{1,2},{3,4}};
    int diziB[2][2] = {{5,6},{7,8}};
    int toplam[2][2];

    int i,j;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {

            toplam[i][j] = diziA[i][j] + diziB[i][j];

            printf("%d ", toplam[i][j]);
        }

        printf("\n");

    }

    return 0;

}