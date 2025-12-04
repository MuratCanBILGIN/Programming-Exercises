#include <stdio.h>


long long faktoriyel(int n)
{
    if(n==0)
    {

        return 1;

    }else
    {

        return n * faktoriyel(n-1);

    }
}

int main()
{
    int kontrol = 0;
    int girdi = 0;
    long long yertutucu = 0;

    do
    {

    printf("pozitif bir sayi giriniz: ");
    scanf("%d", &girdi);
    
    }while(girdi<0);

    yertutucu = faktoriyel(girdi);

    printf("%d! = %lld",girdi,yertutucu);


    return 0;
}