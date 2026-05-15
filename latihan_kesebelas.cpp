#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;
void hitung_luas_lingkaran() {
    double jari;
    cout<< "masukkan jari-jari : ";cin >>jari;
    cout << "luas lingkaran "<<jari*jari*3.14;
}
void hitung_nilai_if() {
    int nilai;
    cout << "masukkan nilai ";cin>> nilai;
    if (nilai % 2 == 1) cout << "nilai "<<nilai << " adalah bilangan ganjil";
    else                cout << "nilai "<<nilai << " adalah bilangan genap ";
}
void perulangan_for_decrement(int x){ // x adalah parameter
    for (int i=x;i>=1;i--)
        cout << "data ke "<<i<<endl;
}



int main (){
    int pilih, akhir;
        do {
            system("cls");
        cout << "1. hitung luas lingkaran"<<endl;
        cout << "2. hitung nilai"<<endl;
        cout << "3. perulangan for"<<endl;
        cout << "masukkan pilihan anda: ";cin >>pilih;

        switch(pilih){
            case 1 : hitung_luas_lingkaran();break;
            case 2 : hitung_nilai_if();break;
            case 3 : cout << "masukkan nilai akhir: ";cin>> akhir;
                    perulangan_for_decrement(akhir);break;
            default : cout << "salah masukan nilai"<<endl;
        }
        getch ();
        }while (pilih != 0);
}
