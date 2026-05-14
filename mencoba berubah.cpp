#include <iostream>

using namespace std;
int main (){
    int a;
    bool lek=false;
    while (lek==false){
    cout << "masukkan pilihan : ";
    cin>>a;
    switch (a)
    {
    case 1 : for (int b=1; b<=5; b++){cout<< "perulangan for dalam" << b<<endl;lek=true;}break;
    case 2 : {int c=1; while (c<=5){ cout << " aku suka kamu" <<endl; c++;}lek=true;}break;
    default : {int d; for (d=1;d<=10;d++){cout << "kamu salah input"<<endl;}}break;continue;
    }
    }
return 0;
}
