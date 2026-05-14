#include <iostream>
using namespace std;

int main(){
    int A=8, B=5, temp;

    // Menampilkan nilai awal
    cout <<"Nilai Awal A:"<< A << endl;
    cout <<"Nilai Awal b:"<< B << endl;

    // Pertukaran nilai
    temp = A ;
    A = B ;
    B = temp ;

    // Menampilkan nilai setelah pertukaran
    cout <<"Nilai A Setelah Pertukaran:"<< A << endl;
    cout <<"Nilai B Setelah Pertukaran:"<< B << endl;

    return 0;

}