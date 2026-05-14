#include <iostream>

using namespace std;

int main (){
     int a, b, c, terbesar;
     cout<< "masukkan angka pertama: ";cin>> a;
     cout<< "masukkan angka kedua: ";cin>> b;
     cout<< "masukkan angka ketiga: ";cin>> c;

    terbesar = a;

    if(b>a && b>c){
        terbesar = b;
        cout<< "angka terbesar adalah angka: "<<b<<endl;
    }
    else if(c>b && c>a){
        terbesar = c;
        cout<< "angka terbesar adalah angka: "<<c<<endl;
    }
    else{
        cout<< "angka terbesar adalah angka: "<<a<<endl;
    }

    return 0;
}
