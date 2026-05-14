#include <iostream>

using namespace std;

int main(){

    int angka;

    cout<< "masukkan angka: ";cin>>angka;

    if(angka %2==0){
        cout<< "angka "<<angka<< " adalah genap"<<endl;
    }
    else{
        cout<< "angka "<<angka<< " adalah ganjil"<<endl;
    }
    if(angka> 0){
        cout<< "angka "<<angka<< " adalah positif"<<endl;
    }
    else{
        cout<< "angka "<<angka<< " adalah negatif"<<endl;
    }
    if(angka=0){
        cout<< "angka "<<angka<< " adalah nol"<<endl;
    }
}
