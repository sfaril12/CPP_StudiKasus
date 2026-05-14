#include <iostream>
using namespace std;

int main() {
    int n, a, b = 0, c = 1;
    cout << "masukan jumlah bilangan fibonacci yang ingin ditampilkan : ";
    cin>> n;
    int i;
    for (i=0; i<n; i++){
        if(i<=1){
            a = i;
        }
        else{
            a= b + c;
            b = c;
            c = a;
        }
        cout << a <<", ";
    }

    return 0;
}

