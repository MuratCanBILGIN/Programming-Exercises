#include <stdio.h>

#define Epsilon epsilon

double epsilon(double dizi[], int k){
    
    int i;
    double toplam = 0;
    
    for(i = 0; i < k; i++){
        toplam += (dizi[i]-3)*(dizi[i]-3);
    }

    return toplam;
}

int main(){

    double dizi1[5] = {1,2,3,4,5};

    printf("%.2f", Epsilon(dizi1, 5));

    return 0;
}