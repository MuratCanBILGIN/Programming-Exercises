#include <stdio.h>

int main()
{

    int oy[3][4], i, k;

    for(i = 0; i < 3; i++)
    {

        for(k = 0; k < 4; k++)
        {

            oy[i][k] = i + k;
            printf("%d ", oy[i][k]);

        }
        printf("\n");
    }

    return 0;
}