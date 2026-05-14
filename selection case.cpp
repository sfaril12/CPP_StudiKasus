#include <iostream>
using namespace std;
int main() {
  int bil;
  cout<<"Masukkan sebuah bilangan (1..7) : ";
  cin>>bil;
  switch (bil) {
 case 1 : cout<<"Hari ke-"<<bil<<" : adalah MINGGU";
              break;
     case 2 : cout<<"Hari ke-"<<bil<<" : adalah SENIN";
              break;
     case 3 : cout<<"Hari ke-"<<bil<<" : adalah SELASA";
              break;
    case 4 : cout<<"Hari ke-"<<bil<<" : adalah RABU";
              break;
     case 5 : cout<<"Hari ke-"<<bil<<" : adalah KAMIS";
              break;
     case 6 : cout<<"Hari ke-"<<bil<<" : adalah JUMAT";
              break;
     case 7 : cout<<"Hari ke-"<<bil<<" : adalah SABTU";
              break;
     default : cout<<"Tidak terdapat nama hari ke-"<<bil;
  }
  return 0;
}

