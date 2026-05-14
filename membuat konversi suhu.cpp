#include <iostream>

using namespace std;

int main(){
    float c, k, f, r;

    cout << "masukkan nilai celcius: "; cin>> c;
    cout<<endl;
    f= (1.8 * c)+32;
    cout << "konversikan nilai celcius ke fahrenheit adalah "<<endl;
    cout<< " (9/5 kali "<< c<< " ) + 32 = "<<f<<endl;
    cout<<endl;
    k= c + 273;
    cout << "konversikan nilai celcius ke kelvin adalah "<<endl;
    cout<< " 273 + "<< c<< " = "<<k<<endl;
    r = 0.8 * c ;
    cout << "konversikan nilai celcius ke reamur adalah "<<endl;
    cout<< " (4/5 di kali "<< c<< " )= "<<r<<endl;
    return 0;

}
