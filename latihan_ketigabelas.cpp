#include <iostream>
#include <conio.h>
using namespace std;

void function_void(double x, double y){
    cout << x << " bagi "<< y << " adalah "<<x/y<<endl;
}
double function_non_void(double a, int b){
    return a/b;
}

int main (){
    int choose;
    do{
        system("cls");
    cout << "1. fungsi dengan void"<<endl;
    cout << "2. fungsi dengan Non void"<<endl;
    cout << "3. keluar"<<endl;
    cout << "masukkan pilihan anda : ";cin>> choose;
    switch (choose){
        case 1: function_void(22,7);break;
        case 2:{int n,m;
            cout << "masukkan nilai n: ";cin>> n;
            cout << "masukkan nilai m: ";cin>> m;
         double hasil=function_non_void(22,7)* function_non_void(n,m);
        cout<< "hasil bagi adalah "<<hasil;break;}
        case 3: cout << "you close the program"<<endl;break;
        default : cout << "wrong input value, try again";
    }getch ();
    }while(choose != 3);
    return 0;
}
