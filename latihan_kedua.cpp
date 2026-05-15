#include <iostream>

using namespace std;

int main (){
    int x;
    double a, b;
     cout << "hitung jumlah "<<endl;
     cout << "hitung kurang "<<endl;
     cout << "hitung kali "<<endl;
     cout << "hitung bagi "<<endl;
     cout << "masukkan pilihan";cin >> x;
     cout << "variabel a ";cin >> a;
     cout << "variabel b ";cin >> b;

     if (x==1){
        cout << a << " tambah "<< b << " : "<<a+b <<endl;
    }else if (x==2){
        cout << a << " kurang "<< b << " : "<<a-b <<endl;
    }else if (x==3){
        cout << a << " kali "<< b << " : "<< a*b <<endl;
    }else if (x==4){
        cout << a << " bagi "<< b << " : "<<  a/b <<endl;
    }

}
