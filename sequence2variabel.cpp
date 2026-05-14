#include <iostream>

using namespace std;

int main (){
    int a = 5;
    int b = 10;
    int hasil;

    cout << "===urutan instruksi pertama==="<<endl;

    hasil = (a+b)*2;

    cout << "hasil dari(a+b)*2: "<<hasil<<endl;

    a=7;
    b=3;

    hasil=(a+b)*2;

    cout << "hasil dari(a+b)*2 setelah perubahan: "<<hasil<<endl;

    cout<< "\n===urutan instruksi kedua==="<<endl;

    hasil =(a*2)+ b;

    cout<< "hasil dari(a*2)+b : "<<hasil << endl;

    a= 5;
    b=10;

    hasil = (a*2) + b;

    cout << "hasil dari (a*2) + b setelah perubahan:"<< hasil<< endl;

    return 0;
}
