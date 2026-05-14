#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Masukkan jumlah baris: ";
    cin >> a;

    for (int b = a; b >= 1; b--) {
        for (int c = 1; c <= b; c++) {
            cout << c;
        }
        cout << endl;
    }
    return 0;
    }

