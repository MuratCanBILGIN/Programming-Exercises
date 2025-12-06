#include <stdio.h>
#include <conio.h>

rekursif(k)
int k;
{
    if(k<1) return;
    rekursif(k-1);
    printf("Gelen sayi: %d\n", k);
    

}

int main()
{

    rekursif(4);
    getch();

    return 0;
}