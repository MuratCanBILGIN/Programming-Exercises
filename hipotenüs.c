#include <stdio.h>
#include <math.h>

int hipotenus(int x, int y)
{
    return sqrt(pow(x,2) + pow(y,2));

}


int main()
{

    int a;

    int b;

    printf("Lutfen sirayla ucgenin kisa ve uzun kenarlarini giriniz: ");
    scanf("%d %d",&a,&b);

    printf("Hipotenus: %d", hipotenus(a, b));


    return 0;
}