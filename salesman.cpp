#include <iostream>
using namespace std;

int main() {
    string nama;
    double jumlahPenjualan, komisi;

    // Minta masukan nama salesman
    cout << "Masukkan nama salesman: ";
    cin >> nama;

    // Minta masukan jumlah penjualan
    cout << "Masukkan jumlah penjualan: ";
    cin >> jumlahPenjualan;

    // Hitung komisi
    komisi = jumlahPenjualan * 0.10;

    // Tampilkan nama salesman dan besar komisi
    cout << "Nama Salesman: " << nama << endl;
    cout << "Komisi yang diperoleh: " << komisi << endl;

    return 0;
}
