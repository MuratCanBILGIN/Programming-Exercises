#include <stdio.h>

struct A
{
    char kr1;
    char kr2;
    int ks;
};

struct B
{
    char tr1;
    int ts;
    char tr2;
};


int main()
{


    printf("Struct A: %d\n",sizeof(struct A));
    printf("Struct B: %d",sizeof(struct B));





    return 0;
}