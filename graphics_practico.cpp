#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    const int genislik = 40; // Grafiğin maksimum genişliği
    const int yukseklik = 30; // Kaç satır boyunca çizileceği
    const double PI = 3.14159;

    cout << "--- Kosinus Grafigi f(x) = cos(x) ---" << endl;

    for (int i = 0; i < yukseklik; i++) {
        // x değerini radyan cinsinden hesapla (0 ile 2PI arası)
        double x = (double)i / yukseklik * 2 * PI;
        double y = cos(x);

        // Kosinüs değerini (-1, 1) aralığından (0, genislik) aralığına ölçekle
        // Orta nokta (cos=0) genislik/2 olacak.
        int pozisyon = (int)((y + 1) * (genislik / 2));

        // Eksen çizgisi ve grafik noktası için döngü
        for (int j = 0; j <= genislik; j++) {
            if (j == pozisyon) {
                cout << "*"; // Grafik noktası
            } else if (j == genislik / 2) {
                cout << "|"; // Y ekseni (merkez)
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}