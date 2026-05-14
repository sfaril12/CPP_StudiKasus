#include <iostream>

using namespace std;
void function_first(int x,int y){
    cout<< x << " x "<<y<< " = "<<x*y<<endl;
}
int main(){
    int choose;
    cout << "1. perkalian dengan menggunakan void" <<endl;
    cout << "2. pembagian dengan menggunakan void" <<endl;
    cout << "masukkan pilihan anda: ";cin>> choose;
    switch(choose)
    {
    case 1:{
        int a,b;
        cout << "masukkan nilai pertama : ";cin>> a;
        cout << "masukkan nilai kedua : ";cin>> b;
        function_first(a,b);break;}
        }
        return 0;
}
