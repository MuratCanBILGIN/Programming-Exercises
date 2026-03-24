#include <iostream>
#include <windows.h> // Cursor konumlandırma için

using namespace std;

// İmleci (X,Y) koordinatına ışınlayan fonksiyon
void gotoxy(int x, int y) {
    COORD c = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main() {
    int x = 70;        // Konsolun sağı
    float y = 10;
    float hizY = 0;
    float yercekimi = 0.2;
    float ziplamaGucu = -4;

    // İmleci gizle (Daha temiz görüntü için)
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = false;
    SetConsoleCursorInfo(out, &cursorInfo);

    while (true) {
        // Eski topu sil (Boşluk bırakarak)
        gotoxy(x, (int)y);
        cout << " ";

        // Mantık hesaplama
        x--; 
        hizY += yercekimi;
        y += hizY;

        // Konsolun alt sınırına çarptı mı?
        if (y > 20) {
            y = 20;
            hizY = ziplamaGucu;
        }

        if (x < 0) x = 70;

        // Yeni topu çiz
        gotoxy(x, (int)y);
        cout << "O"; // Top yerine 'O' karakteri

        Sleep(30); // 30ms bekle
    }

    return 0;
}