#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Masukan Bilangan Bulat Antara 10 sampai 20: ";
    cin >> a;

    //Looping Sampai Nilai a Antara 10 sampai 20
    while( a < 10 || a > 20){
        cout <<"Bilangan yang Anda Masukan Salah, Silakan Coba Lagi:";
        cin >> a;
    }
        cout <<"====== Selamat Bilangan yang Anda Masukan banar ======"<< endl;
    return 0;
}
