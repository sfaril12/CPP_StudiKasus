#include <iostream>
#include <conio.h>

using namespace std;
int jml_data;//variabel public
void masukan_larik(int arr[]){
    int hasil;
    for(int i=0;i<jml_data;i++){
        cout << "masukkan larik data ke-["<<i<<"] = ";cin>>arr[i];
    }
}
void tampil_larik_des(int arr[]){
    for(int i=jml_data-1;i>=0;i--){
        cout << "data array ke-["<<i<<"] = "<<arr[i]<<endl;
    }
    }
void hitung_larik(int arr[]){
    int total=0;
    for(int i=jml_data-1;i>=0;i--){
        if (i==0)
            cout <<arr[i]<< " = ";
        else
            cout <<arr[i]<< " + ";
        total=total+arr[i];
    }
    cout<<total<<endl;
    }
int main(){
    int p; int larik[100];//variabel lokal
    do{
            system("cls");
    cout << "1. Masuk Array"<<endl;
    cout << "2. Display Array"<<endl;
    cout << "3. Hitung Array"<<endl;
    cout << "masukkan pilihan anda:";cin>>p;
        switch (p){
        case 1:cout<< "masukkan jumlah data ";cin>>jml_data;
            masukan_larik(larik);
            break;
        case 2:tampil_larik_des(larik);
        break;
        case 3: hitung_larik(larik);
        break;
        }
    getch();
    }while (p!=4);


    return 0;
}
