#include <stdio.h>

void Transpozon(int m, int n, int Dizi[100][100])
{
   
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {

            printf("%d ", Dizi[j][i]);

        }

        printf("\n");

    }
   
}

int main()
{

    int x, y;

    printf("Matris boyutu giriniz(x,y): ");
    scanf("%d %d", &x,&y);

   
    int diziorjinal[100][100];

    for(int b = 0; b < x; b++)
    {

    for(int n = 0; n < y; n++)
    {

    printf("Bir dizi giriniz: ");
    scanf("%d",&diziorjinal[b][n]);

    }

    }

    Transpozon(x,y,diziorjinal);

    

    return 0;
}