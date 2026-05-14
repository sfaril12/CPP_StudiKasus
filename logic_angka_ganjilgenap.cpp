#include <iostream>

using namespace std;

int main(){
    int input,goal=0;
    cout << "masukkan banyak penjumlahanan yang diinginkan: ";cin>>input;
    for (int a=input; a>0; a--){
        if(a ==1){
            cout << a << " = ";
        }
        else{
            cout << a << " + ";
        }
    goal=goal+a;
    }
    cout <<goal<<endl;
    cout <<endl;
    //pemisah angka ganjil dan genap
    for (int b=input; b>0; b--){
        if(b%2 == 0){
            cout << b << " ----> adalah angka genap "<<endl;
        }
        else{
            cout << b << " ----> adalah angka ganjil"<<endl;
        }
    }
    cout<<endl;
    cout << "penjumlahan angka genap adalah ";
    for (int c=input; c>1; c--){
    if (c%2 == 0){
            cout<< c << " + ";
        }
    else if (c == 2){
        cout << c << " = ";
    }
    }
    return 0;
}
