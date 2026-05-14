#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159

const int MAX_USERS=100;

double calculatecircleArea(const double radius){
return PI*radius*radius;
}

int main (){
    cout<< "maksimal pengguna: "<<MAX_USERS<<endl;
    double radius;
    cout<< "masukkan jari_jari lingkaran: ";cin>>radius;
    double area=calculatecircleArea(radius);
    cout<< "luas lingkaran dengan jari-jari "<<radius<< " adalah: "<<area<< endl;
    return 0;
}
