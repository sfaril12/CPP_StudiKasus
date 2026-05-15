# include <iostream>
# include <conio.h>
using namespace std;

void masuk_array(int x[]){
    for (int i=0;i<=9;i++){
        cout << "masukkan data ke "<<i<<" = ";
        cin>>x[i];
    }

}
int main (){
    int choose; int x[10];
    do{
        system("cls");
        cout << "1. masukkan nilai array"<<endl;
        cout << "2. tampil array "<<endl;
        cout << "input your choose : ";cin >> choose;
        switch (choose){
        case 1: masuk_array(x);break;
        }getch();
        }while (choose != 3);


}
