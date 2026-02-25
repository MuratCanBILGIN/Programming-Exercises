#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef union alan
{
int A[20];
float B[10];
}Veri;

int main()
{
    Veri x;

    int i;
    int rastgelesayi;

    srand(time(NULL));

    for(i = 0; i < 20; i+=2)
    {
        x.A[i] = rand() % 101;

        if(i<10)
        {
        x.B[i+1] = rand() % 101;
        }
    }

    for(int j = 0; j < 20; j+=2)
    {
       printf("%d\n", x.A[j]);
       if(j<10)
       {
        printf("%d\n", x.B[j+1]);
       }
        
    }


    return 0;
}