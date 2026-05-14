#include <iostream>

using namespace std;
int main(){
    string nama;
    int umur;
    float tinggi;

    cout << "masukkan nama: ";
    cin >> nama;

    cout << "masukkan umur: ";
    cin >> umur;

    cout <<"masukkan tinggi(dalam cm):";
    cin >> tinggi;

    cout<< "informasi yang anda masukkan:"<<endl;
    cout<< "nama: " << nama<< endl;
    cout<< "umur: " << umur << endl;
    cout<< "tinggi" << tinggi << endl;

    return 0;
}

