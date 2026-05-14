#include <iostream>
using namespace std;
int main(){
    std::string name, asal, konfirmasi;
    int age;


    cout<< "siapa namamu?"<< endl<< "nama: "; cin>> name;
    cout<< "umurmu berapa?"<< endl << "umur: "; cin>> age;
    cout<< "asal mana?"<< endl<< "asal: ";cin>> asal;

    cout<< "selamat datang "<<name<< endl <<"izin mengkonfirmasi ulang bahwa anda memverifikasi umur anda adalah "<< age << endl << "dan asal anda adalah "<< asal << "."<< endl;
    cout<< endl;
    cout<< "apakah informasi di atas sudah benar? (ya/tidak)"<<endl;

    cout<< "jawaban anda?"<<endl;
    cout << "jawab: ";cin>> konfirmasi;
}
