#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define VUR printf("Devam icin H.H. Tusa Bas...\n"); getch();
#define MAX 100

typedef struct kayit
{
    char ad[11];
    char soyad[21];
    char marka[11];
    char tip[11];
    int model;
    char renk[11];
    unsigned long int fiyat;
}KAYIT;

KAYIT oto[MAX] = {0};

/*menuyu ekrana cikarir ve secimi cagirana gonderir*/
menuden_sec()
{
    int i;
    
    char *menu[7] = {"[1]...OTOMOBIL EKLEME",
                     "[2]...OTOMOBIL ARAMA",
                     "[3]...OTOMONILLERI LISTELE",
                     "[4]...SATILANI SILME",
                     "[5]...DOSYA'YA SAKLA",
                     "[6]...DOSYA'DAN YUKLE",
                     "[7]...PROGRAMDAN CIK"};

    puts("\t***********MENU************");
    for(i = 0; i < 7; i++)
    printf("\t%s\n",menu[i]);

    do
    {
        printf("\tSECIMINIZ: ");
        scanf("%ld",&i);
    }while(i < 1 || i > 7);
    return i;
}

kayit()
{
    int indis;
    char kr;

    do
    {
        indis = ver();
        if(indis < 0)
        {
            printf("Liste Dolu\nKayit Yapamam\n");
            return;
        }

        /* sorgulama*/

        printf("Sahibinin...\nADI   :");
        scanf("%10s", oto[indis].ad);

        printf("SOYADI   : ");
        scanf("%20s", oto[indis].soyad);

        printf("Otomobilin ...\nMARKASI  :");
        scanf("%10s", oto[indis].marka);

        printf("TIPI     : ");
        scanf("%10s", oto[indis].tip);

        printf("MODELI   : ");
        scanf("%4d", oto[indis].model);

        printf("RENGI    : ");
        scanf("%10s", oto[indis].renk);

        printf("SATIS FIYATI :");
        scanf("%lu", oto[indis].fiyat);

        printf("Baska kayit yapacak misin? (E/H)\n");
        kr = getch();

    }while(kr == 'E' || kr == 'e');
    
}

/*anlamli kayit olamayan dizi elemaninin indisini verir*/
/*ver()
{
    int bos;
    for(bos = 0; oto[bos].ad[0] && bos < MAX; bos++)
    {
        if(bos < MAX)
        {
            return bos;
        }else
        {
            return -1;
        }
    }
}*/

int ver()
{
    for(int i = 0; i < MAX; i++) {
        if(oto[i].ad[0] == '\0') return i;
    }
    return -1;
}

/*belirli markayi listeler*/
arama()
{
    int k;
    char marka[10];

    printf("Hangi Marka? ");
    scanf("%9s",marka);

    for(k = 0; k < MAX; k++)
    {
        if(oto[k].ad[0])
        {
            if(!strcmp(oto[k].marka, marka))
            {
                goster(k);
                VUR;
            }
        }
    }
}

/*butun kayitlari listeler*/
listele()
{
    int k;
    for(k = 0; k < MAX; k++)
    {
        if(oto[k].ad[0])
        {
            goster(k);
            VUR;
        }
    }
}

/*tek bir kayit ekrana yazar*/
goster(int kno)
{
    printf("Sahibinin...\nADI    : %s\n", oto[kno].ad);
    printf("SOYADI   : %s\n", oto[kno].tip);
    printf("Otomobilin...\nMarkasi   : %s\n", oto[kno].marka);
    printf("Tipi     : %s\n", oto[kno].tip);
    printf("Modeli   : %d\n", oto[kno].model);
    printf("Rengi    : %s\n", oto[kno].renk);
    printf("Kac lira : %lu T.L. \n\n", oto[kno].fiyat);
}

/*kayit silmek icin kullanilir*/
silme()
{
    int k, indis;
    char ad[11], soyad[21];
    printf("Silmek istediginiz otonun sahibinin, \nADI  : ");
    scanf("%10s", ad);
    printf("SOYADI  : ");
    scanf("%20s", soyad);

    indis = varmi(ad, soyad);
    if(indis == -1)
    {
        printf("Boyle biri yok !\nSilemedim.\n");
        return;
    }else
    {
        puts("Sildim...\n");
        oto[indis].ad[0] = '\0';
    }
}

/*bir kayiti dizide arar, varsa indisini gonderir*/
varmi(char isim[], char soyisim[])
{
    int k;

    for(k = 0; k < MAX; k++)
    {
        if(oto[k].ad[0])
        {
            if(!strcmp(oto[k].ad, isim) && !strcmp(oto[k].soyad, soyisim))
            {
                return k;
            }
        }
    }

    return -1;
}

/*diziyi diske/diskete yazar*/
sakla()
{
    FILE *di;
    int k;

    if((di = fopen("otolar.txt","w")) == NULL)
    {
        puts("Dosya acilamadi...\n");
        return;
    }

    puts("Sakliyorum...\n");
    for(k = 0; k < MAX; k++)
    {
        if(oto[k].ad[0])
        {
            fwrite(&oto[k], sizeof(KAYIT), 1, di);
        }

    }

    fclose(di);
}

/*diskten/disketten kayitlari okur ve diziye ekler*/
yukle()
{
    FILE *di;
    unsigned int tane;
    int k, i;

    if((di = fopen("otolar.txt","r")) == NULL)
    {
        puts("Dosya acilamadi\n");
        return;
    }

    /*kac kayit var*/
    fseek(di , 0, 2);

    tane = ftell(di)/sizeof(KAYIT);

    fseek(di, 0, 0);               /*kayit isaretcisi dosya basina...*/

    puts("Yukluyorum...\n");

    for(k = 0; k < tane; k++)
    {
        i = ver();
        if(i == -1)
        {
            printf("Dizide yer kalmadi !\nYukleyemem.");
            break;
        }
        fread(&oto[i], sizeof(KAYIT), 1, di);
    }
    fclose(di);
}

int main()
{

    int secim;

    while(1)
    {
        secim = menuden_sec();
        switch(secim)
        {
            case 1:
            kayit();
            break;

            case 2:
            arama();
            break;

            case 3:
            listele();
            break;

            case 4:
            silme();
            break;

            case 5:
            sakla();
            break;

            case 6:
            yukle();
            break;

            case 7:
            puts("Gorusuruz...\n");
            exit();
        }

    }

    return 0;
}