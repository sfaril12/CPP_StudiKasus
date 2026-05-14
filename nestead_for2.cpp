#include <iostream>

using namespace std;

int main (){
    int a;
    cout<< "masukan jumlah angka : ";cin >>a;
    int awal = a - (a-1);
    for (int b = awal ; b <= a; b++){
            for(int c = a; c>=1; c--){
                cout<<b;
            }
            cout<<endl;
    }

}
