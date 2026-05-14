#include <iostream>

using namespace std;

int main(){
    int number;
    cout << "masukkan sebuah angka: ";
    cin>> number;

    if(number>0){
        cout << number << " adalah angka positif."<< endl;
    }
    else if (number<0){
        cout<< number<< " adalah angka negatif."<< endl;
    }
    else {
        cout << number<< " angka tersebut adalah nol."<<endl;
    }
    return 0;
}
