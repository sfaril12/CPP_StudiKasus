#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){
    double tugas, uts, uas, akhir;
    int pilih;
    string nama, nim;
    do{
    system("cls");
    cout<< "masukan nama: ";cin>>nama;
    cout<< "masukan NIM: ";cin>>nim;
    cout<<endl;
    cout<< "===== Nilai Mahasiswa =====\n";
    cout<< "masukan  nilai tugas: ";cin>>tugas;
    cout<< "masukan  nilai UTS: ";cin>>uts;
    cout<< "masukan  nilai UAS: ";cin>>uas;
    cout<<endl;
    akhir = (tugas + uts + uas)/3;

    cout<< "===== Nilai Akhir Mahasiswa =====\n";

    cout<< "nama: "<<nama<<endl ;
    cout<< "NIM: "<<nim<<endl ;
    cout<< "nilai akhir mahasiswa adalah: "<<akhir<<endl ;

if(akhir > 85 && akhir <=100){
    cout<< "nilai akreditasi untukmu: A"<<endl ;
}
 else if(akhir > 75 && akhir <=85){
    cout<< "nilai akreditasi untukmu: B"<<endl ;
}
else if(akhir > 65 && akhir <=75){
    cout<< "nilai akreditasi untukmu: c"<<endl ;
}
else if(akhir > 50 && akhir <=65){
    cout<< "nilai akreditasi untukmu: D"<<endl ;
}
else {
    cout<< "nilai Anda error, Anda harus mengulang "<<endl;}}}
