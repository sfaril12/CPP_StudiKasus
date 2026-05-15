#include <iostream>

using namespace std;

void first(){
    cout << "\tperulangan for"<<endl;

    for (int i=0; i<=10;i++){
        cout << "I love you that"<<i<<endl;
    }
}
void second(){
    cout << "\tperulangan while"<<endl;

    int i=1;
    while(i<=5){
        cout<< " I love you "<<i<<endl;
        i++;
    }
}
void third (){
    cout << "\tperulangan do while"<<endl;
}

int main (){
    int pilih;
    cout << "1. perulangan for"<<endl;
    cout << "2. perulangan while"<<endl;
    cout << "3. perulangan do while"<<endl;
    cout << "Masukkan pilihan : ";cin >> pilih;

    switch (pilih){
    case 1 : first();break;
    case 2 : second();break;
    case 3 : third();break;
    }

}
