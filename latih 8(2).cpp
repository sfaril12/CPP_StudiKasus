#include <iostream>
#include <conio.h>
#include "latih 8.cpp"
using namespace std;

int main() {
    hitung h; // h adalah variabel objek
    int pilih;
    do {
        system("cls");
        cout << "1. Tambah Data " << endl;
        cout << "2. Perulangan For INCREMENT " << endl;
        cout << "3. Perulangan While DECREMENT " << endl;
        cout << "Masukkan pilihan anda ";
        cin >> pilih;
        switch (pilih) {
            case 1: h.tambah(7,8);
                break;
            case 2: h.perulangan_for(5);
                break;
            case 3: h.perulangan_while(5);
                break;
        }
        getch();
    } while (pilih != 5);
    return 0;
}
