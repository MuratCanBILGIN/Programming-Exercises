#include <stdio.h>

// Changed loop limit to 10 to match the actual matrix size
void vektor(float dd[], float mm[10][10]) {
    float toplam;
    register int satir, sutun;

    for(satir = 0; satir < 10; satir++) {
        toplam = 0;
        for(sutun = 0; sutun < 10; sutun++) {
            toplam += mm[satir][sutun];
            // Showing progress
            printf("Row %d, Col %d: Value=%.1f, Running Total=%.1f\n", satir, sutun, mm[satir][sutun], toplam);
        }
        // Assign the final sum to the vector after the inner loop finishes
        dd[satir] = toplam;
    }
}

int main() {
    // Array sizes now match the function logic
    float A[10]; 
    float B[10][10];

    // Initialize B with some values (1 to 10 in each row)
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            B[i][j] = j + 1;
        }
    }

    vektor(A, B);

    printf("\n--- Final Results ---\n");
    for(int i = 0; i < 10; i++) {
        printf("Sum of Row %d: %.1f\n", i, A[i]);
    }

    return 0;
}