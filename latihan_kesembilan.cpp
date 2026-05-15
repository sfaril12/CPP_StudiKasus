#include <iostream>

using namespace std;

void kondisional_if(){
    int waktu, masuk, hasil;
    cout << "masukkan lama sewa mobil";cin >> waktu;
    cout << "1. sewa mobil avanza rp 200/hari(dalam ribuan)"<<endl;
    cout << "2. sewa mobil xenia rp 300/hari(dalam ribuan)"<<endl;
    cout << "1. sewa mobil apv rp 150/hari(dalam ribuan)"<<endl;

    cout << "masukkan kode sewa [1, 2, 3]";cin>>masuk;

    if (masuk == 1){
        cout << "hitung "<<waktu<< " x "<< "200" <<" = rp. "<< waktu*200<<endl;
    }
    else if (masuk == 2){
        cout << "hitung "<<waktu<< " x "<< "300" <<" = rp. "<< waktu*300<<endl;
    }
     else if (masuk == 3){
        cout << "hitung "<<waktu<< " x "<< "150" <<" = rp. "<< waktu*150<<endl;
    }

}
void display(){
    int masuk2;
    cout << "masukkan jumlah data: ";cin>>masuk2;

    for (int i = masuk2; i>=1; i--){
        cout << "("<<i<< " x"<<i<<")+";
    }
        cout<< "=204"<<endl;
        cout << "rata-rata = 204/8= 25.5"<<endl;

}

int main (){
    int pilih;
    cout << "menu" <<endl;
    cout << "1. kondisional IF"<<endl;
    cout << "2. display berulang gunakan for"<<endl;
    cout << "3. keluar"<<endl;
    cout << "masukkan pilihan anda : ";cin>> pilih;

    switch (pilih){
    case 1: kondisional_if();break;
    case 2: display();break;
    }
}
