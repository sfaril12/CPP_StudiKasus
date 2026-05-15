#include <iostream>
#include <cmath>


 using namespace std;

 int main () //program pertama di mulai
 {
    cout << "hello world" << endl; //hal yang inginkan ditampilkan di layar

    double x=13.4; // x dengan tipe data double berisi nilai 13.4
    cout << "variabel x adalah "<< x<< endl; // tampilkna data ke layar

    double y;

    cout << "masukkan variabel y : "; // tmapilkan dilayar untuk memasukkan nilai y
    cin>>y; // inputan agar bisa memasukkan nilai y

    cout << "nilai y adalah "<< y << endl; //menampilkan data yang diinput ke layar

    double uts, uas, tugas, na;

    cout << "masukkan nilai uts :"; cin>> uts;
    cout << "masukkan nilai uts :"; cin>> uas;
    cout << "masukkan nilai uts :"; cin>> tugas;

    na= (uts + uas + tugas)/3;
    if (na <=100 && na >85)
        cout << " nilai akhir "<< na<< " adalah A." <<endl;
    else if (na <= 85 && na >70)
        cout << " nilai akhir "<< na<< " adalah B." <<endl;
    else if (na <= 70 && na >65)
        cout << " nilai akhir "<< na<< " adalah C." <<endl;
    else if (na <= 65 && na >50)
        cout << " nilai akhir "<< na<< " adalah D." <<endl;
    else
        cout << " nilai akhir "<< na << " adalah E." << endl;

    return 0;
 }
