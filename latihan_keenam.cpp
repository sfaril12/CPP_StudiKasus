#include <iostream>
using namespace std;

int main(){
    int jml = 0, hsl,total,totalR;
    cout<<" 1. celcius ke fahrenheit."<<endl;
    cout<<" 1. celcius ke reamur."<<endl;
    cout<<"masukkan pilhan ";cin>>hsl;
    if (hsl == 1){
            cout<<"Celcius \t Fahrenheit"<<endl;
    for (int i = 0; i <= 100; i= i+5){
            total = (1.8 * i) + 32;
         cout<<i<<"C"<<"\t (1.8 x "<<i<<" ) + 32 = "<<total<<" F"<<endl;
    }
    }
     if (hsl == 2){
         cout<<"Celcius \t Reamur"<<endl;
    for (int i = 0; i <= 100; i= i+5){
            totalR = (0.8 * i);
         cout<<i<<"C"<<"\t (0.8 x "<<i<<" ) = "<<totalR<<" R"<<endl;
    }
    }
    cout<<jml<<endl;
    return 0;
}
