#include <iostream>
#include <conio.h>
int jml_data;
using namespace std;
void first(int arr[]){          //void 1
    int hasil;
    for(int i=0;i<jml_data;i++){
        cout << "masukkan larik data ke-["<<i<<"] = ";cin>>arr[i];
    }
}
void second(int arr[]){     //void 2
    for(int i=0;i<jml_data;i++){
        if (i%2 == 0)
        cout << "data array ke-["<<i<<"] = "<<arr[i]<< "-> genap"<<endl;
        else {
            cout << "data array ke-["<<i<<"] = "<<arr[i]<< "-> ganjil"<<endl;
        }
    }
}
void three(int arr[]){      //void 3
    int total=0;
    for(int i=jml_data-1;i>=0;i--){
        if(i%2==0){
        if (i==0){
            cout << "genap" <<arr[i]<< " = ";}
        else{
            cout <<arr[i]<< " + ";
            total=total+arr[i];
    }
    cout<<total<<endl;}
    else{
            if (i==0){
            cout << "ganjil" <<arr[i]<< " = ";}
        else{
            cout <<arr[i]<< " + ";
            total=total+arr[i];
    }
    cout<<total<<endl;}

    }}


int main (){
    int p; int data[100];
   do{
    system("cls");      //untuk membersihkan layar (system("cls")) setelah proses selesai
    cout<< "1. masuk array" <<endl;         //pemilihan data
    cout<< "2. display array" <<endl;
    cout<< "3. hitung array" <<endl;
    cout<< "masukkan pilihan :";cin>>p ;
    switch(p){
    case 1 : cout<< "masukkan jumlah data ";cin>>jml_data;  //untuk di arahkan ke void 1
    first(data);break;  
    case 2 : second(data);break;    //untuk di arahkan ke void 2
    case 3 : three(data);break; //untuk di arahkan ke void 3
    }
    getch();        //teman dari system("cls") untuk membatasi layar yang ingin dibersihkan apabila prosesnyaa telah selesai
    }while (p!=4);
    return 0;
}


