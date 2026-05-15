#include <iostream>

using namespace std;
int main (){
cout << "1. kendaraaan roda 2 (motor) -> biaya parkir rp. 1000/jam"<<endl;
cout << "2. kendaraaan roda 4 (motor) -> biaya parkir rp. 1500/jam"<<endl;
cout << "1. kendaraaan roda 6 (truk)  -> biaya parkir rp. 2000/jam"<<endl;
int x, y, z;
cout << "masukkan lama jumlah parkir(jam) ";cin >>x;
cout << "masukkan kode kendaraan [1/2/3] ";cin >> y;

if (y==1){
    z = x * 1000;
    cout << "kendaraan roda 2 = "<<x << " x rp.1000 = rp "<<z<<endl;
}
else if (y==2){
    z = x * 1500;
    cout << "kendaraan roda 4 = "<<x << " x rp. 1500 = rp "<<z<<endl;
}
if (y==3){
    z = x * 2000;
    cout << "kendaraan roda 6 = "<<x << " x rp.2000 = rp "<<z<<endl;
}


return 0;
}
