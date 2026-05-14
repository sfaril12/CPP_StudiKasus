#include <iostream>

using namespace std;

int main(){
    int nilai;
    cout << "masukkan nilai ujian(0-100): ";
    cin >> nilai;

    if (nilai >=75) {
        cout << "selamat anda lulus!"<<endl;
    }
    else {
        cout<< "maaf,silakan coba lagi tahun depan."<<endl;
    }
    return 0;
}
