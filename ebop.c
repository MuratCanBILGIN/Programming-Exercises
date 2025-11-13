#include <stdio.h>

int main()
{
    int a,b;
    int z;

    printf("0'dan farkli a>b seklinde iki sayi giriniz:");
    scanf("%d %d", &a, &b);

    while(a==0 || b==0 || a<b)
    {
        printf("lutfen 0 olmayan, a>b seklinde sayilar giriniz:\n");
        scanf("%d %d", &a,&b);
    }

    while(a/b != 0)
    { 
        if(a%b==0)
    { 
        printf("Obeb: %d",b);
        break;
    }else{ 
      z = a%b;
      a=b;
      b=z;
      if(b==0)
      {
        printf("Obeb: %d",z);
        break;
      }
    }
    }

    return 0;
}