#include <stdio.h>

int fonk(int us, int taban)
{
    int sonuc = 1;

    printf("Bir dogal sayi taban giriniz:\n");
    scanf("%d", &taban);

    printf("Bir dogal sayi us giriniz:");
    scanf("%d", &us);

    for(int i = 0; i < us; i++)
    {

        sonuc = sonuc * taban;
    }

    printf("%d", sonuc);

}

int main()
{
    int a;
    int b;
    int c;

    c = fonk(a,b);

    return 0;
}