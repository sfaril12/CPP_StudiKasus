#include <iostream>

using namespace std;

int main (){
    int i, data, jumlah;
    cout << "kode tujuan    -->1. jakarta    harga rp. 1.500 dalam ribuan"<<endl;
    cout <<                   "2. surabaya harga rp. 2.500 dalam ribuan"<<endl;
    cout << "kode bayar     -->1. reguler --> harga normal"<<endl;
    cout <<                   "2. promo   --> ptongan 10%"<<endl;
    cout <<                   "3. Hari besar--> tuslah naik 5%  "<<endl;
    cout << "masukkan kode tujuan : ";cin>>i;
    if (i==1){
    int a=1;
    while (a<=10){
        cout << a <<"   "<<(a*1500)<<"   "<<((a*1500)-(a*1500*0.10))<<"   "<<((a*1500)+(a*1500*0.5))<<endl;
        a++;
    }
    }
}

