#include <iostream>

using namespace std;

int main (){
    int a=10;
    int b=5;

    cout<< "nilai awal:"<<endl;
    cout<< "a = "<<a<<endl;
    cout<< "b = "<<b<<endl;

    a+=5;
    b-=2;

    cout<< "\nsetelah menggunakan operator penugasan: "<<endl;
    cout<<"ketika ditambah 5, a= "<<a<<endl;
    cout<<"ketika dikurang 2, b= "<<b<<endl;

    int c= a * b;

    cout<< "nilai dari a kali b adalah: "<<c<<endl;
    c/=3;
    cout<< "hasil kali a dan b ketika dibagi 3: "<<c<<endl;

    return 0;
}
