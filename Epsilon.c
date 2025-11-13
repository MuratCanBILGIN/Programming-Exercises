#include <stdio.h>

int main()
{
    int x = 16;
    int y = 0;

    while(x != y)
    {
    printf("Sayiyi tahmin etmeye calisin: \n");
    scanf("%d",&y);
    }

    printf("Tebrikler dogru tahmin!");

    return 0;
}