#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    while (true) {
        cout << "Masukkan Bilangan Pertama: ";
        cin >> num1;
        cout << "Masukan Bilangan Kedua:";
        cin >> num2;

        // Jika kedua bilangan adalah 0, program berhenti
        if (num1 == 0 && num2 == 0) {
            break;
        }

        int jumlah = num1 + num2;
        double ratarata = (num1 + num2) / 2 ;
        int perkalian = num1 * num2;

        if (jumlah > 200) {
            cout << "*" << endl;
        } else {
            cout << "Jumlah: " << jumlah << endl;
            cout << "Rata-rata: " << ratarata << endl;
            cout << "Hasil Perkalian: " << perkalian << endl;
        }
    }
    
    return 0;
}
