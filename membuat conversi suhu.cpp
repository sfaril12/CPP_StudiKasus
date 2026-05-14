#include <iostream>

using namespace std;

int main (){
    int kelvin, celcius, fahrenheit, reamur;
    cout<< "=== mengkonversikan suhu kelvin ==="<<endl;
    cout<<endl;
    cout<< "masukan nilai kelvin: ";cin>> kelvin;

    celcius=(kelvin-273);
    cout<< "konversi kelvin ke celcius adalah: "<<celcius<<endl;
    fahrenheit=(kelvin-273)*1.8 +32;
    cout<< "konversi kelvin ke fahrenheit: "<<fahrenheit<<endl;
    reamur= celcius*0.8;
    cout<< "konversi kelvin ke reamur: "<<reamur<<endl;

    cout<<endl;
    cout<< "=== di buat oleh Safaril Adam ===";
    cout<< endl;

    return 0;

}
