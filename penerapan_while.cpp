#include <iostream>
#include <conio.h>
using namespace std;

int main () //program utama
{
    int x;
    bool trek=false;

    while (trek== false){
        cout<< "masukkan inputan nilai dari [1-3]: "; cin>> x;

            if(x == 1){
                cout<< "nilai yang anda input adalah 1"<<endl;
                trek = true;
            }
            else if(x == 2){
                cout<< "nilai yang anda input adalah 2"<<endl;
                trek = true;
            }
            else if(x == 3){
                cout<< "nilai yang anda input adalah 3"<< endl;
                trek = true;
            }
            else {
                cout<< "inputan anda di luar batas.mohon ulangi lagi"<<endl;
                continue;
            }
    }
}
