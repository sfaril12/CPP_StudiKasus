#include <iostream>

using namespace std;

int main(){
    float pi=3.14;
    float r, luas, keliling;

    cout << "masukkan nilai jari-jari: ";
    cin >> r;

    luas = pi * r * r;

    cout << "luas lingkaran adalah: "<< luas << endl;

    keliling = 2 * pi * r;

    cout << "keliling lingkaran adalah: "<< keliling << endl;
    return 0;
}
