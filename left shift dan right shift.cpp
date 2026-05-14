#include <iostream>

using namespace std;

int main(){
    int x;
    cout<< "masukkan nilai x: ";
    cin>> x;
    cout<< "nilai awal: "<<dec<<x<<endl;
    x=x<<1;
    cout<< "hasil geser satu bit ke kanan: "<<dec<<x<<endl;
    return 0;

}
