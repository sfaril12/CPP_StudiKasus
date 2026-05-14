#include <iostream>
using namespace std;

int main (){
    bool a = true;
    bool b = false;

    cout << "hasil dari kebenaran a dan a: "<<(a&&a)<<endl;
    cout << "hasil dari kebenaran a dan b: "<<(a&&b)<<endl;
    cout << "hasil dari kebenaran a atau b: "<<(a||b)<< endl;
    cout << "hasil dari kenenaran b atau b: "<<(b||b)<< endl;
    cout << "hasil dari tidak benarnya a: "<<(!a)<< endl;
    cout << "hasil dari tidak benarnya b: "<<(!b)<< endl;

    int x=5, y=10, z=15;

    cout <<"\nmenggunakan operator logika dalam: "<<endl;
    cout <<"(x<y)&&(y<z): "<<((x<y)&&(y<z))<<endl;
    cout <<"(x>y)||(y<z): "<<((x>y)||(y<z))<<endl;
    cout <<"(x==y)||(y==z):"<<((x==y)||(y==z))<< endl;
    return 0;
}
