#include <iostream>
using namespace std;

int main (){
    int a,b,c;
    cout<< "masukan bilangan awal: ";cin >> a;
    cout<< "masukan bilangan awal: ";cin >> b;
    int d = 0;
    for(c=a; c<=b; c++){
        if(c%2 == 0){
            d=d+c;
        }
    }
    cout << "total bilangan genap antara "<< a <<" dan " << b <<" adalah " <<d<<endl;
    return 0;
}
