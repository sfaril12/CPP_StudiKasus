#include <iostream> 
#include <stdlib.h>
#include <conio.h>
using namespace std; int jml_data;
void calculation_circle_wide() {double r; cout<< "input r : ";cin >>r;
    cout << "circle wide: "<<r*r*3.14;}
void calculation_value_if() {int value;cout << "input value : ";cin>> value;
    if (value % 2 == 1) cout << "value "<<value << " is an odd number";
    else cout << "value "<<value << " is an even number ";}
void repitision_for_decrement(int x){for (int i=x;i>=1;i--)
        cout << "data to "<<i<<endl;}
void input_array(int arr[]){ int goal; for(int i=0;i<jml_data;i++){
        cout << "input array for-["<<i<<"] = ";cin>>arr[i];}}
void show_array_kuy(int arr[]){for(int i=jml_data-1;i>=0;i--)        {cout << "data array ke-["<<i<<"] = "<<arr[i]<<endl;}}
void calculating_array(int arr[]){ int total=0; for(int i=jml_data-1;i>=0;i--){
        if (i==0){cout <<arr[i]<< " = ";}
        else{cout <<arr[i]<< " + ";}total=total+arr[i];}cout<<total<<endl;}
int main (){int choose, last; do {system("cls"); cout << "1. calculation circle wide"<<endl;
        cout << "2. calculation value"<<endl; cout << "3. repetision for"<<endl;
        cout << "input your choose: ";cin >>choose;
    switch(choose){case 1 : calculation_circle_wide();break;case 2 : calculation_value_if();break;
            case 3 : cout << "input last number: ";cin>> last;repitision_for_decrement(last);break;
            default : cout << "the input value is wrong"<<endl;}getch ();}while (choose != 0);
return 0;}

