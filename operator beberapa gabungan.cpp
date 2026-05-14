#include <iostream>

using namespace std;

int main(){
    int a=10, b=20;

    a+=b;
    b-=a;
    a*=b;
    b/=-5;

    cout<< "nilai akhir a: "<<a<<endl;
    cout<< "nilai akhir b: "<<b<<endl;
    return 0;
}
