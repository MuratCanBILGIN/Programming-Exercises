#include <stdio.h>

int main()
{

    int deg, *isaret;

    deg = 888;

    isaret = &deg;

    printf("degisken adresi: %p\n", isaret);
    printf("degisken degeri: %d\n", *isaret);
    printf("degisken adresi: %p\n", &deg);
    printf("degisken degeri: %d\n", deg);


    return 0;
}