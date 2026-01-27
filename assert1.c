#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

main()
{

    int a;

    while(1)
    {

        printf("BIR SAYI GIRIN: ");
        scanf("%d", &a);
        assert(a != 10);
        printf("Karesi = %d\n", a*a);

    }

    return 0;
}