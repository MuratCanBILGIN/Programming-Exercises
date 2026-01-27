#include <stdio.h>
#include <string.h>


int main()
{

    char A[] = "fasfşsdkfknasmfnelmafsdfsdnfsödfnsmdf";

    char B[] = "elma";


    char *sonuc = strstr(A, B);

    if(sonuc)
    {

        puts("yay!");

    }

    return 0;
}