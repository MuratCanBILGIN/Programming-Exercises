#include <stdio.h>

typedef struct yapi
{
    unsigned char durum: 8;
}kontrol;

int main()
{

    kontrol veri = {0};
    int tutucu;
    int kontrol;
    int i = 0;

    printf("Bir pozitif tamsayi giriniz: (Max 192): ");
    scanf("%d",&tutucu);

    veri.durum = (unsigned char)tutucu;


    for(i; i < 7; i++)
    {
        kontrol = veri.durum & (1 << i);

        switch (i)
        {
        case 0:
            if(kontrol)
            {}
            else
        {
            printf("Veri hazir degil\n");
        }
            break;

        case 1:
            if(veri.durum & (1 << i))
        {
            printf("Ezme hatasi\n");
        }
            break;

        case 2:
            if(veri.durum & (1 << i))
        {
            printf("Eslik hatasi\n");
        }
            break;

        case 3:
            if(veri.durum & (1 << i))
        {
            printf("Cerceve hatasi\n");
        }
            break;

        case 4:
            if(veri.durum & (1 << i))
        {
            printf("Gonderme Otelemeli Sak. bos\n");
        }
            break;

        case 5:
            if(veri.durum & (1 << i))
        {
            printf("Gonderme Tamponu bos\n");
        }
            break;

        case 6:
            if(veri.durum & (1 << i))
        {
            printf("Alarm(break) algilandi\n");
        }
            break;
        
        default:
        printf("Sorun yok");
            break;
        }
    }


    return 0;
}