#include <iostream>

using namespace std;

int main ()
{
    for (int a=1; a++, a<=10;){
        cout << "data ke increment"<<a << endl;
    }for (int a=10; a>=1; a--){
        cout << "data ke decrement"<<a << endl;
    }

    int awal, akhir, inc;
    cout << "masukkan nilai awal ";cin >>awal;
    cout << "masukkan nilai akhir ";cin >>akhir;
    cout << "masukkan nilai kelipatan ";cin >>inc;
    for (int a = awal; a<=akhir; a=a+inc){
        if (a%2==1){
            cout << "data ke "<< a << " adalah ganjil "<< endl;
        }
        else {
            cout << "data ke "<< a << " adalah genap" <<endl;
        }
    }
    return 0;
}
