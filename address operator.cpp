#include <iostream>

using namespace std;

int main(){
    int num=42;
    int *ptr=&num;
    cout << "nilai num: "<<num<<endl;
    cout << "alamat num: "<<&num<<endl;
    cout<< "nilai ptr: "<<ptr<<endl;
    cout<< "nilai yang ditunjukan ptr: "<<*ptr<<endl;
    return 0;
}
