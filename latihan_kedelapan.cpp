#include <iostream>

using namespace std;

int main (){
    int i=1, data, jumlah=0;
    cout << "masukkan data: "; cin >> data;
    while (i<=10){
    if (i<5)
        break;
    jumlah+=data;
    i++;
    }
    cout << "total jumlah data yang dimasukkan: "<<jumlah;
    return 0;
}
