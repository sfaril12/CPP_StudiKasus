#include <iostream>

using namespace std;

int main(){
    int a,b,big;

    cout<< "=== menentukan angka terbesar ==="<<endl;
    cout<<endl;

    cout<< "masukkan angka pertama: ";cin>> a;
    cout<< "masukkan angka kedua: ";cin>> b;
    big= a;
    if(big < b){
        big= b;
        cout<< "\n bilangan terbesar adalah angka kedua: "<<big;
    }
    else{
        cout<< "\n bilangan terbesar adalah angka pertama: "<<big;
    }
    return 0;
}
