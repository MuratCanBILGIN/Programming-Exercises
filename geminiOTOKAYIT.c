#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define VUR printf("\nDevam icin bir tusa basiniz...\n"); getch();
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
} KAYIT;

KAYIT oto[MAX] = {0};

/* Fonksiyon Prototipleri */
int ver();
void goster(int kno);
int varmi(char isim[], char soyisim[]);

/* Menü Fonksiyonu */
int menuden_sec()
{
    int i;
    char *menu[7] = {"[1]...OTOMOBIL EKLEME",
                     "[2]...OTOMOBIL ARAMA",
                     "[3]...OTOMOBILLERI LISTELE",
                     "[4]...SATILANI SILME",
                     "[5]...DOSYA'YA SAKLA",
                     "[6]...DOSYA'DAN YUKLE",
                     "[7]...PROGRAMDAN CIK"};

    printf("\n\t*********** MENU ************\n");
    for(int j = 0; j < 7; j++) printf("\t%s\n", menu[j]);

    do {
        printf("\tSECIMINIZ: ");
        scanf("%d", &i);
    } while(i < 1 || i > 7);
    return i;
}

/* Boş indis bulur */
int ver()
{
    for(int i = 0; i < MAX; i++) {
        if(oto[i].ad[0] == '\0') return i;
    }
    return -1;
}

/* Kayıt Ekleme */
void kayit_ekle()
{
    int indis;
    char kr;
    do {
        indis = ver();
        if(indis < 0) {
            printf("Liste Dolu!\n");
            return;
        }

        printf("\nSahibinin ADI : "); scanf("%10s", oto[indis].ad);
        printf("Sahibinin SOYADI: "); scanf("%20s", oto[indis].soyad);
        printf("Marka           : "); scanf("%10s", oto[indis].marka);
        printf("Tip             : "); scanf("%10s", oto[indis].tip);
        printf("Model (Yil)     : "); scanf("%d", &oto[indis].model);  // & eklendi
        printf("Renk            : "); scanf("%10s", oto[indis].renk);
        printf("Satis Fiyati    : "); scanf("%lu", &oto[indis].fiyat); // & eklendi

        printf("\nBaska kayit yapacak misiniz? (E/H): ");
        kr = getch();
    } while(kr == 'E' || kr == 'e');
}

/* Arama Fonksiyonu */
void arama()
{
    char marka[11];
    int bulundu = 0;
    printf("Aranacak Marka: "); scanf("%10s", marka);

    for(int k = 0; k < MAX; k++) {
        if(oto[k].ad[0] != '\0' && strcmp(oto[k].marka, marka) == 0) {
            goster(k);
            bulundu = 1;
        }
    }
    if(!bulundu) printf("Aranan markada arac bulunamadi.\n");
    VUR;
}

void listele()
{
    for(int k = 0; k < MAX; k++) {
        if(oto[k].ad[0] != '\0') goster(k);
    }
    VUR;
}

void goster(int kno)
{
    printf("\n--- Arac Bilgisi ---\n");
    printf("Sahibi   : %s %s\n", oto[kno].ad, oto[kno].soyad);
    printf("Marka/Tip: %s / %s\n", oto[kno].marka, oto[kno].tip);
    printf("Model    : %d\n", oto[kno].model);
    printf("Renk     : %s\n", oto[kno].renk);
    printf("Fiyat    : %lu T.L.\n", oto[kno].fiyat);
}

void silme()
{
    char ad[11], soyad[21];
    printf("Silinecek otonun sahibinin ADI: "); scanf("%10s", ad);
    printf("SOYADI: "); scanf("%20s", soyad);

    int indis = varmi(ad, soyad);
    if(indis == -1) {
        printf("Boyle biri bulunamadi!\n");
    } else {
        oto[indis].ad[0] = '\0'; // Mantıksal silme
        printf("Kayit basariyla silindi.\n");
    }
    VUR;
}

int varmi(char isim[], char soyisim[])
{
    for(int k = 0; k < MAX; k++) {
        if(oto[k].ad[0] != '\0') {
            if(strcmp(oto[k].ad, isim) == 0 && strcmp(oto[k].soyad, soyisim) == 0)
                return k;
        }
    }
    return -1;
}

void sakla()
{
    FILE *di = fopen("otolar.dat", "wb");
    if(di == NULL) {
        puts("Dosya acilamadi!");
        return;
    }
    for(int k = 0; k < MAX; k++) {
        if(oto[k].ad[0] != '\0') fwrite(&oto[k], sizeof(KAYIT), 1, di);
    }
    fclose(di);
    printf("Veriler 'otolar.dat' dosyasina saklandi.\n");
    VUR;
}

void yukle()
{
    FILE *di = fopen("otolar.dat", "rb");
    if(di == NULL) {
        puts("Dosya bulunamadi!");
        return;
    }
    
    /* Önce mevcut diziyi temizle */
    memset(oto, 0, sizeof(oto));
    
    int i = 0;
    while(fread(&oto[i], sizeof(KAYIT), 1, di) == 1 && i < MAX) {
        i++;
    }
    fclose(di);
    printf("%d adet kayit yuklendi.\n", i);
    VUR;
}

int main()
{
    while(1) {
        switch(menuden_sec()) {
            case 1: kayit_ekle(); break;
            case 2: arama(); break;
            case 3: listele(); break;
            case 4: silme(); break;
            case 5: sakla(); break;
            case 6: yukle(); break;
            case 7: exit(0);
        }
    }
    return 0;
}