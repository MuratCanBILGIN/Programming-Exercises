#include <stdio.h>

int main() {
    #ifdef _WIN32
        printf("Sistem: Windows\n");
        
        #ifdef _WIN64
            printf("Mimari: 64-bit\n");
        #else
            printf("Mimari: 32-bit\n");
        #endif

        #if defined(_MSC_VER)
            printf("Derleyici: Microsoft Visual C++ (Surum: %d)\n", _MSC_VER);
        #endif
        
    #else
        #error "Bu kod sadece Windows sistemlerde derlenebilir!"
    #endif

    return 0;
}