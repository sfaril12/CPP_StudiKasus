#include <iostream>

using namespace std;

int main (){
    int a = 10, b = 5, c =20, d =15, e =25, f =30;
    cout<< "operator assignment gabungan bahasa c++"<<endl;
    cout<< "======================================="<<endl;

    cout<< "variabel a, b,c,d,e,f dinisialisasi: "<<endl;
    cout<< "a= "<<a<< ",b= "<<b<< ",c= "<<c<< ",d= "<<d<< ",e= "<<e<< ",f= "<<f<<endl;
    a +=5;
    b -=3;
    c *=2;
    d /=3;
    e %=7;
    f <<=1;

    cout<< "hasil operasi: "<<endl;
    cout<< "hasil operasi a +=5: "<<a<<endl;
    cout<< "hasil operasi b -=3: "<<b<<endl;
    cout<< "hasil operasi c *=2: "<<c<<endl;
    cout<< "hasil operasi d /=3: "<<d<<endl;
    cout<< "hasil operasi e %=7: "<<e<<endl;
    cout<< "hasil operasi f <<=1: "<<f<<endl;
    return 0;
}
