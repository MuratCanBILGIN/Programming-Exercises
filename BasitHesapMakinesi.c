#include <stdio.h>

int main()
{

    int devamkontrol = 0;
    int kontrol = 0;
    int a;
    int b;

    char soru;
    char operat;

    while(kontrol==0)
    {

    printf("iki sayi giriniz: ");
    scanf("%d %d", &a,&b);

     while(b==0)
        {
            printf("b bolme isleminde 0 olamaz, tekrar b sayisi giriniz");
            scanf("%d", &b);
        }

    printf("bir operator giriniz: ");
    scanf(" %c", &operat);

   

    switch (operat)
    {
        case '+':
        printf("%d\n", a+b);
        break;

        case '-':
        printf("%d\n", a-b);
        break;

        case '*':
        printf("%d\n", a*b);
        break;

        case '/':
        printf("%d\n", a/b);
        break;

        default:
        printf("Operator girmediniz\n");
        break;

    }

    devamkontrol = 0;
    while(devamkontrol==0)
    {

    printf("devam etmek ister misiniz ?(E/H):\n");
    scanf(" %c", &soru);

    switch (soru)
    {
    case 'e':
    case 'E':
        devamkontrol = 1;
        break;

    case 'h':
    case 'H':
        devamkontrol = 1;
        kontrol = 1;
        break;
    
    default:
        printf("Lutfen E yada H seklinde cevaplayiniz.");
        break;
    }

    }


    }

    return 0;
}