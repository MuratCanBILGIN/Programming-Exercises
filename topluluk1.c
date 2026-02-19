#include <stdio.h>

struct tarih
{
    int gun;
    int ay;
    int yil;
}bugun;

int main()
{
    struct tarih dg;

    int yas;

    puts("Dogum gunu(gun, ay, yil)?");
    scanf("%d, %d, %d", &dg.gun, &dg.ay, &dg.yil);

    if((bugun.ay == dg.ay && bugun.gun >= dg.gun)||(bugun.ay > dg.ay))
    {
        yas = bugun.yil-dg.yil;
    }else
    {
        yas = bugun.yil-dg.yil-1;
    }

    if(yas > 15 && yas < 25)
    {
        printf("%d yasindasiniz ve gencsiniz",yas);
    }else
    {
        printf("%d yasindasiniz",yas);
    }



    return 0;
}